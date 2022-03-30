const char* _XMTZC05HM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"condition\":[\"svcd\",\"indx\",2,\"2\",\"|\",\"svcd\",\"indx\",2,\"a\",\"&\",\"uuid\",\"cont\",\"181b\"],\"properties\":{\"weighing_mode\":{\"condition\":[\"svcd\",1,\"2\",\"|\",\"svcd\",1,\"3\"],\"decoder\":[\"static_value\",\"person\"]},\"_weighing_mode\":{\"condition\":[\"svcd\",1,\"6\",\"|\",\"svcd\",1,\"7\"],\"decoder\":[\"static_value\",\"object\"]},\"unit\":{\"condition\":[\"svcd\",1,\"2\",\"|\",\"svcd\",1,\"6\"],\"decoder\":[\"static_value\",\"kg\"]},\"_unit\":{\"condition\":[\"svcd\",1,\"3\",\"|\",\"svcd\",1,\"7\"],\"decoder\":[\"static_value\",\"lb\"]},\"weight\":{\"condition\":[\"svcd\",1,\"2\",\"|\",\"svcd\",1,\"6\"],\"decoder\":[\"vfhd\",\"svcd\",22,4,true,false],\"post_proc\":[\"/\",200]},\"_weight\":{\"condition\":[\"svcd\",1,\"3\",\"|\",\"svcd\",1,\"7\"],\"decoder\":[\"vfhd\",\"svcd\",22,4,true,false],\"post_proc\":[\"/\",100]},\"impedance\":{\"condition\":[\"svcd\",3,\"6\"],\"decoder\":[\"vfhd\",\"svcd\",18,4,true,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi_Body_Composition_Scale",
   "model_id":"XMTZC02HM/XMTZC05HM",
   "condition":["svcd", "indx", 2, "2", "|", "svcd", "indx", 2, "a", "&", "uuid", "cont", "181b"],
   "properties":{
      "weighing_mode":{
         "condition":["svcd", 1, "2", "|", "svcd", 1, "3"],
         "decoder":["static_value", "person"]
      },
      "_weighing_mode":{
         "condition":["svcd", 1, "6", "|", "svcd", 1, "7"],
         "decoder":["static_value", "object"]
      },
      "unit":{
         "condition":["svcd", 1, "2", "|", "svcd", 1, "6"],
         "decoder":["static_value", "kg"]
      },
      "_unit":{
         "condition":["svcd", 1, "3", "|", "svcd", 1, "7"],
         "decoder":["static_value", "lb"]
      },
      "weight":{
         "condition":["svcd", 1, "2", "|", "svcd", 1, "6"],
         "decoder":["vfhd", "svcd", 22, 4, true, false],
         "post_proc":["/", 200]
      },
      "_weight":{
         "condition":["svcd", 1, "3", "|", "svcd", 1, "7"],
         "decoder":["vfhd", "svcd", 22, 4, true, false],
         "post_proc":["/", 100]
      },
      "impedance":{
         "condition":["svcd", 3, "6"],
         "decoder":["vfhd", "svcd", 18, 4, true, false]
      }
   }
})"""";*/

const char* _XMTZC05HM_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"},\"impedance\":{\"unit\":\"Ohm\",\"name\":\"impedance\"}}}";
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
         "unit":"Ohm",
         "name":"impedance"
      }
   }
})"""";*/