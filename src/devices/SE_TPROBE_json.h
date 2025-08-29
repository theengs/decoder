const char* _SE_TPROBE_json = "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP PROBE\",\"model_id\":\"SE_TPROBE\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",4,\"&\",\"uuid\",\"ind\",0,\"2a6e\",\"&\",\"name\",\"ind\",1,\" TPROBE\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",0,4,true,true],\"pprc\":[\"/\",100]},\"volt\":{\"cond\":[\"mfd\",\"=\",10,\"ind\",4,\"f2\"],\"decoder\":[\"vfhd\",\"mfd\",6,4,true,false],\"pprc\":[\"/\",1000]}}}";

/*R""""(
{
   "brand":"Sensor Easy",
   "model":"SE TEMP PROBE",
   "model_id":"SE_TPROBE",
   "tag":"01",
   "cond":["svd", "=", 4, "&", "uuid", "ind", 0, "2a6e","&", "name", "ind", 1, " TPROBE"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 0, 4, true, true],
         "pprc":["/", 100]
      },
      "volt":{
         "cond":["mfd", "=", 10,"ind", 4, "f2"],
         "decoder":["vfhd", "mfd", 6, 4, true, false],
         "pprc":["/", 1000]
      }
   }
})"""";
*/
const char* _SE_TPROBE_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";

/*R""""(
{
   "properties": {
      "tempc": {
         "unit": "°C",
         "name": "temperature"
      },
      "volt": {
         "unit": "V",
         "name": "voltage"
      }
   }
})"""";*/
