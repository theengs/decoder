const char* _ibeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"IBEACON\",\"model_id\":\"IBEACON\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c00\"],\"properties\":{\"mfid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",0,4]},\"uuid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",8,32]},\"major\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false]},\"minor\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false]},\"power\":{\"condition\":[\"manufacturerdata\",48,\"8\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"_power\":{\"condition\":[\"manufacturerdata\",48,\"9\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"__power\":{\"condition\":[\"manufacturerdata\",48,\"a\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"___power\":{\"condition\":[\"manufacturerdata\",48,\"b\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"____power\":{\"condition\":[\"manufacturerdata\",48,\"c\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"_____power\":{\"condition\":[\"manufacturerdata\",48,\"d\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"______power\":{\"condition\":[\"manufacturerdata\",48,\"e\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"_______power\":{\"condition\":[\"manufacturerdata\",48,\"f\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"battery\":{\"condition\":[\"manufacturerdata\",48,\"0\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]},\"_battery\":{\"condition\":[\"manufacturerdata\",48,\"1\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]},\"__battery\":{\"condition\":[\"manufacturerdata\",48,\"2\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]},\"___battery\":{\"condition\":[\"manufacturerdata\",48,\"3\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]},\"____battery\":{\"condition\":[\"manufacturerdata\",48,\"4\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]},\"_____battery\":{\"condition\":[\"manufacturerdata\",48,\"5\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false],\"post_proc\":[\"/\",10]}}}";

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
         "condition":["manufacturerdata", 48, "8"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "_power":{
         "condition":["manufacturerdata", 48, "9"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "__power":{
         "condition":["manufacturerdata", 48, "a"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "___power":{
         "condition":["manufacturerdata", 48, "b"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "____power":{
         "condition":["manufacturerdata", 48, "c"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "_____power":{
         "condition":["manufacturerdata", 48, "d"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "______power":{
         "condition":["manufacturerdata", 48, "e"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "_______power":{
         "condition":["manufacturerdata", 48, "f"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "battery":{
         "condition":["manufacturerdata", 48, "0"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      },
      "_battery":{
         "condition":["manufacturerdata", 48, "1"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      },
      "__battery":{
         "condition":["manufacturerdata", 48, "2"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      },
      "___battery":{
         "condition":["manufacturerdata", 48, "3"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      },
      "____battery":{
         "condition":["manufacturerdata", 48, "4"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      },
      "_____battery":{
         "condition":["manufacturerdata", 48, "5"],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _ibeacon_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"minor\":{\"unit\":\"hex\",\"name\":\"minor value\"},\"power\":{\"unit\":\"int\",\"name\":\"tx power\"},\"battery\":{\"unit\":\"Volt\",\"name\":\"battery\"}}}";
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
      }.
      "battery":{
         "unit":"Volt",
         "name":"battery"
      }
   }
})"""";*/
