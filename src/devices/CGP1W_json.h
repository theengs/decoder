const char* _CGP1W_json = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"tag\":\"02\",\"condition\":[\"servicedata\",\"=\",42,\"index\",2,\"09\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",40,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",4]}}}";
/*R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Weather Station",
   "model_id":"CGP1W",
   "tag":"02",
   "condition":["servicedata", "=", 42, "index", 2, "09", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "pres":{
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 40, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 4]
      }
   }
})"""";*/

const char* _CGP1W_json_props = "{\"properties\":{\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "pres":{
         "unit":"hPa",
         "name":"pressure"
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
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/