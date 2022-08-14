const char* _Battery_json = "{\"brand\":\"GENERIC\",\"model\":\"Battery service data\",\"model_id\":\"Battery\",\"condition\":[\"uuid\",\"index\",0,\"180f\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,2,false,false]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"Battery service data",
   "model_id":"Battery",
   "condition":["uuid", "index", 0, "180f"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 0, 2, false, false]
      }
   }
})"""";*/

const char* _Battery_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
