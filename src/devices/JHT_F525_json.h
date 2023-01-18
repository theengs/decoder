#include "common_props.h"

const char* _JHT_F525_json = "{\"brand\":\"Jaalee\",\"model\":\"TH sensor\",\"model_id\":\"F525\",\"tag\":\"0102\",\"condition\":[\"manufacturerdata\",\"=\",52,\"&\",\"uuid\",\"contain\",\"f525\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false],\"post_proc\":[\"*\",175.72,\"/\",65536,\"-\",46.85]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false,false],\"post_proc\":[\"*\",125.0,\"/\",65536,\"-\",6]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",50,2,false,false]}}}";
/* R""""(
{
   "brand":"Jaalee",
   "model":"TH sensor",
   "model_id":"F525",
   "tag":"0102",
   "condition":["manufacturerdata", "=", 52, "&", "uuid", "contain", "f525"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 40, 4, false],
         "post_proc":["*", 175.72, "/", 65536, "-", 46.85]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 44, 4, false, false],
         "post_proc":["*", 125.0, "/", 65536, "-", 6]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 50, 2, false, false]
      }
   }
})"""";*/

const char* _JHT_F525_json_props = _common_BTH_props;
