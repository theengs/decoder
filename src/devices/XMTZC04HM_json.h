const char* _XMTZC04HM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"tag\":\"05\",\"condition\":[\"servicedata\",\"index\",0,\"2\",\"|\",\"servicedata\",\"index\",0,\"a\",\"|\",\"servicedata\",\"index\",0,\"6\",\"|\",\"servicedata\",\"index\",0,\"e\",\"&\",\"uuid\",\"contain\",\"181d\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",0,2,\"person\",\"object\"]},\"unit\":{\"decoder\":[\"bit_static_value\",\"servicedata\",1,0,\"kg\",\"lb\"]},\"weight\":{\"condition\":[\"servicedata\",1,\"2\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",200]},\"_weight\":{\"condition\":[\"servicedata\",1,\"3\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi Smart Scale",
   "model_id":"XMTZC01HM/XMTZC04HM",
   "tag":"05",
   "condition":["servicedata", "index", 0, "2", "|", "servicedata", "index", 0, "a", "|", "servicedata", "index", 0, "6", "|", "servicedata", "index", 0, "e", "&", "uuid", "contain", "181d"],
   "properties":{
      "weighing_mode":{
         "decoder":["bit_static_value", "servicedata", 0, 2, "person", "object"]
      },
      "unit":{
         "decoder":["bit_static_value", "servicedata", 1, 0, "kg", "lb"]
      },
      "weight":{
         "condition":["servicedata", 1, "2"],
         "decoder":["value_from_hex_data", "servicedata", 2, 4, true, false],
         "post_proc":["/", 200]
      },
      "_weight":{
         "condition":["servicedata", 1, "3"],
         "decoder":["value_from_hex_data", "servicedata", 2, 4, true, false],
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _XMTZC04HM_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"}}}";
/*R""""(
{
   "properties":{
      "weighing_mode":{
         "unit":"string",
         "name":"weighing_mode"
      },
      "weight":{
         "unit":"kg",
         "name":"weight"
      }
   }
})"""";*/
