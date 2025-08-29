const char* _MUE4094RT_json = "{\"brand\":\"Xiaomi\",\"model\":\"MiLamp\",\"model_id\":\"MUE4094RT\",\"tag\":\"0404\",\"cond\":[\"svd\",\">=\",18,\"index\",2,\"30dd\",\"&\",\"uuid\",\"index\",0,\"fe95\"],\"properties\":{\"motion\":{\"cond\":[\"svd\",0,\"40\"],\"decoder\":[\"static_value\",true],\"is_bool\":1},\"darkness\":{\"cond\":[\"svd\",0,\"40\"],\"decoder\":[\"vfhd\",\"svd\",8,2,true]},\"mac\":{\"cond\":[\"svd\",0,\"30\"],\"decoder\":[\"revmfhd\",\"svd\",10]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"MiLamp",
   "model_id":"MUE4094RT",
   "tag":"0404",
   "cond":["svd", ">=", 18, "index", 2, "30dd", "&", "uuid", "index", 0, "fe95"],
   "properties":{
      "motion":{
         "cond":["svd", 0, "40"],
         "decoder":["static_value", true],
         "is_bool":1
      },
      "darkness":{
         "cond":["svd", 0, "40"],
         "decoder":["vfhd", "svd", 8, 2, true]
      },
      "mac":{
         "cond":["svd", 0, "30"],
         "decoder":["revmfhd", "svd", 10]
      }
   }
})"""";*/

const char* _MUE4094RT_json_props = "{\"properties\":{\"motion\":{\"unit\":\"status\",\"name\":\"motion\"},\"darkness\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "motion":{
         "unit":"status",
         "name":"motion"
      },
      "darkness":{
         "unit":"lx",
         "name":"illuminance"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
