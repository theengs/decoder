#ifndef _DECODER_H_
#define _DECODER_H_
#include "ArduinoJson.h"
//#define DEBUG_DECODER

class ThingDecoder {
public:
  ThingDecoder(){}
  ~ThingDecoder() {}

  bool decodeBLEJson(JsonObject& jsondata);
  void setMinServiceDataLen(size_t len);
  void setMinManufacturerDataLen(size_t len);

private:
  void reverse_hex_data(const char* in, char* out, int l);
  long value_from_hex_string(const char* data_str, int offset, int data_length, bool reverse, bool canBeNegative = true);
  bool data_index_is_valid(const char* str, size_t index, size_t len);
  std::string sanitizeJsonKey(const char* key_in);

  size_t m_docMax = 4096;
  size_t m_minSvcDataLen = 20;
  size_t m_minMfgDataLen = 18;
};

#endif
