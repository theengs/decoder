const char* _IBT_4XS_json = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4XS\",\"condition\":[\"name\",\"index\",0,\"iBBQ\",\"&\",\"manufacturerdata\",\"=\",36,\"index\",0,\"00000000\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",20,\"!\",\"f6ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"condition\":[\"manufacturerdata\",24,\"!\",\"f6ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"tempc3\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"f6ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"tempc4\":{\"condition\":[\"manufacturerdata\",32,\"!\",\"f6ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-4XS",
   "condition":["name", "index", 0, "iBBQ","&","manufacturerdata", "=" ,36 ,"index", 0, "00000000"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 20, "!", "f6ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "condition":["manufacturerdata", 24, "!", "f6ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc3":{
         "condition":["manufacturerdata", 28, "!", "f6ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc4":{
         "condition":["manufacturerdata", 32, "!", "f6ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _IBT_4XS_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc3\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc4\":{\"unit\":\"°C\",\"name\":\"temperature\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc2":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc3":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc4":{
         "unit":"°C",
         "name":"temperature"
      }
   }
})"""";*/