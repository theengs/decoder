#include "common_props.h"

const char* _SBMT_json = "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tag\":\"0102\",\"condition\":[\"servicedata\",\"=\",12,\"index\",0,\"54\",\"|\",\"servicedata\",\"=\",12,\"index\",0,\"69\",\"&\",[\"uuid\",\"index\",0,\"0d00\",\"|\",\"uuid\",\"index\",0,\"fd3d\"]],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",7,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"condition\":[\"servicedata\",8,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"condition\":[\"servicedata\",8,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",10,2,false,false],\"post_proc\":[\"&\",127]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Meter (Plus)",
   "model_id":"THX1/W230150X",
   "tag":"0102",
   "condition":["servicedata", "=", 12, "index", 0, "54", "|", "servicedata", "=", 12, "index", 0, "69", "&", ["uuid", "index", 0, "0d00", "|", "uuid", "index", 0, "fd3d"]],
   "properties":{
      ".cal":{
         "decoder":["value_from_hex_data", "servicedata", 7, 1, false, false],
         "post_proc":["/", 10]
      },
      "tempc":{
         "condition":["servicedata", 8, "bit", 3, 0],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, true, false],
         "post_proc":["+", ".cal", "*", -1]
      },
      "_tempc":{
         "condition":["servicedata", 8, "bit", 3, 1],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, true, false],
         "post_proc":["+", ".cal", "-", 128]
      },
      "hum":{ 
         "decoder":["value_from_hex_data", "servicedata", 10, 2, false, false],
         "post_proc":["&", 127]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _SBMT_json_M = "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tag\":\"0100\",\"condition\":[\"name\",\"index\",0,\"WoSensorTH\",\"&\",\"manufacturerdata\",\"=\",26],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",21,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"condition\":[\"manufacturerdata\",22,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"condition\":[\"manufacturerdata\",22,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Meter (Plus)",
   "model_id":"THX1/W230150X",
   "tag":"0100",
   "condition":["name", "index", 0, "WoSensorTH", "&", "manufacturerdata", "=", 26],
   "properties":{
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 21, 1, false, false],
         "post_proc":["/", 10]
      },
      "tempc":{
         "condition":["manufacturerdata", 22, "bit", 3, 0],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 2, true, false],
         "post_proc":["+", ".cal", "*", -1]
      },
      "_tempc":{
         "condition":["manufacturerdata", 22, "bit", 3, 1],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 2, true, false],
         "post_proc":["+", ".cal", "-", 128]
      },
      "hum":{ 
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 4]
      }
   }
})"""";*/

const char* _SBMT_json_props = _common_BTHM_props;
