const char* _BM4IN1_json = "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD4in1\",\"tag\":\"0208\",\"condition\":[\"manufacturerdata\",\"index\",4,\"1b\",\"&\",\"manufacturerdata\",\"=\",32,\"index\",0,\"3301\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,false,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,false,false],\"post_proc\":[\"/\",10]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,false,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false]}}}";
/*R""""(
{
   "brand":"Blue Maestro",
   "model":"Tempo Disc",
   "model_id":"TD4in1",
   "tag":"0208",
   "condition":["manufacturerdata", "index", 4, "1b", "&", "manufacturerdata", "=", 32, "index", 0, "3301"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, false, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, false, false],
         "post_proc":["/", 10]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, false, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false]
      }
   }
})"""";*/

const char* _BM4IN1_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties": {
      "tempc": {
         "unit": "°C",
         "name": "temperature"
      },
      "hum": {
         "unit": "%",
         "name": "humidity"
      },
      "pres":{
         "unit":"hPa",
         "name":"pressure"
      },
      "batt": {
         "unit": "%",
         "name": "battery"
      }
   }
})"""";*/
