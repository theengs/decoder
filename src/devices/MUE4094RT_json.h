const char* _MUE4094RT_json = "{\"brand\":\"Xiaomi\",\"model\":\"MiLamp\",\"model_id\":\"MUE4094RT\",\"tag\":\"0404\",\"condition\":[\"servicedata\",\">=\",18,\"index\",2,\"30dd\",\"&\",\"uuid\",\"index\",0,\"fe95\"],\"properties\":{\"motion\":{\"condition\":[\"servicedata\",0,\"40\"],\"decoder\":[\"static_value\",true],\"is_bool\":1},\"darkness\":{\"condition\":[\"servicedata\",0,\"40\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,true]},\"mac\":{\"condition\":[\"servicedata\",0,\"30\"],\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",10]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"MiLamp",
   "model_id":"MUE4094RT",
   "tag":"0404",
   "condition":["servicedata", ">=", 18, "index", 2, "30dd", "&", "uuid", "index", 0, "fe95"],
   "properties":{
      "motion":{
         "condition":["servicedata", 0, "40"],
         "decoder":["static_value", true],
         "is_bool":1
      },
      "darkness":{
         "condition":["servicedata", 0, "40"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, true]
      },
      "mac":{
         "condition":["servicedata", 0, "30"],
         "decoder":["revmac_from_hex_data", "servicedata", 10]
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
