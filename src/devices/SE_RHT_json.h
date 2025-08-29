#include "common_props.h"

const char* _SE_RHT_json = "{\"brand\":\"Sensor Easy\",\"model\":\"SE RHT\",\"model_id\":\"SE_RHT\",\"tag\":\"01\",\"cond\":[\"name\",\"ind\",1,\" RHT \",\"&\",\"uuid\",\"ind\",0,\"2a6e\",\"|\",\"uuid\",\"ind\",0,\"2a6f\"],\"properties\":{\"tempc\":{\"cond\":[\"svd\",\"=\",4],\"decoder\":[\"vfhd\",\"svd\",0,4,true,true],\"pprc\":[\"/\",100]},\"hum\":{\"cond\":[\"svd\",\"=\",2],\"decoder\":[\"vfhd\",\"svd\",0,2,true,true]},\"volt\":{\"cond\":[\"mfd\",\"=\",10,\"ind\",4,\"f2\"],\"decoder\":[\"vfhd\",\"mfd\",6,4,true,false],\"pprc\":[\"/\",1000]}}}";

/*R""""(
{
   "brand":"Sensor Easy",
   "model":"SE RHT",
   "model_id":"SE_RHT",
   "tag":"01",
   "cond":["name", "ind", 1, " RHT ","&", "uuid", "ind", 0, "2a6e","|", "uuid", "ind", 0, "2a6f"],
   "properties":{
      "tempc":{
         "cond":["svd", "=", 4],
         "decoder":["vfhd", "svd", 0, 4, true, true],
         "pprc":["/", 100]
      },
      "hum":{
         "cond":["svd", "=", 2],
         "decoder":["vfhd", "svd", 0, 2, true, true]
      },
      "volt":{
         "cond":["mfd", "=", 10,"ind", 4, "f2"],
         "decoder":["vfhd", "mfd", 6, 4, true, false],
         "pprc":["/", 1000]
      }
   }
})"""";*/

const char* _SE_RHT_json_props =  _common_BVTH_props;
