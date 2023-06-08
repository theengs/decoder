const char* _KKM_K9_json = "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"tag\":\"0708\",\"condition\":[\"servicedata\",\"=\",30,\"index\",0,\"21010f\",\"&\",\"uuid\",\"index\",0,\"feaa\"],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",10,2,false,true],\"post_proc\":[\"+\",\".cal\"]},\"_.cal\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,2,false,false],\"post_proc\":[\"+\",\".cal\"]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",6,4,false,false],\"post_proc\":[\"/\",1000]},\"accx\":{\"condition\":[\"servicedata\",0,\"21010f\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,false,true]},\"accy\":{\"condition\":[\"servicedata\",0,\"21010f\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,false,true]},\"accz\":{\"condition\":[\"servicedata\",0,\"21010f\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",26,4,false,true]}}}";
/*R""""(
{
   "brand":"KKM",
   "model":"Tracking K9",
   "model_id":"K9",
   "tag":"0708",
   "condition":["servicedata", "=", 30, "index", 0, "21010f", "&", "uuid", "index", 0, "feaa"],
   "properties":{
      ".cal":{
         "decoder":["value_from_hex_data", "servicedata", 12, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 10, 2, false, true],
         "post_proc":["+", ".cal"]
      },
      "_.cal":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 14, 2, false, false],
         "post_proc":["+", ".cal"]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 6, 4, false, false],
         "post_proc":["/", 1000]
      },
      "accx":{
         "condition":["servicedata", 0, "21010f"],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, false, true]
      },
      "accy":{
         "condition":["servicedata", 0, "21010f"],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, false, true]
      },
      "accz":{
         "condition":["servicedata", 0, "21010f"],
         "decoder":["value_from_hex_data", "servicedata", 26, 4, false, true]
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
