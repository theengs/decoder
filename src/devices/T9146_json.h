const char* _T9146_json = "{\"brand\":\"eufy\",\"model\":\"Smart Scale C1\",\"model_id\":\"T9146\",\"tag\":\"05\",\"condition\":[\"manufacturerdata\",\"index\",0,\"cfe50c\",\"&\",\"name\",\"contain\",\"eufy T9146\"],\"properties\":{\"weighing_mode\":{\"decoder\":[\"static_value\",\"person\"]},\"unit\":{\"decoder\":[\"static_value\",\"kg\"]},\"weight\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"eufy",
   "model":"Smart Scale C1",
   "model_id":"T9146",
   "tag":"05",
   "condition":["manufacturerdata", "index", 0, "cf", "manufacturerdata", "index", 12, "cf", "&", "name", "contain", "eufy T9146"],
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
// manufacturerdata starts with the mac address (6 bytes / 12 hex chars)
// then constant "cf" plus 13 more bytes / 26 more chars
// total length is 40 chars / 20 bytes
// weight is encoded in hex char position 18 to 22, little endian, as 100ths of kg
// for example, cfe50c0301eccfa2128c232624540100874a9146 => 8c23 => 0x238c => 91.00 kg

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
