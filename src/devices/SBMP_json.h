#include "common_props.h"

const char* _SBMP_json = "{\"brand\":\"SwitchBot\",\"model\":\"Meter Pro (CO2)\",\"model_id\":\"W490001X\",\"tag\":\"0f02\",\"cond\":[\"uuid\",\"index\",0,\"fd3d\",\"&\",\"svd\",\"=\",6,\"index\",0,\"35\",\"&\",\"mfd\",\"=\",36,\"index\",0,\"6909\"],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"mfd\",21,1,false,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,0],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"*\",-1]},\"_tempc\":{\"cond\":[\"mfd\",22,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",22,2,true,false],\"post_proc\":[\"+\",\".cal\",\"-\",128]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",24,2,false,false],\"post_proc\":[\"&\",127]},\"co2\":{\"decoder\":[\"vfhd\",\"mfd\",30,4,false,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",4,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Meter Pro (CO2)",
   "model_id":"W490001X",
   "tag":"0f02",
   "cond":["uuid", "index", 0, "fd3d", "&", "svd", "=", 6, "index", 0, "35", "&", "mfd", "=", 36, "index", 0, "6909"],
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
      "co2":{
         "decoder":["vfhd", "mfd", 30, 4, false, false]
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
