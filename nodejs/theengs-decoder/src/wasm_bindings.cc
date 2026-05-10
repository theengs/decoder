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

#include <emscripten/bind.h>
#include <string>

#include "decoder.h"

using namespace emscripten;

class TheengsDecoderJS {
  TheengsDecoder decoder;

 public:
  TheengsDecoderJS() = default;

  std::string decodeBLE(const std::string& json_data) {
    StaticJsonDocument<1024> doc;
    DeserializationError err = deserializeJson(doc, json_data);
    if (err) return "";
    JsonObject obj = doc.as<JsonObject>();
    if (decoder.decodeBLEJson(obj) < 0) return "";
    std::string buf;
    serializeJson(obj, buf);
    return buf;
  }

  std::string getProperties(const std::string& model_id) {
    return decoder.getTheengProperties(model_id.c_str());
  }

  std::string getAttribute(const std::string& model_id, const std::string& attribute) {
    return decoder.getTheengAttribute(model_id.c_str(), attribute.c_str());
  }
};

EMSCRIPTEN_BINDINGS(theengs_decoder_module) {
  class_<TheengsDecoderJS>("TheengsDecoder")
      .constructor<>()
      .function("decodeBLE", &TheengsDecoderJS::decodeBLE)
      .function("getProperties", &TheengsDecoderJS::getProperties)
      .function("getAttribute", &TheengsDecoderJS::getAttribute);
}
