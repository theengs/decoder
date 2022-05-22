const char* _SBS1_json = "{\"brand\":\"SwitchBot\",\"model\":\"S1\",\"model_id\":\"SWITCHBOT-S1\",\"condition\":[\"uuid\",\"index\",0,\"0d00\",\"&\",\"servicedata\",\"=\",6,\"index\",0,\"48\"],\"properties\":{\"mode\":{\"condition\":[\"servicedata\",2,\"bit\",3,1],\"decoder\":[\"static_value\",\"on/off\"]},\"_mode\":{\"condition\":[\"servicedata\",2,\"bit\",3,0],\"decoder\":[\"static_value\",\"onestate\"]},\"state\":{\"condition\":[\"servicedata\",2,\"bit\",2,0],\"decoder\":[\"static_value\",\"on\"]},\"_state\":{\"condition\":[\"servicedata\",2,\"bit\",2,1],\"decoder\":[\"static_value\",\"off\"]},\"batt\":{\"condition\":[\"servicedata\",4,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"_batt\":{\"condition\":[\"servicedata\",4,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"-\",128]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"S1",
   "model_id":"SWITCHBOT-S1",
   "condition":["uuid", "index",0, "0d00","&", "servicedata", "=", 6, "index", 0, "48"],
   "properties":{
      "mode":{
         "condition":["servicedata", 2, "bit", 3, 1],
         "decoder":["static_value", "on/off"]
      },
      "_mode":{
         "condition":["servicedata", 2, "bit", 3, 0],
         "decoder":["static_value", "onestate"]
      },
      "state":{
         "condition":["servicedata", 2, "bit", 2, 0],
         "decoder":["static_value", "on"]
      },
      "_state":{
         "condition":["servicedata", 2, "bit", 2, 1],
         "decoder":["static_value", "off"]
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