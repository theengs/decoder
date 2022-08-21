#include "common_props.h"

const char* _TP357_json = "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP357/8\",\"cidc\":false,\"condition\":[\"name\",\"index\",0,\"TP357\",\"|\",\"name\",\"index\",0,\"TP358\",\"&\",\"manufacturerdata\",\"=\",12],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,4,true,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false]}}}";
/*R""""(
{
   "brand":"ThermoPro",
   "model":"TH Sensor",
   "model_id":"TP357/8",
   "cidc":false,
   "condition":["name", "index", 0, "TP357", "|", "name", "index", 0, "TP358", "&","manufacturerdata", "=", 12],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 2, 4, true, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false]
      }
   }
})"""";*/

const char* _TP357_json_props = _common_TH_props;
