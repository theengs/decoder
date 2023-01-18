const char* _CGP1W_json = "{\"brand\":\"ClearGrass\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"tag\":\"02\",\"condition\":[\"servicedata\",\"=\",42,\"index\",2,\"09\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,true,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"ClearGrass",
   "model":"Weather Station",
   "model_id":"CGP1W",
   "tag":"02",
   "condition":["servicedata", "=", 42, "index", 2, "09", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "pres":{
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _CGP1W_json_props = "{\"properties\":{\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "pres":{
         "unit":"hPa",
         "name":"pressure"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      }
   }
})"""";*/