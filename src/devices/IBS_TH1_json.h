#include "common_props.h"

const char* _IBS_TH1_json = "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH1\",\"condition\":[\"name\",\"indx\",0,\"sps\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",0,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"mfrd\",4,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"mfrd\",14,2,false,false]}}}";

/*R""""(
{
   "brand":"Inkbird",
   "model":"TH Sensor",
   "model_id":"IBS-TH1",
   "condition":["name", "indx", 0, "sps"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfrd", 0, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "mfrd", 4, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "mfrd", 14, 2, false, false]
      }
   }
})"""";*/

const char* _IBS_TH1_json_props = _common_BTH_props;
