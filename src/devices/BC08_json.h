const char* _BC08_json = "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"tag\":\"0708\",\"condition\":[\"servicedata\",\"=\",26,\"index\",0,\"21010b\",\"&\",\"uuid\",\"index\",0,\"feaa\"],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,2,false,false],\"post_proc\":[\"/\",256,\"*\",100,\">\",0,\"/\",100]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",10,2,false,true],\"post_proc\":[\"+\",\".cal\"]},\"accx\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,4,false,true]},\"accy\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,false,true]},\"accz\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,false,true]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",6,4,false,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"BlueCharm",
   "model":"Beacon 08/04P/021",
   "model_id":"KSensor",
   "tag":"0708",
   "condition":["servicedata", "=", 26, "index", 0, "21010b", "&", "uuid", "index", 0, "feaa"],
   "properties":{
      ".cal":{
         "decoder":["value_from_hex_data", "servicedata", 12, 2, false, false],
         "post_proc":["/", 256, "*", 100, ">", 0, "/", 100]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 10, 2, false, true],
         "post_proc":["+", ".cal"]
      },
      "accx":{
         "decoder":["value_from_hex_data", "servicedata", 14, 4, false, true]
      },
      "accy":{
         "decoder":["value_from_hex_data", "servicedata", 18, 4, false, true]
      },
      "accz":{
         "decoder":["value_from_hex_data", "servicedata", 22, 4, false, true]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 6, 4, false, false],
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
