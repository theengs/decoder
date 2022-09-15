const char* _XMTZC05HM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"condition\":[\"servicedata\",\"index\",2,\"2\",\"|\",\"servicedata\",\"index\",2,\"a\",\"&\",\"uuid\",\"contain\",\"181b\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",1,2,\"person\",\"object\"]},\"unit\":{\"decoder\":[\"bit_static_value\",\"servicedata\",1,0,\"kg\",\"lb\"]},\"weight\":{\"condition\":[\"servicedata\",1,\"bit\",0,0],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",200]},\"_weight\":{\"condition\":[\"servicedata\",1,\"bit\",0,1],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",100]},\"impedance\":{\"condition\":[\"servicedata\",3,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi_Body_Composition_Scale",
   "model_id":"XMTZC02HM/XMTZC05HM",
   "condition":["servicedata", "index", 2, "2", "|", "servicedata", "index", 2, "a", "&", "uuid", "contain", "181b"],
   "properties":{
      "weighing_mode":{
         "decoder":["bit_static_value", "servicedata", 1, 2, "person", "object"]
      },
      "unit":{
         "decoder":["bit_static_value", "servicedata", 1, 0, "kg", "lb"]
      },
      "weight":{
         "condition":["servicedata", 1, "bit", 0, 0],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 200]
      },
      "_weight":{
         "condition":["servicedata", 1, "bit", 0, 1],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 100]
      },
      "impedance":{
         "condition":["servicedata", 3, "6"],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false]
      }
   }
})"""";*/

const char* _XMTZC05HM_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"},\"impedance\":{\"unit\":\"Ω\",\"name\":\"impedance\"}}}";
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
      },
      "impedance":{
         "unit":"Ω",
         "name":"impedance"
      }
   }
})"""";*/