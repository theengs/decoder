const char* _SBS1_json = "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"tag\":\"0e22\",\"cond\":[\"uuid\",\"ind\",0,\"0d00\",\"|\",\"uuid\",\"ind\",0,\"fd3d\",\"&\",\"svd\",\">=\",6,\"ind\",0,\"48\"],\"properties\":{\"mode\":{\"decoder\":[\"bit_static_value\",\"svd\",2,3,\"onestate\",\"on/off\"]},\"state\":{\"decoder\":[\"bit_static_value\",\"svd\",2,2,\"on\",\"off\"]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",4,2,false,false],\"pprc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Bot",
   "model_id":"X1",
   "tag":"0e22",
   "cond":["uuid", "ind", 0, "0d00", "|", "uuid", "ind", 0, "fd3d", "&", "svd", ">=", 6, "ind", 0, "48"],
   "properties":{
      "mode":{
         "decoder":["bit_static_value", "svd", 2, 3, "onestate", "on/off"]
      },
      "state":{
         "decoder":["bit_static_value", "svd", 2, 2, "on", "off"]
      },
      "batt":{
         "decoder":["vfhd", "svd", 4, 2, false, false],
         "pprc":["&", 127]
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