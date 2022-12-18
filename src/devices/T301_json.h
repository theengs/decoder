#include "common_props.h"

const char* _T301_json = "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"cidc\":false,\"condition\":[\"name\",\"index\",0,\"T301\",\"&\",\"manufacturerdata\",\"=\",38],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,false,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,false,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,false]}}}";
/*R""""(
{
   "brand":"Oria",
   "model":"TH Sensor",
   "model_id":"T301",
   "cidc":false,
   "condition":["name", "index", 0, "T301", "&", "manufacturerdata", "=", 38],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, false, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, false, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 2, false, false]
      }
   }
})"""";*/

const char* _T301_json_props = _common_BTH_props;
