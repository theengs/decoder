const char* _XMTZC04HM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"condition\":[\"servicedata\",\"index\",0,\"2\",\"|\",\"servicedata\",\"index\",0,\"a\",\"|\",\"servicedata\",\"index\",0,\"6\",\"|\",\"servicedata\",\"index\",0,\"e\",\"&\",\"uuid\",\"contain\",\"181d\"],\"properties\":{\"weighing_mode\":{\"condition\":[\"servicedata\",0,\"2\",\"|\",\"servicedata\",0,\"a\"],\"decoder\":[\"static_value\",\"person\"]},\"_weighing_mode\":{\"condition\":[\"servicedata\",0,\"6\",\"|\",\"servicedata\",0,\"e\"],\"decoder\":[\"static_value\",\"object\"]},\"unit\":{\"condition\":[\"servicedata\",1,\"2\"],\"decoder\":[\"static_value\",\"kg\"]},\"_unit\":{\"condition\":[\"servicedata\",1,\"3\"],\"decoder\":[\"static_value\",\"lb\"]},\"weight\":{\"condition\":[\"servicedata\",1,\"2\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",200]},\"_weight\":{\"condition\":[\"servicedata\",1,\"3\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi_Smart_Scale",
   "model_id":"XMTZC01HM/XMTZC04HM",
   "condition":["servicedata", "index", 0, "2", "|", "servicedata", "index", 0, "a", "|", "servicedata", "index", 0, "6", "|", "servicedata", "index", 0, "e", "&", "uuid", "contain", "181d"],
   "properties":{
      "weighing_mode":{
         "condition":["servicedata", 0, "2", "|", "servicedata", 0, "a"],
         "decoder":["static_value", "person"]
      },
      "_weighing_mode":{
         "condition":["servicedata", 0, "6", "|", "servicedata", 0, "e"],
         "decoder":["static_value", "object"]
      },
      "unit":{
         "condition":["servicedata", 1, "2"],
         "decoder":["static_value", "kg"]
      },
      "_unit":{
         "condition":["servicedata", 1, "3"],
         "decoder":["static_value", "lb"]
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
