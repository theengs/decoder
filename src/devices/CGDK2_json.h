#include "common_props.h"

const char* _CGDK2_json_STOCK = "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",34,\"ind\",2,\"10\",\"&\",\"uuid\",\"ind\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true],\"pprc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",24,4,true,false],\"pprc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",32,2,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",4]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2",
   "tag":"01",
   "cond":["svd", "=", 34, "ind", 2, "10", "&", "uuid", "ind", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 20, 4, true],
         "pprc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 24, 4, true, false],
         "pprc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "svd", 32, 2, false]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 4]
      }
   }
})"""";*/

// ATC1441
const char* _CGDK2_json_ATC1441 = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_ATC1441\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",26,\"&\",\"uuid\",\"ind\",0,\"181a\",\"&\",\"name\",\"ind\",0,\"CGDK\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",12,4,false],\"pprc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",16,2,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",18,2,false]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",20,4,false],\"pprc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"mfhd\",\"svd\",0]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2_ATC1441",
   "tag":"0102",
   "cond":["svd", "=", 26, "&", "uuid", "ind", 0, "181a", "&", "name", "ind", 0, "CGDK"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 12, 4, false],
         "pprc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 16, 2, false]
      },
      "batt":{
         "decoder":["vfhd", "svd", 18, 2, false]
      },
      "volt":{
         "decoder":["vfhd", "svd", 20, 4, false],
         "pprc":["/", 1000]
      },
      "mac":{
         "decoder":["mfhd", "svd", 0]
      }
   }
})"""";*/

// PVVX
const char* _CGDK2_json_PVVX = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_PVVX\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",30,\"&\",\"uuid\",\"ind\",0,\"181a\",\"&\",\"name\",\"ind\",0,\"CGD\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",12,4,true],\"pprc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",16,4,true],\"pprc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",24,2,false]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true],\"pprc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",0]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2_PVVX",
   "tag":"0102",
   "cond":["svd", "=", 30, "&", "uuid", "ind", 0, "181a", "&", "name", "ind", 0, "CGD"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 12, 4, true],
         "pprc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "svd", 16, 4, true],
         "pprc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "svd", 24, 2, false]
      },
      "volt":{
         "decoder":["vfhd", "svd", 20, 4, true],
         "pprc":["/", 1000]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 0]
      }
   }
})"""";*/

const char* _CGDK2_json_props = _common_BVTH_props;
