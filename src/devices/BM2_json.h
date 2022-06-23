#include "common_props.h"

const char* _BM2_json = "{\"brand\":\"GENERIC\",\"model\":\"BM2Batterymonitor\",\"model_id\":\"BM2\",\"condition\":[\"name\",\"index\",0,\"BatteryMonitor\",\"&\",\"manufacturerdata\",\"=\",50,\"index\",0,\"4c00\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2]}}}";
/* R""""(
{
   "brand":"GENERIC",
   "model":"BM2 Battery monitor",
   "model_id":"BM2",
   "condition":["name", "index", 0, "Battery Monitor", "&","manufacturerdata", "=", 50, "index", 0, "4c00"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 48, 2]
      }
   }
})"""";*/

const char* _BM2_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/