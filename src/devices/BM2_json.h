const char* _BM2_json = "{\"brand\":\"GENERIC\",\"model\":\"Battery Monitor\",\"model_id\":\"BM2\",\"tag\":\"080a\",\"condition\":[\"name\",\"index\",0,\"ZX-1689\",\"|\",\"name\",\"index\",0,\"BM6\",\"|\",\"name\",\"index\",0,\"Battery Monitor\",\"|\",\"name\",\"index\",0,\"Battery Guard\",\"|\",\"name\",\"index\",0,\"Li Battery Monitor\",\"&\",\"manufacturerdata\",\"=\",50],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"device\":{\"decoder\":[\"static_value\",\"BM2 Tracker\"]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"Battery Monitor",
   "model_id":"BM2",
   "tag":"080a",
   "condition":["name", "index", 0, "ZX-1689", "|", "name", "index", 0, "BM6", "|", "name", "index", 0, "Battery Monitor", "|", "name", "index", 0, "Battery Guard", "|", "name", "index", 0, "Li Battery Monitor", "&","manufacturerdata", "=", 50],
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
