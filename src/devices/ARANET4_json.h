const char* _ARANET4_json = "{\"brand\":\"Aranet\",\"model\":\"Aranet4 CO₂ Monitor\",\"model_id\":\"ARANET4\",\"tag\":\"0f\",\"cond\":[\"manufacturerdata\",\"=\",48,\"index\",0,\"0207\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",24,4,true,true],\"post_proc\":[\"/\",20]},\"hum\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",32,2,false,false]},\"pres\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"co2\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",20,4,true,false]},\"batt\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",34,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"Aranet",
   "model":"Aranet4 CO₂ Monitor",
   "model_id":"ARANET4",
   "tag":"0f",
   "cond":["manufacturerdata", "=", 48, "index", 0, "0207"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "manufacturerdata", 24, 4, true, true],
         "post_proc":["/", 20]
      },
      "hum":{
         "decoder":["vfhd", "manufacturerdata", 32, 2, false, false]
      },
      "pres":{
         "decoder":["vfhd", "manufacturerdata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "co2":{
         "decoder":["vfhd", "manufacturerdata", 20, 4, true, false]
      },
      "batt":{
         "decoder":["vfhd", "manufacturerdata", 34, 2, false, false],
         "post_proc":["&", 127]
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
