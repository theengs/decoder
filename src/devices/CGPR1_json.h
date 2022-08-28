const char* _CGPR1_json = "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"condition\":[\"servicedata\",\"=\",40,\"index\",2,\"12\",\"|\",\"servicedata\",\"=\",34,\"index\",2,\"12\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"lux\":{\"condition\":[\"servicedata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"servicedata\",33,4,true]},\"pres\":{\"condition\":[\"servicedata\",\"=\",34],\"decoder\":[\"bit_static_value\",\"servicedata\",21,1,true,false]}}}";
/*
R""""(
{
   "brand":"Qingping",
   "model":"Motion & Light",
   "model_id":"CGPR1",
   "condition":["servicedata", "=", 40, "index", 2, "12", "|", "servicedata", "=", 34, "index", 2, "12", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "lux":{
         "condition":["servicedata", "=", 40],
         "decoder":["value_from_hex_data", "servicedata", 33, 4, true]
      },
      "pres":{
         "condition":["servicedata", "=", 34],
         "decoder":["bit_static_value", "servicedata", 21, 1, true, false]
      }
   }
})"""";*/

const char* _CGPR1_json_props = "{\"properties\":{\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"pres\":{\"unit\":\"status\",\"name\":\"presence\"}}}";
/*R""""(
{
   "properties":{
      "lux":{
         "unit":"lx",
         "name":"illuminance"
      },
      "pres":{
         "unit":"status",
         "name":"presence"
      }
   }
})"""";*/
