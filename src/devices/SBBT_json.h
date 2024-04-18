const char* _SBBT_json = "{\"brand\":\"SwitchBot\",\"model\":\"Blind Tilt\",\"model_id\":\"W270160X\",\"tag\":\"0d02\",\"condition\":[\"uuid\",\"index\",0,\"0d00\",\"|\",\"uuid\",\"index\",0,\"fd3d\",\"&\",\"servicedata\",\"=\",6,\"index\",0,\"78\",\"&\",\"manufacturerdata\",\">=\",24,\"index\",0,\"6909\"],\"properties\":{\"open\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,2,false,false],\"post_proc\":[\"&\",127,\"-\",50,\"*\",2,\"±\",100,\"abs\"]},\"direction\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,2,false,false],\"post_proc\":[\"&\",127,\"-\",50,\"*\",2,\"SBBT-dir\"]},\"motion\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",20,3,false,true]},\"calibrated\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",19,0,false,true]},\"lightlevel\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,1,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Blind Tilt",
   "model_id":"W270160X",
   "tag":"0d02",
   "condition":["uuid", "index", 0, "0d00", "|", "uuid", "index", 0, "fd3d", "&", "servicedata", "=", 6, "index", 0, "78", "&", "manufacturerdata", ">=", 24, "index", 0, "6909"],
   "properties":{
      "open":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 2, false, false],
         "post_proc":["&", 127, "-", 50, "*", 2, "±", 100, "abs"]
      },
      "direction":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 2, false, false],
         "post_proc":["&", 127, "-", 50, "*", 2, "SBBT-dir"]
      },
      "motion":{
         "decoder":["bit_static_value", "manufacturerdata", 20, 3, false, true]
      },
      "calibrated":{
         "decoder":["bit_static_value", "manufacturerdata", 19, 0, false, true]
      },
      "lightlevel":{
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 1, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 4]
      }
   }
})"""";*/

const char* _SBBT_json_props = "{\"properties\":{\"open\":{\"unit\":\"%\",\"name\":\"open\"},\"direction\":{\"unit\":\"string\",\"name\":\"direction\"},\"motion\":{\"unit\":\"status\",\"name\":\"motion\"},\"calibrated\":{\"unit\":\"status\",\"name\":\"calibrated\"},\"lightlevel\":{\"unit\":\"int\",\"name\":\"light level\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "open":{
         "unit":"%",
         "name":"open"
      },
      "direction":{
         "unit":"string",
         "name":"direction"
      },
      "motion":{
         "unit":"status",
         "name":"motion"
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
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
