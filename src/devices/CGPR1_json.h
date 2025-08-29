const char* _CGPR1_json = "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"tag\":\"0404\",\"cond\":[\"servicedata\",\"=\",28,\"index\",2,\"12\",\"|\",\"servicedata\",\"=\",34,\"index\",2,\"12\",\"|\",\"servicedata\",\"=\",40,\"index\",2,\"12\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"lux\":{\"cond\":[\"servicedata\",\"=\",40],\"decoder\":[\"vfhd\",\"servicedata\",32,4,true,false]},\"_lux\":{\"cond\":[\"servicedata\",\"=\",34],\"decoder\":[\"vfhd\",\"servicedata\",22,4,true,false]},\"motion\":{\"cond\":[\"servicedata\",\"=\",34],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,false,true]},\"_motion\":{\"cond\":[\"servicedata\",\"=\",28],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,false,true]},\"batt\":{\"cond\":[\"servicedata\",\"=\",40],\"decoder\":[\"vfhd\",\"servicedata\",20,2,false,false]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",4]}}}";
/*
R""""(
{
   "brand":"Qingping",
   "model":"Motion & Light",
   "model_id":"CGPR1",
   "tag":"0404",
   "cond":["servicedata", "=", 28, "index", 2, "12", "|", "servicedata", "=", 34, "index", 2, "12", "|", "servicedata", "=", 40, "index", 2, "12", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "lux":{
         "cond":["servicedata", "=", 40],
         "decoder":["vfhd", "servicedata", 32, 4, true, false]
      },
      "_lux":{
         "cond":["servicedata", "=", 34],
         "decoder":["vfhd", "servicedata", 22, 4, true, false]
      },
      "motion":{
         "cond":["servicedata", "=", 34],
         "decoder":["bit_static_value", "servicedata", 21, 0, false, true]
      },
      "_motion":{
         "cond":["servicedata", "=", 28],
         "decoder":["bit_static_value", "servicedata", 21, 0, false, true]
      },
      "batt":{
         "cond":["servicedata", "=", 40],
         "decoder":["vfhd", "servicedata", 20, 2, false, false]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 4]
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
