const char* _CGH1_json = "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"tag\":\"0404\",\"condition\":[\"servicedata\",\"=\",34,\"index\",2,\"04\",\"|\",\"servicedata\",\"=\",28,\"index\",2,\"04\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"open\":{\"condition\":[\"servicedata\",\"=\",28],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,true,false]},\"_open\":{\"condition\":[\"servicedata\",\"=\",34],\"decoder\":[\"bit_static_value\",\"servicedata\",33,0,true,false]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"Contact Sensor",
   "model_id":"CGH1",
   "tag":"0404",
   "condition":["servicedata", "=", 34, "index", 2, "04", "|", "servicedata", "=", 28, "index", 2, "04", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "open":{
         "condition":["servicedata", "=", 28],
         "decoder":["bit_static_value", "servicedata", 21, 0, true, false]
      },
      "_open":{
         "condition":["servicedata", "=", 34],
         "decoder":["bit_static_value", "servicedata", 33, 0, true, false]
      }
   }
})"""";*/

const char* _CGH1_json_props = "{\"properties\":{\"open\":{\"unit\":\"status\",\"name\":\"door\"}}}";
/*R""""(
{
   "properties":{
      "open":{
         "unit":"status",
         "name":"door"
      }
   }
})"""";*/
