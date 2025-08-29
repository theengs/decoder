#include "common_props.h"

const char* _H5102_json = "{\"brand\":\"Govee\",\"model\":\"Smart Thermo-Hygrometer\",\"model_id\":\"H5100/01/02/04/05/08/74/77\",\"tag\":\"0103\",\"cond\":[\"name\",\"index\",0,\"GVH5100\",\"|\",\"name\",\"index\",0,\"GVH5101\",\"|\",\"name\",\"index\",0,\"GVH5102\",\"|\",\"name\",\"index\",0,\"GVH5104\",\"|\",\"name\",\"index\",0,\"GVH5174\",\"|\",\"name\",\"index\",0,\"GVH5177\",\"|\",\"name\",\"index\",0,\"GVH5105\",\"|\",\"name\",\"index\",0,\"GV5108\",\"&\",\"manufacturerdata\",\">=\",16,\"index\",0,\"0100\"],\"properties\":{\"tempc\":{\"cond\":[\"manufacturerdata\",8,\"bit\",3,0],\"decoder\":[\"vfhd\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"_tempc\":{\"cond\":[\"manufacturerdata\",8,\"bit\",3,1],\"decoder\":[\"vfhd\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"&\",8388607,\"/\",1000,\">\",0,\"/\",10,\"*\",-1]},\"hum\":{\"cond\":[\"name\",\"not_contain\",\"GV5108\"],\"decoder\":[\"vfhd\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"&\",8388607,\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",14,2,false,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Smart Thermo-Hygrometer",
   "model_id":"H5100/01/02/04/05/08/74/77",
   "tag":"0103",
   "cond":["name", "index", 0, "GVH5100", "|", "name", "index", 0, "GVH5101", "|", "name", "index", 0, "GVH5102", "|", "name", "index", 0, "GVH5104", "|", "name", "index", 0, "GVH5174", "|", "name", "index", 0, "GVH5177", "|", "name", "index", 0, "GVH5105", "|", "name", "index", 0, "GV5108", "&", "manufacturerdata", ">=", 16, "index", 0, "0100"],
   "properties":{
      "tempc":{
         "cond":["manufacturerdata", 8, "bit", 3, 0],
         "decoder":["vfhd", "manufacturerdata", 8, 6, false, false],
         "post_proc":["/", 1000, ">", 0, "/", 10]
      },
      "_tempc":{
         "cond":["manufacturerdata", 8, "bit", 3, 1],
         "decoder":["vfhd", "manufacturerdata", 8, 6, false, false],
         "post_proc":["&", 8388607, "/", 1000, ">", 0, "/", 10, "*", -1]
      },
      "hum":{
         "cond":["name", "not_contain", "GV5108"],
         "decoder":["vfhd", "manufacturerdata", 8, 6, false, false],
         "post_proc":["&", 8388607, "%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["vfhd", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";*/

const char* _H5102_json_props = _common_BTH_props;
