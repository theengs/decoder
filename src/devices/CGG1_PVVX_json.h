#include "common_props.h"

const char* _CGG1_PVVX_json = "{\"brand\":\"Qingping\",\"model\":\"Round TH v1\",\"model_id\":\"CGG1_PVVX\",\"condition\":[\"servicedata\",\"=\",30,\"index\",6,\"342d58\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",1000]}}}";

/* R""""(
{
   "brand":"Qingping",
   "model":"CGG1",
   "model_id":"CGG1_PVVX",
   "condition":["servicedata", "=", 30, "index",6 , "342d58"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 4, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 24, 2, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _CGG1_PVVX_props = _common_BVTH_props;
