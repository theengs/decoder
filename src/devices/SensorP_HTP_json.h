const char* _SensorPush_HTP_json = "{\"brand\":\"SensorPush\",\"model\":\"HTP.xw\",\"model_id\":\"SPHTP\",\"tag\":\"0209\",\"condition\":[\"manufacturerdata\",\"=\",14,\"index\",0,\"00\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,12,true,true],\"post_proc\":[\"%\",72001,\"*\",0.0025,\"+\",-40]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,12,true,false],\"post_proc\":[\"%\",2880112001,\"/\",72001,\"*\",0.0025]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,12,true,false],\"post_proc\":[\"%\",273613520207001,\"/\",2880112001,\"+\",30000.0,\"/\",100.0]}}}";
/* R""""(
{
   "brand": "SensorPush",
   "model": "HTP.xw",
   "model_id": "SPHTP",
   "tag": "0209",
   "condition": ["manufacturerdata", "=", 14, "index", 0, "00"],
   "properties": {
      "tempc": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 2, 12, true, true],
         "post_proc": ["%", 72001, "*", 0.0025, "+", -40]
      },
      "hum": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 2, 12, true, false],
         "post_proc": ["%", 2880112001, "/", 72001, "*", 0.0025]
      },
      "pres":{
         "decoder": ["value_from_hex_data", "manufacturerdata", 2, 12, true, false],
         "post_proc": ["%", 273613520207001, "/", 2880112001, "+", 30000.0, "/", 100.0]
      }
   }
})"""";*/

const char* _SensorPush_HTP_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"}}}";
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
     },
      "pres": {
         "unit":"hPa",
         "name":"pressure"
     }
   }
})"""";*/
