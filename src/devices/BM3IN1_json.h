const char* _BM3IN1_json = "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD3in1\",\"tag\":\"0208\",\"cond\":[\"mfd\",\"ind\",4,\"16\",\"|\",\"mfd\",\"ind\",4,\"17\",\"&\",\"mfd\",\"=\",32,\"ind\",0,\"3301\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",16,4,false,true],\"pprc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",20,4,false,false],\"pprc\":[\"/\",10]},\"tempc2_dp\":{\"decoder\":[\"vfhd\",\"mfd\",24,4,false,true],\"pprc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",6,2,false,false]}}}";
/*R""""(
{
   "brand":"Blue Maestro",
   "model":"Tempo Disc",
   "model_id":"TD3in1",
   "tag":"0208",
   "cond":["mfd", "ind", 4, "16", "|", "mfd", "ind", 4, "17", "&", "mfd", "=", 32, "ind", 0, "3301"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 16, 4, false, true],
         "pprc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 20, 4, false, false],
         "pprc":["/", 10]
      },
      "tempc2_dp":{
         "decoder":["vfhd", "mfd", 24, 4, false, true],
         "pprc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 6, 2, false, false]
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
