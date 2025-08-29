const char* _SensorPush_HT_json = "{\"brand\":\"SensorPush\",\"model\":\"HT.w\",\"model_id\":\"SPHT\",\"tag\":\"0109\",\"cond\":[\"mfd\",\"=\",10,\"ind\",0,\"04\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",2,8,true,true],\"pprc\":[\"%\",66001,\"*\",0.0025,\"+\",-40]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",2,8,true,false],\"pprc\":[\"%\",2640106001,\"/\",66001,\"*\",0.0025]}}}";
/* R""""(
{
   "brand": "SensorPush",
   "model": "HT.w",
   "model_id": "SPHT",
   "tag": "0109",
   "cond": ["mfd", "=", 10, "ind", 0, "04"],
   "properties": {
      "tempc": {
         "decoder": ["vfhd", "mfd", 2, 8, true, true],
         "pprc": ["%", 66001, "*", 0.0025, "+", -40]
      },
      "hum": {
         "decoder": ["vfhd", "mfd", 2, 8, true, false],
         "pprc": ["%", 2640106001, "/", 66001, "*", 0.0025]
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
