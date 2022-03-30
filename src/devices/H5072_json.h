#include "common_props.h"

const char* _H5072_json = "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5072\",\"condition\":[\"name\",\"cont\",\"GVH5072\",\"&\",\"mfrd\",\"indx\",0,\"88ec\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",6,6,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"mfrd\",6,6,false],\"post_proc\":[\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"mfrd\",12,2,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Thermo Hygrometer",
   "model_id":"H5072",
   "condition":["name", "cont", "GVH5072","&"","mfrd", "indx", 0, "88ec"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfrd", 6, 6, false],
         "post_proc":["/", 10000]
      },
      "hum":{
         "decoder":["vfhd", "mfrd", 6, 6, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "mfrd", 12, 2, false]
      }
   }
})"""";*/

const char* _H5072_json_props = _common_BTH_props;
