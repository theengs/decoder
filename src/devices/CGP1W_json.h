const char* _CGP1W_json = "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"tag\":\"02\",\"cond\":[\"svd\",\"=\",42,\"index\",2,\"09\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",24,4,true,false],\"post_proc\":[\"/\",10]},\"pres\":{\"decoder\":[\"vfhd\",\"svd\",32,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",40,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",4]}}}";
/*R""""(
{
   "brand":"ClearGrass/Qingping",
   "model":"Weather Station",
   "model_id":"CGP1W",
   "tag":"02",
   "cond":["svd", "=", 42, "index", 2, "09", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "pres":{
         "decoder":["vfhd", "svd", 32, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "decoder":["vfhd", "svd", 40, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 4]
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