#include "common_props.h"

const char* _CGD1_json = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",34,\"index\",2,\"0c\",\"|\",\"svd\",\"=\",34,\"index\",2,\"1e\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",24,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",32,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",4]}}}";

/*R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Alarm Clock",
   "model_id":"CGC1/CGD1",
   "tag":"01",
   "cond":["svd", "=", 34, "index", 2, "0c", "|", "svd", "=", 34, "index", 2, "1e", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 20, 4, true, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "svd", 32, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 4]
      }
   }
})"""";*/

const char* _CGD1_json_props = _common_BTHM_props;
