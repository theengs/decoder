const char* _ABTemp_json = "{\"brand\":\"April Brother\",\"model\":\"ABTemp\",\"model_id\":\"ABTemp\",\"tag\":\"0608\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c000215b5b182c7eab14988aa99b5c1517008d9\"],\"properties\":{\"mfid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",0,4]},\"uuid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",8,32]},\"major\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,2,false]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",46,2,false]},\"txpower\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"mac\":{\"condition\":[\"servicedata\",\"=\",22],\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",0]}}}";
/*R""""(
{
   "brand":"April Brother",
   "model":"ABTemp",
   "model_id":"ABTemp",
   "tag":"0608",
   "condition":["manufacturerdata", "=", 50, "index", 0, "4c000215b5b182c7eab14988aa99b5c1517008d9"],
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
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 44, 2, false]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 46, 2, false]
      },
      "txpower":{
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "mac":{
         "condition":["servicedata", "=", 22],
         "decoder":["revmac_from_hex_data", "servicedata", 0]
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
