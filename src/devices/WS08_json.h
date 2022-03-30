const char* _WS08_json = "{\"brand\":\"SensorBlue\",\"model\":\"WS08\",\"model_id\":\"WS08\",\"condition\":[\"mfrd\",\"=\",40,\"indx\",0,\"11000000\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",24,4,true],\"post_proc\":[\"/\",16]},\"hum\":{\"decoder\":[\"vfhd\",\"mfrd\",28,4,true],\"post_proc\":[\"/\",16]},\"volt\":{\"decoder\":[\"vfhd\",\"mfrd\",20,4,true],\"post_proc\":[\"/\",1000]}}}";

/*R""""(
{
   "brand":"SensorBlue",
   "model":"WS08",
   "model_id":"WS08",
   "condition":["mfrd", "=", 40, "indx", 0, "11000000"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfrd", 24, 4, true],
         "post_proc":["/", 16]
      },
      "hum":{
         "decoder":["vfhd", "mfrd", 28, 4, true],
         "post_proc":["/", 16]
      },
      "volt":{
         "decoder":["vfhd", "mfrd", 20, 4, true],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _WS08_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "volt":{
         "unit":"V",
         "name":"voltage"
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