#include "common_props.h"

const char* _CGG1_json_v1 = "{\"brand\":\"Qingping\",\"model\":\"Round TH v1\",\"model_id\":\"CGG1\",\"condition\":[\"servicedata\",\"=\",34,\"index\",2,\"07\",\"|\",\"servicedata\",\"=\",34,\"index\",2,\"16\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,2,false,false]}}}";
/* R""""(
{
   "brand":"Qingping",
   "model":"Round TH v1",
   "model_id":"CGG1",
   "condition":["servicedata", "=", 34, "index", 2, "07", "|", "servicedata", "=", 34, "index", 2, "16", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 32, 2, false, false]
      }
   }
})"""";*/

const char* _CGG1_json_v2 = "{\"brand\":\"Qingping\",\"model\":\"Round TH v2\",\"model_id\":\"CGG1\",\"condition\":[\"servicedata\",\"index\",4,\"4703\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",23,\"d\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"condition\":[\"servicedata\",23,\"d\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,true,false],\"post_proc\":[\"/\",10]},\"_tempc\":{\"condition\":[\"servicedata\",23,\"4\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true],\"post_proc\":[\"/\",10]}}}";
/*
R""""(
{
   "brand":"Qingping",
   "model":"Round TH v2",
   "model_id":"CGG1",
   "condition":["servicedata", "index", 4, "4703"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":["/", 10]
      },
      "_tempc":{
         "condition":["servicedata", 23, "4"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _CGG1_json_props = _common_BTH_props;
