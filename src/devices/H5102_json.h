#include "common_props.h"

const char* _H5102_json = "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5102\",\"condition\":[\"name\",\"cont\",\"GVH5102\",\"&\",\"mfrd\",\"indx\",0,\"0100\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",8,6,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"mfrd\",8,6,false],\"post_proc\":[\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"vfhd\",\"mfrd\",14,2,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Smart Thermo Hygrometer",
   "model_id":"H5102",
   "condition":["name", "cont", "GVH5102","&"","mfrd", "indx", 0, "0100"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfrd", 8, 6, false],
         "post_proc":["/", 1000, ">", 0, "/", 10]
      },
      "hum":{
         "decoder":["vfhd", "mfrd", 8, 6, false],
         "post_proc":["%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["vfhd", "mfrd", 14, 2, false]
      }
   }
})"""";*/

const char* _H5102_json_props = _common_BTH_props;
