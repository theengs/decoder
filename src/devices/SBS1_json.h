const char* _SBS1_json = "{\"brand\":\"SwitchBot\",\"model\":\"S1\",\"model_id\":\"SWITCHBOT-S1\",\"condition\":[\"uuid\",\"index\",0,\"0d00\",\"&\",\"servicedata\",\"=\",6,\"index\",0,\"48\"],\"properties\":{\"mode\":{\"condition\":[\"servicedata\",2,\"8\",\"|\",\"servicedata\",2,\"9\",\"|\",\"servicedata\",2,\"c\",\"|\",\"servicedata\",2,\"d\"],\"decoder\":[\"static_value\",\"on/off\"]},\"_mode\":{\"condition\":[\"servicedata\",2,\"0\",\"|\",\"servicedata\",2,\"1\",\"|\",\"servicedata\",2,\"4\",\"|\",\"servicedata\",2,\"5\"],\"decoder\":[\"static_value\",\"onestate\"]},\"state\":{\"condition\":[\"servicedata\",2,\"0\",\"|\",\"servicedata\",2,\"1\",\"|\",\"servicedata\",2,\"8\",\"|\",\"servicedata\",2,\"9\"],\"decoder\":[\"static_value\",\"on\"]},\"_state\":{\"condition\":[\"servicedata\",2,\"4\",\"|\",\"servicedata\",2,\"5\",\"|\",\"servicedata\",2,\"c\",\"|\",\"servicedata\",2,\"d\"],\"decoder\":[\"static_value\",\"off\"]},\"batt\":{\"condition\":[\"servicedata\",4,\"0\",\"|\",\"servicedata\",4,\"1\",\"|\",\"servicedata\",4,\"2\",\"|\",\"servicedata\",4,\"3\",\"|\",\"servicedata\",4,\"4\",\"|\",\"servicedata\",4,\"5\",\"|\",\"servicedata\",4,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"_batt\":{\"condition\":[\"servicedata\",4,\"8\",\"|\",\"servicedata\",4,\"9\",\"|\",\"servicedata\",4,\"a\",\"|\",\"servicedata\",4,\"b\",\"|\",\"servicedata\",4,\"c\",\"|\",\"servicedata\",4,\"d\",\"|\",\"servicedata\",4,\"e\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":['-',128]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"S1",
   "model_id":"SWITCHBOT-S1",
   "condition":["uuid", "index",0, "0d00","&", "servicedata", "=", 6, "index", 0, "48"],
   "properties":{
      "mode":{
         "condition":["servicedata", 2, "8", "|", "servicedata", 2, "9", "|", "servicedata", 2, "c", "|", "servicedata", 2, "d"],
         "decoder":["static_value", "on/off"]
      },
      "_mode":{
         "condition":["servicedata", 2, "0", "|", "servicedata", 2, "1", "|", "servicedata", 2, "4", "|", "servicedata", 2, "5"],
         "decoder":["static_value", "onestate"]
      },
      "state":{
         "condition":["servicedata", 2, "0", "|", "servicedata", 2, "1", "|", "servicedata", 2, "8", "|", "servicedata", 2, "9"],
         "decoder":["static_value", "on"]
      },
      "_state":{
         "condition":["servicedata", 2, "4", "|", "servicedata", 2, "5", "|", "servicedata", 2, "c", "|", "servicedata", 2, "d"],
         "decoder":["static_value", "off"]
      },
      "batt":{
         "condition":["servicedata", 4, "0", "|", "servicedata", 4, "1", "|", "servicedata", 4, "2", "|", "servicedata", 4, "3", "|", "servicedata", 4, "4", "|", "servicedata", 4, "5", "|", "servicedata", 4, "6"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "_batt":{
         "condition":["servicedata", 4, "8", "|", "servicedata", 4, "9", "|", "servicedata", 4, "a", "|", "servicedata", 4, "b", "|", "servicedata", 4, "c", "|", "servicedata", 4, "d", "|", "servicedata", 4, "e"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":['-', 128]
      }
   }
})"""";*/

const char* _SBS1_json_props = "{\"properties\":{\"mode\":{\"unit\":\"string\",\"name\":\"mode\"},\"state\":{\"unit\":\"string\",\"name\":\"state\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "mode":{
         "unit":"string",
         "name":"mode"
      },
      "state":{
         "unit":"string",
         "name":"state"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/