const char* _APPLEWATCH_json = "{\"brand\":\"Apple\",\"model\":\"Apple Watch\",\"model_id\":\"APPLEWATCH\",\"tag\":\"0b18\",\"condition\":[\"manufacturerdata\",\"index\",10,\"98\",\"|\",\"manufacturerdata\",\"index\",10,\"18\",\"&\",\"manufacturerdata\",\"=\",18,\"index\",0,\"4c001005\"],\"properties\":{\"state\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",10,2],\"lookup\":[\"98\",\"unlocked\",\"18\",\"locked\"]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Watch",
   "model_id":"APPLEWATCH",
   "tag":"0b18",
   "condition":["manufacturerdata", "index", 10, "98", "|", "manufacturerdata", "index", 10, "18", "&", "manufacturerdata", "=", 18, "index", 0, "4c001005"],
   "properties":{
      "state":{
        "decoder":["string_from_hex_data", "manufacturerdata", 10, 2],
         "lookup":["98", "unlocked", 
                   "18", "locked"]
      }
   }
})"""";*/

const char* _APPLEWATCH_json_props = "{\"properties\":{\"state\":{\"unit\":\"string\",\"name\":\"state\"}}}";
/*R""""(
{
   "properties":{
      "state":{
         "unit":"string",
         "name":"state"
      }
   }
})"""";*/
