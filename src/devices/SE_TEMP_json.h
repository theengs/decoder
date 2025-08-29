const char* _SE_TEMP_json = "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP\",\"model_id\":\"SE_TEMP\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",4,\"&\",\"uuid\",\"ind\",0,\"2a6e\",\"&\",\"name\",\"ind\",1,\" T \"],\"properties\":{\"tempc\":{\"cond\":[\"svd\",0,\"!\",\"ff7f\"],\"decoder\":[\"vfhd\",\"svd\",0,4,true,true],\"pprc\":[\"/\",100]},\"volt\":{\"cond\":[\"mfd\",\"=\",10,\"ind\",4,\"f2\"],\"decoder\":[\"vfhd\",\"mfd\",6,4,true,false],\"pprc\":[\"/\",1000]}}}";

/*R""""(
{
   "brand":"Sensor Easy",
   "model":"SE TEMP",
   "model_id":"SE_TEMP",
   "tag":"01",
   "cond":["svd", "=", 4, "&", "uuid", "ind", 0, "2a6e","&", "name", "ind", 1, " T "],
   "properties":{
      "tempc":{
         "cond":["svd",0 ,"!","ff7f"],
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
const char* _SE_TEMP_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";

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
