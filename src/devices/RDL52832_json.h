const char* _RDL52832_json = "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"condition\":[\"uuid\",\"index\",\"0\",\"0318\"],\"properties\":{\"mfid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",0,4]},\"uuid\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",8,32]},\"major\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false]},\"minor\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false]},\"txpower\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,4,false,true],\"post_proc\":[\"/\", 256]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,4,false,true],\"post_proc\":[\"/\",256]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,2,false,false],\"post_proc\":[\"/\",10]},\"accx\":{\"condition\":[\"servicedata\",8,\"0000\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\"]},\"_accx\":{\"condition\":[\"servicedata\",8,\"0001\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1]},\"__accx\":{\"condition\":[\"servicedata\",8,\"0100\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",-1]},\"___accx\":{\"condition\":[\"servicedata\",8,\"0101\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",-1]},\"_.cal\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,2,false,false],\"post_proc\":[\"/\",10]},\"accy\":{\"condition\":[\"servicedata\",16,\"0000\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\"]},\"_accy\":{\"condition\":[\"servicedata\",16,\"0001\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1]},\"__accy\":{\"condition\":[\"servicedata\",16,\"0100\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",-1]},\"___accy\":{\"condition\":[\"servicedata\",16,\"0101\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",-1]},\"__.cal\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,2,false,false],\"post_proc\":[\"/\",10]},\"accz\":{\"condition\":[\"servicedata\",24,\"0000\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\"]},\"_accz\":{\"condition\":[\"servicedata\",24,\"0001\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1]},\"__accz\":{\"condition\":[\"servicedata\",24,\"0100\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",-1]},\"___accz\":{\"condition\":[\"servicedata\",24,\"0101\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",-1]}}}";

/*R""""(
{
   "brand":"Radioland",
   "model":"RDL52832",
   "model_id":"RDL52832",
   "condition":["uuid", "index", 0, "0318"],
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
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 0, 4, false, true],
         "post_proc":["/", 256]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 4, 4, false, true],
         "post_proc":["/", 256]
      },
      ".cal":{
         "decoder":["value_from_hex_data", "servicedata", 12, 2, false, false],
         "post_proc":["/", 10]
      },
      "accx":{
         "condition":["servicedata", 8, "0000"],
         "decoder":["value_from_hex_data", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal"]
      },
      "_accx":{
         "condition":["servicedata", 8, "0001"],
         "decoder":["value_from_hex_data", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1]
      },
      "__accx":{
         "condition":["servicedata", 8, "0100"],
         "decoder":["value_from_hex_data", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", -1]
      },
      "___accx":{
         "condition":["servicedata", 8, "0101"],
         "decoder":["value_from_hex_data", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", -1]
      },
      "_.cal":{
         "decoder":["value_from_hex_data", "servicedata", 20, 2, false, false],
         "post_proc":["/", 10]
      },
      "accy":{
         "condition":["servicedata", 16, "0000"],
         "decoder":["value_from_hex_data", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal"]
      },
      "_accy":{
         "condition":["servicedata", 16, "0001"],
         "decoder":["value_from_hex_data", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1]
      },
      "__accy":{
         "condition":["servicedata", 16, "0100"],
         "decoder":["value_from_hex_data", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", -1]
      },
      "___accy":{
         "condition":["servicedata", 16, "0101"],
         "decoder":["value_from_hex_data", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", -1]
      },
      "__.cal":{
         "decoder":["value_from_hex_data", "servicedata", 28, 2, false, false],
         "post_proc":["/", 10]
      },
      "accz":{
         "condition":["servicedata", 24, "0000"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal"]
      },
      "_accz":{
         "condition":["servicedata", 24, "0001"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1]
      },
      "__accz":{
         "condition":["servicedata", 24, "0100"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", -1]
      },
      "___accz":{
         "condition":["servicedata", 24, "0101"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", -1]
      }
   }
})"""";*/

const char* _RDL52832_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"minor\":{\"unit\":\"hex\",\"name\":\"minor value\"},\"txpower\":{\"unit\":\"dBm\",\"name\":\"tx power @ 1 m\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"accx\":{\"unit\":\"g\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"g\",\"name\":\"acceleration y\"},\"accz\":{\"unit\":\"g\",\"name\":\"acceleration z\"}}}";
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
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "accx":{
         "unit":"g",
         "name":"acceleration x"
      },
      "accy":{
         "unit":"g",
         "name":"acceleration y"
      },
      "accz":{
         "unit":"g",
         "name":"acceleration z"
      }
   }
})"""";*/
