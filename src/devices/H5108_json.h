#include "common_props.h"

const char* _H5108_json = "{\"brand\":\"Govee\",\"model\":\"Smart Probe Thermometer\",\"model_id\":\"H5108\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"GV5108\",\"&\",\"manufacturerdata\",\">=\",20,\"index\",0,\"0100\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"_tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"&\",8388607,\"/\",1000,\">\",0,\"/\",10,\"*\",-1]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false],\"post_proc\":[\"&\",127]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Smart Probe Thermometer",
   "model_id":"H5108",
   "tag":"0103",
   "condition":["name", "index", 0, "GV5108","&", "manufacturerdata", ">=", 20, "index", 0, "0100"],
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
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _H5108_json_props = _common_BTH_props;
