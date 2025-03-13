const char* _SensorPush_HT_w_json = "{\"brand\":\"SensorPush\",\"model\":\"HT.w\",\"model_id\":\"HT_w\",\"tag\":\"02\",\"condition\":[\"name\",\"contain\",\"SensorPush HT.w\"],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",2,2,false,false],\"post_proc\":[]},\"_.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,2,false,false],\"post_proc\":[\"<\",8,\"+\",\".cal\"]},\"__.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false],\"post_proc\":[\"<\",16,\"+\",\".cal\"]},\"___.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false,false],\"post_proc\":[\"<\",24,\"+\",\".cal\"]},\"____.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false],\"post_proc\":[\"<\",32,\"+\",\".cal\"]},\"_____.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false],\"post_proc\":[\"<\",40,\"+\",\".cal\"]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",1,1,false,true,true],\"post_proc\":[\"*\",0,\"+\",\".cal\",\"%\",66001,\"*\",0.0025,\"+\",-40]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",1,1,false,false,true],\"post_proc\":[\"*\",0,\"+\",\".cal\",\"%\",2640106001,\"/\",66001,\"*\",0.0025]}}}";
/* R""""(
{
   "brand": "SensorPush",
   "model": "HT.w",
   "model_id": "HT_w",
   "tag": "02",
   "condition": ["name", "contain", "SensorPush HT.w"],
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
         "post_proc": ["*", 0, "+", ".cal", "%", 66001, "*", 0.0025, "+", -40]
      },
      "hum": {
         "decoder": ["value_from_hex_data", "manufacturerdata", 1, 1, false, false, true],
         "post_proc": ["*", 0, "+", ".cal", "%", 2640106001, "/", 66001, "*", 0.0025]
      }
   }
})"""";*/

const char* _SensorPush_HT_w_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
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
