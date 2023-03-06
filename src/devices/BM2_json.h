const char* _BM2_json = "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"tag\":\"0802\",\"condition\":[\"manufacturerdata\",\"=\",50,\"&\",\"name\",\"index\",0,\"Battery Monitor\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"BM2 Battery Monitor",
   "model_id":"BM2",
   "tag":"0802",
   "condition":["manufacturerdata", "=", 50, "&", "name", "index", 0, "Battery Monitor"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 48, 2, false]
      }
   }
})"""";*/

const char* _BM2_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
