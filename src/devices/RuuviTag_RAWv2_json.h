const char* _RuuviTag_RAWv2_json = "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"condition\":[\"mfrd\",\"=\",52,\"indx\",0,\"990405\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",6,4,false,true],\"post_proc\":[\"/\",200]},\"hum\":{\"decoder\":[\"vfhd\",\"mfrd\",10,4,false,false],\"post_proc\":[\"/\",400]},\"pres\":{\"decoder\":[\"vfhd\",\"mfrd\",14,4,false,false],\"post_proc\":[\"+\",50000,\"/\",100]},\"accx\":{\"decoder\":[\"vfhd\",\"mfrd\",18,4,false,true],\"post_proc\":[\"/\",1000]},\"accy\":{\"decoder\":[\"vfhd\",\"mfrd\",22,4,false,true],\"post_proc\":[\"/\",1000]},\"accz\":{\"decoder\":[\"vfhd\",\"mfrd\",26,4,false,true],\"post_proc\":[\"/\",1000]},\"volt\":{\"decoder\":[\"vfhd\",\"mfrd\",30,4,false,false],\"post_proc\":[\">\",5,\"+\",1600,\"/\",1000]},\"tx\":{\"decoder\":[\"vfhd\",\"mfrd\",30,4,false,false],\"post_proc\":[\"%\",32,\"*\",2,\"-\",40]},\"mov\":{\"decoder\":[\"vfhd\",\"mfrd\",34,2,false,false]},\"seq\":{\"decoder\":[\"vfhd\",\"mfrd\",36,4,false,false]}}}";
/*R""""(
{
   "brand":"Ruuvi",
   "model":"RuuviTag",
   "model_id":"RuuviTag_RAWv2",
   "condition":["mfrd", "=", 52, "indx", 0, "990405"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfrd", 6, 4, false, true],
         "post_proc":["/", 200]
      },
      "hum":{
         "decoder":["vfhd", "mfrd", 10, 4, false, false],
         "post_proc":["/", 400]
      },
      "pres":{
         "decoder":["vfhd", "mfrd", 14, 4, false, false],
         "post_proc":["+", 50000, "/", 100]
      },
      "accx":{
         "decoder":["vfhd", "mfrd", 18, 4, false, true],
         "post_proc":["/", 1000]
      },
      "accy":{
         "decoder":["vfhd", "mfrd", 22, 4, false, true],
         "post_proc":["/", 1000]
      },
      "accz":{
         "decoder":["vfhd", "mfrd", 26, 4, false, true],
         "post_proc":["/", 1000]
      },
      "volt":{
         "decoder":["vfhd", "mfrd", 30, 4, false, false],
         "post_proc":[">", 5, "+", 1600, "/", 1000]
      },
      "tx":{
         "decoder":["vfhd", "mfrd", 30, 4, false, false],
         "post_proc":["%", 32, "*", 2, "-", 40]
      },
      "mov":{
         "decoder":["vfhd", "mfrd", 34, 2, false, false]
      },
      "seq":{
         "decoder":["vfhd", "mfrd", 36, 4, false, false]
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
