const char* _VICTORIONXS_json = "{\"brand\":\"Victron Energy\",\"model\":\"Orion XS\",\"model_id\":\"VICTORIONXS\",\"tag\":\"1408\",\"condition\":[\"manufacturerdata\",\"=\",48,\"index\",0,\"e10211\",\"&\",\"manufacturerdata\",\"index\",12,\"0fffff\"],\"properties\":{\"device_state\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,2],\"lookup\":[\"00\",\"off\",\"01\",\"low power\",\"02\",\"fault\",\"03\",\"bulk\",\"04\",\"absorption\",\"05\",\"float\",\"06\",\"storage\",\"07\",\"equalize manual\",\"09\",\"inverting\",\"0b\",\"power_supply\",\"f5\",\"starting up\",\"f6\",\"repeated absorption\",\"f7\",\"recondition\",\"f8\",\"battery safe\",\"f9\",\"active\",\"fc\",\"external control\",\"ff\",\"N/A\"]},\"volt_out\":{\"condition\":[\"manufacturerdata\",24,\"!\",\"7fff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,true],\"post_proc\":[\"/\",100]},\"current_out\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"7fff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,true],\"post_proc\":[\"/\",10]},\"volt_in\":{\"condition\":[\"manufacturerdata\",32,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true,false],\"post_proc\":[\"/\",100]},\"current_in\":{\"condition\":[\"manufacturerdata\",36,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",36,4,true,false],\"post_proc\":[\"/\",10]},\"error_code\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Orion XS",
   "model_id":"VICTORIONXS",
   "tag":"1408",
   "condition":["manufacturerdata", "=", 48, "index", 0, "e10211", "&", "manufacturerdata", "index", 12, "0fffff"],
   "properties":{
      "device_state":{
         "decoder":["string_from_hex_data", "manufacturerdata", 20, 2],
         "lookup":["00", "off",
                   "01", "low power",
                   "02", "fault",
                   "03", "bulk",
                   "04", "absorption",
                   "05", "float",
                   "06", "storage",
                   "07", "equalize manual",
                   "09", "inverting",
                   "0b", "power_supply",
                   "f5", "starting up",
                   "f6", "repeated absorption",
                   "f7", "recondition",
                   "f8", "battery safe",
                   "f9", "active",
                   "fc", "external control",
                   "ff", "N/A"]
      },
      "volt_out":{
         "condition":["manufacturerdata", 24, "!", "7fff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, true],
         "post_proc":["/", 100]
      },
      "current_out":{
         "condition":["manufacturerdata", 28, "!", "7fff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, true],
         "post_proc":["/", 10]
      },
      "volt_in":{
         "condition":["manufacturerdata", 32, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true, false],
         "post_proc":["/", 100]
      },
      "current_in":{
         "condition":["manufacturerdata", 36, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 36, 4, true, false],
         "post_proc":["/", 10]
      },
      "error_code":{
         "condition":["manufacturerdata", 22, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 2]
      }
   }
})"""";*/

const char* _VICTORIONXS_json_props = "{\"properties\":{\"device_state\":{\"unit\":\"string\",\"name\":\"device state\"},\"volt_out\":{\"unit\":\"V\",\"name\":\"voltage\"},\"current_out\":{\"unit\":\"A\",\"name\":\"current\"},\"volt_in\":{\"unit\":\"V\",\"name\":\"voltage\"},\"current_in\":{\"unit\":\"A\",\"name\":\"current\"},\"error_code\":{\"unit\":\"int\",\"name\":\"error code\"}}}";
/*R""""(
{
   "properties":{
      "device_state":{
         "unit":"string",
         "name":"device state"
      },
      "volt_out": {
         "unit": "V",
         "name": "voltage"
      },
      "current_out": {
         "unit": "A",
         "name": "current"
      },
      "volt_in": {
         "unit": "V",
         "name": "voltage"
      },
      "current_in": {
         "unit": "A",
         "name": "current"
      },
      "error_code":{
         "unit":"int",
         "name":"error code"
      }
   }
})"""";*/
