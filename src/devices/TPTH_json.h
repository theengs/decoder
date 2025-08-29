#include "common_props.h"

const char* _TPTH_json = "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"tag\":\"0103\",\"cond\":[\"name\",\"index\",0,\"TP357\",\"|\",\"name\",\"index\",0,\"TP358\",\"|\",\"name\",\"index\",0,\"TP359\",\"|\",\"name\",\"index\",0,\"TP393\",\"&\",\"mfd\",\">=\",12,\"index\",0,\"c2\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",2,4,true,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",6,2,false,false]},\"batt_low\":{\"cond\":[\"mfd\",9,\"bit\",1,1],\"decoder\":[\"static_value\",false]},\"_batt_low\":{\"cond\":[\"mfd\",9,\"bit\",1,0],\"decoder\":[\"static_value\",true]}}}";
/*R""""(
{
   "brand":"ThermoPro",
   "model":"TH Sensor",
   "model_id":"TP35X/393",
   "tag":"0103",
   "cond":["name", "index", 0, "TP357", "|", "name", "index", 0, "TP358", "|", "name", "index", 0, "TP359", "|", "name", "index", 0, "TP393", "&", "mfd", ">=", 12, "index", 0, "c2"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 2, 4, true, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 6, 2, false, false]
      },
      "batt_low":{
         "cond":["mfd", 9, "bit", 1, 1],
         "decoder":["static_value", false]
      },
      "_batt_low":{
         "cond":["mfd", 9, "bit", 1, 0],
         "decoder":["static_value", true]
      }
   }
})"""";*/

const char* _TPTH_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"batt_low\":{\"unit\":\"status\",\"name\":\"battery\"}}}";
/*
R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "batt_low":{
         "unit":"status",
         "name":"battery"
      }
   }
})"""";*/
