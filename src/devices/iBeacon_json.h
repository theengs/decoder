const char* _ibeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"IBEACON\",\"model_id\":\"IBEACON\",\"condition\":[\"mfrd\",\"=\",50,\"indx\",0,\"4c00\"],\"properties\":{\"mfid\":{\"decoder\":[\"string_from_hex_data\",\"mfrd\",0,4]},\"uuid\":{\"decoder\":[\"string_from_hex_data\",\"mfrd\",8,32]},\"major\":{\"decoder\":[\"vfhd\",\"mfrd\",40,4,false]},\"minor\":{\"decoder\":[\"vfhd\",\"mfrd\",44,4,false]},\"power\":{\"condition\":[\"mfrd\",48,\"8\",\"|\",\"mfrd\",48,\"9\",\"|\",\"mfrd\",48,\"a\",\"|\",\"mfrd\",48,\"b\",\"|\",\"mfrd\",48,\"c\",\"|\",\"mfrd\",48,\"d\",\"|\",\"mfrd\",48,\"e\",\"|\",\"mfrd\",48,\"f\"],\"decoder\":[\"vfhd\",\"mfrd\",48,2,false]},\"volt\":{\"condition\":[\"mfrd\",48,\"0\",\"|\",\"mfrd\",48,\"1\",\"|\",\"mfrd\",48,\"2\",\"|\",\"mfrd\",48,\"3\",\"|\",\"mfrd\",48,\"4\",\"|\",\"mfrd\",48,\"5\"],\"decoder\":[\"vfhd\",\"mfrd\",48,2,false],\"post_proc\":[\"/\",10]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"IBEACON",
   "model_id":"IBEACON",
   "condition":["mfrd", "=", 50, "indx", 0, "4c00"],
   "properties":{
      "mfid":{
         "decoder":["string_from_hex_data", "mfrd", 0, 4]
      },
      "uuid":{
         "decoder":["string_from_hex_data", "mfrd", 8, 32]
      },
      "major":{
         "decoder":["vfhd", "mfrd", 40, 4, false]
      },
      "minor":{
         "decoder":["vfhd", "mfrd", 44, 4, false]
      },
      "power":{
         "condition":["mfrd", 48, "8", "|", "mfrd", 48, "9", "|", "mfrd", 48, "a", "|", "mfrd", 48, "b", "|", "mfrd", 48, "c", "|", "mfrd", 48, "d", "|", "mfrd", 48, "e", "|", "mfrd", 48, "f"],
         "decoder":["vfhd","mfrd", 48, 2, false]
      },
      "volt":{
         "condition":["mfrd", 48, "0", "|", "mfrd", 48, "1", "|", "mfrd", 48, "2", "|", "mfrd", 48, "3", "|", "mfrd", 48, "4", "|", "mfrd", 48, "5"],
         "decoder":["vfhd","mfrd", 48, 2, false],
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
