const char* _APPLEDEVICE_json = "{\"brand\":\"Apple\",\"model\":\"Apple iPhone/iPad\",\"model_id\":\"APPLEDEVICE\",\"tag\":\"1018\",\"condition\":[\"manufacturerdata\",\">=\",8,\"index\",0,\"4c0010\"],\"properties\":{\"state\":{\"condition\":[\"manufacturerdata\",9,\"b\"],\"decoder\":[\"static_value\",\"unlocked recent authenticated interaction\"]},\"_state\":{\"condition\":[\"manufacturerdata\",9,\"!\",\"b\"],\"decoder\":[\"static_value\",\"locked\"]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple iPhone/iPad",
   "model_id":"APPLEDEVICE",
   "tag":"1018",
   "condition":["manufacturerdata", ">=", 8, "index", 0, "4c0010"],
   "properties":{
      "state":{
         "condition":["manufacturerdata", 9, "b"],
         "decoder":["static_value", "unlocked recent authenticated interaction"]
      },
      "_state":{
         "condition":["manufacturerdata", 9, "!", "b"],
         "decoder":["static_value", "locked"]
      }
   }
})"""";*/

const char* _APPLEDEVICE_json_props = "{\"properties\":{\"state\":{\"unit\":\"string\",\"name\":\"state\"}}}";
/*R""""(
{
   "properties":{
      "state":{
         "unit":"string",
         "name":"state"
      }
   }
})"""";*/
