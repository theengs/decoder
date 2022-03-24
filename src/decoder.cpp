/*
    TheengsDecoder - Decode things and devices

    Copyright: (c)Florian ROBERT

    This file is part of TheengsDecoder.

    TheengsDecoder is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    TheengsDecoder is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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

#ifdef UNIT_TESTING
#  define TEST_MAX_DOC 16384UL
#  include <assert.h>
static size_t peakDocSize = 0;
#endif

#define SVC_DATA "servicedata"
#define MFG_DATA "manufacturerdata"

typedef double (TheengsDecoder::*decoder_function)(const char* data_str,
                                                   int offset, int data_length,
                                                   bool reverse, bool canBeNegative);

/*
 * @brief Revert the string data 2 by 2 to get the correct endianness
 */
void TheengsDecoder::reverse_hex_data(const char* in, char* out, int l) {
  int i = l, j = 0;
  while (i) {
    out[j] = in[i - 2];
    out[j + 1] = in[i - 1];
    i -= 2;
    j += 2;
  }
  out[l] = '\0';
}

double TheengsDecoder::bf_value_from_hex_string(const char* data_str,
                                                int offset, int data_length,
                                                bool reverse, bool canBeNegative) {
  DEBUG_PRINT("extracting BCF data\n");

  long value = (long)value_from_hex_string(data_str, offset, data_length, reverse, false);
  double d_value = ((((value >> 8) * 100) + (uint8_t)value)) / 100.0;

  if (canBeNegative) {
    if (data_length == 4 && value > SHRT_MAX) {
      d_value = -d_value + (SCHAR_MAX + 1);
    }
  }

  return d_value;
}

/*
 * @brief Extracts the data value from the data string
 */
double TheengsDecoder::value_from_hex_string(const char* data_str,
                                             int offset, int data_length,
                                             bool reverse, bool canBeNegative) {
  DEBUG_PRINT("offset: %d, len %d, rev %u, neg, %u\n",
              offset, data_length, reverse, canBeNegative);
  std::string data(&data_str[offset], data_length);

  if (reverse) {
    reverse_hex_data(&data_str[offset], &data[0], data_length);
  }

  double value = strtol(data.c_str(), NULL, 16);
  DEBUG_PRINT("extracted value from %s = 0x%08lx\n", data.c_str(), (long)value);

  if (canBeNegative) {
    if (data_length <= 2 && value > SCHAR_MAX) {
      value -= (UCHAR_MAX + 1);
    } else if (data_length == 4 && value > SHRT_MAX) {
      value -= (USHRT_MAX + 1);
    }
  }

  return value;
}

/*
 * @brief Removes the underscores at the beginning of key strings
 * when duplicate properties exist in a device.
 */
std::string TheengsDecoder::sanitizeJsonKey(const char* key_in) {
  unsigned int key_index = 0;
  while (key_in[key_index] == '_') {
    key_index++;
  }
  return std::string(key_in + key_index);
}

/*
 * @brief Checks to ensure accessing data at the index + length of the string is valid.
 */
bool TheengsDecoder::data_index_is_valid(const char* str, size_t index, size_t len) {
  if (strlen(str) < (index + len)) {
    return false;
  }
  return true;
}

int TheengsDecoder::data_length_is_valid(size_t data_len, size_t default_min,
                                         JsonArray& condition, int idx) {
  std::string op = condition[idx + 1].as<std::string>();
  if (!op.empty() && op.length() > 2) {
    return (data_len >= default_min) ? 0 : -1;
  }

  if (!condition[idx + 2].is<size_t>()) {
    return -1;
  }

  size_t req_len = condition[idx + 2].as<size_t>();

  if (op == ">" && data_len > req_len) return 2;
  if (op == ">=" && data_len >= req_len) return 2;
  if (op == "=" && data_len == req_len) return 2;
  if (op == "<" && data_len < req_len) return 2;
  if (op == "<=" && data_len <= req_len) return 2;

  return -1;
}

bool TheengsDecoder::checkPropCondition(const JsonArray& prop_condition,
                                        const char* svc_data,
                                        const char* mfg_data) {
  int cond_size = prop_condition.size();
  bool cond_met = prop_condition.isNull();

  if (!cond_met) {
    for (int i = 0; i < cond_size; i += 4) {
      if (prop_condition[i].is<JsonArray>()) {
        DEBUG_PRINT("found nested array\n");
        cond_met = checkPropCondition(prop_condition[i], svc_data, mfg_data);

        if (++i < cond_size) {
          if (!cond_met && *prop_condition[i].as<const char*>() == '|') {
          } else if (cond_met && *prop_condition[i].as<const char*>() == '&') {
            cond_met = false;
          } else {
            break;
          }
          i++;
        } else {
          break;
        }
      }

      bool inverse = *(const char*)prop_condition[i + 2] == '!';
      const char* prop_data_src = prop_condition[i];
      const char* data_src = nullptr;

      if (svc_data && strstr(prop_data_src, SVC_DATA) != nullptr) {
        data_src = svc_data;
      } else if (mfg_data && strstr(prop_data_src, MFG_DATA) != nullptr) {
        data_src = mfg_data;
      }

      if (data_src) {
        size_t cond_len = strlen(prop_condition[i + 2 + inverse].as<const char*>());
        if (!strncmp(&data_src[prop_condition[i + 1].as<int>()],
                     prop_condition[i + 2 + inverse].as<const char*>(), cond_len)) {
          cond_met = inverse ? false : true;
        } else if (inverse) {
          cond_met = true;
        }
      } else {
        DEBUG_PRINT("ERROR property condition data source invalid\n");
        return false;
      }

      if (inverse) {
        i++;
      }

      if (cond_size > (i + 3)) {
        if (!cond_met && *prop_condition[i + 3].as<const char*>() == '|') {
          continue;
        } else if (cond_met && *prop_condition[i + 3].as<const char*>() == '&') {
          cond_met = false;
          continue;
        } else {
          break;
        }
      }
    }
  }

  return cond_met;
}

/*
 * @brief Compares the input json values to the known devices and
 * decodes the data if a match is found.
 */
int TheengsDecoder::decodeBLEJson(JsonObject& jsondata) {
#ifdef UNIT_TESTING
  DynamicJsonDocument doc(TEST_MAX_DOC);
#else
  DynamicJsonDocument doc(m_docMax);
#endif
  const char* svc_data = jsondata[SVC_DATA].as<const char*>();
  const char* mfg_data = jsondata[MFG_DATA].as<const char*>();
  const char* dev_name = jsondata["name"].as<const char*>();
  const char* svc_uuid = jsondata["servicedatauuid"].as<const char*>();
  int success = -1;

  // if there is no data to decode just return
  if (svc_data == nullptr && mfg_data == nullptr) {
    DEBUG_PRINT("Invalid data\n");
    return success;
  }

  /* loop through the devices and attempt to match the input data to a device parameter set */
  for (auto i_main = 0; i_main < sizeof(_devices) / sizeof(_devices[0]); ++i_main) {
    DeserializationError error = deserializeJson(doc, _devices[i_main][0]);
    if (error) {
      DEBUG_PRINT("deserializeJson() failed: %s\n", error.c_str());
#ifdef UNIT_TESTING
      assert(0);
#endif
      return success;
    }
#ifdef UNIT_TESTING
    if (doc.memoryUsage() > peakDocSize)
      peakDocSize = doc.memoryUsage();
#endif

    JsonArray condition = doc["condition"];
    bool match = false;
    size_t min_len = m_minMfgDataLen;

    for (unsigned int i = 0; i < condition.size();) {
      const char* cmp_str;
      const char* cond_str = condition[i].as<const char*>();
      int len_idx;
      if (svc_data != nullptr && strstr(cond_str, SVC_DATA) != nullptr) {
        len_idx = data_length_is_valid(strlen(svc_data), m_minSvcDataLen, condition, i);
        if (len_idx >= 0) {
          i += len_idx;
          cmp_str = svc_data;
          match = true;
        } else {
          match = false;
          break;
        }
      } else if (mfg_data != nullptr && strstr(cond_str, MFG_DATA) != nullptr) {
        len_idx = data_length_is_valid(strlen(mfg_data), m_minMfgDataLen, condition, i);
        if (len_idx >= 0) {
          i += len_idx;
          cmp_str = mfg_data;
          match = true;
        } else {
          match = false;
          break;
        }
      } else if (dev_name != nullptr && strstr(cond_str, "name") != nullptr) {
        cmp_str = dev_name;
      } else if (svc_uuid != nullptr && strstr(cond_str, "uuid") != nullptr) {
        cmp_str = svc_uuid;
      } else {
        break;
      }

      cond_str = condition[i + 1].as<const char*>();
      if (cond_str) {
        if (cmp_str == svc_uuid && !strncmp(cmp_str, "0x", 2)) {
          cmp_str += 2;
        }

        if (strstr(cond_str, "contain") != nullptr) {
          if (strstr(cmp_str, condition[i + 2].as<const char*>()) != nullptr) {
            match = true;
          } else {
            match = false;
          }
          i += 3;
        } else if (strstr(cond_str, "index") != nullptr) {
          size_t cond_index = condition[i + 2].as<size_t>();
          size_t cond_len = strlen(condition[i + 3].as<const char*>());

          if (!data_index_is_valid(cmp_str, cond_index, cond_len)) {
            DEBUG_PRINT("Invalid data %s; skipping\n", cmp_str);
            match = false;
            break;
          }
          DEBUG_PRINT("comparing index: %s to %s at index %u\n",
                      &cmp_str[condition[i + 2].as<unsigned int>()],
                      condition[i + 3].as<const char*>(), condition[i + 2].as<unsigned int>());
          if (strncmp(&cmp_str[cond_index], condition[i + 3].as<const char*>(), cond_len) == 0) {
            match = true;
          } else {
            match = false;
          }
          i += 4;
        }

        cond_str = condition[i].as<const char*>();
      }

      unsigned int cond_size = condition.size();

      if (i < cond_size && cond_str != nullptr) {
        if (!match && *cond_str == '|') {
          i++;
          continue;
        } else if (match && *cond_str == '&') {
          i++;
          match = false;
          continue;
        } else if (match) { // check for AND case before exit
          while (i < cond_size && *cond_str != '&') {
            if (!condition[++i].is<const char*>()) {
              continue;
            }
            cond_str = condition[++i].as<const char*>();
          }

          if (i < condition.size() && cond_str != nullptr) {
            i++;
            match = false;
            continue;
          }
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
        bool cond_met = checkPropCondition(prop["condition"], svc_data, mfg_data);

        if (cond_met) {
          JsonArray decoder = prop["decoder"];
          if (strstr((const char*)decoder[0], "value_from_hex_data") != nullptr) {
            const char* src = svc_data;
            if (strstr((const char*)decoder[1], MFG_DATA)) {
              src = mfg_data;
            }

            /* use a double for all values and cast later if required */
            double temp_val;
            static long cal_val = 0;

            if (data_index_is_valid(src, decoder[2].as<int>(), decoder[3].as<int>())) {
              decoder_function dec_fun = &TheengsDecoder::value_from_hex_string;

              if (strstr((const char*)decoder[0], "bf") != nullptr) {
                dec_fun = &TheengsDecoder::bf_value_from_hex_string;
              }

              temp_val = (this->*dec_fun)(src, decoder[2].as<int>(),
                                          decoder[3].as<int>(),
                                          decoder[4].as<bool>(),
                                          decoder[5].isNull() ? true : decoder[5].as<bool>());

            } else {
              break;
            }

            /* Do any required post processing of the value */
            if (prop.containsKey("post_proc")) {
              JsonArray post_proc = prop["post_proc"];
              for (unsigned int i = 0; i < post_proc.size(); i += 2) {
                if (cal_val && post_proc[i + 1].as<const char*>() != NULL &&
                    strncmp(post_proc[i + 1].as<const char*>(), ".cal", 4) == 0) {
                  switch (*post_proc[i].as<const char*>()) {
                    case '/':
                      temp_val /= cal_val;
                      break;
                    case '*':
                      temp_val *= cal_val;
                      break;
                    case '-':
                      temp_val -= cal_val;
                      break;
                    case '+':
                      temp_val += cal_val;
                      break;
                  }
                } else {
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
                    case '&': {
                      long val = (long)temp_val;
                      temp_val = val & post_proc[i + 1].as<unsigned int>();
                      break;
                    }
                  }
                }
              }
            }

            /* If there is any underscores at the beginning of the property name, there is multiple 
                * properties of this type, we need remove the underscores for creating the key.
                */
            std::string _key = sanitizeJsonKey(kv.key().c_str());

            /* calculation values extracted from data are not added to the deocded outupt
                * instead we store them teporarily to use with the next data properties.
                */
            if (_key == ".cal") {
              cal_val = (long)temp_val;
              continue;
            }

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

            success = i_main;
            DEBUG_PRINT("found value = %s : %.2f\n", _key.c_str(), jsondata[_key].as<double>());
          } else if (strstr((const char*)decoder[0], "static_value") != nullptr) {
            if (prop.containsKey("is_bool") && !decoder[1].is<std::string>()) {
              decoder[1] = (bool)decoder[1];
            }
            jsondata[sanitizeJsonKey(kv.key().c_str())] = decoder[1];
            success = i_main;
          } else if (strstr((const char*)decoder[0], "string_from_hex_data") != nullptr) {
            const char* src = svc_data;
            if (strstr((const char*)decoder[1], MFG_DATA)) {
              src = mfg_data;
            }

            std::string value(src + decoder[2].as<int>(), decoder[3].as<int>());
            jsondata[sanitizeJsonKey(kv.key().c_str())] = value;
            success = i_main;
          }
        }
      }
      return success;
    }
  }
  return success;
}

int TheengsDecoder::getTheengModel(JsonDocument& doc, const char* model_id) {
  int mid_len = strlen(model_id);

  for (auto i = 0; i < sizeof(_devices) / sizeof(_devices[0]); ++i) {
    DeserializationError error = deserializeJson(doc, _devices[i][0]);
    if (error) {
      DEBUG_PRINT("deserializeJson() failed: %s\n", error.c_str());
#ifdef UNIT_TESTING
      assert(0);
#endif
      break;
    }
#ifdef UNIT_TESTING
    if (doc.memoryUsage() > peakDocSize)
      peakDocSize = doc.memoryUsage();
#endif

    if (doc.containsKey("model_id")) {
      if (strlen(doc["model_id"].as<const char*>()) != mid_len) {
        continue;
      }
      if (!strncmp(model_id, doc["model_id"], mid_len)) {
        return i;
      }
    }
  }

  return -1;
}

std::string TheengsDecoder::getTheengProperties(int mod_index) {
  return (mod_index < 0 || mod_index >= BLE_ID_NUM::BLE_ID_MAX) ? "" : _devices[mod_index][1];
}

std::string TheengsDecoder::getTheengProperties(const char* model_id) {
#ifdef UNIT_TESTING
  DynamicJsonDocument doc(TEST_MAX_DOC);
#else
  DynamicJsonDocument doc(m_docMax);
#endif
  int mod_index = getTheengModel(doc, model_id);
  return (mod_index < 0 || mod_index >= BLE_ID_NUM::BLE_ID_MAX) ? "" : _devices[mod_index][1];
}

std::string TheengsDecoder::getTheengAttribute(int model_id, const char* attribute) {
#ifdef UNIT_TESTING
  DynamicJsonDocument doc(TEST_MAX_DOC);
#else
  DynamicJsonDocument doc(m_docMax);
#endif
  std::string ret_attr = "";
  if (model_id >= 0 && model_id < BLE_ID_NUM::BLE_ID_MAX) {
    DeserializationError error = deserializeJson(doc, _devices[model_id][0]);
    if (error) {
      DEBUG_PRINT("deserializeJson() failed: %s\n", error.c_str());
#ifdef UNIT_TESTING
      assert(0);
#endif
    } else if (!doc[attribute].isNull()) {
      ret_attr = doc[attribute].as<std::string>();
    }
  }

  return ret_attr;
}

std::string TheengsDecoder::getTheengAttribute(const char* model_id, const char* attribute) {
#ifdef UNIT_TESTING
  DynamicJsonDocument doc(TEST_MAX_DOC);
#else
  DynamicJsonDocument doc(m_docMax);
#endif
  int mod_index = getTheengModel(doc, model_id);

  if (mod_index >= 0 && !doc[attribute].isNull()) {
    return std::string(doc[attribute].as<std::string>());
  }
  return "";
}

void TheengsDecoder::setMinServiceDataLen(size_t len) {
  m_minSvcDataLen = len;
}

void TheengsDecoder::setMinManufacturerDataLen(size_t len) {
  m_minMfgDataLen = len;
}

#ifdef UNIT_TESTING
int TheengsDecoder::testDocMax() {
  if (peakDocSize > m_docMax) {
    DEBUG_PRINT("Error: peak doc size > max; peak: %lu, max: %lu\n", peakDocSize, m_docMax);
  }
  return m_docMax - peakDocSize;
}
#endif
