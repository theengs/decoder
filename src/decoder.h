#ifndef _DECODER_H_
#define _DECODER_H_
#include "ArduinoJson.h"
#define DEBUG_DECODER
extern "C" bool decodeBLEJson(JsonObject& jsondata); // extern "C" needed for platformio linker?
#endif
