const char* _CGPR1_json = "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"tag\":\"0404\",\"condition\":[\"servicedata\",\"=\",28,\"index\",2,\"12\",\"|\",\"servicedata\",\"=\",34,\"index\",2,\"12\",\"|\",\"servicedata\",\"=\",40,\"index\",2,\"12\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"lux\":{\"condition\":[\"servicedata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"servicedata\",32,4,true,false]},\"_lux\":{\"condition\":[\"servicedata\",\"=\",34],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false]},\"pres\":{\"condition\":[\"servicedata\",\"=\",34],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,false,true]},\"_pres\":{\"condition\":[\"servicedata\",\"=\",28],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,false,true]},\"batt\":{\"condition\":[\"servicedata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,2,false,false]}}}";
/*
R""""(
{
   "brand":"Qingping",
   "model":"Motion & Light",
   "model_id":"CGPR1",
   "tag":"0404",
   "condition":["servicedata", "=", 28, "index", 2, "12", "|", "servicedata", "=", 34, "index", 2, "12", "|", "servicedata", "=", 40, "index", 2, "12", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "lux":{
         "condition":["servicedata", "=", 40],
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false]
      },
      "_lux":{
         "condition":["servicedata", "=", 34],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false]
      },
      "pres":{
         "condition":["servicedata", "=", 34],
         "decoder":["bit_static_value", "servicedata", 21, 0, false, true]
      },
      "_pres":{
         "condition":["servicedata", "=", 28],
         "decoder":["bit_static_value", "servicedata", 21, 0, false, true]
      },
      "batt":{
         "condition":["servicedata", "=", 40],
         "decoder":["value_from_hex_data", "servicedata", 20, 2, false, false]
      }
   }
})"""";*/

const char* _CGPR1_json_props = "{\"properties\":{\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"pres\":{\"unit\":\"status\",\"name\":\"presence\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
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
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
