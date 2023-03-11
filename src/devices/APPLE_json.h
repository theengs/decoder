const char* _APPLE_json = "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONT\",\"tag\":\"fe\",\"condition\":[\"manufacturerdata\",\">=\",10,\"index\",0,\"4c000\",\"|\",\"manufacturerdata\",\">=\",10,\"index\",0,\"4c001\",\"&\",\"manufacturerdata\",\"<\",50],\"properties\":{\"device\":{\"decoder\":[\"static_value\",\"Apple device\"]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Continuity",
   "model_id":"APPLE_CONT",
   "tag":"fe",
   "condition":["manufacturerdata", ">=", 10, "index", 0, "4c000", "|", "manufacturerdata", ">=", 10, "index", 0, "4c001", "&", "manufacturerdata", "<", 50],
   "properties":{
      "device":{
         "decoder":["static_value", "Apple device"]
      }
   }
})"""";*/

const char* _APPLE_json_at = "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONT\",\"tag\":\"fe\",\"condition\":[\"manufacturerdata\",\"=\",58,\"index\",0,\"4c000\",\"|\",\"manufacturerdata\",\"=\",58,\"index\",0,\"4c001\"],\"properties\":{\"device\":{\"decoder\":[\"static_value\",\"Apple device\"]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Continuity",
   "model_id":"APPLE_CONT",
   "tag":"fe",
   "condition":["manufacturerdata", "=", 58, "index", 0, "4c000", "|", "manufacturerdata", "=", 58, "index", 0, "4c001"],
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
