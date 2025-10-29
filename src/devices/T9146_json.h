const char* _T9146_json = "{\"brand\":\"eufy\",\"model\":\"Smart Scale C1\",\"model_id\":\"T9146\",\"tag\":\"05\",\"condition\":[\"manufacturerdata\",\"index\",0,\"cfe50c\",\"&\",\"name\",\"contain\",\"eufy T9146\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"static_value\",\"person\"]},\"unit\":{\"decoder\":[\"static_value\",\"kg\"]},\"weight\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"eufy",
   "model":"Smart Scale C1",
   "model_id":"T9146",
   "tag":"05",
   "condition":["manufacturerdata", "index", 0, "cfe50c", "&", "name", "contain", "eufy T9146"],
   "properties":{
      "weighing_mode":{
         "decoder":["static_value", "person"]
      },
      "unit":{
         "decoder":["static_value", "kg"]
      },
      "weight":{
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false],
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _T9146_json_props = "{\"properties\":{\"weighing_mode\":{\"unit\":\"string\",\"name\":\"weighing_mode\"},\"unit\":{\"unit\":\"string\",\"name\":\"unit\"},\"weight\":{\"unit\":\"kg\",\"name\":\"weight\"}}}";
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
