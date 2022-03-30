#include "common_props.h"

const char* _H5072_json = "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5072\",\"condition\":[\"name\",\"contain\",\"GVH5072\",\"&\",\"manufacturerdata\",\"index\",0,\"88ec\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,6,false],\"post_proc\":[\"/\",1000,\">\",0,\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,6,false],\"post_proc\":[\"%\",1000,\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Thermo Hygrometer",
   "model_id":"H5072",
   "condition":["name", "contain", "GVH5072", "&", "manufacturerdata", "index", 0, "88ec"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 6, false],
         "post_proc":["/", 10000]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 6, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 2, false]
      }
   }
})"""";*/

const char* _H5072_json_props = _common_BTH_props;
