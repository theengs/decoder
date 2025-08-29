#include "common_props.h"

const char* _CGG1_json_STOCK = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",34,\"index\",2,\"07\",\"|\",\"svd\",\"=\",34,\"index\",2,\"16\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",24,4,true],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",32,2,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",4]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1",
   "tag":"01",
   "cond":["svd", "=", 34, "index", 2, "07", "|", "svd", "=", 34, "index", 2, "16", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 24, 4, true],
         "post_proc":["/", 10]
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
const char* _CGG1_json_ATC1441 = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_ATC1441\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",26,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGG\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",12,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",16,2,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",18,2,false]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",20,4,false],\"post_proc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"mfhd\",\"svd\",0]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1_ATC1441",
   "tag":"0102",
   "cond":["svd", "=", 26, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGG"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 12, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 16, 2, false]
      },
      "batt":{
         "decoder":["vfhd", "svd", 18, 2, false]
      },
      "volt":{
         "decoder":["vfhd", "svd", 20, 4, false],
         "post_proc":["/", 1000]
      },
      "mac":{
         "decoder":["mfhd", "svd", 0]
      }
   }
})"""";*/

// PVVX
const char* _CGG1_json_PVVX = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",30,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGG\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",12,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",16,4,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",24,2,false]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true],\"post_proc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",0]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1_PVVX",
   "tag":"0102",
   "cond":["svd", "=", 30, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGG"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 12, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "svd", 16, 4, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "svd", 24, 2, false]
      },
      "volt":{
         "decoder":["vfhd", "svd", 20, 4, true],
         "post_proc":["/", 1000]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 0]
      }
   }
})"""";*/

const char* _CGG1_json_STOCK_2 = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",30,\"|\",\"svd\",\"=\",32,\"|\",\"svd\",\"=\",36,\"&\",\"name\",\"index\",0,\"Qingping Temp & RH\",\"|\",\"name\",\"index\",0,\"ClearGrass Temp & RH\",\"&\",\"uuid\",\"index\",0,\"fe95\"],\"properties\":{\"tempc\":{\"cond\":[\"svd\",\">=\",32,\"&\",\"svd\",23,\"!\",\"6\"],\"decoder\":[\"vfhd\",\"svd\",28,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"cond\":[\"svd\",\"=\",36,\"&\",\"svd\",23,\"!\",\"6\"],\"decoder\":[\"vfhd\",\"svd\",32,4,true],\"post_proc\":[\"/\",10]},\"_hum\":{\"cond\":[\"svd\",\"=\",32,\"&\",\"svd\",23,\"6\"],\"decoder\":[\"vfhd\",\"svd\",28,4,true],\"post_proc\":[\"/\",10]},\"batt\":{\"cond\":[\"svd\",\"=\",30],\"decoder\":[\"vfhd\",\"svd\",28,2,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",10]}}}";
/*
R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1",
   "tag":"0102",
   "cond":["svd", "=", 30, "|", "svd", "=", 32, "|", "svd", "=", 36, "&", "name", "index", 0, "Qingping Temp & RH", "|", "name", "index", 0, "ClearGrass Temp & RH", "&","uuid", "index", 0, "fe95"],
   "properties":{
      "tempc":{
         "cond":["svd", ">=", 32, "&", "svd", 23, "!", "6"],
         "decoder":["vfhd", "svd", 28, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "cond":["svd", "=", 36, "&", "svd", 23, "!", "6"],
         "decoder":["vfhd", "svd", 32, 4, true],
         "post_proc":["/", 10]
      },
      "_hum":{
         "cond":["svd", "=", 32, "&", "svd", 23, "6"],
         "decoder":["vfhd", "svd", 28, 4, true],
         "post_proc":["/", 10]
      },
      "batt":{
         "cond":["svd", "=", 30],
         "decoder":["vfhd", "svd", 28, 2, false]      
      },
      "mac":{
         "decoder":["revmfhd", "svd", 10]
      }
   }
})"""";*/

const char* _CGG1_json_props = _common_BVTH_props;
