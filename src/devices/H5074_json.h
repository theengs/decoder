#include "common_props.h"

const char* _H5074_json = "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5074\",\"cidc\":false,\"condition\":[\"name\",\"index\",0,\"Govee_H5074\",\"&\",\"manufacturerdata\",\"=\",18,\"index\",0,\"88ec\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false]}}}";

/* R""""(
{
   "brand":"Govee",
   "model":"Thermo Hygrometer",
   "model_id":"H5074",
   "cidc":false,
   "condition":["name", "index", 0, "Govee_H5074", "&", "manufacturerdata", "=", 18, "index", 0, "88ec"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";*/

const char* _H5074_json_props = _common_BTH_props;
