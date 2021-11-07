#include "common_props.h"

const char* _LYWSDCGQ_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"condition\":[\"servicedata\",\"contain\",\"20aa01\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",23,\"d\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"condition\":[\"servicedata\",23,\"d\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,true,false],\"post_proc\":[\"/\",10]},\"_hum\":{\"condition\":[\"servicedata\",23,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi Jia round",
   "model_id":"LYWSDCGQ",
   "condition":["servicedata", "contain", "20aa01"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":["/", 10]
      },
      "_hum":{
         "condition":["servicedata", 23, "6"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _LYWSDCGQ_json_props = _common_BTH_props;
