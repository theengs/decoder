const char* _CGP22C_json = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Thermo-Hygrometer CO2 Detector\",\"model_id\":\"CGP22C\",\"tag\":\"0f\",\"cond\":[\"svd\",\"=\",42,\"ind\",2,\"5d\",\"&\",\"uuid\",\"ind\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true,true],\"pprc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",24,4,true,false],\"pprc\":[\"/\",10]},\"co2\":{\"decoder\":[\"vfhd\",\"svd\",38,4,true,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",32,2,false,false],\"pprc\":[\"&\",127]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",4]}}}";
/*R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Thermo-Hygrometer CO2 Detector",
   "model_id":"CGP22C",
   "tag":"0f",
   "cond":["svd", "=", 42, "ind", 2, "5d", "&", "uuid", "ind", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 20, 4, true, true],
         "pprc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 24, 4, true, false],
         "pprc":["/", 10]
      },
      "co2":{
         "decoder":["vfhd", "svd", 38, 4, true, false]
      },
      "batt":{
         "decoder":["vfhd", "svd", 32, 2, false, false],
         "pprc":["&", 127]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 4]
      }
   }
})"""";*/

const char* _CGP22C_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"co2\":{\"unit\":\"ppm\",\"name\":\"carbon_dioxide\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
