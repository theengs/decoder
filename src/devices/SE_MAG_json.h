const char* _SE_MAG_json = "{\"brand\":\"Sensor Easy\",\"model\":\"SE MAG\",\"model_id\":\"SE_MAG\",\"tag\":\"0404\",\"cond\":[\"svd\",\"=\",4,\"&\",\"uuid\",\"ind\",0,\"2a06\",\"&\",\"name\",\"ind\",1,\" MAG\"],\"properties\":{\"open\":{\"decoder\":[\"bit_static_value\",\"svd\",1,0,true,false]},\"volt\":{\"cond\":[\"mfd\",\"=\",10,\"ind\",4,\"f2\"],\"decoder\":[\"vfhd\",\"mfd\",6,4,true,false],\"pprc\":[\"/\",1000]}}}";

/*
R""""(
{
   "brand":"Sensor Easy",
   "model":"SE MAG",
   "model_id":"SE_MAG",
   "tag":"0404",
   "cond":["svd", "=", 4, "&", "uuid", "ind", 0, "2a06","&", "name", "ind", 1, " MAG"],
   "properties":{
      "open":{
         "decoder":["bit_static_value", "svd", 1, 0, true, false]
      },
      "volt":{
         "cond":["mfd", "=", 10,"ind", 4, "f2"],
         "decoder":["vfhd", "mfd", 6, 4, true, false],
         "pprc":["/", 1000]
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
