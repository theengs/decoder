const char* _XMTZC05HM_json_v2 = "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Scale_2\",\"model_id\":\"XMTZC05HM\",\"condition\":[\"servicedata\",\"index\",2,\"a\",\"|\",\"servicedata\",\"index\",2,\"2\",\"&\",\"uuid\",\"contain\",\"181b\"],\"properties\":{\"mode\":{\"condition\":[\"servicedata\",1,\"2\",\"|\",\"servicedata\",1,\"3\"],\"decoder\":[\"static_value\",\"person\"]},\"_mode\":{\"condition\":[\"servicedata\",1,\"6\",\"|\",\"servicedata\",1,\"7\"],\"decoder\":[\"static_value\",\"object\"]},\"unit\":{\"condition\":[\"servicedata\",1,\"2\",\"|\",\"servicedata\",1,\"6\"],\"decoder\":[\"static_value\",\"kg\"]},\"_unit\":{\"condition\":[\"servicedata\",1,\"3\",\"|\",\"servicedata\",1,\"7\"],\"decoder\":[\"static_value\",\"lbs\"]},\"weight\":{\"condition\":[\"servicedata\",1,\"2\",\"|\",\"servicedata\",1,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",200]},\"_weight\":{\"condition\":[\"servicedata\",1,\"3\",\"|\",\"servicedata\",1,\"7\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",100]},\"impedance\":{\"condition\":[\"servicedata\",3,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi_Body_Scale_2",
   "model_id":"XMTZC05HM",
   "condition":["servicedata", "index", 2, "a", "|", "servicedata", "index", 2, "2", "&", "uuid", "contain", "181b"],
   "properties":{
      "mode":{
         "condition":["servicedata", 1, "2", "|", "servicedata", 1, "3"],
         "decoder":["static_value", "person"]
      },
      "_mode":{
         "condition":["servicedata", 1, "6", "|", "servicedata", 1, "7"],
         "decoder":["static_value", "object"]
      },
      "unit":{
         "condition":["servicedata", 1, "2", "|", "servicedata", 1, "6"],
         "decoder":["static_value", "kg"]
      },
      "_unit":{
         "condition":["servicedata", 1, "3", "|", "servicedata", 1, "7"],
         "decoder":["static_value", "lbs"]
      },
      "weight":{
         "condition":["servicedata", 1, "2", "|", "servicedata", 1, "6"],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 200]
      },
      "_weight":{
         "condition":["servicedata", 1, "3", "|", "servicedata", 1, "7"],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 100]
      },
      "impedance":{
         "condition":["servicedata", 3, "6"],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false]
      }
   }
})"""";*/

const char* _XMTZC05HM_json_props = "{\"properties\":{\"mode\":{\"unit\":\"string\",\"name\":\"mode\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"},\"impedance\":{\"unit\":\"Ohm\",\"name\":\"impedance\"}}}";
/*R""""(
{
   "properties":{
      "mode":{
         "unit":"string",
         "name":"mode"
      },
      "weight":{
         "unit":"kg",
         "name":"weight"
      },
      "impedance":{
         "unit":"Ohm",
         "name":"impedance"
      }
   }
})"""";*/