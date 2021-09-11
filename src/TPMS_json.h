const char* _TPMS_json = R""""(
{
   "brand":"GENERIC",
   "model":"TPMS",
   "model_id":"TPMS1",
   "condition":["name", "index", 0, "TPMS1_10CA8F"],
   "properties":{
      "count":{
         "decoder":["value_from_hex_data", "manufacturerdata", 5, 1, false],
         "post_proc":['+', 1]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 8, true],
         "post_proc":['/', 1000]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 8, true],
         "post_proc":['/', 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 2, true]
      },
      "alarm":{
         "decoder":["value_from_hex_data", "manufacturerdata", 35, 1, false],
         "is_bool":1
      }
   }
})"""";