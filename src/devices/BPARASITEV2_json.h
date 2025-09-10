const char* _BPARASITEV2_json = "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv2.0\",\"tag\":\"0902\",\"condition\":[\"name\",\"contain\",\"prst\",\"uuid\",\"contain\",\"fcd2\"],\"properties\":{\"bat\":{\"condition\":[\"servicedata\",2,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,true,false]},\"tempc\":{\"condition\":[\"servicedata\",6,\"02\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,4,true,true],\"post_proc\":[\"/\",100]},\"lux\":{\"condition\":[\"servicedata\",12,\"05\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,6,true,false],\"post_proc\":[\"/\",100]},\"volt\":{\"condition\":[\"servicedata\",20,\"0c\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",1000]},\"hum\":{\"condition\":[\"servicedata\",26,\"2e\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,2,false,false]},\"moi\":{\"condition\":[\"servicedata\",30,\"2f\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,2,false,false]}}}";

/* R""""(
{
   "brand":"rbaron",
   "model":"b-parasite",
   "model_id":"BPv2.0",
   "tag":"0902",
   "condition":["name", "contain", "prst", "uuid", "contain", "fcd2"],
   "properties":{
      "bat":{
         "condition":["servicedata", 2, "01"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, true, false]
      },
      "tempc":{
         "condition":["servicedata", 6, "02"],
         "decoder":["value_from_hex_data", "servicedata", 8, 4, true, true],
         "post_proc":["/", 100]
      },
      "lux":{
         "condition": ["servicedata", 12, "05"],
         "decoder":["value_from_hex_data", "servicedata", 14, 6, true, false],
         "post_proc":["/", 100]
      },
      "volt":{
         "condition": ["servicedata", 20, "0c"],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 1000]
      },
      "hum":{
         "condition":["servicedata", 26, "2e"],
         "decoder":["value_from_hex_data", "servicedata", 28, 2, false, false]
      },
      "moi":{
         "condition":["servicedata", 30, "2f"],
         "decoder":["value_from_hex_data", "servicedata", 32, 2, false, false]
      }
   }
})"""";*/

const char* _BPARASITEV2_json_props = "{\"properties\":{\"bat\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"}}}";
/*R""""(
{
   "properties":{
      "bat":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "lux":{
         "unit":"lx",
         "name":"illuminance"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "moi":{
         "unit":"%",
         "name":"moisture"
      }
   }
})"""";*/
