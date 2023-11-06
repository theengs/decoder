const char* _BM6_json = "{\"brand\":\"GENERIC\",\"model\":\"BM6 Battery Monitor\",\"model_id\":\"BM6\",\"tag\":\"0808\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c0002153ba29cd9a42c894856badaf2606ef777\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",42,2,false]},\"device\":{\"decoder\":[\"static_value\",\"BM6 Tracker\"]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"BM6 Battery Monitor",
   "model_id":"BM6",
   "tag":"0808",
   "condition":["manufacturerdata", "=", 50, "index", 0, "4c0002153ba29cd9a42c894856badaf2606ef777"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 42, 2, false]
      },
      "device":{
         "decoder":["static_value", "BM6 Tracker"]
      }
   }
})"""";*/

const char* _BM6_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"device\":{\"unit\":\"string\",\"name\":\"tracker device\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "device":{
         "unit":"string",
         "name":"tracker device"
      }
   }
})"""";*/
