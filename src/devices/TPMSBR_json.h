const char* _TPMSBR_json = "{\"brand\":\"GENERIC\",\"model\":\"BR TPMS\",\"model_id\":\"TPMSBR\",\"tag\":\"0a03\",\"condition\":[\"manufacturerdata\",\"=\",14,\"&\",\"name\",\"index\",0,\"BR\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,2,false]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,false,false],\"post_proc\":[\"/\",10,\"-\",14.5,\"/\",14.5]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,2,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"BR TPMS",
   "model_id":"TPMSBR",
   "tag":"0a03",
   "condition":["manufacturerdata", "=", 14, "&", "name", "index", 0, "BR"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 2, false]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, false, false],
         "post_proc":["/", 10, "-", 14.5, "/", 14.5]
      },
      "volt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 2, 2, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _TPMSBR_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"bar\",\"name\":\"pressure\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "pres":{
         "unit":"bar",
         "name":"pressure"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
