#include "common_props.h"

const char* _LYWSD03MMC_json_ATC = "{\"brand\":\"Xiaomi\",\"model\":\"LYWSD03MMC\",\"model_id\":\"LYWSD03MMC_ATC\",\"condition\":[\"servicedata\",\"=\",26,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"ATC_\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,2,false,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,false,false],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"LYWSD03MMC",
   "model_id":"LYWSD03MMC_ATC",
   "condition":["servicedata", "=", 26, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "ATC_"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, false, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 18, 2, false, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, false, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_PVVX = "{\"brand\":\"Xiaomi\",\"model\":\"LYWSD03MMC\",\"model_id\":\"LYWSD03MMC_PVVX\",\"condition\":[\"servicedata\",\"=\",30,\"&\",\"uuid\",\"index\",0,\"181a\",\"&\",\"name\",\"index\",0,\"ATC_\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true,false],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,2,false,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true,false],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"LYWSD03MMC",
   "model_id":"LYWSD03MMC_PVVX",
   "condition":["servicedata", "=", 30, "&", "uuid", "index", 0, "181a", "&", "name", "index", 0, "ATC_"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true, false],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 24, 2, false, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_props = _common_BVTH_props;
