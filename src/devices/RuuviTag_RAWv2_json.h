const char* _RuuviTag_RAWv2_json = "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"990405\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,false,true],\"post_proc\":[\"/\",200]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,false,false],\"post_proc\":[\"/\",400]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,false,false],\"post_proc\":[\"+\",50000,\"/\",100]},\"accx\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,false,true],\"post_proc\":[\"/\",1000]},\"accy\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,false,true],\"post_proc\":[\"/\",1000]},\"accz\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,false,true],\"post_proc\":[\"/\",1000]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,false,false],\"post_proc\":[\">\",5,\"+\",1600,\"/\",1000]},\"tx\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,false,false],\"post_proc\":[\"%\",32,\"*\",2,\"-\",40]},\"mov\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,2,false,false]},\"seq\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",36,4,false,false]}}}";
/*R""""(
{
   "brand":"Ruuvi",
   "model":"RuuviTag",
   "model_id":"RuuviTag_RAWv2",
   "condition":["manufacturerdata", "=", 52, "index", 0, "990405"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, false, true],
         "post_proc":["/", 200]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, false, false],
         "post_proc":["/", 400]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, false, false],
         "post_proc":["+", 50000, "/", 100]
      },
      "accx":{
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, false, true],
         "post_proc":["/", 1000]
      },
      "accy":{
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, false, true],
         "post_proc":["/", 1000]
      },
      "accz":{
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, false, true],
         "post_proc":["/", 1000]
      },
      "volt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, false, false],
         "post_proc":[">", 5, "+", 1600, "/", 1000]
      },
      "tx":{
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, false, false],
         "post_proc":["%", 32, "*", 2, "-", 40]
      },
      "mov":{
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 2, false, false]
      },
      "seq":{
         "decoder":["value_from_hex_data", "manufacturerdata", 36, 4, false, false]
      }
   }
})"""";*/

const char* _RuuviTag_RAWv2_json_props = "{\"properties\":{\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"accx\":{\"unit\":\"g\",\"name\":\"accelerationX\"},\"accy\":{\"unit\":\"g\",\"name\":\"accelerationY\"},\"accz\":{\"unit\":\"g\",\"name\":\"accelerationZ\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tx\":{\"unit\":\"dBm\",\"name\":\"TX power\"},\"mov\":{\"unit\":\"int\",\"name\":\"movement counter\"},\"seq\":{\"unit\":\"int\",\"name\":\"measurement sequence number\"}}}";
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
         "unit":"g",
         "name":"accelerationX"
      },
      "accy":{
         "unit":"g",
         "name":"accelerationY"
      },
      "accz":{
         "unit":"g",
         "name":"accelerationZ"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "tx":{
         "unit":"dBm",
         "name":"TX power"
      },
      "mov":{
         "unit":"int",
         "name":"movement counter"
      },
      "seq":{
         "unit":"int",
         "name":"measurement sequence number"
      }
   }
})"""";*/
