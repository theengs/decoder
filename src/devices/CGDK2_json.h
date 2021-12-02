#include "common_props.h"

const char* _CGDK2_json = "{\"brand\":\"Qingping\",\"model\":\"TH lite\",\"model_id\":\"CGDK2\",\"condition\":[\"servicedata\",\"index\",0,\"8810\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"TH lite",
   "model_id":"CGDK2",
   "condition":["servicedata", "index", 0, "8810"],
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

const char* _CGDK2_json_props = _common_TH_props;
