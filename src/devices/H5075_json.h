#include "common_props.h"

const char* _H5075_json = "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5075\",\"condition\":[\"name\",\"contain\",\"GVH5075\",\"&\",\"manufacturerdata\",\"index\",0,\"88ec\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,6,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,6,false],\"post_proc\":[\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Smart Thermo Hygrometer",
   "model_id":"H5075",
   "condition":["name", "contain", "GVH5075","&"","manufacturerdata", "index", 0, "88ec"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 6, false],
         "post_proc":["/", 1000, ">", 0, "/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 6, false],
         "post_proc":["%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 2, false]
      }
   }
})"""";*/

const char* _H5075_json_props = _common_BTH_props;
