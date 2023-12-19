const char* _ARANET4_json = "{\"brand\":\"Aranet\",\"model\":\"Aranet4 CO₂ Monitor\",\"model_id\":\"ARANET4\",\"tag\":\"0f\",\"condition\":[\"manufacturerdata\",\"=\",48,\"index\",0,\"0207\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,true],\"post_proc\":[\"/\",20]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,false]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"co2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"Aranet",
   "model":"Aranet4 CO₂ Monitor",
   "model_id":"ARANET4",
   "tag":"0f",
   "condition":["manufacturerdata", "=", 48, "index", 0, "0207"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, true],
         "post_proc":["/", 20]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 2, false, false]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "co2":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 2, false, false],
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
