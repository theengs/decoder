const char* _WS02_json = "{\"brand\":\"ThermoBeacon\",\"model\":\"WS02\",\"model_id\":\"WS02\",\"condition\":[\"manufacturerdata\",\"contain\",\"100000001a11\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true],\"post_proc\":[\"/\",16]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true],\"post_proc\":[\"/\",16]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true],\"post_proc\":[\"/\",1000]}}}";

/*R""""(
{
   "brand":"ThermoBeacon",
   "model":"WS02",
   "model_id":"WS02",
   "condition":["manufacturerdata", "contain", "100000001a11"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true],
         "post_proc":["/", 16]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true],
         "post_proc":["/", 16]
      },
      "volt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _WS02_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
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
      }
   }
})"""";*/