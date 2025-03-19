const char* _SensorPush_HT_json = "{\"brand\":\"SensorPush\",\"model\":\"HT.w\",\"model_id\":\"SPHT\",\"tag\":\"0109\",\"condition\":[\"manufacturerdata\",\"=\",10,\"index\",0,\"04\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,8,true,true],\"post_proc\":[\"%\",66001,\"*\",0.0025,\"+\",-40]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,8,true,false],\"post_proc\":[\"%\",2640106001,\"/\",66001,\"*\",0.0025]}}}";
/* R""""(
{
   "brand": "SensorPush",
   "model": "HT.w",
   "model_id": "SPHT",
   "tag": "0109",
   "condition": ["manufacturerdata", "=", 10, "index", 0, "04"],
   "properties": {
      "tempc": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 2, 8, true, true],
         "post_proc": ["%", 66001, "*", 0.0025, "+", -40]
      },
      "hum": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 2, 8, true, false],
         "post_proc": ["%", 2640106001, "/", 66001, "*", 0.0025]
      }
   }
})"""";*/

const char* _SensorPush_HT_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties": {
      "tempc": {
         "unit":"°C",
         "name":"temperature"
     },
      "hum": {
         "unit":"%",
         "name":"humidity"
     }
   }
})"""";*/
