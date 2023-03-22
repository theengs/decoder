const char* _BM1IN1_json = "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD1in1\",\"tag\":\"0108\",\"condition\":[\"manufacturerdata\",\"index\",4,\"0d\",\"&\",\"manufacturerdata\",\"=\",24,\"index\",0,\"3301\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,false,true],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false]}}}";
/*R""""(
{
   "brand":"Blue Maestro",
   "model":"Tempo Disc",
   "model_id":"TD1in1",
   "tag":"0108",
   "condition":["manufacturerdata", "index", 4, "0d", "&", "manufacturerdata", "=", 24, "index", 0, "3301"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, false, true],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false]
      }
   }
})"""";*/

const char* _BM1IN1_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties": {
      "tempc": {
         "unit": "°C",
         "name": "temperature"
      },
      "batt": {
         "unit": "%",
         "name": "battery"
      }
   }
})"""";*/
