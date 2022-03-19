const char* _MUE4094RT_json = "{\"brand\":\"Xiaomi\",\"model\":\"MiLamp\",\"model_id\":\"MUE4094RT\",\"condition\":[\"servicedata\",\"contain\",\"4030dd\"],\"properties\":{\"pres\":{\"condition\":[\"servicedata\",0,\"4812\"],\"decoder\":[\"static_value\",true],\"is_bool\":1},\"darkness\":{\"condition\":[\"servicedata\",0,\"4812\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,true]}}}";
/*
R""""(
{
   "brand":"Xiaomi",
   "model":"MiLamp",
   "model_id":"MUE4094RT",
   "condition":["servicedata", "contain", "4030dd"],
   "properties":{
      "pres":{
         "condition":["servicedata", 0, "4812"],
         "decoder":["static_value", true],
         "is_bool":1
      },
      "darkness":{
         "condition":["servicedata", 0, "4812"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, true]
      }
   }
})"""";*/

const char* _MUE4094RT_json_props = "{\"properties\":{\"pres\":{\"unit\":\"status\",\"name\":\"presence\"},\"darkness\":{\"unit\":\"lx\",\"name\":\"illuminance\"}}}";
/*R""""(
{
   "properties":{
      "pres":{
         "unit":"status",
         "name":"presence"
      },
      "darkness":{
         "unit":"lx",
         "name":"illuminance"
      }
   }
})"""";*/
