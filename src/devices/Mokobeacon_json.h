const char* _Mokobeacon_json = "{\"brand\":\"Mokosmart\",\"model\":\"Beacon\",\"model_id\":\"Mokobeacon\",\"tag\":\"0708\",\"condition\":[\"uuid\",\"index\",0,\"ff01\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,2,false]},\"x_axis\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,4,false],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"y_axis\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,false],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"z_axis\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,false],\"post_proc\":[\"/\",10000,\"*\",9.80665]}}}";
/*R""""(
{
   "brand":"Mokosmart",
   "model":"Beacon",
   "model_id":"Mokobeacon",
   "tag":"0708",
   "condition":["uuid", "index", 0, "ff01"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 0, 2, false]
      },
      "x_axis":{
         "decoder":["value_from_hex_data", "servicedata", 14, 4, false],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "y_axis":{
         "decoder":["value_from_hex_data", "servicedata", 18, 4, false],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "z_axis":{
         "decoder":["value_from_hex_data", "servicedata", 22, 4, false],
         "post_proc":["/", 10000, "*", 9.80665]
      }
   }
})"""";*/

const char* _Mokobeacon_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"x_axis\":{\"unit\":\"m/s²\",\"name\":\"x_axis\"},\"y_axis\":{\"unit\":\"m/s²\",\"name\":\"y_axis\"},\"z_axis\":{\"unit\":\"m/s²\",\"name\":\"z_axis\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "x_axis":{
         "unit":"m/s²",
         "name":"x_axis"
      },
      "y_axis":{
         "unit":"m/s²",
         "name":"y_axis"
      },
      "z_axis":{
         "unit":"m/s²",
         "name":"z_axis"
      }
   }
})"""";*/