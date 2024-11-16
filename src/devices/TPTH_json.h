#include "common_props.h"

const char* _TPTH_json = "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"TP357\",\"|\",\"name\",\"index\",0,\"TP358\",\"|\",\"name\",\"index\",0,\"TP359\",\"|\",\"name\",\"index\",0,\"TP393\",\"&\",\"manufacturerdata\",\">=\",12,\"index\",0,\"c2\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,4,true,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",9,1,false,false],\"post_proc\":[\"*\",50,\"max\",100]}}}";
/*R""""(
{
   "brand":"ThermoPro",
   "model":"TH Sensor",
   "model_id":"TP35X/393",
   "tag":"0103",
   "condition":["name", "index", 0, "TP357", "|", "name", "index", 0, "TP358", "|", "name", "index", 0, "TP359", "|", "name", "index", 0, "TP393", "&", "manufacturerdata", ">=", 12, "index", 0, "c2"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 2, 4, true, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 9, 1, false, false],
         "post_proc":["*", 50, "max", 100]
      }
   }
})"""";*/

const char* _TPTH_json_props = _common_BTH_props;
