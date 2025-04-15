const char* _VICTSBP_json = "{\"brand\":\"Victron Energy\",\"model\":\"Smart BatteryProtect\",\"model_id\":\"VICTSBP\",\"tag\":\"1400\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"e10211\",\"&\",\"manufacturerdata\",\"index\",12,\"09ffff\"],\"properties\":{\"device_state\":{\"condition\":[\"manufacturerdata\",20,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,2],\"lookup\":[\"00\",\"off\",\"01\",\"low power\",\"02\",\"fault\",\"03\",\"bulk\",\"04\",\"absorption\",\"05\",\"float\",\"06\",\"storage\",\"07\",\"equalize manual\",\"09\",\"inverting\",\"0b\",\"power_supply\",\"f5\",\"starting up\",\"f6\",\"repeated absorption\",\"f7\",\"recondition\",\"f8\",\"battery safe\",\"f9\",\"active\",\"fc\",\"external control\"]},\"output_state\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",22,2],\"lookup\":[\"00\",\"off\",\"01\",\"on\"]},\"error_code\":{\"condition\":[\"manufacturerdata\",24,\"!\",\"ff\",\"&\",\"manufacturerdata\",24,\"!\",\"00\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,2]},\"alarm_reason\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"0000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4]},\"warning_reason\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"0000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4]},\"volt_in\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"7fff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,true],\"post_proc\":[\"/\",100]},\"volt_out\":{\"condition\":[\"manufacturerdata\",38,\"!\",\"7fff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false],\"post_proc\":[\"/\",100]},\"off_reason\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",42,8],\"lookup\":[\"00000000\",\"NO_REASON\",\"01000000\",\"NO_INPUT_POWER\",\"02000000\",\"SWITCHED_OFF_SWITCH\",\"04000000\",\"SWITCHED_OFF_REGISTER\",\"08000000\",\"REMOTE_INPUT\",\"10000000\",\"PROTECTION_ACTIVE\",\"20000000\",\"PAY_AS_YOU_GO_OUT_OF_CREDIT\",\"40000000\",\"BMS\",\"80000000\",\"ENGINE_SHUTDOWN\",\"00010000\",\"ANALYSING_INPUT_VOLTAGE\"]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Smart BatteryProtect",
   "model_id":"VICTSBP",
   "tag":"1400",
   "condition":["manufacturerdata", "=", 50, "index", 0, "e10211", "&", "manufacturerdata", "index", 12, "09ffff"],
   "properties":{
      "device_state":{
         "condition":["manufacturerdata", 20, "!", "ff"],
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
                   "fc", "external control"]
      },
      "output_state":{
         "condition":["manufacturerdata", 22, "!", "ff"],
         "decoder":["string_from_hex_data", "manufacturerdata", 22, 2],
         "lookup":["00", "off", 
                   "01", "on"]
      },
      "error_code":{
         "condition":["manufacturerdata", 24, "!", "ff", "&", "manufacturerdata", 24, "!", "00"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 2]
      },
      "alarm_reason":{
         "condition":["manufacturerdata", 26, "!", "0000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4]
      },
      "warning_reason":{
         "condition":["manufacturerdata", 30, "!", "0000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4]
      },
      "volt_in":{
         "condition":["manufacturerdata", 34, "!", "7fff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 4, true, true],
         "post_proc":["/", 100]
      },
      "volt_out":{
         "condition":["manufacturerdata", 38, "!", "7fff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 4, true, false],
         "post_proc":["/", 100]
      },
       "off_reason":{
         "decoder":["string_from_hex_data", "manufacturerdata", 42, 8],
         "lookup":["00000000", "NO_REASON",
                   "01000000", "NO_INPUT_POWER",
                   "02000000", "SWITCHED_OFF_SWITCH",
                   "04000000", "SWITCHED_OFF_REGISTER",
                   "08000000", "REMOTE_INPUT",
                   "10000000", "PROTECTION_ACTIVE",
                   "20000000", "PAY_AS_YOU_GO_OUT_OF_CREDIT",
                   "40000000", "BMS",
                   "80000000", "ENGINE_SHUTDOWN",
                   "00010000", "ANALYSING_INPUT_VOLTAGE"]
      }
   }
})"""";*/

const char* _VICTSBP_json_props = "{\"properties\":{\"device_state\":{\"unit\":\"string\",\"name\":\"device state\"},\"output_state\":{\"unit\":\"string\",\"name\":\"output state\"},\"error_code\":{\"unit\":\"int\",\"name\":\"error code\"},\"alarm_reason\":{\"unit\":\"int\",\"name\":\"alarm reason\"},\"warning_reason\":{\"unit\":\"int\",\"name\":\"warning reason\"},\"volt_in\":{\"unit\":\"V\",\"name\":\"voltage\"},\"volt_out\":{\"unit\":\"V\",\"name\":\"voltage\"},\"off_reason\":{\"unit\":\"string\",\"name\":\"off reason\"}}}";
/*R""""(
{
   "properties":{
      "device_state":{
         "unit":"string",
         "name":"device state"
      },
      "output_state":{
         "unit":"string",
         "name":"output state"
      },
      "error_code":{
         "unit":"int",
         "name":"error code"
      },
      "alarm_reason":{
         "unit":"int",
         "name":"alarm reason"
      },
      "warning_reason":{
         "unit":"int",
         "name":"warning reason"
      },
      "volt_in": {
         "unit": "V",
         "name": "voltage"
      },
      "volt_out": {
         "unit": "V",
         "name": "voltage"
      },
      "off_reason":{
         "unit":"string",
         "name":"off reason"
      }
   }
})"""";*/
