const char* _IBT_2X_json = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"condition\":[\"name\",\"indx\",0,\"iBBQ\",\"&\",\"mfrd\",\"=\",28,\"indx\",0,\"00000000\"],\"properties\":{\"tempc\":{\"condition\":[\"mfrd\",20,\"!\",\"f6ff\"],\"decoder\":[\"vfhd\",\"mfrd\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"condition\":[\"mfrd\",24,\"!\",\"f6ff\"],\"decoder\":[\"vfhd\",\"mfrd\",24,4,true,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-2X",
   "condition":["name", "indx", 0, "iBBQ","&","mfrd", "=", 28, "indx", 0, "00000000"],
   "properties":{
      "tempc":{
         "condition":["mfrd", 20, "!", "f6ff"],
         "decoder":["vfhd", "mfrd", 20, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "condition":["mfrd", 24, "!", "f6ff"],
         "decoder":["vfhd", "mfrd", 24, 4, true, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _IBT_2X_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"temperature\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc2":{
         "unit":"°C",
         "name":"temperature"
      }
   }
})"""";*/