const char* _SBS1_json = "{\"brand\":\"SwitchBot\",\"model\":\"S1\",\"model_id\":\"SWITCHBOT-S1\",\"condition\":[\"uuid\",\"indx\",0,\"0d00\",\"&\",\"svcd\",\"=\",6,\"indx\",0,\"48\"],\"properties\":{\"mode\":{\"condition\":[\"svcd\",2,\"8\",\"|\",\"svcd\",2,\"9\",\"|\",\"svcd\",2,\"c\",\"|\",\"svcd\",2,\"d\"],\"decoder\":[\"static_value\",\"on/off\"]},\"_mode\":{\"condition\":[\"svcd\",2,\"0\",\"|\",\"svcd\",2,\"1\",\"|\",\"svcd\",2,\"4\",\"|\",\"svcd\",2,\"5\"],\"decoder\":[\"static_value\",\"onestate\"]},\"state\":{\"condition\":[\"svcd\",2,\"0\",\"|\",\"svcd\",2,\"1\",\"|\",\"svcd\",2,\"8\",\"|\",\"svcd\",2,\"9\"],\"decoder\":[\"static_value\",\"on\"]},\"_state\":{\"condition\":[\"svcd\",2,\"4\",\"|\",\"svcd\",2,\"5\",\"|\",\"svcd\",2,\"c\",\"|\",\"svcd\",2,\"d\"],\"decoder\":[\"static_value\",\"off\"]},\"batt\":{\"condition\":[\"svcd\",4,\"0\",\"|\",\"svcd\",4,\"1\",\"|\",\"svcd\",4,\"2\",\"|\",\"svcd\",4,\"3\",\"|\",\"svcd\",4,\"4\",\"|\",\"svcd\",4,\"5\",\"|\",\"svcd\",4,\"6\"],\"decoder\":[\"vfhd\",\"svcd\",4,2,false,false]},\"_batt\":{\"condition\":[\"svcd\",4,\"8\",\"|\",\"svcd\",4,\"9\",\"|\",\"svcd\",4,\"a\",\"|\",\"svcd\",4,\"b\",\"|\",\"svcd\",4,\"c\",\"|\",\"svcd\",4,\"d\",\"|\",\"svcd\",4,\"e\"],\"decoder\":[\"vfhd\",\"svcd\",4,2,false,false],\"post_proc\":['-',128]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"S1",
   "model_id":"SWITCHBOT-S1",
   "condition":["uuid", "indx",0, "0d00","&", "svcd", "=", 6, "indx", 0, "48"],
   "properties":{
      "mode":{
         "condition":["svcd", 2, "8", "|", "svcd", 2, "9", "|", "svcd", 2, "c", "|", "svcd", 2, "d"],
         "decoder":["static_value", "on/off"]
      },
      "_mode":{
         "condition":["svcd", 2, "0", "|", "svcd", 2, "1", "|", "svcd", 2, "4", "|", "svcd", 2, "5"],
         "decoder":["static_value", "onestate"]
      },
      "state":{
         "condition":["svcd", 2, "0", "|", "svcd", 2, "1", "|", "svcd", 2, "8", "|", "svcd", 2, "9"],
         "decoder":["static_value", "on"]
      },
      "_state":{
         "condition":["svcd", 2, "4", "|", "svcd", 2, "5", "|", "svcd", 2, "c", "|", "svcd", 2, "d"],
         "decoder":["static_value", "off"]
      },
      "batt":{
         "condition":["svcd", 4, "0", "|", "svcd", 4, "1", "|", "svcd", 4, "2", "|", "svcd", 4, "3", "|", "svcd", 4, "4", "|", "svcd", 4, "5", "|", "svcd", 4, "6"],
         "decoder":["vfhd", "svcd", 4, 2, false, false]
      },
      "_batt":{
         "condition":["svcd", 4, "8", "|", "svcd", 4, "9", "|", "svcd", 4, "a", "|", "svcd", 4, "b", "|", "svcd", 4, "c", "|", "svcd", 4, "d", "|", "svcd", 4, "e"],
         "decoder":["vfhd", "svcd", 4, 2, false, false],
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