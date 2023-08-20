#include "common_props.h"

const char* _T201_json = "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T201\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"T201\",\"&\",\"manufacturerdata\",\">=\",38],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,false,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,false,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,false]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",8]}}}";
/*R""""(
{
   "brand":"Oria",
   "model":"TH Sensor",
   "model_id":"T201",
   "tag":"0103",
   "condition":["name", "index", 0, "T201", "&", "manufacturerdata", ">=", 38],
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
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 8]
      }
   }
})"""";*/

const char* _T201_json_props = _common_BTHM_props;
