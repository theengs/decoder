#ifndef PROGMEM
#  define PROGMEM
#endif

const char _BM2_json[] PROGMEM = "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"condition\":[\"manufacturerdata\",\"=\",50,\"&\",\"name\",\"index\",0,\"Battery Monitor\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"BM2 Battery Monitor",
   "model_id":"BM2",
   "condition":["manufacturerdata", "=", 50, "&", "name", "index", 0, "Battery Monitor"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 48, 2]
      }
   }
})"""";*/

const char _BM2_json_props[] PROGMEM = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
