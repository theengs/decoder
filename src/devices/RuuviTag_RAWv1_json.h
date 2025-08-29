const char* _RuuviTag_RAWv1_json = "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"tag\":\"0708\",\"cond\":[\"mfd\",\"=\",32,\"ind\",0,\"990403\"],\"properties\":{\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",6,2,false,false],\"post_proc\":[\"/\",2]},\"tempc\":{\"decoder\":[\"bf_vfhd\",\"mfd\",8,4,false,true]},\"pres\":{\"decoder\":[\"vfhd\",\"mfd\",12,4,false,false],\"post_proc\":[\"+\",50000,\"/\",100]},\"accx\":{\"decoder\":[\"vfhd\",\"mfd\",16,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"accy\":{\"decoder\":[\"vfhd\",\"mfd\",20,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"accz\":{\"decoder\":[\"vfhd\",\"mfd\",24,4,false,true],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"volt\":{\"decoder\":[\"vfhd\",\"mfd\",28,4,false,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"Ruuvi",
   "model":"RuuviTag",
   "model_id":"RuuviTag_RAWv1",
   "tag":"0708",
   "cond":["mfd", "=", 32, "ind", 0, "990403"],
   "properties":{
      "hum":{
         "decoder":["vfhd", "mfd", 6, 2, false, false],
         "post_proc":["/", 2]
      },
      "tempc":{
         "decoder":["bf_vfhd", "mfd", 8, 4, false, true]
      },
      "pres":{
         "decoder":["vfhd", "mfd", 12, 4, false, false],
         "post_proc":["+", 50000, "/", 100]
      },
      "accx":{
         "decoder":["vfhd", "mfd", 16, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "accy":{
         "decoder":["vfhd", "mfd", 20, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "accz":{
         "decoder":["vfhd", "mfd", 24, 4, false, true],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "volt":{
         "decoder":["vfhd", "mfd", 28, 4, false, false],
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
