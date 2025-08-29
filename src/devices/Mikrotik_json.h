const char* _Mikrotik_json = "{\"brand\":\"MikroTik\",\"model\":\"TG-BT5-IN/-OUT\",\"model_id\":\"TG-BT5\",\"tag\":\"0708\",\"cond\":[\"mfd\",\"=\",40,\"ind\",0,\"4f090100\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",24,4,true,true],\"post_proc\":[\"/\",256]},\"accx\":{\"decoder\":[\"vfhd\",\"mfd\",12,4,true,true],\"post_proc\":[\"/\",256]},\"accy\":{\"decoder\":[\"vfhd\",\"mfd\",16,4,true,true],\"post_proc\":[\"/\",256]},\"accz\":{\"decoder\":[\"vfhd\",\"mfd\",20,4,true,true],\"post_proc\":[\"/\",256]},\"flag_reed\":{\"decoder\":[\"bit_static_value\",\"mfd\",37,0,false,true]},\"flag_tilt\":{\"decoder\":[\"bit_static_value\",\"mfd\",37,1,false,true]},\"flag_fall\":{\"decoder\":[\"bit_static_value\",\"mfd\",37,2,false,true]},\"flag_impact_x\":{\"decoder\":[\"bit_static_value\",\"mfd\",37,3,false,true]},\"flag_impact_y\":{\"decoder\":[\"bit_static_value\",\"mfd\",36,0,false,true]},\"flag_impact_z\":{\"decoder\":[\"bit_static_value\",\"mfd\",36,1,false,true]},\"uptime\":{\"decoder\":[\"vfhd\",\"mfd\",28,8,true,false]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",38,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"MikroTik",
   "model":"TG-BT5-IN/-OUT",
   "model_id":"TG-BT5",
   "tag":"0708",
   "cond":["mfd", "=", 40, "ind", 0, "4f090100"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 24, 4, true, true],
         "post_proc":["/", 256]
      },
      "accx":{
         "decoder":["vfhd", "mfd", 12, 4, true, true],
         "post_proc":["/", 256]
      },
      "accy":{
         "decoder":["vfhd", "mfd", 16, 4, true, true],
         "post_proc":["/", 256]
      },
      "accz":{
         "decoder":["vfhd", "mfd", 20, 4, true, true],
         "post_proc":["/", 256]
      },
      "flag_reed":{
         "decoder":["bit_static_value", "mfd", 37, 0, false, true]
      },
      "flag_tilt":{
         "decoder":["bit_static_value", "mfd", 37, 1, false, true]
      },
      "flag_fall":{
         "decoder":["bit_static_value", "mfd", 37, 2, false, true]
      },
      "flag_impact_x":{
         "decoder":["bit_static_value", "mfd", 37, 3, false, true]
      },
      "flag_impact_y":{
         "decoder":["bit_static_value", "mfd", 36, 0, false, true]
      },
      "flag_impact_z":{
         "decoder":["bit_static_value", "mfd", 36, 1, false, true]
      },
      "uptime":{
         "decoder":["vfhd", "mfd", 28, 8, true, false]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 38, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _Mikrotik_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"accx\":{\"unit\":\"m/s²\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"m/s²\",\"name\":\"acceleration y\"},\"accz\":{\"unit\":\"m/s²\",\"name\":\"acceleration z\"},\"flag_reed\":{\"unit\":\"status\",\"name\":\"flag reed switch\"},\"flag_tilt\":{\"unit\":\"status\",\"name\":\"flag tilting\"},\"flag_fall\":{\"unit\":\"status\",\"name\":\"flag free fall\"},\"flag_impact_x\":{\"unit\":\"status\",\"name\":\"flag impact x-axis\"},\"flag_impact_y\":{\"unit\":\"status\",\"name\":\"flag impact y-axis\"},\"flag_impact_z\":{\"unit\":\"status\",\"name\":\"flag impact z-axis\"},\"uptime\":{\"unit\":\"s\",\"name\":\"duration\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "accx":{
         "unit":"m/s²",
         "name":"acceleration x"
      },
      "accy":{
         "unit":"m/s²",
         "name":"acceleration y"
      },
      "accz":{
         "unit":"m/s²",
         "name":"acceleration z"
      },
      "flag_reed":{
         "unit":"status",
         "name":"flag reed switch"
      },
      "flag_tilt":{
         "unit":"status",
         "name":"flag tilting"
      },
      "flag_fall":{
         "unit":"status",
         "name":"flag free fall"
      },
      "flag_impact_x":{
         "unit":"status",
         "name":"flag impact x-axis"
      },
      "flag_impact_y":{
         "unit":"status",
         "name":"flag impact y-axis"
      },
      "flag_impact_z":{
         "unit":"status",
         "name":"flag impact z-axis"
      },
      "uptime":{
         "unit":"s",
         "name":"duration"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
