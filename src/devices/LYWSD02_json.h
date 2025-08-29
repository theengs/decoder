#include "common_props.h"

const char* _LYWSD02_json = "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"tag\":\"01\",\"cond\":[\"uuid\",\"index\",0,\"fe95\",\"&\",\"servicedata\",\"index\",4,\"5b04\"],\"properties\":{\"tempc\":{\"cond\":[\"servicedata\",24,\"0410\"],\"decoder\":[\"vfhd\",\"servicedata\",30,4,true],\"post_proc\":[\"/\",10]},\"hum\":{\"cond\":[\"servicedata\",24,\"0610\"],\"decoder\":[\"vfhd\",\"servicedata\",30,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"cond\":[\"servicedata\",24,\"0a10\"],\"decoder\":[\"vfhd\",\"servicedata\",30,2,false,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"servicedata\",10]}}}";
/* R""""(
{
   "brand":"Xiaomi/Mijia",
   "model":"e-ink Clock",
   "model_id":"LYWSD02",
   "tag":"01",
   "cond":["uuid", "index", 0, "fe95", "&", "servicedata", "index", 4, "5b04"],
   "properties":{
      "tempc":{
         "cond":["servicedata", 24, "0410"],
         "decoder":["vfhd", "servicedata", 30, 4, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "cond":["servicedata", 24, "0610"],
         "decoder":["vfhd", "servicedata", 30, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "cond":["servicedata", 24, "0a10"],
         "decoder":["vfhd", "servicedata", 30, 2, false, false]
      },
      "mac":{
         "decoder":["revmfhd", "servicedata", 10]
      }
   }
})"""";*/

const char* _LYWSD02_json_props = _common_BTHM_props;
