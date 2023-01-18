const char* _PH10_json = "{\"brand\":\"Polar\",\"model\":\"Heart Rate Sensor\",\"model_id\":\"H10\",\"tag\":\"0b00\",\"condition\":[\"manufacturerdata\",\"=\",12,\"index\",0,\"6b00\"],\"properties\":{\"bpm\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false]}}}";
/*R""""(
{
   "brand":"Polar",
   "model":"Heart Rate Sensor",
   "model_id":"H10",
   "tag":"0b00",
   "condition":["manufacturerdata", "=", 12, "index", 0, "6b00"],
   "properties":{
      "bpm":{
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 2, false, false]
      }
   }
})"""";*/

const char* _PH10_json_props = "{\"properties\":{\"bpm\":{\"unit\":\"bpm\",\"name\":\"heart rate\"}}}";
/*R""""(
{
   "properties":{
      "bpm":{
         "unit":"bpm",
         "name":"heart rate"
      }
   }
})"""";*/
