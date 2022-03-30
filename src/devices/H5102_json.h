#include "common_props.h"

const char* _H5102_json = "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5102\",\"condition\":[\"name\",\"contain\",\"GVH5102\",\"&\",\"manufacturerdata\",\"index\",0,\"0100\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false],\"post_proc\":[\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Smart Thermo Hygrometer",
   "model_id":"H5102",
   "condition":["name", "contain", "GVH5102", "&", "manufacturerdata", "index", 0, "0100"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false],
         "post_proc":["/", 1000, ">", 0, "/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false],
         "post_proc":["%", 1000, "/", 10]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false]
      }
   }
})"""";*/

const char* _H5102_json_props = _common_BTH_props;
