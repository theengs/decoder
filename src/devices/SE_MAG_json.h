const char* _SE_MAG_json = "{\"brand\":\"Sensor Easy\",\"model\":\"SE MAG\",\"model_id\":\"SE_MAG\",\"tag\":\"0404\",\"condition\":[\"servicedata\",\"=\",4,\"&\",\"uuid\",\"index\",0,\"2a06\",\"&\",\"name\",\"index\",1,\" MAG\"],\"properties\":{\"open\":{\"decoder\":[\"bit_static_value\",\"servicedata\",1,0,true,false]},\"volt\":{\"condition\":[\"manufacturerdata\",\"=\",10,\"index\",4,\"f2\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false],\"post_proc\":[\"/\",1000]}}}";

/*
R""""(
{
   "brand":"Sensor Easy",
   "model":"SE MAG",
   "model_id":"SE_MAG",
   "tag":"0404",
   "condition":["servicedata", "=", 4, "&", "uuid", "index", 0, "2a06","&", "name", "index", 1, " MAG"],
   "properties":{
      "open":{
         "decoder":["bit_static_value", "servicedata", 1, 0, true, false]
      },
      "volt":{
         "condition":["manufacturerdata", "=", 10,"index", 4, "f2"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false],
         "post_proc":["/", 1000]
      }
   }
})"""";
*/

const char* _SE_MAG_json_props = "{\"properties\":{\"open\":{\"unit\":\"status\",\"name\":\"door\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";

/*
R""""(
{
   "properties": {
      "open":{
         "unit":"status",
         "name":"door"
      },
      "volt": {
         "unit": "V",
         "name": "voltage"
      }
   }
})"""";
*/
