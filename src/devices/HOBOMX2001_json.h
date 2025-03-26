const char* _HOBOMX2001_json = "{\"brand\":\"Onset\",\"model\":\"Hobo Water Level Sensor\",\"model_id\":\"HOBOMX2001\",\"tag\":\"ff\",\"condition\":[\"manufacturerdata\",\"=\",44,\"index\",0,\"c500\"],\"properties\":{\"lvl_cm\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",36,8,true,true,true],\"post_proc\":[\"*\",100]}}}";
/* R""""(
{
   "brand":"Onset",
   "model":"Hobo Water Level Sensor",
   "model_id":"HOBOMX2001",
   "tag":"ff",
   "condition":["manufacturerdata", "=", 44, "index", 0, "c500"],
   "properties":{
      "lvl_cm":{
         "decoder":["value_from_hex_data", "manufacturerdata", 36, 8, true, true, true],
         "post_proc":["*", 100]
      }
   }
})"""";*/

const char* _HOBOMX2001_json_props = "{\"properties\":{\"lvl_cm\":{\"unit\":\"cm\",\"name\":\"distance\"}}}";
/*R""""(
{
   "properties":{
      "lvl_cm":{
         "unit":"cm",
         "name":"distance"
      }
   }
})"""";*/
