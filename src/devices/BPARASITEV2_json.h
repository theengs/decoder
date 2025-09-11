const char* _BPARASITEV2_json = "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv2.0\",\"tag\":\"0902\",\"condition\":[\"name\",\"contain\",\"prst\",\"uuid\",\"contain\",\"fcd2\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",6,\"02\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",26,\"2e\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,2,false,false]},\"moi\":{\"condition\":[\"servicedata\",30,\"2f\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,2,false,false]},\"lux\":{\"condition\":[\"servicedata\",12,\"05\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,6,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"condition\":[\"servicedata\",2,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,true,false]},\"volt\":{\"condition\":[\"servicedata\",20,\"0c\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",1000]}}}";

/* R""""(
{
   "brand":"rbaron",
   "model":"b-parasite",
   "model_id":"BPv2.0",
   "tag":"0902",
   "condition":["name", "contain", "prst", "uuid", "contain", "fcd2"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 6, "02"],
         "decoder":["value_from_hex_data", "servicedata", 8, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["servicedata", 26, "2e"],
         "decoder":["value_from_hex_data", "servicedata", 28, 2, false, false]
      },
      "moi":{
         "condition":["servicedata", 30, "2f"],
         "decoder":["value_from_hex_data", "servicedata", 32, 2, false, false]
      },
      "lux":{
         "condition": ["servicedata", 12, "05"],
         "decoder":["value_from_hex_data", "servicedata", 14, 6, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "condition":["servicedata", 2, "01"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, true, false]
      },
      "volt":{
         "condition": ["servicedata", 20, "0c"],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _BPARASITEV2_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"},\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
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
      "moi":{
         "unit":"%",
         "name":"moisture"
      },
      "lux":{
         "unit":"lx",
         "name":"illuminance"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
