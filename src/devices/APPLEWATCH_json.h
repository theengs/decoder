const char* _APPLEWATCH_json = "{\"brand\":\"Apple\",\"model\":\"Apple Watch\",\"model_id\":\"APPLEWATCH\",\"tag\":\"0b18\",\"cond\":[\"mfd\",\"ind\",10,\"98\",\"|\",\"mfd\",\"ind\",10,\"18\",\"&\",\"mfd\",\"=\",18,\"ind\",0,\"4c001005\"],\"properties\":{\"unlocked\":{\"cond\":[\"mfd\",10,\"98\"],\"decoder\":[\"static_value\",true]},\"_unlocked\":{\"cond\":[\"mfd\",10,\"18\"],\"decoder\":[\"static_value\",false]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Watch",
   "model_id":"APPLEWATCH",
   "tag":"0b18",
   "cond":["mfd", "ind", 10, "98", "|", "mfd", "ind", 10, "18", "&", "mfd", "=", 18, "ind", 0, "4c001005"],
   "properties":{
      "unlocked":{
         "cond":["mfd", 10, "98"],
         "decoder":["static_value", true]
      },
      "_unlocked":{
         "cond":["mfd", 10, "18"],
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
