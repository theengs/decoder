const char* _XMTZC05HMLB_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"tag\":\"05\",\"condition\":[\"servicedata\",\"index\",1,\"32\",\"|\",\"servicedata\",\"index\",1,\"3a\",\"|\",\"servicedata\",\"index\",1,\"72\",\"|\",\"servicedata\",\"index\",1,\"7a\",\"&\",\"servicedata\",\"=\",26,\"&\",\"uuid\",\"contain\",\"181b\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",1,2,\"person\",\"object\"]},\"unit\":{\"decoder\":[\"static_value\",\"lb\"]},\"weight\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",100]},\"impedance\":{\"condition\":[\"servicedata\",3,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi Body Composition Scale",
   "model_id":"XMTZC02HM/XMTZC05HM",
   "tag":"05",
   "condition":["servicedata", "index", 1, "32", "|", "servicedata", "index", 1, "3a", "|", "servicedata", "index", 1, "72", "|", "servicedata", "index", 1, "7a", "&", "servicedata", "=", 26, "&", "uuid", "contain", "181b"],
   "properties":{
      "weighing_mode":{
         "decoder":["bit_static_value", "servicedata", 1, 2, "person", "object"]
      },
      "unit":{
         "decoder":["static_value", "lb"]
      },
      "weight":{
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 100]
      },
      "impedance":{
         "condition":["servicedata", 3, "6"],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false]
      }
   }
})"""";*/

const char* _XMTZC05HMLB_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"unit\":{\"unit\":\"string\",\"name\":\"unit\"},\"weight\":{\"unit\":\"lb\",\"name\":\"weight\"},\"impedance\":{\"unit\":\"Ω\",\"name\":\"impedance\"}}}";
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
      },
      "impedance":{
         "unit":"Ω",
         "name":"impedance"
      }
   }
})"""";*/
