const char* _SBS1_json = "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"condition\":[\"uuid\",\"index\",0,\"0d00\",\"&\",\"servicedata\",\"=\",6,\"index\",0,\"48\"],\"properties\":{\"mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,3,\"onestate\",\"on/off\"]},\"state\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,2,\"on\",\"off\"]},\"batt\":{\"condition\":[\"servicedata\",4,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"_batt\":{\"condition\":[\"servicedata\",4,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"-\",128]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Bot",
   "model_id":"X1",
   "condition":["uuid", "index",0, "0d00","&", "servicedata", "=", 6, "index", 0, "48"],
   "properties":{
      "mode":{
         "decoder":["bit_static_value", "servicedata", 2, 3, "onestate", "on/off"]
      },
      "state":{
         "decoder":["bit_static_value", "servicedata", 2, 2, "on", "off"]
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