#include "common_props.h"

const char* _SBOT_json = "{\"brand\":\"SwitchBot\",\"model\":\"Outdoor Meter\",\"model_id\":\"W340001X\",\"tag\":\"0102\",\"condition\":[\"servicedata\",\"=\",6,\"index\",0,\"77\",\"&\",\"uuid\",\"index\",0,\"fd3d\",\"&\",\"manufacturerdata\",\"=\",28],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",21,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"condition\":[\"manufacturerdata\",22,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"condition\":[\"manufacturerdata\",22,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,2,false,false],\"post_proc\":[\"&\",127]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Outdoor Meter",
   "model_id":"W340001X",
   "tag":"0102", 
   "condition":["servicedata", "=", 6, "index", 0, "77", "&", "uuid", "index", 0, "fd3d", "&", "manufacturerdata", "=", 28],
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
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 4]
      }
   }
})"""";*/

const char* _SBOT_json_props = _common_BTHM_props;
