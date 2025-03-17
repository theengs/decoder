const char* _RuuviTag_RAWv2_json = "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"tag\":\"0708\",\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"990405\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",6,\"!\",\"8000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,false,true],\"post_proc\":[\"/\",200]},\"hum\":{\"condition\":[\"manufacturerdata\",10,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,false,false],\"post_proc\":[\"/\",400]},\"pres\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,false,false],\"post_proc\":[\"+\",50000,\"/\",100]},\"accx\":{\"condition\":[\"manufacturerdata\",18,\"!\",\"8000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"accy\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"8000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"accz\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"8000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"volt\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"7ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,false,false],\"post_proc\":[\">\",5,\"+\",1600,\"/\",1000]},\"tx\":{\"condition\":[\"manufacturerdata\",33,\"!\",\"f\",\"&\",\"manufacturerdata\",32,\"!\",\"1\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,false,false],\"post_proc\":[\"%\",32,\"*\",2,\"-\",40]},\"mov\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,2,false,false]},\"seq\":{\"condition\":[\"manufacturerdata\",36,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",36,4,false,false]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",40]}}}";
/*R""""(
{
   "brand":"Ruuvi",
   "model":"RuuviTag",
   "model_id":"RuuviTag_RAWv2",
   "tag":"0708",
   "condition":["manufacturerdata", "=", 52, "index", 0, "990405"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 6, "!", "8000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, false, true],
         "post_proc":["/", 200]
      },
      "hum":{
         "condition":["manufacturerdata", 10, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, false, false],
         "post_proc":["/", 400]
      },
      "pres":{
         "condition":["manufacturerdata", 14, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, false, false],
         "post_proc":["+", 50000, "/", 100]
      },
      "accx":{
         "condition":["manufacturerdata", 18, "!", "8000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "accy":{
         "condition":["manufacturerdata", 22, "!", "8000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "accz":{
         "condition":["manufacturerdata", 26, "!", "8000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "volt":{
         "condition":["manufacturerdata", 30, "!", "7ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, false, false],
         "post_proc":[">", 5, "+", 1600, "/", 1000]
      },
      "tx":{
         "condition":["manufacturerdata", 33, "!", "f", "&", "manufacturerdata", 32, "!", "1"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, false, false],
         "post_proc":["%", 32, "*", 2, "-", 40]
      },
      "mov":{
         "condition":["manufacturerdata", 34, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 2, false, false]
      },
      "seq":{
         "condition":["manufacturerdata", 36, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 36, 4, false, false]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 40]
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
