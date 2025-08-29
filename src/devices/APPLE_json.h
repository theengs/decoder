const char* _APPLE_json = "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONT\",\"tag\":\"fe\",\"cond\":[\"mfd\",\">=\",10,\"ind\",0,\"4c000\",\"|\",\"mfd\",\">=\",10,\"ind\",0,\"4c001\",\"&\",\"mfd\",\"<\",50],\"properties\":{\"device\":{\"decoder\":[\"static_value\",\"Apple device\"]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Continuity",
   "model_id":"APPLE_CONT",
   "tag":"fe",
   "cond":["mfd", ">=", 10, "ind", 0, "4c000", "|", "mfd", ">=", 10, "ind", 0, "4c001", "&", "mfd", "<", 50],
   "properties":{
      "device":{
         "decoder":["static_value", "Apple device"]
      }
   }
})"""";*/

const char* _APPLE_json_at = "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONTAT\",\"tag\":\"fe\",\"cond\":[\"mfd\",\">\",50,\"ind\",0,\"4c000\",\"|\",\"mfd\",\">\",50,\"ind\",0,\"4c001\"],\"properties\":{\"device\":{\"decoder\":[\"static_value\",\"Apple device\"]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Continuity",
   "model_id":"APPLE_CONTAT",
   "tag":"fe",
   "cond":["mfd", ">", 50, "ind", 0, "4c000", "|", "mfd", ">", 50, "ind", 0, "4c001"],
   "properties":{
      "device":{
         "decoder":["static_value", "Apple device"]
      }
   }
})"""";*/

const char* _APPLE_json_props = "{\"properties\":{\"device\":{\"unit\":\"string\",\"name\":\"device\"}}}";
/*R""""(
{
   "properties":{
      "device":{
         "unit":"string",
         "name":"device"
      }
   }
})"""";*/
