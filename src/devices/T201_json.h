#include "common_props.h"

const char* _T201_json = "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T201\",\"tag\":\"0103\",\"cond\":[\"name\",\"ind\",0,\"T201\",\"&\",\"mfd\",\">=\",38],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",24,4,false,true],\"pprc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",28,4,false,false],\"pprc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",32,2,false,false]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",8]}}}";
/*R""""(
{
   "brand":"Oria",
   "model":"TH Sensor",
   "model_id":"T201",
   "tag":"0103",
   "cond":["name", "ind", 0, "T201", "&", "mfd", ">=", 38],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 24, 4, false, true],
         "pprc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 28, 4, false, false],
         "pprc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 32, 2, false, false]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 8]
      }
   }
})"""";*/

const char* _T201_json_props = _common_BTHM_props;
