const char* _RuuviTag_RAWv2_json = "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"tag\":\"0708\",\"cond\":[\"mfd\",\"=\",52,\"ind\",0,\"990405\"],\"properties\":{\"tempc\":{\"cond\":[\"mfd\",6,\"!\",\"8000\"],\"decoder\":[\"vfhd\",\"mfd\",6,4,false,true],\"pprc\":[\"/\",200]},\"hum\":{\"cond\":[\"mfd\",10,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",10,4,false,false],\"pprc\":[\"/\",400]},\"pres\":{\"cond\":[\"mfd\",14,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",14,4,false,false],\"pprc\":[\"+\",50000,\"/\",100]},\"accx\":{\"cond\":[\"mfd\",18,\"!\",\"8000\"],\"decoder\":[\"vfhd\",\"mfd\",18,4,false,true],\"pprc\":[\"/\",10000,\"*\",9.80665]},\"accy\":{\"cond\":[\"mfd\",22,\"!\",\"8000\"],\"decoder\":[\"vfhd\",\"mfd\",22,4,false,true],\"pprc\":[\"/\",10000,\"*\",9.80665]},\"accz\":{\"cond\":[\"mfd\",26,\"!\",\"8000\"],\"decoder\":[\"vfhd\",\"mfd\",26,4,false,true],\"pprc\":[\"/\",10000,\"*\",9.80665]},\"volt\":{\"cond\":[\"mfd\",30,\"!\",\"7ff\"],\"decoder\":[\"vfhd\",\"mfd\",30,4,false,false],\"pprc\":[\">\",5,\"+\",1600,\"/\",1000]},\"tx\":{\"cond\":[\"mfd\",33,\"!\",\"f\",\"&\",\"mfd\",32,\"!\",\"1\"],\"decoder\":[\"vfhd\",\"mfd\",30,4,false,false],\"pprc\":[\"%\",32,\"*\",2,\"-\",40]},\"mov\":{\"cond\":[\"mfd\",34,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",34,2,false,false]},\"seq\":{\"cond\":[\"mfd\",36,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",36,4,false,false]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",40]}}}";
/*R""""(
{
   "brand":"Ruuvi",
   "model":"RuuviTag",
   "model_id":"RuuviTag_RAWv2",
   "tag":"0708",
   "cond":["mfd", "=", 52, "ind", 0, "990405"],
   "properties":{
      "tempc":{
         "cond":["mfd", 6, "!", "8000"],
         "decoder":["vfhd", "mfd", 6, 4, false, true],
         "pprc":["/", 200]
      },
      "hum":{
         "cond":["mfd", 10, "!", "ffff"],
         "decoder":["vfhd", "mfd", 10, 4, false, false],
         "pprc":["/", 400]
      },
      "pres":{
         "cond":["mfd", 14, "!", "ffff"],
         "decoder":["vfhd", "mfd", 14, 4, false, false],
         "pprc":["+", 50000, "/", 100]
      },
      "accx":{
         "cond":["mfd", 18, "!", "8000"],
         "decoder":["vfhd", "mfd", 18, 4, false, true],
         "pprc":["/", 10000, "*", 9.80665]
      },
      "accy":{
         "cond":["mfd", 22, "!", "8000"],
         "decoder":["vfhd", "mfd", 22, 4, false, true],
         "pprc":["/", 10000, "*", 9.80665]
      },
      "accz":{
         "cond":["mfd", 26, "!", "8000"],
         "decoder":["vfhd", "mfd", 26, 4, false, true],
         "pprc":["/", 10000, "*", 9.80665]
      },
      "volt":{
         "cond":["mfd", 30, "!", "7ff"],
         "decoder":["vfhd", "mfd", 30, 4, false, false],
         "pprc":[">", 5, "+", 1600, "/", 1000]
      },
      "tx":{
         "cond":["mfd", 33, "!", "f", "&", "mfd", 32, "!", "1"],
         "decoder":["vfhd", "mfd", 30, 4, false, false],
         "pprc":["%", 32, "*", 2, "-", 40]
      },
      "mov":{
         "cond":["mfd", 34, "!", "ff"],
         "decoder":["vfhd", "mfd", 34, 2, false, false]
      },
      "seq":{
         "cond":["mfd", 36, "!", "ffff"],
         "decoder":["vfhd", "mfd", 36, 4, false, false]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 40]
      }
   }
})"""";*/

const char* _RuuviTag_RAWv2_json_props = "{\"properties\":{\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"accx\":{\"unit\":\"m/s²\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"m/s²\",\"name\":\"acceleration y\"},\"accz\":{\"unit\":\"m/s²\",\"name\":\"acceleration z\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tx\":{\"unit\":\"dBm\",\"name\":\"signal_strength\"},\"mov\":{\"unit\":\"int\",\"name\":\"movement counter\"},\"seq\":{\"unit\":\"int\",\"name\":\"measurement sequence number\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "pres":{
         "unit":"hPa",
         "name":"pressure"
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
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "tx":{
         "unit":"dBm",
         "name":"signal_strength"
      },
      "mov":{
         "unit":"int",
         "name":"movement counter"
      },
      "seq":{
         "unit":"int",
         "name":"measurement sequence number"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
