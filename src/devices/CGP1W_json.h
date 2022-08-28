const char* _CGP1W_json = "{\"brand\":\"Cleargrass\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"condition\":[\"servicedata\",\"=\",42,\"index\",2,\"09\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Cleargrass",
   "model":"Weather Station",
   "model_id":"CGP1W",
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
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _CGP1W_json_props = "{\"properties\":{\"pres\":{\"unit\":\"kpa\",\"name\":\"pressure\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "pres":{
         "unit":"kpa",
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