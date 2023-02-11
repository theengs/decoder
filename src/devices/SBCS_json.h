const char* _SBCS_json = "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"tag\":\"0406\",\"condition\":[\"uuid\",\"index\",0,\"0d00\",\"|\",\"uuid\",\"index\",0,\"fd3d\",\"&\",\"servicedata\",\"=\",18,\"index\",0,\"64\"],\"properties\":{\"contact\":{\"condition\":[\"servicedata\",7,\"bit\",2,0],\"decoder\":[\"bit_static_value\",\"servicedata\",7,1,\"closed\",\"open\"]},\"_contact\":{\"condition\":[\"servicedata\",7,\"bit\",2,1],\"decoder\":[\"static_value\",\"timeout not closed\"]},\"movement\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,2,false,true]},\"lightlevel\":{\"decoder\":[\"bit_static_value\",\"servicedata\",7,0,\"dark\",\"bright\"]},\"scopetested\":{\"condition\":[\"servicedata\",2,\"bit\",3,0],\"decoder\":[\"static_value\",false]},\"in_ct\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,1,false,false],\"post_proc\":[\">\",2]},\"out_ct\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,1,false,false],\"post_proc\":[\"&\",3]},\"push_ct\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",17,1,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Contact Sensor",
   "model_id":"W120150X",
   "tag":"0406",
   "condition":["uuid", "index", 0, "0d00", "|", "uuid", "index", 0, "fd3d", "&", "servicedata", "=", 18, "index", 0, "64"],
   "properties":{
      "contact":{
         "condition":["servicedata", 7, "bit", 2, 0],
         "decoder":["bit_static_value", "servicedata", 7, 1, "closed", "open"]
      },
      "_contact":{
         "condition":["servicedata", 7, "bit", 2, 1],
         "decoder":["static_value", "timeout not closed"]
      },
      "movement":{
         "decoder":["bit_static_value", "servicedata", 2, 2, false, true]
      },
      "lightlevel":{
         "decoder":["bit_static_value", "servicedata", 7, 0, "dark", "bright"]
      },
      "scopetested":{
         "condition":["servicedata", 2, "bit", 3, 0],
         "decoder":["static_value", false]
      },
      "in_ct":{
         "decoder":["value_from_hex_data", "servicedata", 16, 1, false, false],
         "post_proc":[">", 2]
      },
      "out_ct":{
         "decoder":["value_from_hex_data", "servicedata", 16, 1, false, false],
         "post_proc":["&", 3]
      },
      "push_ct":{
         "decoder":["value_from_hex_data", "servicedata", 17, 1, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _SBCS_json_props = "{\"properties\":{\"contact\":{\"unit\":\"string\",\"name\":\"contact\"},\"movement\":{\"unit\":\"status\",\"name\":\"movement\"},\"lightlevel\":{\"unit\":\"string\",\"name\":\"light level\"},\"scopetested\":{\"unit\":\"status\",\"name\":\"scope tested\"},\"in_ct\":{\"unit\":\"int\",\"name\":\"in count\"},\"out_ct\":{\"unit\":\"int\",\"name\":\"out count\"},\"push_ct\":{\"unit\":\"int\",\"name\":\"push count\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "contact":{
         "unit":"string",
         "name":"contact"
      },
      "movement":{
         "unit":"status",
         "name":"movement"
      },
      "lightlevel":{
         "unit":"string",
         "name":"light level"
      },
      "scopetested":{
         "unit":"status",
         "name":"scope tested"
      },
      "in_ct":{
         "unit":"int",
         "name":"in count"
      },
      "out_ct":{
         "unit":"int",
         "name":"out count"
      },
      "push_ct":{
         "unit":"int",
         "name":"push count"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
