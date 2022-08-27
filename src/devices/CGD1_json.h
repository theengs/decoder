#include "common_props.h"

const char* _CGD1_json = "{\"brand\":\"Cleargrass\",\"model\":\"Alarm Clock\",\"model_id\":\"CGD1\",\"condition\":[\"servicedata\",\"=\",34,\"index\",2,\"0c\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]}}}";

/*R""""(
{
   "brand":"Cleargrass",
   "model":"Alarm Clock",
   "model_id":"CGD1",
   "condition":["servicedata", "=", 34, "index", 2, "0c", "&", "uuid", "index", 0, "fdcd"],
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
