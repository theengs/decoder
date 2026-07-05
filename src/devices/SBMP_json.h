#include "common_props.h"

const char* _SBMP_json = "{\"brand\":\"SwitchBot\",\"model\":\"Meter Pro (CO2)\",\"model_id\":\"W490001X\",\"tag\":\"0202\",\"condition\":[\"servicedata\",\"=\",6,\"index\",0,\"35\",\"|\",\"servicedata\",\"=\",6,\"index\",0,\"34\",\"&\",\"uuid\",\"index\",0,\"fd3d\",\"&\",\"manufacturerdata\",\">=\",30,\"index\",0,\"6909\"],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",21,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"condition\":[\"manufacturerdata\",22,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"condition\":[\"manufacturerdata\",22,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,2,false,false],\"post_proc\":[\"&\",127]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",4]},\"co2\":{\"condition\":[\"manufacturerdata\",\"=\",36],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,false,false]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Meter Pro (CO2)",
   "model_id":"W490001X",
   "tag":"0202",
   "condition":["servicedata", "=", 6, "index", 0, "35", "|", "servicedata", "=", 6, "index", 0, "34", "&", "uuid", "index", 0, "fd3d", "&", "manufacturerdata", ">=", 30, "index", 0, "6909"],
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
      },
      "co2":{
         "condition":["manufacturerdata", "=", 36],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, false, false]
      }
   }
})"""";*/

const char* _SBMP_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"co2\":{\"unit\":\"ppm\",\"name\":\"carbon_dioxide\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "co2":{
         "unit":"ppm",
         "name":"carbon_dioxide"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
