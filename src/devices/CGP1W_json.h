const char* _CGP1W_json = "{\"brand\":\"Xiaomi\",\"model\":\"CG_THP\",\"model_id\":\"CGP1W\",\"condition\":[\"svcd\",\"indx\",0,\"0809\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svcd\",20,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svcd\",24,4,true,false],\"post_proc\":[\"/\",10]},\"pres\":{\"decoder\":[\"vfhd\",\"svcd\",32,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"CG_THP",
   "model_id":"CGP1W",
   "condition":["svcd", "indx", 0, "0809"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svcd", 20, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svcd", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "pres":{
         "decoder":["vfhd", "svcd", 32, 4, true, false],
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _CGP1W_json_props = "{\"properties\":{\"pres\":{\"unit\":\"kpa\",\"name\":\"pressure\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "pres":{
         "unit":"kpa",
         "name":"pressure"
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