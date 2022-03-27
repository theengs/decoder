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

#define ARDUINOJSON_USE_LONG_LONG 1
#include "ArduinoJson.h"

//#define DEBUG_DECODER

class TheengsDecoder {
public:
  TheengsDecoder() {}
  ~TheengsDecoder() {}

  int decodeBLEJson(JsonObject& jsondata);
  void setMinServiceDataLen(size_t len);
  void setMinManufacturerDataLen(size_t len);
  std::string getTheengProperties(const char* model_id);
  std::string getTheengProperties(int mod_index);
  std::string getTheengAttribute(const char* model_id, const char* attribute);
  std::string getTheengAttribute(int model_id, const char* attribute);
  int getTheengModel(JsonDocument& doc, const char* model_id);
#ifdef UNIT_TESTING
  int testDocMax();
#endif

  enum BLE_ID_NUM {
    UNKNOWN_MODEL = -1,
    HHCCJCY01HHCC = 0,
    VEGTRUG,
    LYWSD02,
    LYWSDCGQ,
    CGP1W,
    CGG1_V1,
    CGG1_V2,
    CGD1,
    CGDK2,
    CGH1,
    JQJCY01YM,
    IBSTH1,
    IBSTH2,
    IBT4XS,
    IBT6XS_SOLIS,
    MIBAND,
    XMTZC04HM,
    XMTZC05HM,
    TPMS,
    LYWSD03MMC_ATC,
    CGPR1,
    IBEACON,
    WS02,
    WS08,
    H5055,
    H5075,
    H5072,
    H5102,
    LYWSD03MMC_PVVX,
    MUE4094RT,
    MOKOBEACON,
    MOKOBEACONXPRO,
    INODE_EM,
    IBT_2X,
    RUUVITAG_RAWV1,
    RUUVITAG_RAWV2,
    SBS1,
    BM_V23,
    MS_CDP,
    GAEN,
    BLE_ID_MAX
  };

private:
  void        reverse_hex_data(const char* in, char* out, int l);
  double      value_from_hex_string(const char* data_str, int offset, int data_length, bool reverse, bool canBeNegative = true);
  double      bf_value_from_hex_string(const char* data_str, int offset, int data_length, bool reverse, bool canBeNegative = true);
  bool        data_index_is_valid(const char* str, size_t index, size_t len);
  int         data_length_is_valid(size_t data_len, size_t default_min, JsonArray& condition, int idx);
  bool        checkPropCondition(const JsonArray& prop, const char* svc_data, const char* mfg_data);
  std::string sanitizeJsonKey(const char* key_in);

  size_t m_docMax = 7168;
  size_t m_minSvcDataLen = 20;
  size_t m_minMfgDataLen = 16;
};

#endif
