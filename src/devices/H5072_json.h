#include "common_props.h"

const char* _H5072_json = "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5072/75\",\"tag\":\"0103\",\"cond\":[\"name\",\"index\",0,\"GVH5072\",\"|\",\"name\",\"index\",0,\"GVH5075\",\"&\",\"manufacturerdata\",\">=\",16,\"index\",0,\"88ec\"],\"properties\":{\"tempc\":{\"cond\":[\"manufacturerdata\",6,\"bit\",3,0],\"decoder\":[\"vfhd\",\"manufacturerdata\",6,6,false,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"_tempc\":{\"cond\":[\"manufacturerdata\",6,\"bit\",3,1],\"decoder\":[\"vfhd\",\"manufacturerdata\",6,6,false,false],\"post_proc\":[\"&\",8388607,\"/\",10000,\"*\",-1]},\"hum\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",6,6,false,false],\"post_proc\":[\"&\",8388607,\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",12,2,false,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Thermo-Hygrometer",
   "model_id":"H5072/75",
   "tag":"0103",
   "cond":["name", "index", 0, "GVH5072", "|", "name", "index", 0, "GVH5075", "&", "manufacturerdata", ">=", 16, "index", 0, "88ec"],
   "properties":{
      "tempc":{
         "cond":["manufacturerdata", 6, "bit", 3, 0],
         "decoder":["vfhd", "manufacturerdata", 6, 6, false, false],
         "post_proc":["/", 1000, ">", 0, "/", 10]
      },
      "_tempc":{
         "cond":["manufacturerdata", 6, "bit", 3, 1],
         "decoder":["vfhd", "manufacturerdata", 6, 6, false, false],
         "post_proc":["&", 8388607, "/", 10000, "*", -1]
      },
      "hum":{
         "decoder":["vfhd", "manufacturerdata", 6, 6, false, false],
         "post_proc":["&", 8388607, "%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["vfhd", "manufacturerdata", 12, 2, false, false]
      }
   }
})"""";*/

const char* _H5072_json_props = _common_BTH_props;
