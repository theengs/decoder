const char* _TPMS_json = "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"condition\":[\"mfrd\",\"=\",36,\"&\",\"name\",\"indx\",0,\"TPMS\"],\"properties\":{\"count\":{\"decoder\":[\"vfhd\",\"mfrd\",5,1,false],\"post_proc\":[\"+\",1]},\"pres\":{\"decoder\":[\"vfhd\",\"mfrd\",16,8,true],\"post_proc\":[\"/\",1000]},\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",24,8,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"mfrd\",32,2,true]},\"alarm\":{\"decoder\":[\"vfhd\",\"mfrd\",35,1,false],\"is_bool\":1}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"TPMS",
   "model_id":"TPMS",
   "condition":["mfrd", "=", 36, "&", "name", "indx", 0, "TPMS"],
   "properties":{
      "count":{
         "decoder":["vfhd", "mfrd", 5, 1, false],
         "post_proc":["+", 1]
      },
      "pres":{
         "decoder":["vfhd", "mfrd", 16, 8, true],
         "post_proc":["/", 1000]
      },
      "tempc":{
         "decoder":["vfhd", "mfrd", 24, 8, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "mfrd", 32, 2, true]
      },
      "alarm":{
         "decoder":["vfhd", "mfrd", 35, 1, false],
         "is_bool":1
      }
   }
})"""";*/

const char* _TPMS_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"kPa\",\"name\":\"temperature\"},\"count\":{\"unit\":\"int\",\"name\":\"count\"},\"alarm\":{\"unit\":\"status\",\"name\":\"alarm\"}}}";
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
      },
      "pres":{
         "unit":"kPa",
         "name":"temperature"
      },
      "count":{
         "unit":"int",
         "name":"count"
      },
      "alarm":{
         "unit":"status",
         "name":"alarm"
      }
   }
})"""";*/