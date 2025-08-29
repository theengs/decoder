const char* _XMTZC05HMLB_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"tag\":\"05\",\"cond\":[\"svd\",\"ind\",1,\"32\",\"|\",\"svd\",\"ind\",1,\"3a\",\"|\",\"svd\",\"ind\",1,\"72\",\"|\",\"svd\",\"ind\",1,\"7a\",\"&\",\"svd\",\"=\",26,\"&\",\"uuid\",\"contain\",\"181b\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"bit_static_value\",\"svd\",1,2,\"person\",\"object\"]},\"unit\":{\"decoder\":[\"static_value\",\"lb\"]},\"weight\":{\"decoder\":[\"vfhd\",\"svd\",22,4,true,false],\"post_proc\":[\"/\",100]},\"impedance\":{\"cond\":[\"svd\",3,\"6\"],\"decoder\":[\"vfhd\",\"svd\",18,4,true,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi Body Composition Scale",
   "model_id":"XMTZC02HM/XMTZC05HM",
   "tag":"05",
   "cond":["svd", "ind", 1, "32", "|", "svd", "ind", 1, "3a", "|", "svd", "ind", 1, "72", "|", "svd", "ind", 1, "7a", "&", "svd", "=", 26, "&", "uuid", "contain", "181b"],
   "properties":{
      "weighing_mode":{
         "decoder":["bit_static_value", "svd", 1, 2, "person", "object"]
      },
      "unit":{
         "decoder":["static_value", "lb"]
      },
      "weight":{
         "decoder":["vfhd", "svd", 22, 4, true, false],
         "post_proc":["/", 100]
      },
      "impedance":{
         "cond":["svd", 3, "6"],
         "decoder":["vfhd", "svd", 18, 4, true, false]
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
