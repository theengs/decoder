const char* _BM3IN1_json = "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD3in1\",\"tag\":\"0208\",\"cond\":[\"manufacturerdata\",\"index\",4,\"16\",\"|\",\"manufacturerdata\",\"index\",4,\"17\",\"&\",\"manufacturerdata\",\"=\",32,\"index\",0,\"3301\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",16,4,false,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",20,4,false,false],\"post_proc\":[\"/\",10]},\"tempc2_dp\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",24,4,false,true],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",6,2,false,false]}}}";
/*R""""(
{
   "brand":"Blue Maestro",
   "model":"Tempo Disc",
   "model_id":"TD3in1",
   "tag":"0208",
   "cond":["manufacturerdata", "index", 4, "16", "|", "manufacturerdata", "index", 4, "17", "&", "manufacturerdata", "=", 32, "index", 0, "3301"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "manufacturerdata", 16, 4, false, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "manufacturerdata", 20, 4, false, false],
         "post_proc":["/", 10]
      },
      "tempc2_dp":{
         "decoder":["vfhd", "manufacturerdata", 24, 4, false, true],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "manufacturerdata", 6, 2, false, false]
      }
   }
})"""";*/

const char* _BM3IN1_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc2_dp\":{\"unit\":\"°C\",\"name\":\"dew point\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
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
      "tempc2_dp": {
         "unit": "°C",
         "name": "dew point"
      },
      "batt": {
         "unit": "%",
         "name": "battery"
      }
   }
})"""";*/
