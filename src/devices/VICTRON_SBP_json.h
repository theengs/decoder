const char* _VICTSBP_json = "{\"brand\":\"Victron Energy\",\"model\":\"Smart BatteryProtect\",\"model_id\":\"VICTSBP\",\"tag\":\"1408\",\"cond\":[\"mfd\",\"=\",50,\"ind\",0,\"e10211\",\"&\",\"mfd\",\"ind\",12,\"09ffff\"],\"properties\":{\"device_state\":{\"decoder\":[\"sfhd\",\"mfd\",20,2],\"lookup\":[\"00\",\"off\",\"01\",\"low power\",\"02\",\"fault\",\"03\",\"bulk\",\"04\",\"absorption\",\"05\",\"float\",\"06\",\"storage\",\"07\",\"equalize manual\",\"09\",\"inverting\",\"0b\",\"power_supply\",\"f5\",\"starting up\",\"f6\",\"repeated absorption\",\"f7\",\"recondition\",\"f8\",\"battery safe\",\"f9\",\"active\",\"fc\",\"external control\",\"ff\",\"N/A\"]},\"output_state\":{\"decoder\":[\"sfhd\",\"mfd\",22,2],\"lookup\":[\"00\",\"off\",\"01\",\"on\",\"ff\",\"N/A\"]},\"volt_in\":{\"cond\":[\"mfd\",34,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",34,4,true,true],\"pprc\":[\"&\",32767,\"/\",100]},\"volt_out\":{\"cond\":[\"mfd\",38,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",38,4,true,false],\"pprc\":[\"/\",100]},\"error_code\":{\"cond\":[\"mfd\",24,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",24,2]},\"alarm_reason\":{\"decoder\":[\"vfhd\",\"mfd\",26,4]},\"warning_reason\":{\"decoder\":[\"vfhd\",\"mfd\",30,4]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Smart BatteryProtect",
   "model_id":"VICTSBP",
   "tag":"1408",
   "cond":["mfd", "=", 50, "ind", 0, "e10211", "&", "mfd", "ind", 12, "09ffff"],
   "properties":{
      "device_state":{
         "decoder":["sfhd", "mfd", 20, 2],
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
      "output_state":{
         "decoder":["sfhd", "mfd", 22, 2],
         "lookup":["00", "off", 
                   "01", "on",
                   "ff", "N/A"]
      },
      "volt_in":{
         "cond":["mfd", 34, "!", "ffff"],
         "decoder":["vfhd", "mfd", 34, 4, true, true],
         "pprc":["&", 32767, "/", 100]
      },
      "volt_out":{
         "cond":["mfd", 38, "!", "ffff"],
         "decoder":["vfhd", "mfd", 38, 4, true, false],
         "pprc":["/", 100]
      },
      "error_code":{
         "cond":["mfd", 24, "!", "ff"],
         "decoder":["vfhd", "mfd", 24, 2]
      },
      "alarm_reason":{
         "decoder":["vfhd", "mfd", 26, 4]
      },
      "warning_reason":{
         "decoder":["vfhd", "mfd", 30, 4]
      }
   }
})"""";*/

const char* _VICTSBP_json_props = "{\"properties\":{\"device_state\":{\"unit\":\"string\",\"name\":\"device state\"},\"output_state\":{\"unit\":\"string\",\"name\":\"output state\"},\"volt_in\":{\"unit\":\"V\",\"name\":\"voltage\"},\"volt_out\":{\"unit\":\"V\",\"name\":\"voltage\"},\"error_code\":{\"unit\":\"int\",\"name\":\"error code\"},\"alarm_reason\":{\"unit\":\"int\",\"name\":\"alarm reason\"},\"warning_reason\":{\"unit\":\"int\",\"name\":\"warning reason\"}}}";
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
      "volt_in": {
         "unit": "V",
         "name": "voltage"
      },
      "volt_out": {
         "unit": "V",
         "name": "voltage"
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
      }
   }
})"""";*/
