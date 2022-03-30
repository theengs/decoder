#include "common_props.h"

const char* _CGG1_json_v1 = "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v1\",\"model_id\":\"CGG1\",\"condition\":[\"svcd\",\"indx\",0,\"0807\",\"|\",\"svcd\",\"indx\",0,\"8816\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svcd\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svcd\",24,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"svcd\", 32, 2, true, false]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"CG_round_v1",
   "model_id":"CGG1",
   "condition":["svcd", "indx", 0, "0807", "|", "svcd", "indx", 0, "8816"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svcd", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svcd", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "svcd", 32, 2, false, false]
      }
   }
})"""";*/

const char* _CGG1_json_v2 = "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v2\",\"model_id\":\"CGG1\",\"condition\":[\"svcd\",\"indx\",4,\"4703\"],\"properties\":{\"tempc\":{\"condition\":[\"svcd\",23,\"d\"],\"decoder\":[\"vfhd\",\"svcd\",28,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"condition\":[\"svcd\",23,\"d\"],\"decoder\":[\"vfhd\",\"svcd\",32,4,true,false],\"post_proc\":[\"/\",10]},\"_tempc\":{\"condition\":[\"svcd\",23,\"4\"],\"decoder\":[\"vfhd\",\"svcd\",28,4,true],\"post_proc\":[\"/\",10]}}}";
/*
R""""(
{
   "brand":"Xiaomi",
   "model":"CG_round_v2",
   "model_id":"CGG1",
   "condition":["svcd", "indx", 4, "4703"],
   "properties":{
      "tempc":{
         "condition":["svcd", 23, "d"],
         "decoder":["vfhd", "svcd", 28, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "condition":["svcd", 23, "d"],
         "decoder":["vfhd", "svcd", 32, 4, true, false],
         "post_proc":["/", 10]
      },
      "_tempc":{
         "condition":["svcd", 23, "4"],
         "decoder":["vfhd", "svcd", 28, 4, true],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _CGG1_json_props = _common_BTH_props;
