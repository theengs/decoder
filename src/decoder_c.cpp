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

#include <stdio.h>
#include <string.h>

#include "decoder.h"
#ifdef SKBUILD
#  include "shared/theengs.h"
#else
#  include "../include/shared/theengs.h"
#endif

// Utility function local to the bridge's implementation
TheengsDecoder* AsDecoder(void* decoder) { return reinterpret_cast<TheengsDecoder*>(decoder); }

void* Theengs_NewDecoder() {
  auto decoder = new TheengsDecoder();
  return decoder;
}

void Theengs_DestroyDecoder(void* decoder) {
  AsDecoder(decoder)->~TheengsDecoder();
}

const char* Theengs_DecodeBLE(void* decoder, const char* json_data) {
  StaticJsonDocument<1024> doc;
  DeserializationError err = deserializeJson(doc, json_data);
  if (!err) {
    JsonObject bleObject;
    bleObject = doc.as<JsonObject>();

    if (AsDecoder(decoder)->decodeBLEJson(bleObject) >= 0) {
      std::string buf;
      serializeJson(bleObject, buf);
      return strdup(buf.c_str());
    }
  }
  return "";
}

const char* Theengs_GetProperties(void* decoder, const char* model_id) {
  std::string props = AsDecoder(decoder)->getTheengProperties(model_id);
  return strdup(props.c_str());
}

const char* Theengs_GetAttribute(void* decoder, const char* model_id, const char* attribute) {
  std::string attrs = AsDecoder(decoder)->getTheengAttribute(model_id, attribute);
  return strdup(attrs.c_str());
}