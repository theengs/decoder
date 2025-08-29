const char* _ThermoBeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"tag\":\"0101\",\"cond\":[\"mfd\",\"index\",0,\"1000\",\"|\",\"mfd\",\"index\",0,\"1100\",\"|\",\"mfd\",\"index\",0,\"1500\",\"|\",\"mfd\",\"index\",0,\"1800\",\"|\",\"mfd\",\"index\",0,\"1b00\",\"&\",\"mfd\",\">=\",40],\"properties\":{\"tempc\":{\"cond\":[\"mfd\",\"=\",40],\"decoder\":[\"vfhd\",\"mfd\",24,4,true],\"post_proc\":[\"/\",16]},\"hum\":{\"cond\":[\"mfd\",\"=\",40],\"decoder\":[\"vfhd\",\"mfd\",28,4,true],\"post_proc\":[\"/\",16]},\"volt\":{\"cond\":[\"mfd\",\"=\",40],\"decoder\":[\"vfhd\",\"mfd\",20,4,true],\"post_proc\":[\"/\",1000]},\"time\":{\"cond\":[\"mfd\",\"=\",40],\"decoder\":[\"vfhd\",\"mfd\",32,8,true,false]},\"tempc_max\":{\"cond\":[\"mfd\",\"=\",44],\"decoder\":[\"vfhd\",\"mfd\",20,4,true],\"post_proc\":[\"/\",16]},\"time_max\":{\"cond\":[\"mfd\",\"=\",44],\"decoder\":[\"vfhd\",\"mfd\",24,8,true,false]},\"tempc_min\":{\"cond\":[\"mfd\",\"=\",44],\"decoder\":[\"vfhd\",\"mfd\",32,4,true],\"post_proc\":[\"/\",16]},\"time_min\":{\"cond\":[\"mfd\",\"=\",44],\"decoder\":[\"vfhd\",\"mfd\",36,8,true,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"mfd\",8]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"ThermoBeacon",
   "model_id":"WS02/WS08",
   "tag":"0101",
   "cond":["mfd", "index", 0, "1000", "|", "mfd", "index", 0, "1100", "|", "mfd", "index", 0, "1500", "|", "mfd", "index", 0, "1800", "|", "mfd", "index", 0, "1b00", "&", "mfd", ">=", 40],
   "properties":{
      "tempc":{
         "cond":["mfd", "=", 40],
         "decoder":["vfhd", "mfd", 24, 4, true],
         "post_proc":["/", 16]
      },
      "hum":{
         "cond":["mfd", "=", 40],
         "decoder":["vfhd", "mfd", 28, 4, true],
         "post_proc":["/", 16]
      },
      "volt":{
         "cond":["mfd", "=", 40],
         "decoder":["vfhd", "mfd", 20, 4, true],
         "post_proc":["/", 1000]
      },
      "time":{
         "cond":["mfd", "=", 40],
         "decoder":["vfhd", "mfd", 32, 8, true, false]
      },
      "tempc_max":{
         "cond":["mfd", "=", 44],
         "decoder":["vfhd", "mfd", 20, 4, true],
         "post_proc":["/", 16]
      },
      "time_max":{
         "cond":["mfd", "=", 44],
         "decoder":["vfhd", "mfd", 24, 8, true, false]
      },
      "tempc_min":{
         "cond":["mfd", "=", 44],
         "decoder":["vfhd", "mfd", 32, 4, true],
         "post_proc":["/", 16]
      },
      "time_min":{
         "cond":["mfd", "=", 44],
         "decoder":["vfhd", "mfd", 36, 8, true, false]
      },
      "mac":{
         "decoder":["revmfhd", "mfd", 8]
      }
   }
})"""";*/

const char* _ThermoBeacon_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"time\":{\"unit\":\"int\",\"name\":\"time_stamp\"},\"tempc_max\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"time_max\":{\"unit\":\"int\",\"name\":\"time_stamp\"},\"tempc_min\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"time_min\":{\"unit\":\"int\",\"name\":\"time_stamp\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "time":{
         "unit":"int",
         "name":"time_stamp"
      },
      "tempc_max":{
         "unit":"°C",
         "name":"temperature"
      },
      "time_max":{
         "unit":"int",
         "name":"time_stamp"
      },
      "tempc_min":{
         "unit":"°C",
         "name":"temperature"
      },
      "time_min":{
         "unit":"int",
         "name":"time_stamp"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
