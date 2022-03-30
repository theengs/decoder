const char* _RuuviTag_RAWv1_json = "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"condition\":[\"mfrd\",\"=\",32,\"indx\",0,\"990403\"],\"properties\":{\"hum\":{\"decoder\":[\"vfhd\",\"mfrd\",6,2,false,false],\"post_proc\":[\"/\",2]},\"tempc\":{\"decoder\":[\"bfhd\",\"mfrd\",8,4,false,true]},\"pres\":{\"decoder\":[\"vfhd\",\"mfrd\",12,4,false,false],\"post_proc\":[\"+\",50000,\"/\",100]},\"accx\":{\"decoder\":[\"vfhd\",\"mfrd\",16,4,false,true],\"post_proc\":[\"/\",1000]},\"accy\":{\"decoder\":[\"vfhd\",\"mfrd\",20,4,false,true],\"post_proc\":[\"/\",1000]},\"accz\":{\"decoder\":[\"vfhd\",\"mfrd\",24,4,false,true],\"post_proc\":[\"/\",1000]},\"volt\":{\"decoder\":[\"vfhd\",\"mfrd\",28,4,false,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"Ruuvi",
   "model":"RuuviTag",
   "model_id":"RuuviTag_RAWv1",
   "condition":["mfrd", "=", 32, "indx", 0, "990403"],
   "properties":{
      "hum":{
         "decoder":["vfhd", "mfrd", 6, 2, false, false],
         "post_proc":["/", 2]
      },
      "tempc":{
         "decoder":["bfhd", "mfrd", 8, 4, false, true]
      },
      "pres":{
         "decoder":["vfhd", "mfrd", 12, 4, false, false],
         "post_proc":["+", 50000, "/", 100]
      },
      "accx":{
         "decoder":["vfhd", "mfrd", 16, 4, false, true],
         "post_proc":["/", 1000]
      },
      "accy":{
         "decoder":["vfhd", "mfrd", 20, 4, false, true],
         "post_proc":["/", 1000]
      },
      "accz":{
         "decoder":["vfhd", "mfrd", 24, 4, false, true],
         "post_proc":["/", 1000]
      },
      "volt":{
         "decoder":["vfhd", "mfrd", 28, 4, false, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _RuuviTag_RAWv1_json_props = "{\"properties\":{\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"accx\":{\"unit\":\"g\",\"name\":\"accelerationX\"},\"accy\":{\"unit\":\"g\",\"name\":\"accelerationY\"},\"accz\":{\"unit\":\"g\",\"name\":\"accelerationZ\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
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
      }
   }
})"""";*/
