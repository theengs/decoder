const char* _IBS_TH2_json = "{\"brand\":\"Inkbird\",\"model\":\"T Sensor\",\"model_id\":\"IBS-TH2\",\"condition\":[\"name\",\"indx\",0,\"tps\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",0,4,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"mfrd\",14,2,false,false]}}}";

/*R""""(
{
   "brand":"Inkbird",
   "model":"TH Sensor",
   "model_id":"IBS-TH2",
   "condition":["name", "indx", 0, "tps"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfrd", 0, 4, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "mfrd", 14, 2, false, false]
      }
   }
})"""";*/

const char* _IBS_TH2_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      }
   }
})"""";*/