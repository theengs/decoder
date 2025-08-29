#include "common_props.h"

const char* _SHT4X_json = "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"tag\":\"01\",\"cond\":[\"mfd\",\">=\",20,\"ind\",0,\"d5060006\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",12,4,true,true],\"post_proc\":[\"*\",175,\"/\",65535,\"-\",45]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",16,4,true,false],\"post_proc\":[\"*\",125,\"/\",65535,\"-\",6]}}}";

/* R""""(
{
   "brand":"Sensirion",
   "model":"TH Sensor",
   "model_id":"SHT4X",
   "tag":"01",
   "cond":["mfd", ">=", 20, "ind", 0, "d5060006"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 12, 4, true, true],
         "post_proc":["*", 175, "/", 65535, "-", 45]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 16, 4, true, false],
         "post_proc":["*", 125, "/", 65535, "-", 6]
      }
   }
})"""";*/

const char* _SHT4X_json_props = _common_TH_props;
