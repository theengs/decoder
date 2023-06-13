const char* _Miband_json = "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"tag\":\"0b0a\",\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"5701\",\"&\",\"manufacturerdata\",\"mac@index\",40],\"conditionnomac\":[\"uuid\",\"contain\",\"fee0\"],\"properties\":{\"steps\":{\"condition\":[\"servicedata\",\"=\",8],\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,4,true,false]},\"act_bpm\":{\"condition\":[\"manufacturerdata\",0,\"570102\",\"&\",\"manufacturerdata\",10,\"!\",\"f\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false]},\"device\":{\"decoder\":[\"static_value\",\"Xiaomi/Amazfit Tracker\"]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",40]}}}";
/*R""""(
{
   "brand":"Xiaomi/Amazfit",
   "model":"Mi Band/Smart Watch",
   "model_id":"MB/SW",
   "tag":"0b0a",
   "condition":["manufacturerdata", "=", 52, "index", 0, "5701", "&", "manufacturerdata", "mac@index", 40],
   "conditionnomac":["uuid", "contain", "fee0"],
   "properties":{
      "steps":{
         "condition":["servicedata", "=", 8],
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, false]
      },
      "act_bpm":{
         "condition":["manufacturerdata", 0, "570102", "&", "manufacturerdata", 10, "!", "f"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 2, false, false]
      },
      "device":{
         "decoder":["static_value", "Xiaomi/Amazfit Tracker"]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 40]
      }
   }
})"""";*/

const char* _Miband_json_props = "{\"properties\":{\"steps\":{\"unit\":\"int\",\"name\":\"step-count\"},\"act_bpm\":{\"unit\":\"bpm\",\"name\":\"activity heart rate\"},\"device\":{\"unit\":\"string\",\"name\":\"tracker device\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "steps":{
         "unit":"int",
         "name":"step-count"
      },
      "act_bpm":{
         "unit":"bpm",
         "name":"activity heart rate"
      },
      "device":{
         "unit":"string",
         "name":"tracker device"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
