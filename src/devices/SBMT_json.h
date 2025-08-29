#include "common_props.h"

const char* _SBMT_json = "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tag\":\"0102\",\"cond\":[\"servicedata\",\"=\",12,\"index\",0,\"54\",\"|\",\"servicedata\",\"=\",12,\"index\",0,\"69\",\"&\",[\"uuid\",\"index\",0,\"0d00\",\"|\",\"uuid\",\"index\",0,\"fd3d\"]],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"servicedata\",7,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"cond\":[\"servicedata\",8,\"bit\",3,0],\"decoder\":[\"vfhd\",\"servicedata\",8,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"cond\":[\"servicedata\",8,\"bit\",3,1],\"decoder\":[\"vfhd\",\"servicedata\",8,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",10,2,false,false],\"post_proc\":[\"&\",127]},\"batt\":{\"decoder\":[\"vfhd\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Meter (Plus)",
   "model_id":"THX1/W230150X",
   "tag":"0102",
   "cond":["servicedata", "=", 12, "index", 0, "54", "|", "servicedata", "=", 12, "index", 0, "69", "&", ["uuid", "index", 0, "0d00", "|", "uuid", "index", 0, "fd3d"]],
   "properties":{
      ".cal":{
         "decoder":["vfhd", "servicedata", 7, 1, false, false],
         "post_proc":["/", 10]
      },
      "tempc":{
         "cond":["servicedata", 8, "bit", 3, 0],
         "decoder":["vfhd", "servicedata", 8, 2, true, false],
         "post_proc":["+", ".cal", "*", -1]
      },
      "_tempc":{
         "cond":["servicedata", 8, "bit", 3, 1],
         "decoder":["vfhd", "servicedata", 8, 2, true, false],
         "post_proc":["+", ".cal", "-", 128]
      },
      "hum":{ 
         "decoder":["vfhd", "servicedata", 10, 2, false, false],
         "post_proc":["&", 127]
      },
      "batt":{
         "decoder":["vfhd", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _SBMT_json_M = "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tag\":\"0100\",\"cond\":[\"name\",\"index\",0,\"WoSensorTH\",\"&\",\"mfd\",\"=\",26],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"mfd\",21,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,0],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",24,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Meter (Plus)",
   "model_id":"THX1/W230150X",
   "tag":"0100",
   "cond":["name", "index", 0, "WoSensorTH", "&", "mfd", "=", 26],
   "properties":{
      ".cal":{
         "decoder":["vfhd", "mfd", 21, 1, false, false],
         "post_proc":["/", 10]
      },
      "tempc":{
         "cond":["mfd", 22, "bit", 3, 0],
         "decoder":["vfhd", "mfd", 22, 2, true, false],
         "post_proc":["+", ".cal", "*", -1]
      },
      "_tempc":{
         "cond":["mfd", 22, "bit", 3, 1],
         "decoder":["vfhd", "mfd", 22, 2, true, false],
         "post_proc":["+", ".cal", "-", 128]
      },
      "hum":{ 
         "decoder":["vfhd", "mfd", 24, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 4]
      }
   }
})"""";*/

const char* _SBMT_json_props = _common_BTHM_props;
