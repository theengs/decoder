const char* _BM1IN1_json = "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD1in1\",\"tag\":\"0108\",\"cond\":[\"mfd\",\"index\",4,\"0d\",\"&\",\"mfd\",\"=\",24,\"index\",0,\"3301\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",16,4,false,true],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",6,2,false,false]}}}";
/*R""""(
{
   "brand":"Blue Maestro",
   "model":"Tempo Disc",
   "model_id":"TD1in1",
   "tag":"0108",
   "cond":["mfd", "index", 4, "0d", "&", "mfd", "=", 24, "index", 0, "3301"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 16, 4, false, true],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 6, 2, false, false]
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
