#include "common_props.h"

const char* _CGDK2_json_STOCK = "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"tag\":\"01\",\"cond\":[\"servicedata\",\"=\",34,\"index\",2,\"10\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"servicedata\",32,2,false]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",4]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2",
   "tag":"01",
   "cond":["servicedata", "=", 34, "index", 2, "10", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "servicedata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "servicedata", 32, 2, false]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 4]
      }
   }
})"""";*/

// ATC1441
const char* _CGDK2_json_ATC1441 = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_ATC1441\",\"tag\":\"0102\",\"cond\":[\"servicedata\",\"=\",26,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGDK\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"servicedata\",12,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",16,2,false]},\"batt\":{\"decoder\":[\"vfhd\",\"servicedata\",18,2,false]},\"volt\":{\"decoder\":[\"vfhd\",\"servicedata\",20,4,false],\"post_proc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"servicedata\",0]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2_ATC1441",
   "tag":"0102",
   "cond":["servicedata", "=", 26, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGDK"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "servicedata", 12, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "servicedata", 16, 2, false]
      },
      "batt":{
         "decoder":["vfhd", "servicedata", 18, 2, false]
      },
      "volt":{
         "decoder":["vfhd", "servicedata", 20, 4, false],
         "post_proc":["/", 1000]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "servicedata", 0]
      }
   }
})"""";*/

// PVVX
const char* _CGDK2_json_PVVX = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_PVVX\",\"tag\":\"0102\",\"cond\":[\"servicedata\",\"=\",30,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGD\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"servicedata\",12,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",16,4,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"servicedata\",24,2,false]},\"volt\":{\"decoder\":[\"vfhd\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",0]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2_PVVX",
   "tag":"0102",
   "cond":["servicedata", "=", 30, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGD"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "servicedata", 12, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "servicedata", 16, 4, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "servicedata", 24, 2, false]
      },
      "volt":{
         "decoder":["vfhd", "servicedata", 20, 4, true],
         "post_proc":["/", 1000]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 0]
      }
   }
})"""";*/

const char* _CGDK2_json_props = _common_BVTH_props;
