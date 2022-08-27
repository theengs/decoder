const char* _ABN03_json = "{\"brand\":\"April Brother\",\"model\":\"N03\",\"model_id\":\"ABN03\",\"condition\":[\"servicedata\",\"=\",30,\"index\",0,\"ab03\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,true],\"post_proc\":[\"/\",8]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",2]},\"lux\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",26,4,true,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false,false]}}}";
/* R""""(
{
   "brand":"April Brother",
   "model":"N03",
   "model_id":"ABN03",
   "condition":["servicedata", "=", 30, "index", 0, "ab03"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, true],
         "post_proc":["/", 8]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 2]
      },
      "lux":{
         "decoder":["value_from_hex_data", "servicedata", 26, 4, true, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false, false]
      }
   }
})"""";*/

const char* _ABN03_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "lux":{
         "unit":"lx",
         "name":"illuminance"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
