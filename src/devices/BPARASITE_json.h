const char* _BPARASITE_json = "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"tag\":\"0904\",\"condition\":[\"servicedata\",\">=\",32,\"index\",0,\"1\",\"|\",\"servicedata\",\">=\",32,\"index\",0,\"2\",\"&\",\"uuid\",\"index\",0,\"181a\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",0,\"1\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,4,false,true],\"post_proc\":[\"/\",1000]},\"_tempc\":{\"condition\":[\"servicedata\",0,\"2\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,4,false,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false,false],\"post_proc\":[\"/\",655.35]},\"moi\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,false,false],\"post_proc\":[\"/\",655.35]},\"lux\":{\"condition\":[\"servicedata\",1,\"bit\",0,1],\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,false,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,4,false,false],\"post_proc\":[\"/\",1000]}}}";

/* R""""(
{
   "brand":"rbaron",
   "model":"b-parasite",
   "model_id":"BPv1.0-1.2",
   "tag":"0904",
   "condition":["servicedata", ">=", 32, "index", 0, "1", "|", "servicedata", ">=", 32, "index", 0, "2", "&", "uuid", "index", 0, "181a"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 0, "1"],
         "decoder":["value_from_hex_data", "servicedata", 8, 4, false, true],
         "post_proc":["/", 1000]
      },
      "_tempc":{
         "condition":["servicedata", 0, "2"],
         "decoder":["value_from_hex_data", "servicedata", 8, 4, false, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, false, false],
         "post_proc":["/", 655.35]
      },
      "moi":{
         "decoder":["value_from_hex_data", "servicedata", 16, 4, false, false],
         "post_proc":["/", 655.35]
      },
      "lux":{
         "condition":["servicedata", 1, "bit", 0, 1],
         "decoder":["value_from_hex_data", "servicedata", 32, 4, false, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 4, 4, false, false],
          "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _BPARASITE_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"},\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
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
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
