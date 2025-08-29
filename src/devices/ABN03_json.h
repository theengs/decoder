const char* _ABN03_json = "{\"brand\":\"April Brother\",\"model\":\"N03\",\"model_id\":\"ABN03\",\"tag\":\"0208\",\"cond\":[\"servicedata\",\"=\",30,\"index\",0,\"ab03\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"servicedata\",18,4,true,true],\"post_proc\":[\"/\",8]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",2]},\"lux\":{\"decoder\":[\"vfhd\",\"servicedata\",26,4,true,false]},\"batt\":{\"decoder\":[\"vfhd\",\"servicedata\",16,2,false,false]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"servicedata\",4]}}}";
/* R""""(
{
   "brand":"April Brother",
   "model":"N03",
   "model_id":"ABN03",
   "tag":"0208",
   "cond":["servicedata", "=", 30, "index", 0, "ab03"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "servicedata", 18, 4, true, true],
         "post_proc":["/", 8]
      },
      "hum":{
         "decoder":["vfhd", "servicedata", 22, 4, true, false],
         "post_proc":["/", 2]
      },
      "lux":{
         "decoder":["vfhd", "servicedata", 26, 4, true, false]
      },
      "batt":{
         "decoder":["vfhd", "servicedata", 16, 2, false, false]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "servicedata", 4]
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
