const char* _ibeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c00\"],\"properties\":{\"mfid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",0,4]},\"uuid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",8,32]},\"major\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false]},\"minor\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false]},\"txpower\":{\"condition\":[\"manufacturerdata\",48,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"volt\":{\"condition\":[\"manufacturerdata\",48,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"iBeacon",
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
      "txpower":{
         "condition":["manufacturerdata", 48, "bit", 3, 1],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "volt":{
         "condition":["manufacturerdata", 48, "bit", 3, 0],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _ibeacon_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"minor\":{\"unit\":\"hex\",\"name\":\"minor value\"},\"txpower\":{\"unit\":\"dBm\",\"name\":\"tx power @ 1 m\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
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
      "txpower":{
         "unit":"dBm",
         "name":"tx power @ 1 m"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
