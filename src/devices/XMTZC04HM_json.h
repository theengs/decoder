#ifndef PROGMEM
#  define PROGMEM
#endif

const char _XMTZC04HM_json[] PROGMEM = "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"condition\":[\"servicedata\",\"index\",0,\"2\",\"|\",\"servicedata\",\"index\",0,\"a\",\"|\",\"servicedata\",\"index\",0,\"6\",\"|\",\"servicedata\",\"index\",0,\"e\",\"&\",\"uuid\",\"contain\",\"181d\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",0,2,\"person\",\"object\"]},\"unit\":{\"decoder\":[\"bit_static_value\",\"servicedata\",1,0,\"kg\",\"lb\"]},\"weight\":{\"condition\":[\"servicedata\",1,\"2\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",200]},\"_weight\":{\"condition\":[\"servicedata\",1,\"3\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi_Smart_Scale",
   "model_id":"XMTZC01HM/XMTZC04HM",
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

const char _XMTZC04HM_json_props[] PROGMEM = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"}}}";
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
