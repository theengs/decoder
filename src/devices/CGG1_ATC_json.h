#include "common_props.h"

const char* _CGG1_ATC_json = "{\"brand\":\"Qingping\",\"model\":\"Round TH v1\",\"model_id\":\"CGG1_ATC\",\"condition\":[\"servicedata\",\"index\",0,\"582d34\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,false],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"Qingping",
   "model":"CGG1",
   "model_id":"CGG1_ATC",
   "condition":["servicedata", "index", 0, "582d34"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 18, 2, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _CGG1_ATC_props = _common_BVTH_props;
