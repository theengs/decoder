const char* _JQJCY01YM_json = R""""(
{
   "brand":"Xiaomi",
   "model":"Formaldehyde detector",
   "model_id":"JQJCY01YM",
   "condition":["servicedata", "contain", "20df02"],
   "properties":{
      "for":{
         "condition":["servicedata", 23, "0"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":['/', 100]
      },
      "hum":{
         "condition":["servicedata", 23, "6"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true, false],
         "post_proc":['/', 10]
      },
      "batt":{
         "condition":["servicedata", 23, "a"],
         "decoder":["value_from_hex_data", "servicedata", 28, 2, false, false]
      }
   }
})"""";