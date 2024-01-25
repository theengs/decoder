#include "common_props.h"

const char* _JAALEE_json = "{\"brand\":\"Jaalee\",\"model\":\"TH sensor\",\"model_id\":\"F525/F51C\",\"tag\":\"0102\",\"condition\":[\"uuid\",\"contain\",\"f525\",\"|\",\"uuid\",\"contain\",\"f51c\",\"&\",\"manufacturerdata\",\"=\",52],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false],\"post_proc\":[\"*\",175,\"/\",65535,\"-\",45]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false,false],\"post_proc\":[\"*\",100,\"/\",65535]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",50,2,false,false]}}}";
/* R""""(
{
   "brand":"Jaalee",
   "model":"TH sensor",
   "model_id":"F525/F51C",
   "tag":"0102",
   "condition":["uuid", "contain", "f525", "|", "uuid", "contain", "f51c" , "&", "manufacturerdata", "=", 52],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 40, 4, false],
         "post_proc":["*", 175, "/", 65535, "-", 45]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 44, 4, false, false],
         "post_proc":["*", 100, "/", 65535]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 50, 2, false, false]
      }
   }
})"""";*/

const char* _JAALEE_json_props = _common_BTH_props;
