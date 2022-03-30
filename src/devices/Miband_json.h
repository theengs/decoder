const char* _Miband_json = "{\"brand\":\"Xiaomi\",\"model\":\"Miband\",\"model_id\":\"MiBand\",\"condition\":[\"uuid\",\"cont\",\"fee0\"],\"properties\":{\"steps\":{\"decoder\":[\"vfhd\",\"svcd\",0,4,true,false]},\"act_bpm\":{\"condition\":[\"mfrd\",10,\"!\",\"f\"],\"decoder\":[\"vfhd\",\"mfrd\",10,2,false,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Miband",
   "model_id":"MiBand",
   "condition":["uuid", "cont", "fee0"],
   "properties":{
      "steps":{
         "decoder":["vfhd", "svcd", 0, 4, true, false]
      },
      "act_bpm":{
         "condition":["mfrd", 10, "!", "f"],
         "decoder":["vfhd", "mfrd", 10, 2, false, false]
      }
   }
})"""";*/

const char* _Miband_json_props = "{\"properties\":{\"steps\":{\"unit\":\"int\",\"name\":\"step-count\"},\"act_bpm\":{\"unit\":\"bpm\",\"name\":\"activity heart rate\"}}}";
/*R""""(
{
   "properties":{
      "steps":{
         "unit":"int",
         "name":"step-count"
      },
      "act_bpm":{
         "unit":"bpm",
         "name":"activity heart rate"
      }
   }
})"""";*/
