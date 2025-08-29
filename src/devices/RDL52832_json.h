const char* _RDL52832_json = "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"tag\":\"070a\",\"cond\":[\"mfd\",\"=\",50,\"&\",\"name\",\"index\",0,\"RDL52832\"],\"properties\":{\"mfid\":{\"decoder\":[\"sfhd\",\"mfd\",0,4]},\"uuid\":{\"decoder\":[\"sfhd\",\"mfd\",8,32]},\"major\":{\"decoder\":[\"vfhd\",\"mfd\",40,4,false]},\"minor\":{\"decoder\":[\"vfhd\",\"mfd\",44,4,false]},\"txpower\":{\"decoder\":[\"vfhd\",\"mfd\",48,2,false]},\"tempc\":{\"decoder\":[\"vfhd\",\"servicedata\",0,4,false,true],\"post_proc\":[\"/\",256]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",4,4,false,true],\"post_proc\":[\"/\",256]},\".cal\":{\"decoder\":[\"vfhd\",\"servicedata\",12,2,false,false],\"post_proc\":[\"/\",10]},\"accx\":{\"cond\":[\"servicedata\",8,\"0000\"],\"decoder\":[\"vfhd\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",9.80665]},\"_accx\":{\"cond\":[\"servicedata\",8,\"0001\"],\"decoder\":[\"vfhd\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",9.80665]},\"__accx\":{\"cond\":[\"servicedata\",8,\"0100\"],\"decoder\":[\"vfhd\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",-1,\"*\",9.80665]},\"___accx\":{\"cond\":[\"servicedata\",8,\"0101\"],\"decoder\":[\"vfhd\",\"servicedata\",14,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",-1,\"*\",9.80665]},\"_.cal\":{\"decoder\":[\"vfhd\",\"servicedata\",20,2,false,false],\"post_proc\":[\"/\",10]},\"accy\":{\"cond\":[\"servicedata\",16,\"0000\"],\"decoder\":[\"vfhd\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",9.80665]},\"_accy\":{\"cond\":[\"servicedata\",16,\"0001\"],\"decoder\":[\"vfhd\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",9.80665]},\"__accy\":{\"cond\":[\"servicedata\",16,\"0100\"],\"decoder\":[\"vfhd\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",-1,\"*\",9.80665]},\"___accy\":{\"cond\":[\"servicedata\",16,\"0101\"],\"decoder\":[\"vfhd\",\"servicedata\",22,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",-1,\"*\",9.80665]},\"__.cal\":{\"decoder\":[\"vfhd\",\"servicedata\",28,2,false,false],\"post_proc\":[\"/\",10]},\"accz\":{\"cond\":[\"servicedata\",24,\"0000\"],\"decoder\":[\"vfhd\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",9.80665]},\"_accz\":{\"cond\":[\"servicedata\",24,\"0001\"],\"decoder\":[\"vfhd\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",9.80665]},\"__accz\":{\"cond\":[\"servicedata\",24,\"0100\"],\"decoder\":[\"vfhd\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"*\",-1,\"*\",9.80665]},\"___accz\":{\"cond\":[\"servicedata\",24,\"0101\"],\"decoder\":[\"vfhd\",\"servicedata\",30,2,false,false],\"post_proc\":[\"/\",100,\"+\",\".cal\",\"+\",1,\"*\",-1,\"*\",9.80665]}}}";

/*R""""(
{
   "brand":"Radioland",
   "model":"RDL52832",
   "model_id":"RDL52832",
   "tag":"070a",
   "cond":["mfd", "=", 50, "&", "name", "index", 0, "RDL52832"],
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
         "decoder":["vfhd","mfd", 48, 2, false]
      },
      "tempc":{
         "decoder":["vfhd", "servicedata", 0, 4, false, true],
         "post_proc":["/", 256]
      },
      "hum":{
         "decoder":["vfhd", "servicedata", 4, 4, false, true],
         "post_proc":["/", 256]
      },
      ".cal":{
         "decoder":["vfhd", "servicedata", 12, 2, false, false],
         "post_proc":["/", 10]
      },
      "accx":{
         "cond":["servicedata", 8, "0000"],
         "decoder":["vfhd", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", 9.80665]
      },
      "_accx":{
         "cond":["servicedata", 8, "0001"],
         "decoder":["vfhd", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", 9.80665]
      },
      "__accx":{
         "cond":["servicedata", 8, "0100"],
         "decoder":["vfhd", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", -1, "*", 9.80665]
      },
      "___accx":{
         "cond":["servicedata", 8, "0101"],
         "decoder":["vfhd", "servicedata", 14, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", -1, "*", 9.80665]
      },
      "_.cal":{
         "decoder":["vfhd", "servicedata", 20, 2, false, false],
         "post_proc":["/", 10]
      },
      "accy":{
         "cond":["servicedata", 16, "0000"],
         "decoder":["vfhd", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", 9.80665]
      },
      "_accy":{
         "cond":["servicedata", 16, "0001"],
         "decoder":["vfhd", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", 9.80665]
      },
      "__accy":{
         "cond":["servicedata", 16, "0100"],
         "decoder":["vfhd", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", -1, "*", 9.80665]
      },
      "___accy":{
         "cond":["servicedata", 16, "0101"],
         "decoder":["vfhd", "servicedata", 22, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", -1, "*", 9.80665]
      },
      "__.cal":{
         "decoder":["vfhd", "servicedata", 28, 2, false, false],
         "post_proc":["/", 10]
      },
      "accz":{
         "cond":["servicedata", 24, "0000"],
         "decoder":["vfhd", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", 9.80665]
      },
      "_accz":{
         "cond":["servicedata", 24, "0001"],
         "decoder":["vfhd", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", 9.80665]
      },
      "__accz":{
         "cond":["servicedata", 24, "0100"],
         "decoder":["vfhd", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "*", -1, "*", 9.80665]
      },
      "___accz":{
         "cond":["servicedata", 24, "0101"],
         "decoder":["vfhd", "servicedata", 30, 2, false, false],
         "post_proc":["/", 100, "+", ".cal", "+", 1, "*", -1, "*", 9.80665]
      }
   }
})"""";*/

const char* _RDL52832_json_props = "{\"properties\":{\"mfid\":{\"unit\":\"hex\",\"name\":\"manufacturer id\"},\"uuid\":{\"unit\":\"hex\",\"name\":\"service uuid\"},\"major\":{\"unit\":\"hex\",\"name\":\"major value\"},\"minor\":{\"unit\":\"hex\",\"name\":\"minor value\"},\"txpower\":{\"unit\":\"dBm\",\"name\":\"signal_strength\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"accx\":{\"unit\":\"m/s²\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"m/s²\",\"name\":\"acceleration y\"},\"accz\":{\"unit\":\"m/s²\",\"name\":\"acceleration z\"}}}";
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
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "accx":{
         "unit":"m/s²",
         "name":"acceleration x"
      },
      "accy":{
         "unit":"m/s²",
         "name":"acceleration y"
      },
      "accz":{
         "unit":"m/s²",
         "name":"acceleration z"
      }
   }
})"""";*/
