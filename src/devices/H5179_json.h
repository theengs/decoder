#include "common_props.h"

const char* _H5179_json = "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5179\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"Govee_H5179\",\"&\",\"manufacturerdata\",\"=\",22,\"index\",0,\"0188ec\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,2,false,false]}}}";
/* R""""(
{
   "brand":"Govee",
   "model":"Thermo-Hygrometer",
   "model_id":"H5179",
   "tag":"0103",
   "condition":["name", "index", 0, "Govee_H5179", "&", "manufacturerdata", "=", 22, "index", 0, "0188ec"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 2, false, false]
      }
   }
})"""";*/

const char* _H5179_json_N = "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5179_N\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"GV5179\",\"&\",\"manufacturerdata\",\">=\",16,\"index\",0,\"0100\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"_tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"&\",8388607,\"/\",1000,\">\",0,\"/\",10,\"*\",-1]},\"hum\":{\"condition\":[\"name\",\"not_contain\",\"GV5108\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"&\",8388607,\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Thermo-Hygrometer",
   "model_id":"H5179_N",
   "tag":"0103",
   "condition":["name", "index", 0, "GV5179", "&", "manufacturerdata", ">=", 16, "index", 0, "0100"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 8, "bit", 3, 0],
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false, false],
         "post_proc":["/", 1000, ">", 0, "/", 10]
      },
      "_tempc":{
         "condition":["manufacturerdata", 8, "bit", 3, 1],
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false, false],
         "post_proc":["&", 8388607, "/", 1000, ">", 0, "/", 10, "*", -1]
      },
      "hum":{
         "condition":["name", "not_contain", "GV5108"],
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false, false],
         "post_proc":["&", 8388607, "%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";*/

const char* _H5179_json_props = _common_BTH_props;
