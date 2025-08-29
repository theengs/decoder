const char* _HOLYIOT_json = "{\"brand\":\"HolyIoT\",\"model\":\"Beacon\",\"model_id\":\"HOLYIOT\",\"tag\":\"1009\",\"cond\":[\"mfd\",\"=\",50,\"ind\",0,\"4c000215\",\"&\",\"svd\",\"=\",26,\"ind\",0,\"416\",\"&\",\"uuid\",\"ind\",0,\"5242\"],\"properties\":{\"batt\":{\"decoder\":[\"vfhd\",\"svd\",2,2]},\"device\":{\"decoder\":[\"static_value\",\"HolyIoT Beacon Tracker\"]}}}";
/*R""""(
{
   "brand":"HolyIoT",
   "model":"Beacon",
   "model_id":"HOLYIOT",
   "tag":"1009",
   "cond":["mfd", "=", 50, "ind", 0, "4c000215", "&", "svd", "=", 26, "ind", 0, "416", "&", "uuid", "ind", 0, "5242"],
   "properties":{
      "batt":{
         "decoder":["vfhd", "svd", 2, 2]
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
