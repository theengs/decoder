const char* _ABTemp_json = "{\"brand\":\"April Brother\",\"model\":\"ABTemp\",\"model_id\":\"ABTemp\",\"tag\":\"0608\",\"cond\":[\"mfd\",\"=\",50,\"index\",0,\"4c000215b5b182c7eab14988aa99b5c1517008d9\"],\"properties\":{\"mfid\":{\"decoder\":[\"sfhd\",\"mfd\",0,4]},\"uuid\":{\"decoder\":[\"sfhd\",\"mfd\",8,32]},\"major\":{\"decoder\":[\"vfhd\",\"mfd\",40,4,false]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",44,2,false]},\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",46,2,false]},\"txpower\":{\"decoder\":[\"vfhd\",\"mfd\",48,2,false]},\"mac\":{\"cond\":[\"svd\",\"=\",22],\"decoder\":[\"revmfhd\",\"svd\",0]}}}";
/*R""""(
{
   "brand":"April Brother",
   "model":"ABTemp",
   "model_id":"ABTemp",
   "tag":"0608",
   "cond":["mfd", "=", 50, "index", 0, "4c000215b5b182c7eab14988aa99b5c1517008d9"],
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
      "batt":{
         "decoder":["vfhd", "mfd", 44, 2, false]
      },
      "tempc":{
         "decoder":["vfhd", "mfd", 46, 2, false]
      },
      "txpower":{
         "decoder":["vfhd","mfd", 48, 2, false]
      },
      "mac":{
         "cond":["svd", "=", 22],
         "decoder":["revmfhd", "svd", 0]
      }
   }
})"""";*/

const char* _ABTemp_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"txpower\":{\"unit\":\"dBm\",\"name\":\"signal_strength\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "txpower":{
         "unit":"dBm",
         "name":"signal_strength"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
