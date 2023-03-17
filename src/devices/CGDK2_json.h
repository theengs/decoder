#include "common_props.h"

const char* _CGDK2_json_STOCK = "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"tag\":\"01\",\"condition\":[\"servicedata\",\"=\",34,\"index\",2,\"10\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2",
   "tag":"01",
   "condition":["servicedata", "=", 34, "index", 2, "10", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

// ATC1441
const char* _CGDK2_json_ATC1441 = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_ATC1441\",\"tag\":\"0102\",\"condition\":[\"servicedata\",\"=\",26,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGDK\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,false],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2_ATC1441",
   "tag":"0102",
   "condition":["servicedata", "=", 26, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGDK"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 18, 2, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

// PVVX
const char* _CGDK2_json_PVVX = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_PVVX\",\"tag\":\"0102\",\"condition\":[\"servicedata\",\"=\",30,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGDK\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"TH Lite",
   "model_id":"CGDK2_PVVX",
   "tag":"0102",
   "condition":["servicedata", "=", 30, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGDK"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 4, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 24, 2, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _CGDK2_json_props = _common_BVTH_props;
