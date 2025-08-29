const char* _APPLEDEVICE_json = "{\"brand\":\"Apple\",\"model\":\"Apple iPhone/iPad\",\"model_id\":\"APPLEDEVICE\",\"tag\":\"1018\",\"cond\":[\"mfd\",\">=\",8,\"ind\",0,\"4c0010\"],\"properties\":{\"unlocked\":{\"cond\":[\"mfd\",9,\"b\"],\"decoder\":[\"static_value\",true]},\"_unlocked\":{\"cond\":[\"mfd\",9,\"!\",\"b\"],\"decoder\":[\"static_value\",false]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple iPhone/iPad",
   "model_id":"APPLEDEVICE",
   "tag":"1018",
   "cond":["mfd", ">=", 8, "ind", 0, "4c0010"],
   "properties":{
      "unlocked":{
         "cond":["mfd", 9, "b"],
         "decoder":["static_value", true]
      },
      "_unlocked":{
         "cond":["mfd", 9, "!", "b"],
         "decoder":["static_value", false]
      }
   }
})"""";*/

const char* _APPLEDEVICE_json_props = "{\"properties\":{\"unlocked\":{\"unit\":\"status\",\"name\":\"lock\"}}}";
/*R""""(
{
   "properties":{
      "unlocked":{
         "unit":"status",
         "name":"lock"
      }
   }
})"""";*/
