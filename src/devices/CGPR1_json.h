const char* _CGPR1_json = "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"tag\":\"0404\",\"cond\":[\"svd\",\"=\",28,\"ind\",2,\"12\",\"|\",\"svd\",\"=\",34,\"ind\",2,\"12\",\"|\",\"svd\",\"=\",40,\"ind\",2,\"12\",\"&\",\"uuid\",\"ind\",0,\"fdcd\"],\"properties\":{\"lux\":{\"cond\":[\"svd\",\"=\",40],\"decoder\":[\"vfhd\",\"svd\",32,4,true,false]},\"_lux\":{\"cond\":[\"svd\",\"=\",34],\"decoder\":[\"vfhd\",\"svd\",22,4,true,false]},\"motion\":{\"cond\":[\"svd\",\"=\",34],\"decoder\":[\"bit_static_value\",\"svd\",21,0,false,true]},\"_motion\":{\"cond\":[\"svd\",\"=\",28],\"decoder\":[\"bit_static_value\",\"svd\",21,0,false,true]},\"batt\":{\"cond\":[\"svd\",\"=\",40],\"decoder\":[\"vfhd\",\"svd\",20,2,false,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",4]}}}";
/*
R""""(
{
   "brand":"Qingping",
   "model":"Motion & Light",
   "model_id":"CGPR1",
   "tag":"0404",
   "cond":["svd", "=", 28, "ind", 2, "12", "|", "svd", "=", 34, "ind", 2, "12", "|", "svd", "=", 40, "ind", 2, "12", "&", "uuid", "ind", 0, "fdcd"],
   "properties":{
      "lux":{
         "cond":["svd", "=", 40],
         "decoder":["vfhd", "svd", 32, 4, true, false]
      },
      "_lux":{
         "cond":["svd", "=", 34],
         "decoder":["vfhd", "svd", 22, 4, true, false]
      },
      "motion":{
         "cond":["svd", "=", 34],
         "decoder":["bit_static_value", "svd", 21, 0, false, true]
      },
      "_motion":{
         "cond":["svd", "=", 28],
         "decoder":["bit_static_value", "svd", 21, 0, false, true]
      },
      "batt":{
         "cond":["svd", "=", 40],
         "decoder":["vfhd", "svd", 20, 2, false, false]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 4]
      }
   }
})"""";*/

const char* _CGPR1_json_props = "{\"properties\":{\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"motion\":{\"unit\":\"status\",\"name\":\"motion\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "lux":{
         "unit":"lx",
         "name":"illuminance"
      },
      "motion":{
         "unit":"status",
         "name":"motion"
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
