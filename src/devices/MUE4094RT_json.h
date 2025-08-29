const char* _MUE4094RT_json = "{\"brand\":\"Xiaomi\",\"model\":\"MiLamp\",\"model_id\":\"MUE4094RT\",\"tag\":\"0404\",\"cond\":[\"servicedata\",\">=\",18,\"index\",2,\"30dd\",\"&\",\"uuid\",\"index\",0,\"fe95\"],\"properties\":{\"motion\":{\"cond\":[\"servicedata\",0,\"40\"],\"decoder\":[\"static_value\",true],\"is_bool\":1},\"darkness\":{\"cond\":[\"servicedata\",0,\"40\"],\"decoder\":[\"vfhd\",\"servicedata\",8,2,true]},\"mac\":{\"cond\":[\"servicedata\",0,\"30\"],\"decoder\":[\"revmfhd\",\"servicedata\",10]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"MiLamp",
   "model_id":"MUE4094RT",
   "tag":"0404",
   "cond":["servicedata", ">=", 18, "index", 2, "30dd", "&", "uuid", "index", 0, "fe95"],
   "properties":{
      "motion":{
         "cond":["servicedata", 0, "40"],
         "decoder":["static_value", true],
         "is_bool":1
      },
      "darkness":{
         "cond":["servicedata", 0, "40"],
         "decoder":["vfhd", "servicedata", 8, 2, true]
      },
      "mac":{
         "cond":["servicedata", 0, "30"],
         "decoder":["revmfhd", "servicedata", 10]
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
