const char* _SBCU_json = "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"condition\":[\"uuid\",\"index\",0,\"0d00\",\"&\",\"servicedata\",\"=\",10,\"index\",0,\"63\"],\"properties\":{\"motion\":{\"decoder\":[\"bit_static_value\",\"servicedata\",6,3,false,true]},\"position\":{\"condition\":[\"servicedata\",6,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"servicedata\",6,2,false,false]},\"_position\":{\"condition\":[\"servicedata\",6,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"servicedata\",6,2,false,false],\"post_proc\":['-',128]},\"calibrated\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,2,false,true]},\"lightlevel\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,1,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Curtain",
   "model_id":"W070160X",
   "condition":["uuid", "index", 0, "0d00", "&", "servicedata", "=", 10, "index", 0, "63"],
   "properties":{
      "motion":{
         "decoder":["bit_static_value", "servicedata", 6, 3, false, true]
      },
      "position":{
         "condition":["servicedata", 6, "bit", 3, 0],
         "decoder":["value_from_hex_data", "servicedata", 6, 2, false, false]
      },
      "_position":{
         "condition":["servicedata", 6, "bit", 3, 1],
         "decoder":["value_from_hex_data", "servicedata", 6, 2, false, false],
         "post_proc":['-', 128]
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
