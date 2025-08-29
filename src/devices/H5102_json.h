#include "common_props.h"

const char* _H5102_json = "{\"brand\":\"Govee\",\"model\":\"Smart Thermo-Hygrometer\",\"model_id\":\"H5100/01/02/04/05/08/74/77\",\"tag\":\"0103\",\"cond\":[\"name\",\"ind\",0,\"GVH5100\",\"|\",\"name\",\"ind\",0,\"GVH5101\",\"|\",\"name\",\"ind\",0,\"GVH5102\",\"|\",\"name\",\"ind\",0,\"GVH5104\",\"|\",\"name\",\"ind\",0,\"GVH5174\",\"|\",\"name\",\"ind\",0,\"GVH5177\",\"|\",\"name\",\"ind\",0,\"GVH5105\",\"|\",\"name\",\"ind\",0,\"GV5108\",\"&\",\"mfd\",\">=\",16,\"ind\",0,\"0100\"],\"properties\":{\"tempc\":{\"cond\":[\"mfd\",8,\"bit\",3,0],\"decoder\":[\"vfhd\",\"mfd\",8,6,false,false],\"pprc\":[\"/\",1000,\">\",0,\"/\",10]},\"_tempc\":{\"cond\":[\"mfd\",8,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",8,6,false,false],\"pprc\":[\"&\",8388607,\"/\",1000,\">\",0,\"/\",10,\"*\",-1]},\"hum\":{\"cond\":[\"name\",\"not_contain\",\"GV5108\"],\"decoder\":[\"vfhd\",\"mfd\",8,6,false,false],\"pprc\":[\"&\",8388607,\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",14,2,false,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Smart Thermo-Hygrometer",
   "model_id":"H5100/01/02/04/05/08/74/77",
   "tag":"0103",
   "cond":["name", "ind", 0, "GVH5100", "|", "name", "ind", 0, "GVH5101", "|", "name", "ind", 0, "GVH5102", "|", "name", "ind", 0, "GVH5104", "|", "name", "ind", 0, "GVH5174", "|", "name", "ind", 0, "GVH5177", "|", "name", "ind", 0, "GVH5105", "|", "name", "ind", 0, "GV5108", "&", "mfd", ">=", 16, "ind", 0, "0100"],
   "properties":{
      "tempc":{
         "cond":["mfd", 8, "bit", 3, 0],
         "decoder":["vfhd", "mfd", 8, 6, false, false],
         "pprc":["/", 1000, ">", 0, "/", 10]
      },
      "_tempc":{
         "cond":["mfd", 8, "bit", 3, 1],
         "decoder":["vfhd", "mfd", 8, 6, false, false],
         "pprc":["&", 8388607, "/", 1000, ">", 0, "/", 10, "*", -1]
      },
      "hum":{
         "cond":["name", "not_contain", "GV5108"],
         "decoder":["vfhd", "mfd", 8, 6, false, false],
         "pprc":["&", 8388607, "%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 14, 2, false, false]
      }
   }
})"""";*/

const char* _H5102_json_props = _common_BTH_props;
