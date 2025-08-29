const char* _KKM_K6P_json = "{\"brand\":\"KKM\",\"model\":\"Long Range K6P\",\"model_id\":\"K6P\",\"tag\":\"01\",\"cond\":[\"servicedata\",\"=\",18,\"index\",0,\"210107\",\"&\",\"uuid\",\"index\",0,\"feaa\"],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"servicedata\",12,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"tempc\":{\"decoder\":[\"vfhd\",\"servicedata\",10,2,false,true],\"post_proc\":[\"+\",\".cal\"]},\"_.cal\":{\"decoder\":[\"vfhd\",\"servicedata\",16,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",14,2,false,false],\"post_proc\":[\"+\",\".cal\"]},\"volt\":{\"decoder\":[\"vfhd\",\"servicedata\",6,4,false,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"KKM",
   "model":"Long Range K6P",
   "model_id":"K6P",
   "tag":"01",
   "cond":["servicedata", "=", 18, "index", 0, "210107", "&", "uuid", "index", 0, "feaa"],
   "properties":{
      ".cal":{
         "decoder":["vfhd", "servicedata", 12, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "tempc":{
         "decoder":["vfhd", "servicedata", 10, 2, false, true],
         "post_proc":["+", ".cal"]
      },
      "_.cal":{
         "decoder":["vfhd", "servicedata", 16, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "hum":{
         "decoder":["vfhd", "servicedata", 14, 2, false, false],
         "post_proc":["+", ".cal"]
      },
      "volt":{
         "decoder":["vfhd", "servicedata", 6, 4, false, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _KKM_K6P_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
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
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
