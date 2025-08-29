#include "common_props.h"

const char* _SBOT_json = "{\"brand\":\"SwitchBot\",\"model\":\"Outdoor Meter\",\"model_id\":\"W340001X\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",6,\"ind\",0,\"77\",\"&\",\"uuid\",\"ind\",0,\"fd3d\",\"&\",\"mfd\",\"=\",28],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"mfd\",21,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,0],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",24,2,false,false],\"post_proc\":[\"&\",127]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",4,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Outdoor Meter",
   "model_id":"W340001X",
   "tag":"0102", 
   "cond":["svd", "=", 6, "ind", 0, "77", "&", "uuid", "ind", 0, "fd3d", "&", "mfd", "=", 28],
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
      "batt":{
         "decoder":["vfhd", "svd", 4, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 4]
      }
   }
})"""";*/

const char* _SBOT_json_M = "{\"brand\":\"SwitchBot\",\"model\":\"Outdoor Meter\",\"model_id\":\"W340001X\",\"tag\":\"0100\",\"cond\":[\"mfd\",\"=\",28,\"&\",\"name\",\"ind\",0,\"WoIOSensorTH\"],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"mfd\",21,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,0],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",24,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Outdoor Meter",
   "model_id":"W340001X",
   "tag":"0100", 
   "cond":["mfd", "=", 28, "&", "name", "ind", 0, "WoIOSensorTH"],
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

const char* _SBOT_json_S = "{\"brand\":\"SwitchBot\",\"model\":\"Outdoor Meter\",\"model_id\":\"W340001X\",\"tag\":\"0100\",\"cond\":[\"svd\",\"=\",6,\"ind\",0,\"77\",\"&\",\"name\",\"ind\",0,\"WoIOSensorTH\"],\"properties\":{\"batt\":{\"decoder\":[\"vfhd\",\"svd\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Outdoor Meter",
   "model_id":"W340001X",
   "tag":"0100", 
   "cond":["svd", "=", 6, "ind", 0, "77", "&", "name", "ind", 0, "WoIOSensorTH"],
   "properties":{
      "batt":{
         "decoder":["vfhd", "svd", 4, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _SBOT_json_props = _common_BTHM_props;
