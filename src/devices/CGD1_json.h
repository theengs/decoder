#include "common_props.h"
#ifndef PROGMEM
#  define PROGMEM
#endif

const char _CGD1_json[] PROGMEM = "{\"brand\":\"Xiaomi\",\"model\":\"CG_alarm_clock\",\"model_id\":\"CGD1\",\"condition\":[\"servicedata\",\"index\",0,\"080caf\",\"|\",\"servicedata\",\"index\",0,\"080c09\",\"|\",\"servicedata\",\"index\",0,\"080cd0\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]}}}";

/*R""""(
{
   "brand":"Xiaomi",
   "model":"CG_alarm_clock",
   "model_id":"CGD1",
   "condition":["servicedata", "index", 0, "080caf", "|", "servicedata", "index", 0, "080c09", "|", "servicedata", "index", 0, "080cd0"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _CGD1_json_props = _common_TH_props;
