const char* _VICTBSC_json = "{\"brand\":\"Victron Energy\",\"model\":\"Blue Smart Charger\",\"model_id\":\"VICTBSC\",\"tag\":\"1400\",\"cond\":[\"mfd\",\"=\",46,\"index\",0,\"e10211\",\"&\",\"mfd\",\"index\",12,\"08ffff\"],\"properties\":{\"device_state\":{\"decoder\":[\"vfhd\",\"mfd\",20,2]},\"_device_state\":{\"decoder\":[\"sfhd\",\"mfd\",20,2],\"lookup\":[\"00\",\"off\",\"01\",\"low power\",\"02\",\"fault\",\"03\",\"bulk\",\"04\",\"absorption\",\"05\",\"float\",\"06\",\"storage\",\"07\",\"equalize manual\",\"09\",\"inverting\",\"0b\",\"power supply\",\"f5\",\"starting up\",\"f6\",\"repeated absorption\",\"f7\",\"recondition\",\"f8\",\"battery safe\",\"f9\",\"active\",\"fc\",\"external control\",\"ff\",\"N/A\"]},\"volt_batt_1\":{\"cond\":[\"mfd\",24,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",24,4,true,false],\"post_proc\":[\"&\",8191,\"/\",100]},\"current_batt_1\":{\"cond\":[\"mfd\",26,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",26,4,true,false],\"post_proc\":[\">\",5,\"&\",2047,\"/\",10]},\"volt_batt_2\":{\"cond\":[\"mfd\",30,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",30,4,true,false],\"post_proc\":[\"&\",8191,\"/\",100]},\"current_batt_2\":{\"cond\":[\"mfd\",32,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",32,4,true,false],\"post_proc\":[\">\",5,\"&\",2047,\"/\",10]},\"volt_batt_3\":{\"cond\":[\"mfd\",36,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",36,4,true,false],\"post_proc\":[\"&\",8191,\"/\",100]},\"current_batt_3\":{\"cond\":[\"mfd\",38,\"!\",\"ffff\"],\"decoder\":[\"vfhd\",\"mfd\",38,4,true,false],\"post_proc\":[\">\",5,\"&\",2047,\"/\",10]},\"tempc\":{\"cond\":[\"mfd\",42,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",42,2],\"post_proc\":[\"&\",127,\"-\",40]},\"current_ac\":{\"cond\":[\"mfd\",44,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",42,4,false,false],\"post_proc\":[\"&\",511,\"/\",10]},\"error_code\":{\"cond\":[\"mfd\",22,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",22,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Blue Smart Charger",
   "model_id":"VICTBSC",
   "tag":"1400",
   "cond":["mfd", "=", 46, "index", 0, "e10211", "&", "mfd", "index", 12, "08ffff"],
   "properties":{
      "device_state":{
         "decoder":["vfhd", "mfd", 20, 2]
      },
      "_device_state":{
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
                   "0b", "power supply",
                   "f5", "starting up",
                   "f6", "repeated absorption",
                   "f7", "recondition",
                   "f8", "battery safe",
                   "f9", "active",
                   "fc", "external control",
                   "ff", "N/A"]
      },
      "volt_batt_1":{
         "cond":["mfd", 24, "!", "ffff"],
         "decoder":["vfhd", "mfd", 24, 4, true, false],
         "post_proc":["&", 8191, "/", 100]
      },
      "current_batt_1":{
         "cond":["mfd", 26, "!", "ffff"],
         "decoder":["vfhd", "mfd", 26, 4, true, false],
         "post_proc":[">", 5, "&", 2047, "/", 10]
      },
      "volt_batt_2":{
         "cond":["mfd", 30, "!", "ffff"],
         "decoder":["vfhd", "mfd", 30, 4, true, false],
         "post_proc":["&", 8191, "/", 100]
      },
      "current_batt_2":{
         "cond":["mfd", 32, "!", "ffff"],
         "decoder":["vfhd", "mfd", 32, 4, true, false],
         "post_proc":[">", 5, "&", 2047, "/", 10]
      },
      "volt_batt_3":{
         "cond":["mfd", 36, "!", "ffff"],
         "decoder":["vfhd", "mfd", 36, 4, true, false],
         "post_proc":["&", 8191, "/", 100]
      },
      "current_batt_3":{
         "cond":["mfd", 38, "!", "ffff"],
         "decoder":["vfhd", "mfd", 38, 4, true, false],
         "post_proc":[">", 5, "&", 2047, "/", 10]
      },
      "tempc":{
         "cond":["mfd", 42, "!", "ff"],
         "decoder":["vfhd", "mfd", 42, 2],
         "post_proc":["&", 127, "-", 40]
      },
      "current_ac":{
         "cond":["mfd", 44, "!", "ff"],
         "decoder":["vfhd", "mfd", 42, 4, false, false],
         "post_proc":["&", 511, "/", 10]
      },
      "error_code":{
         "cond":["mfd", 22, "!", "ff"],
         "decoder":["vfhd", "mfd", 22, 2]
      }
   }
})"""";*/

const char* _VICTBSC_json_props = "{\"properties\":{\"device_state\":{\"unit\":\"string\",\"name\":\"device state\"},\"volt_batt_1\":{\"unit\":\"V\",\"name\":\"voltage\"},\"current_batt_1\":{\"unit\":\"A\",\"name\":\"current\"},\"volt_batt_2\":{\"unit\":\"V\",\"name\":\"voltage\"},\"current_batt_2\":{\"unit\":\"A\",\"name\":\"current\"},\"volt_batt_3\":{\"unit\":\"V\",\"name\":\"voltage\"},\"current_batt_3\":{\"unit\":\"A\",\"name\":\"current\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"current_ac\":{\"unit\":\"A\",\"name\":\"current\"},\"error_code\":{\"unit\":\"int\",\"name\":\"error code\"}}}";
/*R""""(
{
   "properties":{
      "device_state":{
         "unit":"string",
         "name":"device state"
      },
      "volt_batt_1": {
         "unit": "V",
         "name": "voltage"
      },
      "current_batt_1": {
         "unit": "A",
         "name": "current"
      },
      "volt_batt_2": {
         "unit": "V",
         "name": "voltage"
      },
      "current_batt_2": {
         "unit": "A",
         "name": "current"
      },
      "volt_batt_3": {
         "unit": "V",
         "name": "voltage"
      },
      "current_batt_3": {
         "unit": "A",
         "name": "current"
      },
      "tempc": {
         "unit": "°C",
         "name": "temperature"
      },
      "current_ac": {
         "unit": "A",
         "name": "current"
      },
      "error_code":{
         "unit":"int",
         "name":"error code"
      }
   }
})"""";*/
