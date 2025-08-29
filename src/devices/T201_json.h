#include "common_props.h"

const char* _T201_json = "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T201\",\"tag\":\"0103\",\"cond\":[\"name\",\"index\",0,\"T201\",\"&\",\"manufacturerdata\",\">=\",38],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",24,4,false,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",28,4,false,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",32,2,false,false]},\"mac\":{\"decoder\":[\"mfhd\",\"manufacturerdata\",8]}}}";
/*R""""(
{
   "brand":"Oria",
   "model":"TH Sensor",
   "model_id":"T201",
   "tag":"0103",
   "cond":["name", "index", 0, "T201", "&", "manufacturerdata", ">=", 38],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "manufacturerdata", 24, 4, false, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "manufacturerdata", 28, 4, false, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "manufacturerdata", 32, 2, false, false]
      },
      "mac":{
         "decoder":["mfhd", "manufacturerdata", 8]
      }
   }
})"""";*/

const char* _T201_json_props = _common_BTHM_props;
