const char* _VICTORIONTR_json = "{\"brand\":\"Victron Energy\",\"model\":\"Orion TR\",\"model_id\":\"VICTORIONTR\",\"tag\":\"0c48\",\"condition\":[\"manufacturerdata\",\"=\",40,\"index\",0,\"e10211\",\"&\",\"manufacturerdata\",\"index\",8,\"d0a3\",\"&\",\"manufacturerdata\",\"index\",12,\"04ffff\"],\"properties\":{\"device_state\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,2],\"lookup\":[\"00\",\"off\",\"01\",\"low power\",\"02\",\"fault\",\"03\",\"bulk\",\"04\",\"absorption\",\"05\",\"float\",\"06\",\"storage\",\"07\",\"equalize manual\",\"09\",\"inverting\",\"0b\",\"power_supply\",\"f5\",\"starting up\",\"f6\",\"repeated absorption\",\"f7\",\"recondition\",\"f8\",\"battery safe\",\"f9\",\"active\",\"fc\",\"external control\",\"ff\",\"N/A\"]},\"volt_in\":{\"condition\":[\"manufacturerdata\",24,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",100]},\"volt_out\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ff7f\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,true],\"post_proc\":[\"/\",100]},\"off_reason\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,8,true,false]},\"error_code\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Orion TR",
   "model_id":"VICTORIONTR",
   "tag":"0c48",
   "condition":["manufacturerdata", "=", 40, "index", 0, "e10211", "&", "manufacturerdata", "index", 8, "d0a3", "&", "manufacturerdata", "index", 12, "04ffff"],
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
      "volt_in":{
         "condition":["manufacturerdata", 24, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, false],
         "post_proc":["/", 100]
      },
      "volt_out":{
         "condition":["manufacturerdata", 28, "!", "ff7f"],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, true],
         "post_proc":["/", 100]
      },
      "off_reason":{
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 8, true, false]
      },
      "error_code":{
         "condition":["manufacturerdata", 22, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 2]
      }
   }
})"""";*/

const char* _VICTORIONTR_json_props = "{\"properties\":{\"device_state\":{\"unit\":\"string\",\"name\":\"device state\"},\"volt_out\":{\"unit\":\"V\",\"name\":\"voltage\"},\"volt_in\":{\"unit\":\"V\",\"name\":\"voltage\"},\"off_reason\":{\"unit\":\"int\",\"name\":\"off reason\"},\"error_code\":{\"unit\":\"int\",\"name\":\"error code\"}}}";
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
      "volt_in": {
         "unit": "V",
         "name": "voltage"
      },
      "off_reason":{
         "unit":"int",
         "name":"off reason"
      },
      "error_code":{
         "unit":"int",
         "name":"error code"
      }
   }
})"""";*/
