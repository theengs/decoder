const char* _SensorPush_HTP_json = "{\"brand\":\"SensorPush\",\"model\":\"HTP.xw\",\"model_id\":\"SPHTP\",\"tag\":\"0209\",\"cond\":[\"mfd\",\"=\",14,\"ind\",0,\"00\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",2,12,true,true],\"pprc\":[\"%\",72001,\"*\",0.0025,\"+\",-40]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",2,12,true,false],\"pprc\":[\"%\",2880112001,\"/\",72001,\"*\",0.0025]},\"pres\":{\"decoder\":[\"vfhd\",\"mfd\",2,12,true,false],\"pprc\":[\"%\",273613520207001,\"/\",2880112001,\"+\",30000.0,\"/\",100.0]}}}";
/* R""""(
{
   "brand": "SensorPush",
   "model": "HTP.xw",
   "model_id": "SPHTP",
   "tag": "0209",
   "cond": ["mfd", "=", 14, "ind", 0, "00"],
   "properties": {
      "tempc": {
         "decoder": ["vfhd", "mfd", 2, 12, true, true],
         "pprc": ["%", 72001, "*", 0.0025, "+", -40]
      },
      "hum": {
         "decoder": ["vfhd", "mfd", 2, 12, true, false],
         "pprc": ["%", 2880112001, "/", 72001, "*", 0.0025]
      },
      "pres":{
         "decoder": ["vfhd", "mfd", 2, 12, true, false],
         "pprc": ["%", 273613520207001, "/", 2880112001, "+", 30000.0, "/", 100.0]
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
