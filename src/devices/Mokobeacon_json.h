const char* _Mokobeacon_json = "{\"brand\":\"Mokosmart\",\"model\":\"Beacon\",\"model_id\":\"Mokobeacon\",\"condition\":[\"uuid\",\"index\",0,\"ff01\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,2,false]},\"x_axis\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,4,false]},\"y_axis\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,false]},\"z_axis\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,false]}}}";
/*R""""(
{
   "brand":"Mokosmart",
   "model":"Beacon",
   "model_id":"Mokobeacon",
   "condition":["uuid", "index", 0, "ff01"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 0, 2, false]
      },
      "x_axis":{
         "decoder":["value_from_hex_data", "servicedata", 14, 4, false]
      },
      "y_axis":{
         "decoder":["value_from_hex_data", "servicedata", 18, 4, false]
      },
      "z_axis":{
         "decoder":["value_from_hex_data", "servicedata", 22, 4, false]
      }
   }
})"""";*/

const char* _Mokobeacon_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"x_axis\":{\"unit\":\"int\",\"name\":\"x_axis\"},\"y_axis\":{\"unit\":\"int\",\"name\":\"y_axis\"},\"z_axis\":{\"unit\":\"int\",\"name\":\"z_axis\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "x_axis":{
         "unit":"int",
         "name":"x_axis"
      },
      "y_axis":{
         "unit":"int",
         "name":"y_axis"
      },
      "z_axis":{
         "unit":"int",
         "name":"z_axis"
      }
   }
})"""";*/