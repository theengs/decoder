const char* _holyiot_json = "{\"brand\":\"Holyiot\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"tag\":\"06\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c000215\"],\"properties\":{\"mfid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",0,8]},\"uuid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",8,32]},\"major\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false]},\"minor\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false]},\"txpower\":{\"condition\":[\"manufacturerdata\",48,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"volt\":{\"condition\":[\"manufacturerdata\",48,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,2]}}}";
/*R""""(
{
   "brand":"Holyiot",
   "model":"iBeacon",
   "model_id":"IBEACON",
   "tag":"06",
   "condition":["manufacturerdata", "=", 50, "index", 0, "4c000215"],
   "properties":{
      "mfid":{
         "decoder":["string_from_hex_data", "manufacturerdata", 0, 8]
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
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 2, 2]
      }
   }
})"""";*/

const char* _holyiot_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"minor\":{\"unit\":\"hex\",\"name\":\"minor value\"},\"txpower\":{\"unit\":\"dBm\",\"name\":\"signal_strength\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
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
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
