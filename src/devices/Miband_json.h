const char* _Miband_json = "{\"brand\":\"Xiaomi\",\"model\":\"Miband\",\"model_id\":\"MiBand\",\"condition\":[\"uuid\",\"contain\",\"fee0\"],\"properties\":{\"steps\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,4,true,false]},\"act_bpm\":{\"condition\":[\"manufacturerdata\",10,\"3\",\"|\",\"manufacturerdata\",10,\"4\",\"|\",\"manufacturerdata\",10,\"5\",\"|\",\"manufacturerdata\",10,\"6\",\"|\",\"manufacturerdata\",10,\"7\",\"|\",\"manufacturerdata\",10,\"8\",\"|\",\"manufacturerdata\",10,\"9\",\"|\",\"manufacturerdata\",10,\"a\",\"|\",\"manufacturerdata\",10,\"b\",\"|\",\"manufacturerdata\",10,\"c\",\"|\",\"manufacturerdata\",10,\"d\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Miband",
   "model_id":"MiBand",
   "condition":["uuid", "contain", "fee0"],
   "properties":{
      "steps":{
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, false]
      },
      "act_bpm":{
         "condition":["manufacturerdata", 10, "3", "|", "manufacturerdata", 10, "4", "|", "manufacturerdata", 10, "5", "|", "manufacturerdata", 10, "6", "|", "manufacturerdata", 10, "7", "|", "manufacturerdata", 10, "8", "|", "manufacturerdata", 10, "9", "|", "manufacturerdata", 10, "a", "|", "manufacturerdata", 10, "b", "|", "manufacturerdata", 10, "c", "|", "manufacturerdata", 10, "d"],
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
