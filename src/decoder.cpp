#include "decoder.h"

#include <climits>
#include <string>

#include "devices.h"

#ifdef DEBUG_DECODER
#  include <stdio.h>
#  define DEBUG_PRINT printf
#else
#  define DEBUG_PRINT
#endif

/*
 * @breif revert the string data 2 by 2 to get the correct endianness
 */
void reverse_hex_data(const char* in, char* out, int l) {
  int i = l, j = 0;
  while (i) {
    out[j] = in[i - 2];
    out[j + 1] = in[i - 1];
    i -= 2;
    j += 2;
  }
  out[l] = '\0';
}

/*
 * @breif Extracts the data value from the data string
 */
long value_from_hex_string(const char* data_str, int offset, int data_length, bool reverse, bool canBeNegative = true) {
  DEBUG_PRINT("offset: %d, len %d, rev %u, neg, %u\n", offset, data_length, reverse, canBeNegative);
  std::string data(&data_str[offset], data_length);

  if (reverse) {
    reverse_hex_data(&data_str[offset], &data[0], data_length);
  }

  long value = strtol(data.c_str(), NULL, 16);
  DEBUG_PRINT("extracted value from %s = 0x%08x\n", data.c_str(), value);

  if (canBeNegative) {
    if (data_length <= 2 && value > SCHAR_MAX) {
      value -= (UCHAR_MAX + 1);
    } else if (data_length <= 4 && value > INT_MAX) {
      value -= (UINT_MAX + 1);
    }
  }

  return value;
}

/*
 * @brief Removes the underscores at the beginning of key strings when duplicate properties exist in a device.
 */

std::string sanitizeJsonKey(const char* key_in) {
  unsigned int key_index = 0;
  while (key_in[key_index] == '_') {
    key_index++;
  }
  return std::string(key_in + key_index);
}

/*
 * @breif Compares the input json values to the known devices and decodes the data if a match is found.
 */
bool decodeBLEJson(JsonObject& jsondata) {
  DynamicJsonDocument doc(4096);
  const char* svc_data = jsondata["servicedata"].as<const char*>();
  const char* mfg_data = jsondata["manufacturerdata"].as<const char*>();
  const char* dev_name = jsondata["name"].as<const char*>();
  const char* svc_uuid = jsondata["servicedatauuid"].as<const char*>();
  bool success = false;

  /* loop through the devices and attempt to match the input data to a device parameter set */
  for (auto i = 0; i < sizeof(_devices) / sizeof(_devices[0]); ++i) {
    DeserializationError error = deserializeJson(doc, _devices[i]);
    if (error) {
      DEBUG_PRINT("deserializeJson() failed: %s\n", error.c_str());
      return success;
    }

    DEBUG_PRINT("JsonDocument size: %u\n", doc.memoryUsage());

    JsonArray condition = doc["condition"];
    bool match = false;
    for (unsigned int i = 0; i < condition.size();) {
      const char* data_str;
      if (strstr(condition[i].as<const char*>(), "servicedata") != nullptr && svc_data != nullptr) {
        data_str = svc_data;
      } else if (strstr(condition[i].as<const char*>(), "manufacturerdata") != nullptr && mfg_data != nullptr) {
        data_str = mfg_data;
      } else if (strstr(condition[i].as<const char*>(), "name") != nullptr && dev_name != nullptr) {
        data_str = dev_name;
      } else if (strstr(condition[i].as<const char*>(), "uuid") != nullptr && svc_uuid != nullptr) {
        data_str = svc_uuid;
      } else {
        break;
      }

      if (strstr(condition[i + 1].as<const char*>(), "contain") != nullptr) {
        if (strstr(data_str, condition[i + 2].as<const char*>()) != nullptr) {
          match = true;
        }
        i += 3;
      } else if (strstr(condition[i + 1].as<const char*>(), "index") != nullptr) {
        DEBUG_PRINT("comparing index: %s to %s at index %u\n", &data_str[condition[i + 2].as<unsigned int>()],
                    condition[i + 3].as<const char*>(), condition[i + 2].as<unsigned int>());
        if (strncmp(&data_str[condition[i + 2].as<unsigned int>()], condition[i + 3].as<const char*>(),
                    strlen(condition[i + 3].as<const char*>())) == 0) {
          match = true;
        }
        i += 4;
      }

      if (i < condition.size()) {
        if (!match && *condition[i].as<const char*>() == '|') {
          i++;
          continue;
        } else if (match && *condition[i].as<const char*>() == '&') {
          i++;
          match = false;
          continue;
        }
      }
      break;
    }

    /* found a match, extract the data */
    if (match) {
      jsondata["brand"] = doc["brand"];
      jsondata["model"] = doc["model"];
      jsondata["model_id"] = doc["model_id"];

      JsonObject properties = doc["properties"];

      /* Loop through all the devices properties and extract the values */
      for (JsonPair kv : properties) {
        JsonObject prop = kv.value().as<JsonObject>();
        JsonArray prop_condition = prop["condition"];

        if (prop_condition.isNull() || strstr((const char*)prop_condition[0], "servicedata") != nullptr ||
            strstr((const char*)prop_condition[0], "manufacturerdata") != nullptr) {
          if (prop_condition.isNull() || svc_data[prop_condition[1].as<int>()] == *prop_condition[2].as<const char*>()) {
            JsonArray decoder = prop["decoder"];
            if (strstr((const char*)decoder[0], "value_from_hex_data") != nullptr) {
              const char* src = svc_data;
              if (strstr((const char*)decoder[1], "manufacturerdata")) {
                src = mfg_data;
              }

              /* use a double for all values and cast later if required */
              double temp_val;
              if (decoder.size() == 5) {
                temp_val = (double)value_from_hex_string(src, decoder[2].as<int>(), decoder[3].as<int>(),
                                                         decoder[4].as<bool>());
              } else if (decoder.size() == 6) {
                temp_val = (double)value_from_hex_string(src, decoder[2].as<int>(), decoder[3].as<int>(),
                                                         decoder[4].as<bool>(), decoder[6].as<bool>());
              }

              /* Do any required post processing of the value */
              if (prop.containsKey("post_proc")) {
                JsonArray post_proc = prop["post_proc"];
                for (unsigned int i = 0; i < post_proc.size(); i += 2) {
                  switch (*post_proc[i].as<const char*>()) {
                    case '/':
                      temp_val /= post_proc[i + 1].as<double>();
                      break;
                    case '*':
                      temp_val *= post_proc[i + 1].as<double>();
                      break;
                    case '-':
                      temp_val -= post_proc[i + 1].as<double>();
                      break;
                    case '+':
                      temp_val += post_proc[i + 1].as<double>();
                      break;
                    case '%': {
                      long val = (long)temp_val;
                      temp_val = val % post_proc[i + 1].as<long>();
                      break;
                    }
                    case '<': {
                      long val = (long)temp_val;
                      temp_val = val << post_proc[i + 1].as<unsigned int>();
                      break;
                    }
                    case '>': {
                      long val = (long)temp_val;
                      temp_val = val >> post_proc[i + 1].as<unsigned int>();
                      break;
                    }
                    case '!': {
                      bool val = (bool)temp_val;
                      temp_val = !val;
                      break;
                    }
                  }
                }
              }

              /* If there is any underscores at the beginning of the property name, there is multiple 
               * properties of this type, we need remove the underscores for creating the key.
               */
              std::string _key = sanitizeJsonKey(kv.key().c_str());

              /* Cast to a differnt value type if specified */
              if (prop.containsKey("is_bool")) {
                jsondata[_key] = (bool)temp_val;
              } else {
                jsondata[_key] = temp_val;
              }

              /* If the property is temp in C, make sure to convert and add temp in F */
              if (_key.find("tempc", 0, 5) != std::string::npos) {
                double tc = jsondata[_key];
                _key[4] = 'f';
                jsondata[_key] = tc * 1.8 + 32;
                _key[4] = 'c';
              }

              success = true;
              DEBUG_PRINT("found value = %s : %.2f\n", _key.c_str(), jsondata[_key].as<double>());
            } else if (strstr((const char*)decoder[0], "static_value") != nullptr) {
              jsondata[sanitizeJsonKey(kv.key().c_str())] = decoder[1];
              success = true;
            } else if (strstr((const char*)decoder[0], "string_from_hex_data") != nullptr) {
              const char* src = svc_data;
              if (strstr((const char*)decoder[1], "manufacturerdata")) {
                src = mfg_data;
              }

              std::string value(src + decoder[2].as<int>(), decoder[3].as<int>());
              jsondata[sanitizeJsonKey(kv.key().c_str())] = value;
              success = true;
            }
          }
        }
      }
      return success;
    }
  }
  return success;
}
