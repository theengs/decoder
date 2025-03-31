const char* _THB1_json = "{\"brand\":\"Tuya\",\"model\":\"THB1 Thermo-Hygrometer\",\"model_id\":\"THB1\",\"tag\":\"0102\",\"condition\":[\"servicedata\",\"=\",28,\"index\",0,\"40\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"THB1\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"tempc\":{\"condition\":[\"servicedata\",10,\"02\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",16,\"03\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"volt\":{\"condition\":[\"servicedata\",22,\"0c\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"Tuya",
   "model":"THB1 Thermo-Hygrometer",
   "model_id":"THB1",
   "tag":"0102",
   "condition":["servicedata", "=", 28, "index", 0, "40", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "THB1"],
   "properties":{
      "packet":{
         "condition":["servicedata", 2, "00"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
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
      },
      "batt":{
         "condition":["servicedata", 6, "01"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "volt":{
         "condition":["servicedata", 22, "0c"],
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _THB1_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
/*R""""(
{
   "properties":{
      "packet":{
         "unit":"int",
         "name":"packet id"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "volt": {
         "unit": "V",
         "name": "voltage"
      }
   }
})"""";*/
