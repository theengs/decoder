const char* _XOSSX2_json = "{\"brand\":\"XOSS\",\"model\":\"X2 Heart Rate Sensor\",\"model_id\":\"XOSSX2\",\"tag\":\"0b01\",\"condition\":[\"manufacturerdata\",\"=\",12,\"index\",0,\"04ff\"],\"properties\":{\"bpm\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"XOSS",
   "model":"X2 Heart Rate Sensor",
   "model_id":"XOSSX2",
   "tag":"0b01",
   "condition":["manufacturerdata", "=", 12, "index", 0, "04ff"],
   "properties":{
      "bpm":{
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 2, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _XOSSX2_json_props = "{\"properties\":{\"bpm\":{\"unit\":\"bpm\",\"name\":\"heart rate\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "bpm":{
         "unit":"bpm",
         "name":"heart rate"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
