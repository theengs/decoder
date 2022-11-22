#include "common_props.h"

const char* _CGD1_json = "{\"brand\":\"ClearGrass\",\"model\":\"Alarm Clock\",\"model_id\":\"CGD1\",\"condition\":[\"servicedata\",\"=\",34,\"index\",2,\"0c\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,2,false,false],\"post_proc\":[\"&\",127]}}}";

/*R""""(
{
   "brand":"ClearGrass",
   "model":"Alarm Clock",
   "model_id":"CGD1",
   "condition":["servicedata", "=", 34, "index", 2, "0c", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 32, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _CGD1_json_props = _common_BTH_props;
