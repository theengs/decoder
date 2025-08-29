#include "common_props.h"

const char* _LYWSD02_json = "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"tag\":\"01\",\"cond\":[\"uuid\",\"ind\",0,\"fe95\",\"&\",\"svd\",\"ind\",4,\"5b04\"],\"properties\":{\"tempc\":{\"cond\":[\"svd\",24,\"0410\"],\"decoder\":[\"vfhd\",\"svd\",30,4,true],\"pprc\":[\"/\",10]},\"hum\":{\"cond\":[\"svd\",24,\"0610\"],\"decoder\":[\"vfhd\",\"svd\",30,4,true,false],\"pprc\":[\"/\",10]},\"batt\":{\"cond\":[\"svd\",24,\"0a10\"],\"decoder\":[\"vfhd\",\"svd\",30,2,false,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",10]}}}";
/* R""""(
{
   "brand":"Xiaomi/Mijia",
   "model":"e-ink Clock",
   "model_id":"LYWSD02",
   "tag":"01",
   "cond":["uuid", "ind", 0, "fe95", "&", "svd", "ind", 4, "5b04"],
   "properties":{
      "tempc":{
         "cond":["svd", 24, "0410"],
         "decoder":["vfhd", "svd", 30, 4, true],
         "pprc":["/", 10]
      },
      "hum":{
         "cond":["svd", 24, "0610"],
         "decoder":["vfhd", "svd", 30, 4, true, false],
         "pprc":["/", 10]
      },
      "batt":{
         "cond":["svd", 24, "0a10"],
         "decoder":["vfhd", "svd", 30, 2, false, false]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 10]
      }
   }
})"""";*/

const char* _LYWSD02_json_props = _common_BTHM_props;
