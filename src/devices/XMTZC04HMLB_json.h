const char* _XMTZC04HMLB_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"tag\":\"05\",\"condition\":[\"servicedata\",\"index\",0,\"23\",\"|\",\"servicedata\",\"index\",0,\"a3\",\"|\",\"servicedata\",\"index\",0,\"63\",\"|\",\"servicedata\",\"index\",0,\"e3\",\"&\",\"servicedata\",\"=\",20,\"&\",\"uuid\",\"contain\",\"181d\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",0,2,\"person\",\"object\"]},\"unit\":{\"decoder\":[\"static_value\",\"lb\"]},\"weight\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi Smart Scale",
   "model_id":"XMTZC01HM/XMTZC04HM",
   "tag":"05",
   "condition":["servicedata", "index", 0, "23", "|", "servicedata", "index", 0, "a3", "|", "servicedata", "index", 0, "63", "|", "servicedata", "index", 0, "e3", "&", "servicedata", "=", 20, "&", "uuid", "contain", "181d"],
   "properties":{
      "weighing_mode":{
         "decoder":["bit_static_value", "servicedata", 0, 2, "person", "object"]
      },
      "unit":{
         "decoder":["static_value", "lb"]
      },
      "weight":{
         "decoder":["value_from_hex_data", "servicedata", 2, 4, true, false],
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _XMTZC04HMLB_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"unit\":{\"unit\":\"string\",\"name\":\"unit\"},\"weight\":{\"unit\":\"lb\",\"name\":\"weight\"}}}";
/*R""""(
{
   "properties":{
      "weighing_mode":{
         "unit":"string",
         "name":"weighing_mode"
      },
      "unit":{
         "unit":"string",
         "name":"unit"
      },
      "weight":{
         "unit":"lb",
         "name":"weight"
      }
   }
})"""";*/
