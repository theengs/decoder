const char* _TPMS_json = "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"tag\":\"0a01\",\"cond\":[\"mfd\",\"=\",36,\"index\",0,\"000\",\"&\",\"mfd\",\"mac@index\",4],\"conditionnomac\":[\"mfd\",\"=\",36,\"&\",\"name\",\"index\",0,\"TPMS\"],\"properties\":{\"count\":{\"decoder\":[\"vfhd\",\"mfd\",5,1,false],\"post_proc\":[\"+\",1]},\"pres\":{\"decoder\":[\"vfhd\",\"mfd\",16,8,true],\"post_proc\":[\"/\",100000]},\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",24,8,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",32,2,true]},\"alarm\":{\"decoder\":[\"bit_static_value\",\"mfd\",35,0,false,true]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",4]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"TPMS",
   "model_id":"TPMS",
   "tag":"0a01",
   "cond":["mfd", "=", 36, "index", 0, "000", "&", "mfd", "mac@index", 4],
   "conditionnomac":["mfd", "=", 36, "&", "name", "index", 0, "TPMS"],
   "properties":{
      "count":{
         "decoder":["vfhd", "mfd", 5, 1, false],
         "post_proc":["+", 1]
      },
      "pres":{
         "decoder":["vfhd", "mfd", 16, 8, true],
         "post_proc":["/", 100000]
      },
      "tempc":{
         "decoder":["vfhd", "mfd", 24, 8, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 32, 2, true]
      },
      "alarm":{
         "decoder":["bit_static_value", "mfd", 35, 0, false, true]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 4]
      }
   }
})"""";*/

const char* _TPMS_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"bar\",\"name\":\"pressure\"},\"count\":{\"unit\":\"int\",\"name\":\"count\"},\"alarm\":{\"unit\":\"status\",\"name\":\"problem\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "pres":{
         "unit":"bar",
         "name":"pressure"
      },
      "count":{
         "unit":"int",
         "name":"count"
      },
      "alarm":{
         "unit":"status",
         "name":"problem"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
