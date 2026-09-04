const char* _VICTSCC_json = "{\"brand\":\"Victron Energy\",\"model\":\"Solar Charge Controller\",\"model_id\":\"VICTSCC\",\"tag\":\"0c48\",\"condition\":[\"manufacturerdata\",\"=\",44,\"index\",0,\"e10211\",\"&\",\"manufacturerdata\",\"index\",12,\"01ffff\"],\"properties\":{\"device_state\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,2]},\"_device_state\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,2],\"lookup\":[\"00\",\"off\",\"01\",\"low power\",\"02\",\"fault\",\"03\",\"bulk\",\"04\",\"absorption\",\"05\",\"float\",\"06\",\"storage\",\"07\",\"equalize manual\",\"09\",\"inverting\",\"0b\",\"power supply\",\"f5\",\"starting up\",\"f6\",\"repeated absorption\",\"f7\",\"recondition\",\"f8\",\"battery safe\",\"f9\",\"active\",\"fc\",\"external control\",\"ff\",\"N/A\"]},\"volt_batt\":{\"condition\":[\"manufacturerdata\",24,\"!\",\"ff7f\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,true],\"post_proc\":[\"/\",100]},\"current_batt\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ff7f\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,true],\"post_proc\":[\"/\",10]},\"yield_today\":{\"condition\":[\"manufacturerdata\",32,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true,false],\"post_proc\":[\"/\",100]},\"pv_power\":{\"condition\":[\"manufacturerdata\",36,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",36,4,true,false]},\"current_load\":{\"condition\":[\"manufacturerdata\",40,\"!\",\"ff01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,true,false],\"post_proc\":[\"&\",511,\"/\",10]},\"error_code\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Solar Charge Controller",
   "model_id":"VICTSCC",
   "tag":"0c48",
   "condition":["manufacturerdata", "=", 44, "index", 0, "e10211", "&", "manufacturerdata", "index", 12, "01ffff"],
   "properties":{
      "device_state":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 2]
      },
      "_device_state":{
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
                   "0b", "power supply",
                   "f5", "starting up",
                   "f6", "repeated absorption",
                   "f7", "recondition",
                   "f8", "battery safe",
                   "f9", "active",
                   "fc", "external control",
                   "ff", "N/A"]
      },
      "volt_batt":{
         "condition":["manufacturerdata", 24, "!", "ff7f"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, true],
         "post_proc":["/", 100]
      },
      "current_batt":{
         "condition":["manufacturerdata", 28, "!", "ff7f"],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, true],
         "post_proc":["/", 10]
      },
      "yield_today":{
         "condition":["manufacturerdata", 32, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true, false],
         "post_proc":["/", 100]
      },
      "pv_power":{
         "condition":["manufacturerdata", 36, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 36, 4, true, false]
      },
      "current_load":{
         "condition":["manufacturerdata", 40, "!", "ff01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 40, 4, true, false],
         "post_proc":["&", 511,"/", 10]
      },
       "error_code":{
         "condition":["manufacturerdata", 22, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 2]
      }
   }
})"""";*/

const char* _VICTSCC_json_props = "{\"properties\":{\"device_state\":{\"unit\":\"string\",\"name\":\"device state\"},\"volt_batt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"current_batt\":{\"unit\":\"A\",\"name\":\"current\"},\"yield_today\":{\"unit\":\"kWh\",\"name\":\"energy\"},\"pv_power\":{\"unit\":\"W\",\"name\":\"power\"},\"current_load\":{\"unit\":\"A\",\"name\":\"current\"},\"error_code\":{\"unit\":\"int\",\"name\":\"error code\"}}}";
/*R""""(
{
   "properties":{
      "device_state":{
         "unit":"string",
         "name":"device state"
      },
      "volt_batt": {
         "unit": "V",
         "name": "voltage"
      },
      "current_batt": {
         "unit": "A",
         "name": "current"
      },
      "yield_today": {
         "unit": "kWh",
         "name": "energy"
      },
      "pv_power": {
         "unit": "W",
         "name": "power"
      },
      "current_load": {
         "unit": "A",
         "name": "current"
      },
      "error_code":{
         "unit":"int",
         "name":"error code"
      }
   }
})"""";*/
