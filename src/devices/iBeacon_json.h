const char* _ibeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"IBEACON\",\"model_id\":\"IBEACON\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c00\"],\"properties\":{\"mfid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",0,4]},\"uuid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",8,32]},\"major\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false]},\"minor\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false]},\"power\":{\"condition\":[\"manufacturerdata\",48,\"8\",\"|\",\"manufacturerdata\",48,\"9\",\"|\",\"manufacturerdata\",48,\"a\",\"|\",\"manufacturerdata\",48,\"b\",\"|\",\"manufacturerdata\",48,\"c\",\"|\",\"manufacturerdata\",48,\"d\",\"|\",\"manufacturerdata\",48,\"e\",\"|\",\"manufacturerdata\",48,\"f\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"volt\":{\"condition\":[\"manufacturerdata\",48,\"0\",\"|\",\"manufacturerdata\",48,\"1\",\"|\",\"manufacturerdata\",48,\"2\",\"|\",\"manufacturerdata\",48,\"3\",\"|\",\"manufacturerdata\",48,\"4\",\"|\",\"manufacturerdata\",48,\"5\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"IBEACON",
   "model_id":"IBEACON",
   "condition":["manufacturerdata", "=", 50, "index", 0, "4c00"],
   "properties":{
      "mfid":{
         "decoder":["string_from_hex_data", "manufacturerdata", 0, 4]
      },
      "uuid":{
         "decoder":["string_from_hex_data", "manufacturerdata", 8, 32]
      },
      "major":{
         "decoder":["value_from_hex_data", "manufacturerdata", 40, 4, false]
      },
      "minor":{
         "decoder":["value_from_hex_data", "manufacturerdata", 44, 4, false]
      },
      "power":{
         "condition":["manufacturerdata", 48, "8", "|", "manufacturerdata", 48, "9", "|", "manufacturerdata", 48, "a", "|", "manufacturerdata", 48, "b", "|", "manufacturerdata", 48, "c", "|", "manufacturerdata", 48, "d", "|", "manufacturerdata", 48, "e", "|", "manufacturerdata", 48, "f"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "volt":{
         "condition":["manufacturerdata", 48, "0", "|", "manufacturerdata", 48, "1", "|", "manufacturerdata", 48, "2", "|", "manufacturerdata", 48, "3", "|", "manufacturerdata", 48, "4", "|", "manufacturerdata", 48, "5"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _ibeacon_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"minor\":{\"unit\":\"hex\",\"name\":\"minor value\"},\"power\":{\"unit\":\"int\",\"name\":\"tx power\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
/*R""""(
{
   "properties":{
      "mfid":{
         "unit":"hex",
         "name":"manufacturer id"
      },
      "uuid":{
         "unit":"hex",
         "name":"service uuid"
      },
      "major":{
         "unit":"hex",
         "name":"major value"
      },
      "minor":{
         "unit":"hex",
         "name":"minor value"
      },
      "power":{
         "unit":"int",
         "name":"tx power"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
