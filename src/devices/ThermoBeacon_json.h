const char* _ThermoBeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"tag\":\"0101\",\"cond\":[\"manufacturerdata\",\"index\",0,\"1000\",\"|\",\"manufacturerdata\",\"index\",0,\"1100\",\"|\",\"manufacturerdata\",\"index\",0,\"1500\",\"|\",\"manufacturerdata\",\"index\",0,\"1800\",\"|\",\"manufacturerdata\",\"index\",0,\"1b00\",\"&\",\"manufacturerdata\",\">=\",40],\"properties\":{\"tempc\":{\"cond\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true],\"post_proc\":[\"/\",16]},\"hum\":{\"cond\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true],\"post_proc\":[\"/\",16]},\"volt\":{\"cond\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true],\"post_proc\":[\"/\",1000]},\"time\":{\"cond\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,8,true,false]},\"tempc_max\":{\"cond\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true],\"post_proc\":[\"/\",16]},\"time_max\":{\"cond\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,8,true,false]},\"tempc_min\":{\"cond\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true],\"post_proc\":[\"/\",16]},\"time_min\":{\"cond\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",36,8,true,false]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",8]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"ThermoBeacon",
   "model_id":"WS02/WS08",
   "tag":"0101",
   "cond":["manufacturerdata", "index", 0, "1000", "|", "manufacturerdata", "index", 0, "1100", "|", "manufacturerdata", "index", 0, "1500", "|", "manufacturerdata", "index", 0, "1800", "|", "manufacturerdata", "index", 0, "1b00", "&", "manufacturerdata", ">=", 40],
   "properties":{
      "tempc":{
         "cond":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true],
         "post_proc":["/", 16]
      },
      "hum":{
         "cond":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true],
         "post_proc":["/", 16]
      },
      "volt":{
         "cond":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true],
         "post_proc":["/", 1000]
      },
      "time":{
         "cond":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 8, true, false]
      },
      "tempc_max":{
         "cond":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true],
         "post_proc":["/", 16]
      },
      "time_max":{
         "cond":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 8, true, false]
      },
      "tempc_min":{
         "cond":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true],
         "post_proc":["/", 16]
      },
      "time_min":{
         "cond":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 36, 8, true, false]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "manufacturerdata", 8]
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
