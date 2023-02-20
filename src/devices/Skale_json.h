const char* _Skale_json = "{\"brand\":\"Atomax\",\"model\":\"Skale I/II\",\"model_id\":\"SKALE\",\"tag\":\"0501\",\"condition\":[\"manufacturerdata\",\"=\",12,\"index\",0,\"ef81\"],\"properties\":{\"weight\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,4,true,true],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"Atomax",
   "model":"Skale I/II",
   "model_id":"SKALE",
   "tag":"0501",
   "condition":["manufacturerdata", "=", 12, "index", 0, "ef81"],
   "properties":{
      "weight":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, true],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _Skale_json_props = "{\"properties\":{\"weight\":{\"unit\":\"g\",\"name\":\"weight\"}}}";
/*R""""(
{
   "properties":{
      "weight":{
         "unit":"g",
         "name":"weight"
      }
   }
})"""";*/
