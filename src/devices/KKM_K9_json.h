const char* _KKM_K9_json = "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"tag\":\"0708\",\"cond\":[\"svd\",\"=\",30,\"ind\",0,\"21010f\",\"&\",\"uuid\",\"ind\",0,\"feaa\"],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"svd\",12,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",10,2,false,true],\"post_proc\":[\"+\",\".cal\"]},\"_.cal\":{\"decoder\":[\"vfhd\",\"svd\",16,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",14,2,false,false],\"post_proc\":[\"+\",\".cal\"]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",6,4,false,false],\"post_proc\":[\"/\",1000]},\"accx\":{\"cond\":[\"svd\",0,\"21010f\"],\"decoder\":[\"vfhd\",\"svd\",18,4,false,true]},\"accy\":{\"cond\":[\"svd\",0,\"21010f\"],\"decoder\":[\"vfhd\",\"svd\",22,4,false,true]},\"accz\":{\"cond\":[\"svd\",0,\"21010f\"],\"decoder\":[\"vfhd\",\"svd\",26,4,false,true]}}}";
/*R""""(
{
   "brand":"KKM",
   "model":"Tracking K9",
   "model_id":"K9",
   "tag":"0708",
   "cond":["svd", "=", 30, "ind", 0, "21010f", "&", "uuid", "ind", 0, "feaa"],
   "properties":{
      ".cal":{
         "decoder":["vfhd", "svd", 12, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "tempc":{
         "decoder":["vfhd", "svd", 10, 2, false, true],
         "post_proc":["+", ".cal"]
      },
      "_.cal":{
         "decoder":["vfhd", "svd", 16, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "hum":{
         "decoder":["vfhd", "svd", 14, 2, false, false],
         "post_proc":["+", ".cal"]
      },
      "volt":{
         "decoder":["vfhd", "svd", 6, 4, false, false],
         "post_proc":["/", 1000]
      },
      "accx":{
         "cond":["svd", 0, "21010f"],
         "decoder":["vfhd", "svd", 18, 4, false, true]
      },
      "accy":{
         "cond":["svd", 0, "21010f"],
         "decoder":["vfhd", "svd", 22, 4, false, true]
      },
      "accz":{
         "cond":["svd", 0, "21010f"],
         "decoder":["vfhd", "svd", 26, 4, false, true]
      }
   }
})"""";*/

const char* _KKM_K9_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"accx\":{\"unit\":\"m/s²\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"m/s²\",\"name\":\"acceleration y\"},\"accz\":{\"unit\":\"m/s²\",\"name\":\"acceleration z\"}}}";
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
      },
      "accx":{
         "unit":"m/s²",
         "name":"acceleration x"
      },
      "accy":{
         "unit":"m/s²",
         "name":"acceleration y"
      },
      "accz":{
         "unit":"m/s²",
         "name":"acceleration z"
      }
   }
})"""";*/
