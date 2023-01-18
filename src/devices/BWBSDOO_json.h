const char* _BWBSDOO_json = "{\"brand\":\"Otio/BeeWi\",\"model\":\"Door & Window Sensor\",\"model_id\":\"BSDOO\",\"tag\":\"0405\",\"condition\":[\"manufacturerdata\",\"=\",14,\"index\",4,\"080c\"],\"properties\":{\"contact\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",9,0,\"closed\",\"open\"]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]}}}";
/*R""""(
{
   "brand":"Otio/BeeWi",
   "model":"Door & Window Sensor",
   "model_id":"BSDOO",
   "tag":"0405",
   "condition":["manufacturerdata", "=", 14, "index", 4, "080c"],
   "properties":{
      "contact":{
         "decoder":["bit_static_value", "manufacturerdata", 9, 0, "closed", "open"]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 2, false, false]
      }
   }
})"""";*/

const char* _BWBSDOO_json_props = "{\"properties\":{\"contact\":{\"unit\":\"string\",\"name\":\"contact\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "contact":{
         "unit":"string",
         "name":"contact"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
