const char* _ABN07_json = "{\"brand\":\"April Brother\",\"model\":\"N07\",\"model_id\":\"ABN07\",\"tag\":\"0102\",\"condition\":[\"servicedata\",\"=\",22,\"index\",0,\"40\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"asensor_\"],\"properties\":{\"batt\":{\"condition\":[\"servicedata\",2,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"tempc\":{\"condition\":[\"servicedata\",6,\"02\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",12,\"03\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,4,true,false],\"post_proc\":[\"/\",100]},\"packet\":{\"condition\":[\"servicedata\",18,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,2,false,false]}}}";
/* R""""(
{
   "brand":"April Brother",
   "model":"N07",
   "model_id":"ABN07",
   "tag":"0102",
   "condition":["servicedata", "=", 22, "index", 0, "40", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "asensor_"],
   "properties":{
      "batt":{
         "condition":["servicedata", 2, "01"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "tempc":{
         "condition":["servicedata", 6, "02"],
         "decoder":["value_from_hex_data", "servicedata", 8, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["servicedata", 12, "03"],
         "decoder":["value_from_hex_data", "servicedata", 14, 4, true, false],
         "post_proc":["/", 100]
      },
      "packet":{
         "condition":["servicedata", 18, "00"],
         "decoder":["value_from_hex_data", "servicedata", 20, 2, false, false]
      }
   }
})"""";*/

const char* _ABN07_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "packet":{
         "unit":"int",
         "name":"packet id"
      }
   }
})"""";*/
