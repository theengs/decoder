const char* _SE_TPROBE_json = "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP PROBE\",\"model_id\":\"SE_TPROBE\",\"tag\":\"01\",\"condition\":[\"servicedata\",\"=\",4,\"&\",\"uuid\",\"index\",0,\"2a6e\",\"&\",\"name\",\"index\",1,\" TPROBE\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,4,true,true],\"post_proc\":[\"/\",100]},\"volt\":{\"condition\":[\"manufacturerdata\",\"=\",10,\"index\",4,\"f2\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false],\"post_proc\":[\"/\",1000]}}}";

/*R""""(
{
   "brand":"Sensor Easy",
   "model":"SE TEMP PROBE",
   "model_id":"SE_TPROBE",
   "tag":"01",
   "condition":["servicedata", "=", 4, "&", "uuid", "index", 0, "2a6e","&", "name", "index", 1, " TPROBE"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, true],
         "post_proc":["/", 100]
      },
      "volt":{
         "condition":["manufacturerdata", "=", 10,"index", 4, "f2"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false],
         "post_proc":["/", 1000]
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
