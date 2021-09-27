/*  
  TheengsDecoder  - Decode things and devices

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

#ifndef _DECODER_H_
#define _DECODER_H_
#include "ArduinoJson.h"
//#define DEBUG_DECODER

class TheengsDecoder {
public:
  TheengsDecoder(){}
  ~TheengsDecoder() {}

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
  size_t m_minMfgDataLen = 16;
};

#endif
