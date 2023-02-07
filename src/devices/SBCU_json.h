const char* _SBCU_json = "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"tag\":\"0d02\",\"condition\":[\"servicedata\",\"=\",10,\"index\",0,\"63\",\"|\",\"servicedata\",\"=\",12,\"index\",0,\"63\",\"&\",[\"uuid\",\"index\",0,\"0d00\",\"|\",\"uuid\",\"index\",0,\"fd3d\"]],\"properties\":{\"motion\":{\"decoder\":[\"bit_static_value\",\"servicedata\",6,3,false,true]},\"position\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",6,2,false,false],\"post_proc\":[\"&\",127]},\"calibrated\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,2,false,true]},\"lightlevel\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,1,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Curtain",
   "model_id":"W070160X",
   "tag":"0d02",
   "condition":["servicedata", "=", 10, "index", 0, "63", "|", "servicedata", "=", 12, "index", 0, "63", "&", ["uuid", "index", 0, "0d00", "|", "uuid", "index", 0, "fd3d"]],
   "properties":{
      "motion":{
         "decoder":["bit_static_value", "servicedata", 6, 3, false, true]
      },
      "position":{
         "decoder":["value_from_hex_data", "servicedata", 6, 2, false, false],
         "post_proc":["&", 127]
      },
      "calibrated":{
         "decoder":["bit_static_value", "servicedata", 2, 2, false, true]
      },
      "lightlevel":{
         "decoder":["value_from_hex_data", "servicedata", 8, 1, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _SBCU_json_props = "{\"properties\":{\"motion\":{\"unit\":\"status\",\"name\":\"motion\"},\"position\":{\"unit\":\"%\",\"name\":\"position\"},\"calibrated\":{\"unit\":\"status\",\"name\":\"calibrated\"},\"lightlevel\":{\"unit\":\"int\",\"name\":\"light level\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "motion":{
         "unit":"status",
         "name":"motion"
      },
      "position":{
         "unit":"%",
         "name":"position"
      },
      "calibrated":{
         "unit":"status",
         "name":"calibrated"
      },
      "lightlevel":{
         "unit":"int",
         "name":"light level"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
