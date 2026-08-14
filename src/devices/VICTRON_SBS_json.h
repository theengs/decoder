const char* _VICTSBS_json = "{\"brand\":\"Victron Energy\",\"model\":\"Smart Battery Sense\",\"model_id\":\"VICTSBS\",\"tag\":\"1448\",\"condition\":[\"manufacturerdata\",\"index\",8,\"a5a3\",\"|\",\"manufacturerdata\",\"index\",8,\"a4a3\",\"&\",\"manufacturerdata\",\"=\",50,\"index\",0,\"e10211\",\"&\",\"manufacturerdata\",\"index\",12,\"02ffff\"],\"properties\":{\"volt\":{\"condition\":[\"manufacturerdata\",24,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",100]},\"tempc\":{\"condition\":[\"manufacturerdata\",37,\"bit\",0,0,\"&\",\"manufacturerdata\",37,\"bit\",1,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true,false],\"post_proc\":[\"-\",27315,\"/\",100]},\"alarm_reason\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Smart Battery Sense",
   "model_id":"VICTSBS",
   "tag":"1448",
   "condition":["manufacturerdata", "index", 8, "a5a3", "|", "manufacturerdata", "index", 8, "a4a3", "&", "manufacturerdata", "=", 50, "index", 0, "e10211", "&", "manufacturerdata", "index", 12, "02ffff"],
   "properties":{
      "volt":{
        "condition":["manufacturerdata", 24, "!", "ffff"],
        "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, false],
        "post_proc":["/", 100]
      },
      "tempc":{
        "condition":["manufacturerdata", 37, "bit", 0, 0, "&", "manufacturerdata", 37, "bit", 1, 1],
        "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true, false],
        "post_proc":["-", 27315, "/", 100]
      },
      "alarm_reason":{
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4]
      }
   }
})"""";*/

const char* _VICTSBS_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"alarm_reason\":{\"unit\":\"int\",\"name\":\"alarm reason\"}}}";
/*R""""(
{
   "properties":{
      "volt": {
         "unit": "V",
         "name": "voltage"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "alarm_reason":{
         "unit":"int",
         "name":"alarm reason"
      }
   }
})"""";*/
