const char* _RuuviTag_RAWv1_json = "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"tag\":\"0708\",\"condition\":[\"manufacturerdata\",\"=\",32,\"index\",0,\"990403\"],\"properties\":{\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false],\"post_proc\":[\"/\",2]},\"tempc\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",8,4,false,true]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,4,false,false],\"post_proc\":[\"+\",50000,\"/\",100]},\"accx\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"accy\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"accz\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,false,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"Ruuvi",
   "model":"RuuviTag",
   "model_id":"RuuviTag_RAWv1",
   "tag":"0708",
   "condition":["manufacturerdata", "=", 32, "index", 0, "990403"],
   "properties":{
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false],
         "post_proc":["/", 2]
      },
      "tempc":{
         "decoder":["bf_value_from_hex_data", "manufacturerdata", 8, 4, false, true]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 4, false, false],
         "post_proc":["+", 50000, "/", 100]
      },
      "accx":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "accy":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "accz":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "volt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, false, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _RuuviTag_RAWv1_json_props = "{\"properties\":{\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"accx\":{\"unit\":\"m/s²\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"m/s²\",\"name\":\"acceleration y\"},\"accz\":{\"unit\":\"m/s²\",\"name\":\"acceleration z\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
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
      }
   }
})"""";*/
