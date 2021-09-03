const char* _IBS_TH1_json = R""""(
{
   "brand":"inkbird",
   "model":"TH Sensor",
   "model_id":"IBS-TH1",
   "condition":["name", "index", 0, "sps"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 0, 4, true],
         "post_proc":['/', 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, false],
         "post_proc":['/', 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";