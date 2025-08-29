const char* _BWBSDOO_json = "{\"brand\":\"Otio/BeeWi\",\"model\":\"Door & Window Sensor\",\"model_id\":\"BSDOO\",\"tag\":\"0405\",\"cond\":[\"mfd\",\"=\",14,\"index\",4,\"080c\"],\"properties\":{\"open\":{\"decoder\":[\"bit_static_value\",\"mfd\",9,0,false,true]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",12,2,false,false]}}}";
/*R""""(
{
   "brand":"Otio/BeeWi",
   "model":"Door & Window Sensor",
   "model_id":"BSDOO",
   "tag":"0405",
   "cond":["mfd", "=", 14, "index", 4, "080c"],
   "properties":{
      "open":{
         "decoder":["bit_static_value", "mfd", 9, 0, false, true]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 12, 2, false, false]
      }
   }
})"""";*/

const char* _BWBSDOO_json_props = "{\"properties\":{\"open\":{\"unit\":\"status\",\"name\":\"door\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "open":{
         "unit":"status",
         "name":"door"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
