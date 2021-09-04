const char* _CGPR1_json = R""""(
{
   "brand":"Qingping",
   "model":"Motion & Light",
   "model_id":"CGPR1",
   "condition":["servicedata", "index", 0, "4812", '|', "servicedata", "index", 0, "0812"],
   "properties":{
      "lux":{
         "condition":["servicedata", 0, "0812"],
         "decoder":["value_from_hex_data", "servicedata", 33, 4, true]
      },
      "pres":{
         "condition":["servicedata", 0, "4812"],
         "decoder":["value_from_hex_data", "servicedata", 21, 1, false],
         "val_bits":1
      }
   }
})"""";