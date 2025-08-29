const char* _ARANET4_json = "{\"brand\":\"Aranet\",\"model\":\"Aranet4 CO₂ Monitor\",\"model_id\":\"ARANET4\",\"tag\":\"0f\",\"cond\":[\"mfd\",\"=\",48,\"ind\",0,\"0207\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",24,4,true,true],\"pprc\":[\"/\",20]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",32,2,false,false]},\"pres\":{\"decoder\":[\"vfhd\",\"mfd\",28,4,true,false],\"pprc\":[\"/\",10]},\"co2\":{\"decoder\":[\"vfhd\",\"mfd\",20,4,true,false]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",34,2,false,false],\"pprc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"Aranet",
   "model":"Aranet4 CO₂ Monitor",
   "model_id":"ARANET4",
   "tag":"0f",
   "cond":["mfd", "=", 48, "ind", 0, "0207"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 24, 4, true, true],
         "pprc":["/", 20]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 32, 2, false, false]
      },
      "pres":{
         "decoder":["vfhd", "mfd", 28, 4, true, false],
         "pprc":["/", 10]
      },
      "co2":{
         "decoder":["vfhd", "mfd", 20, 4, true, false]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 34, 2, false, false],
         "pprc":["&", 127]
      }
   }
})"""";*/

const char* _ARANET4_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"co2\":{\"unit\":\"ppm\",\"name\":\"carbon_dioxide\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
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
      "pres":{
         "unit":"hPa",
         "name":"pressure"
      },
      "co2":{
         "unit":"ppm",
         "name":"carbon_dioxide"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
