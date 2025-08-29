const char* _ABN07_json = "{\"brand\":\"April Brother\",\"model\":\"N07\",\"model_id\":\"ABN07\",\"tag\":\"010a\",\"cond\":[\"svd\",\"=\",22,\"ind\",0,\"40\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"asensor_\"],\"properties\":{\"packet\":{\"cond\":[\"svd\",2,\"00\"],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"batt\":{\"cond\":[\"svd\",6,\"01\"],\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]},\"tempc\":{\"cond\":[\"svd\",10,\"02\"],\"decoder\":[\"vfhd\",\"svd\",12,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"cond\":[\"svd\",16,\"03\"],\"decoder\":[\"vfhd\",\"svd\",18,4,true,false],\"post_proc\":[\"/\",100]}}}";
/* R""""(
{
   "brand":"April Brother",
   "model":"N07",
   "model_id":"ABN07",
   "tag":"010a",
   "cond":["svd", "=", 22, "ind", 0, "40", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "asensor_"],
   "properties":{
      "packet":{
         "cond":["svd", 2, "00"],
         "decoder":["vfhd", "svd", 4, 2, false, false]
      },
      "batt":{
         "cond":["svd", 6, "01"],
         "decoder":["vfhd", "svd", 8, 2, false, false]
      },
      "tempc":{
         "cond":["svd", 10, "02"],
         "decoder":["vfhd", "svd", 12, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "cond":["svd", 16, "03"],
         "decoder":["vfhd", "svd", 18, 4, true, false],
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _ABN07_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "packet":{
         "unit":"int",
         "name":"packet id"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
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
