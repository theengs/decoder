const char* _IBT_4XS_json = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4XS\",\"condition\":[\"name\",\"index\",0,\"iBBQ\",\"&\",\"manufacturerdata\",\"index\",0,\"00000000\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true],\"post_proc\":[\"/\",10]},\"tempc2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true],\"post_proc\":[\"/\",10]},\"tempc3\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true],\"post_proc\":[\"/\",10]},\"tempc4\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true],\"post_proc\":[\"/\",10]}}}";

/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-4XS",
   "condition":["name", "index", 0, "iBBQ","&","manufacturerdata", "index", 0, "00000000"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true],
         "post_proc":["/", 10]
      },
      "tempc3":{
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true],
         "post_proc":["/", 10]
      },
      "tempc4":{
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _IBT_4XS_json_props = 
R""""(
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
})"""";