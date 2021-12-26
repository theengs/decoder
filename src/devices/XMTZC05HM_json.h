#include "common_props.h"

const char* _XMTZC05HM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Miscale_v2\",\"model_id\":\"XMTZC05HM\",\"condition\":[\"uuid\",\"contain\",\"181d\"],\"properties\":{\"unit\":{\"condition\":[\"servicedata\",1,\"2\"],\"decoder\":[\"static_value\",\"kg\"]},\"weight\":{\"condition\":[\"servicedata\",1,\"2\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",200]},\"_unit\":{\"condition\":[\"servicedata\",1,\"3\"],\"decoder\":[\"static_value\",\"lbs\"]},\"_weight\":{\"condition\":[\"servicedata\",1,\"3\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",22,4,true,false],\"post_proc\":[\"/\",100],\"impedance\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Miscale_v2",
   "model_id":"XMTZC05HM",
   "condition":["uuid", "contain", "181b"],
   "properties":{
      "unit":{
         "condition":["servicedata", 1, "2"],
         "decoder":["static_value", "kg"]
      },
      "weight":{
         "condition":["servicedata", 1, "2"],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 200]
      },
      "_unit":{
         "condition":["servicedata", 1, "3"],
         "decoder":["static_value", "lbs"]
      },
      "_weight":{
         "condition":["servicedata", 1, "3"],
         "decoder":["value_from_hex_data", "servicedata", 22, 4, true, false],
         "post_proc":["/", 100]
      },
      "impedance":{
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false]
      }
   }
})"""";*/

const char* _XMTZC05HM_json_props = _common_weight_props;
