const char* _ibeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"tag\":\"06\",\"cond\":[\"mfd\",\"=\",50,\"index\",0,\"4c000215\"],\"properties\":{\"mfid\":{\"decoder\":[\"sfhd\",\"mfd\",0,4]},\"uuid\":{\"decoder\":[\"sfhd\",\"mfd\",8,32]},\"major\":{\"decoder\":[\"vfhd\",\"mfd\",40,4,false]},\"minor\":{\"decoder\":[\"vfhd\",\"mfd\",44,4,false]},\"txpower\":{\"cond\":[\"mfd\",48,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",48,2,false]},\"volt\":{\"cond\":[\"mfd\",48,\"bit\",3,0],\"decoder\":[\"vfhd\",\"mfd\",48,2,false],\"post_proc\":[\"/\",10]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"iBeacon",
   "model_id":"IBEACON",
   "tag":"06",
   "cond":["mfd", "=", 50, "index", 0, "4c000215"],
   "properties":{
      "mfid":{
         "decoder":["sfhd", "mfd", 0, 4]
      },
      "uuid":{
         "decoder":["sfhd", "mfd", 8, 32]
      },
      "major":{
         "decoder":["vfhd", "mfd", 40, 4, false]
      },
      "minor":{
         "decoder":["vfhd", "mfd", 44, 4, false]
      },
      "txpower":{
         "cond":["mfd", 48, "bit", 3, 1],
         "decoder":["vfhd","mfd", 48, 2, false]
      },
      "volt":{
         "cond":["mfd", 48, "bit", 3, 0],
         "decoder":["vfhd","mfd", 48, 2, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _ibeacon_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"minor\":{\"unit\":\"hex\",\"name\":\"minor value\"},\"txpower\":{\"unit\":\"dBm\",\"name\":\"signal_strength\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
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
         "name":"signal_strength"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      }
   }
})"""";*/
