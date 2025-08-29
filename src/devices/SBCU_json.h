const char* _SBCU_json = "{\"brand\":\"SwitchBot\",\"model\":\"Curtain (2/3)\",\"model_id\":\"W070160X\",\"tag\":\"0d22\",\"cond\":[\"svd\",\"=\",10,\"ind\",0,\"63\",\"|\",\"svd\",\"=\",12,\"ind\",0,\"63\",\"|\",\"svd\",\"=\",12,\"ind\",0,\"7b\",\"&\",[\"uuid\",\"ind\",0,\"0d00\",\"|\",\"uuid\",\"ind\",0,\"fd3d\"]],\"properties\":{\"moving\":{\"decoder\":[\"bit_static_value\",\"svd\",6,3,false,true]},\"position\":{\"decoder\":[\"vfhd\",\"svd\",6,2,false,false],\"post_proc\":[\"&\",127]},\"calibrated\":{\"decoder\":[\"bit_static_value\",\"svd\",2,2,false,true]},\"lightlevel\":{\"decoder\":[\"vfhd\",\"svd\",8,1,false,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",4,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"SwitchBot",
   "model":"Curtain (2/3)",
   "model_id":"W070160X",
   "tag":"0d22",
   "cond":["svd", "=", 10, "ind", 0, "63", "|", "svd", "=", 12, "ind", 0, "63", "|", "svd", "=", 12, "ind", 0, "7b", "&", ["uuid", "ind", 0, "0d00", "|", "uuid", "ind", 0, "fd3d"]],
   "properties":{
      "moving":{
         "decoder":["bit_static_value", "svd", 6, 3, false, true]
      },
      "position":{
         "decoder":["vfhd", "svd", 6, 2, false, false],
         "post_proc":["&", 127]
      },
      "calibrated":{
         "decoder":["bit_static_value", "svd", 2, 2, false, true]
      },
      "lightlevel":{
         "decoder":["vfhd", "svd", 8, 1, false, false]
      },
      "batt":{
         "decoder":["vfhd", "svd", 4, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _SBCU_json_props = "{\"properties\":{\"moving\":{\"unit\":\"status\",\"name\":\"moving\"},\"position\":{\"unit\":\"%\",\"name\":\"position\"},\"calibrated\":{\"unit\":\"status\",\"name\":\"calibrated\"},\"lightlevel\":{\"unit\":\"int\",\"name\":\"light level\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "moving":{
         "unit":"status",
         "name":"moving"
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
