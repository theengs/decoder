#include "common_props.h"

const char* _H5102_json = "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5101/02/74/77\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"GVH5101\",\"|\",\"name\",\"index\",0,\"GVH5102\",\"|\",\"name\",\"index\",0,\"GVH5174\",\"|\",\"name\",\"index\",0,\"GVH5177\",\"&\",\"manufacturerdata\",\"=\",16,\"index\",0,\"0100\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"_tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"&\",8388607,\"/\",1000,\">\",0,\"/\",10,\"*\",-1]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Smart Thermo Hygrometer",
   "model_id":"H5101/02/74/77",
   "tag":"0103",
   "condition":["name", "index", 0, "GVH5101", "|", "name", "index", 0, "GVH5102", "|", "name", "index", 0, "GVH5174", "|", "name", "index", 0, "GVH5177", "&", "manufacturerdata", "=", 16, "index", 0, "0100"],
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
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false, false],
         "post_proc":["%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";*/

const char* _H5102_json_props = _common_BTH_props;
