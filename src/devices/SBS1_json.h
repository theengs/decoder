const char* _SBS1_json = "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"condition\":[\"uuid\",\"index\",0,\"0d00\",\"&\",\"servicedata\",\"=\",6,\"index\",0,\"48\"],\"properties\":{\"mode\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,3,\"onestate\",\"on/off\"]},\"state\":{\"decoder\":[\"bit_static_value\",\"servicedata\",2,2,\"on\",\"off\"]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
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
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
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