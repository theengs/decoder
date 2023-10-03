const char* _XMTZC04HMKG_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"tag\":\"05\",\"condition\":[\"servicedata\",\"index\",0,\"22\",\"|\",\"servicedata\",\"index\",0,\"a2\",\"|\",\"servicedata\",\"index\",0,\"62\",\"|\",\"servicedata\",\"index\",0,\"e2\",\"&\",\"servicedata\",\"=\",20,\"&\",\"uuid\",\"contain\",\"181d\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",0,2,\"person\",\"object\"]},\"unit\":{\"decoder\":[\"static_value\",\"kg\"]},\"weight\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",200]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi Smart Scale",
   "model_id":"XMTZC01HM/XMTZC04HM",
   "tag":"05",
   "condition":["servicedata", "index", 0, "22", "|", "servicedata", "index", 0, "a2", "|", "servicedata", "index", 0, "62", "|", "servicedata", "index", 0, "e2", "&", "servicedata", "=", 20, "&", "uuid", "contain", "181d"],
   "properties":{
      "weighing_mode":{
         "decoder":["bit_static_value", "servicedata", 0, 2, "person", "object"]
      },
      "unit":{
         "decoder":["static_value", "kg"]
      },
      "weight":{
         "decoder":["value_from_hex_data", "servicedata", 2, 4, true, false],
         "post_proc":["/", 200]
      }
   }
})"""";*/

const char* _XMTZC04HMKG_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"unit\":{\"unit\":\"string\",\"name\":\"unit\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"}}}";
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
         "unit":"kg",
         "name":"weight"
      }
   }
})"""";*/
