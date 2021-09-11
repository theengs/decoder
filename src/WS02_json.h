const char* _WS02_json = R""""(
{
   "brand":"ThermoBeacon",
   "model":"WS02",
   "model_id":"WS02",
   "condition":["manufacturerdata", "contain", "100000001a11"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true],
         "post_proc":['/', 16]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 2, true],
         "post_proc":['/', 16]
      },
      "volt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, true],
         "post_proc":['/', 1000]
      }
   }
})"""";