const char* _ABN07_json = "{\"brand\":\"April Brother\",\"model\":\"N07\",\"model_id\":\"ABN07\",\"tag\":\"010a\",\"condition\":[\"servicedata\",\"=\",22,\"index\",0,\"40\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"asensor_\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"tempc\":{\"condition\":[\"servicedata\",10,\"02\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",16,\"03\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false],\"post_proc\":[\"/\",100]}}}";
/* R""""(
{
   "brand":"April Brother",
   "model":"N07",
   "model_id":"ABN07",
   "tag":"010a",
   "condition":["servicedata", "=", 22, "index", 0, "40", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "asensor_"],
   "properties":{
      "packet":{
         "condition":["servicedata", 2, "00"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "batt":{
         "condition":["servicedata", 6, "01"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "tempc":{
         "condition":["servicedata", 10, "02"],
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["servicedata", 16, "03"],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false],
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _ABN07_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "packet":{
         "unit":"int",
         "name":"packet id"
      },
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
      }
   }
})"""";*/
