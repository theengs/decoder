const char* _ABN03_json = "{\"brand\":\"April Brother\",\"model\":\"N03\",\"model_id\":\"ABN03\",\"tag\":\"0208\",\"cond\":[\"svd\",\"=\",30,\"ind\",0,\"ab03\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",18,4,true,true],\"post_proc\":[\"/\",8]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",22,4,true,false],\"post_proc\":[\"/\",2]},\"lux\":{\"decoder\":[\"vfhd\",\"svd\",26,4,true,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",16,2,false,false]},\"mac\":{\"decoder\":[\"mfhd\",\"svd\",4]}}}";
/* R""""(
{
   "brand":"April Brother",
   "model":"N03",
   "model_id":"ABN03",
   "tag":"0208",
   "cond":["svd", "=", 30, "ind", 0, "ab03"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 18, 4, true, true],
         "post_proc":["/", 8]
      },
      "hum":{
         "decoder":["vfhd", "svd", 22, 4, true, false],
         "post_proc":["/", 2]
      },
      "lux":{
         "decoder":["vfhd", "svd", 26, 4, true, false]
      },
      "batt":{
         "decoder":["vfhd", "svd", 16, 2, false, false]
      },
      "mac":{
         "decoder":["mfhd", "svd", 4]
      }
   }
})"""";*/

const char* _ABN03_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
