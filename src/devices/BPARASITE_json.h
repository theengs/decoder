const char* _BPARASITE_json = "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"tag\":\"0904\",\"cond\":[\"svd\",\">=\",32,\"ind\",0,\"1\",\"|\",\"svd\",\">=\",32,\"ind\",0,\"2\",\"&\",\"uuid\",\"ind\",0,\"181a\"],\"properties\":{\"tempc\":{\"cond\":[\"svd\",0,\"1\"],\"decoder\":[\"vfhd\",\"svd\",8,4,false,true],\"post_proc\":[\"/\",1000]},\"_tempc\":{\"cond\":[\"svd\",0,\"2\"],\"decoder\":[\"vfhd\",\"svd\",8,4,false,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",12,4,false,false],\"post_proc\":[\"/\",655.35]},\"moi\":{\"decoder\":[\"vfhd\",\"svd\",16,4,false,false],\"post_proc\":[\"/\",655.35]},\"lux\":{\"cond\":[\"svd\",1,\"bit\",0,1],\"decoder\":[\"vfhd\",\"svd\",32,4,false,false]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",4,4,false,false],\"post_proc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"mfhd\",\"svd\",20]}}}";

/* R""""(
{
   "brand":"rbaron",
   "model":"b-parasite",
   "model_id":"BPv1.0-1.2",
   "tag":"0904",
   "cond":["svd", ">=", 32, "ind", 0, "1", "|", "svd", ">=", 32, "ind", 0, "2", "&", "uuid", "ind", 0, "181a"],
   "properties":{
      "tempc":{
         "cond":["svd", 0, "1"],
         "decoder":["vfhd", "svd", 8, 4, false, true],
         "post_proc":["/", 1000]
      },
      "_tempc":{
         "cond":["svd", 0, "2"],
         "decoder":["vfhd", "svd", 8, 4, false, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "svd", 12, 4, false, false],
         "post_proc":["/", 655.35]
      },
      "moi":{
         "decoder":["vfhd", "svd", 16, 4, false, false],
         "post_proc":["/", 655.35]
      },
      "lux":{
         "cond":["svd", 1, "bit", 0, 1],
         "decoder":["vfhd", "svd", 32, 4, false, false]
      },
      "volt":{
         "decoder":["vfhd", "svd", 4, 4, false, false],
          "post_proc":["/", 1000]
      },
      "mac":{
         "decoder":["mfhd", "svd", 20]
      }
   }
})"""";*/

const char* _BPARASITE_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"},\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
