const char* _SensorPush_HTP_xw_json = "{\"brand\":\"SensorPush\",\"model\":\"HTP.xw\",\"model_id\":\"HTP_xw\",\"tag\":\"0201\",\"condition\":[\"uuid\",\"index\",0,\"ef090000-11d6-42ba-93b8-9dd7ec090ab0\",\"&\",\"manufacturerdata\",\"index\",0,\"00\"],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,2,false,false],\"post_proc\":[]},\"_.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,2,false,false],\"post_proc\":[\"<\",8,\"+\",\".cal\"]},\"__.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false],\"post_proc\":[\"<\",16,\"+\",\".cal\"]},\"___.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false,false],\"post_proc\":[\"<\",24,\"+\",\".cal\"]},\"____.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false],\"post_proc\":[\"<\",32,\"+\",\".cal\"]},\"_____.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false],\"post_proc\":[\"<\",40,\"+\",\".cal\"]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",1,1,false,true,true],\"post_proc\":[\"*\",0,\"+\",\".cal\",\"%\",72001,\"*\",0.0025,\"+\",-40]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",1,1,false,false,true],\"post_proc\":[\"*\",0,\"+\",\".cal\",\"%\",2880112001,\"/\",72001,\"*\",0.0025]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",1,1,false,false,true],\"post_proc\":[\"*\",0,\"+\",\".cal\",\"%\",273613520207001,\"/\",2880112001,\"+\",30000.0,\"/\",100.0]}}}";
/* R""""(
{
   "brand": "SensorPush",
   "model": "HTP.xw",
   "model_id": "HTP_xw",
   "tag": "0201",
   "condition": ["uuid", "index", 0, "ef090000-11d6-42ba-93b8-9dd7ec090ab0", "&", "manufacturerdata", "index", 0, "00"],
   "properties": {
      ".cal": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 2, 2, false, false],
         "post_proc": []
      },
      "_.cal": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 4, 2, false, false],
         "post_proc": ["<", 8, "+", ".cal"]
      },
      "__.cal": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 6, 2, false, false],
         "post_proc": ["<", 16, "+", ".cal"]
      },
      "___.cal": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 8, 2, false, false],
         "post_proc": ["<", 24, "+", ".cal"]
      },
      "____.cal": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 10, 2, false, false],
         "post_proc": ["<", 32, "+", ".cal"]
      },
      "_____.cal": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 12, 2, false, false],
         "post_proc": ["<", 40, "+", ".cal"]
      },
      "tempc": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 1, 1, false, true, true],
         "post_proc": ["*", 0, "+", ".cal", "%", 72001, "*", 0.0025, "+", -40]
      },
      "hum": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 1, 1, false, false, true],
         "post_proc": ["*", 0, "+", ".cal", "%", 2880112001, "/", 72001, "*", 0.0025]
      },
      "pres":{
         "decoder": ["value_from_hex_data", "manufacturerdata", 1, 1, false, false, true],
         "post_proc": ["*", 0, "+", ".cal", "%", 273613520207001, "/", 2880112001, "+", 30000.0, "/", 100.0]
      }
   }
})"""";*/

const char* _SensorPush_HTP_xw_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"}}}";
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
