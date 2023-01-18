const char* _Miband_json = "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"5701\",\"&\",\"manufacturerdata\",\"mac@index\",40],\"properties\":{\"steps\":{\"condition\":[\"servicedata\",\"=\",8],\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,4,true,false]},\"act_bpm\":{\"condition\":[\"manufacturerdata\",10,\"!\",\"f\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false]}}}";
/*R""""(
{
   "brand":"Xiaomi/Amazfit",
   "model":"Mi Band/Smart Watch",
   "model_id":"MB/SW",
   "condition":["manufacturerdata", "=", 52, "index", 0, "5701", "&", "manufacturerdata", "mac@index", 40],
   "properties":{
      "steps":{
         "condition":["servicedata", "=", 8],
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, false]
      },
      "act_bpm":{
         "condition":["manufacturerdata", 10, "!", "f"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 2, false, false]
      }
   }
})"""";*/

const char* _Miband_json_props = "{\"properties\":{\"steps\":{\"unit\":\"int\",\"name\":\"step-count\"},\"act_bpm\":{\"unit\":\"bpm\",\"name\":\"activity heart rate\"}}}";
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
      }
   }
})"""";*/
