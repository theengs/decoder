const char* _Miband_json = R""""(
{
   "brand":"xiaomi",
   "model":"Miband",
   "model_id":"MiBand",
   "condition":["uuid", "contain", "fee0"],
   "properties":{
      "steps":{
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, false]
      }
   }
})"""";