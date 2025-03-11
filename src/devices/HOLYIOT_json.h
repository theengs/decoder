const char* _HOLYIOT_json = "{\"brand\":\"HolyIoT\",\"model\":\"Beacon\",\"model_id\":\"HOLYIOT\",\"tag\":\"1009\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c000215\",\"&\",\"servicedata\",\"=\",26,\"index\",0,\"416\",\"&\",\"uuid\",\"index\",0,\"5242\"],\"properties\":{\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",2,2]},\"device\":{\"decoder\":[\"static_value\",\"HolyIoT Beacon Tracker\"]}}}";
/*R""""(
{
   "brand":"HolyIoT",
   "model":"Beacon",
   "model_id":"HOLYIOT",
   "tag":"1009",
   "condition":["manufacturerdata", "=", 50, "index", 0, "4c000215", "&", "servicedata", "=", 26, "index", 0, "416", "&", "uuid", "index", 0, "5242"],
   "properties":{
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 2, 2]
      },
      "device":{
         "decoder":["static_value", "HolyIoT Beacon Tracker"]
      }
   }
})"""";*/

const char* _HOLYIOT_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"device\":{\"unit\":\"string\",\"name\":\"tracker device\"}}}";
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
