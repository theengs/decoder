const char* _XMTZC04HM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"condition\":[\"svcd\",\"indx\",0,\"2\",\"|\",\"svcd\",\"indx\",0,\"a\",\"|\",\"svcd\",\"indx\",0,\"6\",\"|\",\"svcd\",\"indx\",0,\"e\",\"&\",\"uuid\",\"cont\",\"181d\"],\"properties\":{\"weighing_mode\":{\"condition\":[\"svcd\",0,\"2\",\"|\",\"svcd\",0,\"a\"],\"decoder\":[\"static_value\",\"person\"]},\"_weighing_mode\":{\"condition\":[\"svcd\",0,\"6\",\"|\",\"svcd\",0,\"e\"],\"decoder\":[\"static_value\",\"object\"]},\"unit\":{\"condition\":[\"svcd\",1,\"2\"],\"decoder\":[\"static_value\",\"kg\"]},\"_unit\":{\"condition\":[\"svcd\",1,\"3\"],\"decoder\":[\"static_value\",\"lb\"]},\"weight\":{\"condition\":[\"svcd\",1,\"2\"],\"decoder\":[\"vfhd\",\"svcd\",2,4,true,false],\"post_proc\":[\"/\",200]},\"_weight\":{\"condition\":[\"svcd\",1,\"3\"],\"decoder\":[\"vfhd\",\"svcd\",2,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Mi_Smart_Scale",
   "model_id":"XMTZC01HM/XMTZC04HM",
   "condition":["svcd", "indx", 0, "2", "|", "svcd", "indx", 0, "a", "|", "svcd", "indx", 0, "6", "|", "svcd", "indx", 0, "e", "&", "uuid", "cont", "181d"],
   "properties":{
      "weighing_mode":{
         "condition":["svcd", 0, "2", "|", "svcd", 0, "a"],
         "decoder":["static_value", "person"]
      },
      "_weighing_mode":{
         "condition":["svcd", 0, "6", "|", "svcd", 0, "e"],
         "decoder":["static_value", "object"]
      },
      "unit":{
         "condition":["svcd", 1, "2"],
         "decoder":["static_value", "kg"]
      },
      "_unit":{
         "condition":["svcd", 1, "3"],
         "decoder":["static_value", "lb"]
      },
      "weight":{
         "condition":["svcd", 1, "2"],
         "decoder":["vfhd", "svcd", 2, 4, true, false],
         "post_proc":["/", 200]
      },
      "_weight":{
         "condition":["svcd", 1, "3"],
         "decoder":["vfhd", "svcd", 2, 4, true, false],
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
