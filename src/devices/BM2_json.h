const char* _BM2_json = "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"tag\":\"0808\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c000215655f83caae16a10a702e31f30d58dd82\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"device\":{\"decoder\":[\"static_value\",\"BM2 Tracker\"]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"BM2 Battery Monitor",
   "model_id":"BM2",
   "tag":"0808",
   "condition":["manufacturerdata", "=", 50, "index", 0, "4c000215655f83caae16a10a702e31f30d58dd82"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 48, 2, false]
      },
      "device":{
         "decoder":["static_value", "BM2 Tracker"]
      }
   }
})"""";*/

const char* _BM2_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"device\":{\"unit\":\"string\",\"name\":\"tracker device\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "device":{
         "unit":"string",
         "name":"tracker device"
      }
   }
})"""";*/
