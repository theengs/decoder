#include "common_props.h"

const char* _CGG1_json_STOCK = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"condition\":[\"servicedata\",\"=\",34,\"index\",2,\"07\",\"|\",\"servicedata\",\"=\",34,\"index\",2,\"16\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,2,false]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1",
   "condition":["servicedata", "=", 34, "index", 2, "07", "|", "servicedata", "=", 34, "index", 2, "16", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 32, 2, false]
      }
   }
})"""";*/

// ATC1441
const char* _CGG1_json_ATC1441 = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_ATC1441\",\"condition\":[\"servicedata\",\"=\",26,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGG\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,false],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1_ATC1441",
   "condition":["servicedata", "=", 26, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGG"],
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
const char* _CGG1_json_PVVX = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"condition\":[\"servicedata\",\"=\",30,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"CGG\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1_PVVX",
   "condition":["servicedata", "=", 30, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "CGG"],
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

const char* _CGG1_json_STOCK_2 = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"condition\":[\"servicedata\",\"=\",30,\"|\",\"servicedata\",\"=\",32,\"|\",\"servicedata\",\"=\",36,\"&\",\"name\",\"index\",0,\"Qingping Temp & RH\",\"|\",\"name\",\"index\",0,\"ClearGrass Temp & RH\",\"&\",\"uuid\",\"index\",0,\"fe95\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",\">=\",32,\"&\",\"servicedata\",23,\"!\",\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"condition\":[\"servicedata\",\"=\",36,\"&\",\"servicedata\",23,\"!\",\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,true],\"post_proc\":[\"/\",10]},\"_hum\":{\"condition\":[\"servicedata\",\"=\",32,\"&\",\"servicedata\",23,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true],\"post_proc\":[\"/\",10]},\"batt\":{\"condition\":[\"servicedata\",\"=\",30],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,2,false]}}}";
/*
R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Round TH",
   "model_id":"CGG1",
   "condition":["servicedata", "=", 30, "|", "servicedata", "=", 32, "|", "servicedata", "=", 36, "&", "name", "index", 0, "Qingping Temp & RH", "|", "name", "index", 0, "ClearGrass Temp & RH", "&","uuid", "index", 0, "fe95"],
   "properties":{
      "tempc":{
         // "condition":["servicedata", "=", 32, "|", "servicedata", "=", 36, "&", "servicedata", 23, "!", "6"], // not working!!
         "condition":["servicedata", ">=", 32, "&", "servicedata", 23, "!", "6"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "condition":["servicedata", "=", 36, "&", "servicedata", 23, "!", "6"],
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true],
         "post_proc":["/", 10]
      },
      "_hum":{
         "condition":["servicedata", "=", 32, "&", "servicedata", 23, "6"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":["/", 10]
      },
      "batt":{
         "condition":["servicedata", "=", 30],
         "decoder":["value_from_hex_data", "servicedata", 28, 2, false]      
      }
   }
})"""";*/

const char* _CGG1_json_props = _common_BVTH_props;
