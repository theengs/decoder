const char* _APPLEWATCH_json = "{\"brand\":\"Apple\",\"model\":\"Apple Watch\",\"model_id\":\"APPLEWATCH\",\"tag\":\"0b18\",\"condition\":[\"manufacturerdata\",\"index\",10,\"98\",\"|\",\"manufacturerdata\",\"index\",10,\"18\",\"&\",\"manufacturerdata\",\"=\",18,\"index\",0,\"4c001005\"],\"properties\":{\"unlocked\":{\"condition\":[\"manufacturerdata\",10,\"98\"],\"decoder\":[\"static_value\",true]},\"_unlocked\":{\"condition\":[\"manufacturerdata\",10,\"18\"],\"decoder\":[\"static_value\",false]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Watch",
   "model_id":"APPLEWATCH",
   "tag":"0b18",
   "condition":["manufacturerdata", "index", 10, "98", "|", "manufacturerdata", "index", 10, "18", "&", "manufacturerdata", "=", 18, "index", 0, "4c001005"],
   "properties":{
      "unlocked":{
         "condition":["manufacturerdata", 10, "98"],
         "decoder":["static_value", true]
      },
      "_unlocked":{
         "condition":["manufacturerdata", 10, "18"],
         "decoder":["static_value", false]
      }
   }
})"""";*/

const char* _APPLEWATCH_json_props = "{\"properties\":{\"unlocked\":{\"unit\":\"status\",\"name\":\"lock\"}}}";
/*R""""(
{
   "properties":{
      "unlocked":{
         "unit":"status",
         "name":"lock"
      }
   }
})"""";*/
