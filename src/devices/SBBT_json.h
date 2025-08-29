const char* _SBBT_json = "{\"brand\":\"SwitchBot\",\"model\":\"Blind Tilt\",\"model_id\":\"W270160X\",\"tag\":\"0d22\",\"cond\":[\"uuid\",\"index\",0,\"0d00\",\"|\",\"uuid\",\"index\",0,\"fd3d\",\"&\",\"svd\",\"=\",6,\"index\",0,\"78\",\"&\",\"mfd\",\">=\",24,\"index\",0,\"6909\"],\"properties\":{\"open\":{\"decoder\":[\"vfhd\",\"mfd\",20,2,false,false],\"post_proc\":[\"&\",127,\"-\",50,\"*\",2,\"±\",100,\"abs\"]},\"direction\":{\"decoder\":[\"vfhd\",\"mfd\",20,2,false,false],\"post_proc\":[\"&\",127,\"-\",50,\"*\",2,\"SBBT-dir\"]},\"motion\":{\"decoder\":[\"bit_static_value\",\"mfd\",20,3,false,true]},\"calibrated\":{\"decoder\":[\"bit_static_value\",\"mfd\",19,0,false,true]},\"lightlevel\":{\"decoder\":[\"vfhd\",\"mfd\",18,1,false,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",4,2,false,false],\"post_proc\":[\"&\",127]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",4]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Blind Tilt",
   "model_id":"W270160X",
   "tag":"0d22",
   "cond":["uuid", "index", 0, "0d00", "|", "uuid", "index", 0, "fd3d", "&", "svd", "=", 6, "index", 0, "78", "&", "mfd", ">=", 24, "index", 0, "6909"],
   "properties":{
      "open":{
         "decoder":["vfhd", "mfd", 20, 2, false, false],
         "post_proc":["&", 127, "-", 50, "*", 2, "±", 100, "abs"]
      },
      "direction":{
         "decoder":["vfhd", "mfd", 20, 2, false, false],
         "post_proc":["&", 127, "-", 50, "*", 2, "SBBT-dir"]
      },
      "motion":{
         "decoder":["bit_static_value", "mfd", 20, 3, false, true]
      },
      "calibrated":{
         "decoder":["bit_static_value", "mfd", 19, 0, false, true]
      },
      "lightlevel":{
         "decoder":["vfhd", "mfd", 18, 1, false, false]
      },
      "batt":{
         "decoder":["vfhd", "svd", 4, 2, false, false],
         "post_proc":["&", 127]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 4]
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
