const char* _LYWSD02_json = R""""(
{
   "brand":"xiaomi",
   "model":"Cleargrass clock",
   "model_id":"LYWSD02",
   "condition":["servicedata", "contain", "205b04"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 25, "4"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "condition":["servicedata", 25, "6"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true, false],
         "post_proc":['/', 10]
      }
   }
})"""";