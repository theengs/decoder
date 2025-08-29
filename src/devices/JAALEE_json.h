#include "common_props.h"

const char* _JAALEE_json = "{\"brand\":\"Jaalee\",\"model\":\"TH sensor\",\"model_id\":\"F525/F51C\",\"tag\":\"0102\",\"cond\":[\"uuid\",\"contain\",\"f525\",\"|\",\"uuid\",\"contain\",\"f51c\",\"&\",\"mfd\",\"=\",52],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",40,4,false],\"post_proc\":[\"*\",175,\"/\",65535,\"-\",45]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",44,4,false,false],\"post_proc\":[\"*\",100,\"/\",65535]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",50,2,false,false]}}}";
/* R""""(
{
   "brand":"Jaalee",
   "model":"TH sensor",
   "model_id":"F525/F51C",
   "tag":"0102",
   "cond":["uuid", "contain", "f525", "|", "uuid", "contain", "f51c" , "&", "mfd", "=", 52],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 40, 4, false],
         "post_proc":["*", 175, "/", 65535, "-", 45]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 44, 4, false, false],
         "post_proc":["*", 100, "/", 65535]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 50, 2, false, false]
      }
   }
})"""";*/

const char* _JAALEE_json_props = _common_BTH_props;
