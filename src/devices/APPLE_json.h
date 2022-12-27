const char* _APPLE_json = "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONT\",\"tag\":\"fe\",\"condition\":[\"manufacturerdata\",\">=\",12,\"index\",0,\"4c000\",\"|\",\"manufacturerdata\",\">=\",12,\"index\",0,\"4c001\",\"&\",\"manufacturerdata\",\"<\",50],\"properties\":{\"device\":{\"decoder\":[\"static_value\",\"Apple device\"]}}}";
/*R""""(
{
   "brand":"Apple",
   "model":"Apple Continuity",
   "model_id":"APPLE_CONT",
   "tag":"fe",
   "condition":["manufacturerdata", ">=", 12, "index", 0, "4c000", "|", "manufacturerdata", ">=", 12, "index", 0, "4c001", "&", "manufacturerdata", "<", 50],
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
