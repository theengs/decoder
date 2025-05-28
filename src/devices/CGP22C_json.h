const char* _CGP22C_json = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Thermo-Hygrometer CO2 Detector\",\"model_id\":\"CGP22C\",\"tag\":\"0f\",\"condition\":[\"servicedata\",\"=\",42,\"index\",2,\"5d\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"co2\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",38,4,true,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",4]}}}";
/*R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Thermo-Hygrometer CO2 Detector",
   "model_id":"CGP22C",
   "tag":"0f",
   "condition":["servicedata", "=", 42, "index", 2, "5d", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "co2":{
         "decoder":["value_from_hex_data", "servicedata", 38, 4, true, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 32, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 4]
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
