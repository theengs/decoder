const char* _SBCS_json = "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"condition\":[\"servicedata\",\"=\",18,\"index\",0,\"64\",\"&\",\"uuid\",\"index\",0,\"0d00\"],\"properties\":{\"contact\":{\"condition\":[\"servicedata\",7,\"bit\",2,0],\"decoder\":[\"bit_static_value\",\"servicedata\",7,1,\"closed\",\"open\"]},\"_contact\":{\"condition\":[\"servicedata\",7,\"bit\",2,1],\"decoder\":[\"static_value\",\"timeout not closed\"]},\"movement\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,2,false,true]},\"lightlevel\":{\"decoder\":[\"bit_static_value\",\"servicedata\",7,0,\"dark\",\"bright\"]},\"scopetested\":{\"condition\":[\"servicedata\",2,\"bit\",3,0],\"decoder\":[\"static_value\",false]},\"batt\":{\"condition\":[\"servicedata\",4,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"_batt\":{\"condition\":[\"servicedata\",4,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"-\",128]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Contact Sensor",
   "model_id":"W120150X",
   "condition":["servicedata", "=", 18, "index", 0, "64", "&", "uuid", "index", 0, "0d00"],
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
      "batt":{
         "condition":["servicedata", 4, "bit", 3, 0],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "_batt":{
         "condition":["servicedata", 4, "bit", 3, 1],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["-", 128]
      }
   }
})"""";*/

const char* _SBCS_json_props = "{\"properties\":{\"contact\":{\"unit\":\"string\",\"name\":\"contact\"},\"movement\":{\"unit\":\"status\",\"name\":\"movement\"},\"lightlevel\":{\"unit\":\"string\",\"name\":\"light level\"},\"scopetested\":{\"unit\":\"status\",\"name\":\"scope tested\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
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
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
