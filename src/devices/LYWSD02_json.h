#include "common_props.h"

const char* _LYWSD02_json = "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"condition\":[\"uuid\",\"index\",0,\"fe95\",\"&\",\"servicedata\",\"index\",4,\"5b04\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",24,\"0410\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"condition\":[\"servicedata\",24,\"0610\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"condition\":[\"servicedata\",24,\"0a10\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false,false]}}}";
/* R""""(
{
   "brand":"Xiaomi/Mijia",
   "model":"e-ink Clock",
   "model_id":"LYWSD02",
   "condition":["uuid", "index", 0, "fe95", "&", "servicedata", "index", 4, "5b04"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 24, "0410"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "condition":["servicedata", 24, "0610"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "condition":["servicedata", 24, "0a10"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false, false]
      }
   }
})"""";*/

const char* _LYWSD02_json_props = _common_BTH_props;
