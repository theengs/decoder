const char* _ODACE_WLBL_json = "{\"brand\":\"Schneider Electric\",\"model\":\"Odace WLBL\",\"model_id\":\"S520104\",\"tag\":\"1104\",\"condition\":[\"manufacturerdata\",\">=\",24,\"index\",0,\"b6028e44\"],\"properties\":{\"uid\":{\"decoder\":[\"reverse_string_from_hex_data\",\"manufacturerdata\",14,6]},\"action\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",22,2],\"lookup\":[\"00\",\"off\",\"01\",\"on\",\"02\",\"toggle\",\"03\",\"dim_up\",\"04\",\"dim_down\",\"05\",\"up\",\"06\",\"down\",\"07\",\"stop\",\"08\",\"scene_user\",\"09\",\"scene_in\",\"0a\",\"scene_out\"]}}}";

/*R""""(
{
   "brand":"Schneider Electric",
   "model":"Odace WLBL",
   "model_id":"S520104",
   "tag":"1104",
   "condition":["manufacturerdata", ">=", 24, "index", 0, "b6028e44"],
   "properties":{
      "uid":{
         "decoder":["reverse_string_from_hex_data", "manufacturerdata", 14, 6]
      },
      "action":{
         "decoder":["string_from_hex_data", "manufacturerdata", 22, 2],
         "lookup":["00", "off",
                   "01", "on",
                   "02", "toggle",
                   "03", "dim_up",
                   "04", "dim_down",
                   "05", "up",
                   "06", "down",
                   "07", "stop",
                   "08", "scene_user",
                   "09", "scene_in",
                   "0a", "scene_out"]
      }
   }
})"""";*/

const char* _ODACE_WLBL_json_props = "{\"properties\":{\"uid\":{\"unit\":\"string\",\"name\":\"device UID\"},\"action\":{\"unit\":\"event\",\"name\":\"button action\",\"events\":[\"off\",\"on\",\"toggle\",\"dim_up\",\"dim_down\",\"up\",\"down\",\"stop\",\"scene_user\",\"scene_in\",\"scene_out\"]}}}";

/*R""""(
{
   "properties":{
      "uid":{
         "unit":"string",
         "name":"device UID"
      },
      "action":{
         "unit":"event",
         "name":"button action",
         "events":["off", "on", "toggle", "dim_up", "dim_down", "up", "down", "stop", "scene_user", "scene_in", "scene_out"]
      }
   }
})"""";*/
