#include "common_props.h"

const char* _T301_json = "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"tag\":\"0103\",\"cond\":[\"name\",\"ind\",0,\"T301\",\"&\",\"mfd\",\"=\",38],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",24,4,false,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",28,4,false,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",32,2,false,false]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",8]}}}";
/*R""""(
{
   "brand":"Oria",
   "model":"TH Sensor",
   "model_id":"T301",
   "tag":"0103",
   "cond":["name", "ind", 0, "T301", "&", "mfd", "=", 38],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 24, 4, false, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 28, 4, false, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 32, 2, false, false]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 8]
      }
   }
})"""";*/

const char* _T301_json_props = _common_BTHM_props;
