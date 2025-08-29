const char* _BC08_json = "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"tag\":\"0708\",\"cond\":[\"uuid\",\"ind\",0,\"feaa\",\"&\",\"svd\",\"=\",26,\"ind\",0,\"21010b\",\"|\",\"svd\",\"=\",26,\"ind\",0,\"21000b\"],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"svd\",12,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",10,2,false,true],\"post_proc\":[\"+\",\".cal\"]},\"accx\":{\"decoder\":[\"vfhd\",\"svd\",14,4,false,true]},\"accy\":{\"decoder\":[\"vfhd\",\"svd\",18,4,false,true]},\"accz\":{\"decoder\":[\"vfhd\",\"svd\",22,4,false,true]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",6,4,false,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"BlueCharm",
   "model":"Beacon 08/04P/021",
   "model_id":"KSensor",
   "tag":"0708",
   "cond":["uuid", "ind", 0, "feaa", "&", "svd", "=", 26, "ind", 0, "21010b", "|", "svd", "=", 26, "ind", 0, "21000b"],
   "properties":{
      ".cal":{
         "decoder":["vfhd", "svd", 12, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "tempc":{
         "decoder":["vfhd", "svd", 10, 2, false, true],
         "post_proc":["+", ".cal"]
      },
      "accx":{
         "decoder":["vfhd", "svd", 14, 4, false, true]
      },
      "accy":{
         "decoder":["vfhd", "svd", 18, 4, false, true]
      },
      "accz":{
         "decoder":["vfhd", "svd", 22, 4, false, true]
      },
      "volt":{
         "decoder":["vfhd", "svd", 6, 4, false, false],
          "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _BC08_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"accx\":{\"unit\":\"m/s²\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"m/s²\",\"name\":\"acceleration y\"},\"accz\":{\"unit\":\"m/s²\",\"name\":\"acceleration z\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
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
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
