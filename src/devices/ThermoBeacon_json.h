const char* _ThermoBeacon_json = "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"tag\":\"0101\",\"condition\":[\"manufacturerdata\",\"index\",0,\"1000\",\"|\",\"manufacturerdata\",\"index\",0,\"1100\",\"|\",\"manufacturerdata\",\"index\",0,\"1500\",\"|\",\"manufacturerdata\",\"index\",0,\"1800\",\"|\",\"manufacturerdata\",\"index\",0,\"1b00\",\"&\",\"manufacturerdata\",\">=\",40],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true],\"post_proc\":[\"/\",16]},\"hum\":{\"condition\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true],\"post_proc\":[\"/\",16]},\"volt\":{\"condition\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true],\"post_proc\":[\"/\",1000]},\"time\":{\"condition\":[\"manufacturerdata\",\"=\",40],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,8,true,false]},\"tempc_max\":{\"condition\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true],\"post_proc\":[\"/\",16]},\"time_max\":{\"condition\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,8,true,false]},\"tempc_min\":{\"condition\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true],\"post_proc\":[\"/\",16]},\"time_min\":{\"condition\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",36,8,true,false]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"ThermoBeacon",
   "model_id":"WS02/WS08",
   "tag":"0101",
   "condition":["manufacturerdata", "index", 0, "1000", "|", "manufacturerdata", "index", 0, "1100", "|", "manufacturerdata", "index", 0, "1500", "|", "manufacturerdata", "index", 0, "1800", "|", "manufacturerdata", "index", 0, "1b00", "&", "manufacturerdata", ">=", 40],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true],
         "post_proc":["/", 16]
      },
      "hum":{
         "condition":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true],
         "post_proc":["/", 16]
      },
      "volt":{
         "condition":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true],
         "post_proc":["/", 1000]
      },
      "time":{
         "condition":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 8, true, false]
      },
      "tempc_max":{
         "condition":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true],
         "post_proc":["/", 16]
      },
      "time_max":{
         "condition":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 8, true, false]
      },
      "tempc_min":{
         "condition":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true],
         "post_proc":["/", 16]
      },
      "time_min":{
         "condition":["manufacturerdata", "=", 44],
         "decoder":["value_from_hex_data", "manufacturerdata", 36, 8, true, false]
      }
   }
})"""";*/

const char* _ThermoBeacon_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"time\":{\"unit\":\"int\",\"name\":\"timestamp\"},\"tempc_max\":{\"unit\":\"°C\",\"name\":\"maximum temperature\"},\"time_max\":{\"unit\":\"int\",\"name\":\"maximum temperature timestamp\"},\"tempc_min\":{\"unit\":\"°C\",\"name\":\"minimum temperature\"},\"time_min\":{\"unit\":\"int\",\"name\":\"minimum temperature timestamp\"}}}";
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
         "name":"timestamp"
      },
      "tempc_max":{
         "unit":"°C",
         "name":"maximum temperature"
      },
      "time_max":{
         "unit":"int",
         "name":"maximum temperature timestamp"
      },
      "tempc_min":{
         "unit":"°C",
         "name":"minimum temperature"
      },
      "time_min":{
         "unit":"int",
         "name":"minimum temperature timestamp"
      }
   }
})"""";*/
