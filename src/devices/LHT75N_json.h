const char* _LHT75N_json = 
R""""(
{
   "brand":"Dragino",
   "model":"LHT75N",
   "model_id":"LHT75N",
   "tag":"0100",
   "condition":["name", "index", 0, "LHT75N"],
   "properties":{
      "tempc":{
         "decoder":["value_from_base64_data", "payload", 4, 4, false],
         "post_proc":["/", 100]
      }
      }
   }
})"""";

const char* _LHT75N_json_props = 
R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      }
   }
})"""";
