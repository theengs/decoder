const char* _APPLEAIRPODS_json = "{\"brand\":\"Apple/Beats\",\"model\":\"AirPods (Pro)/Solo|Studio Buds\",\"model_id\":\"APPLEAIRPODS\",\"tag\":\"1218\",\"cond\":[\"mfd\",\"=\",58,\"ind\",0,\"4c00071901\"],\"properties\":{\"version\":{\"decoder\":[\"sfhd\",\"mfd\",10,4],\"lookup\":[\"0220\",\"AirPods 1st gen.\",\"0f20\",\"AirPods 2nd gen.\",\"0e20\",\"AirPods Pro 1st gen.\",\"1420\",\"AirPods Pro 2 Lightning\",\"2420\",\"AirPods Pro 2 USB-C\",\"0a20\",\"AirPods Max Lightning\",\"0320\",\"Powerbeats³\",\"0520\",\"BeatsX\",\"0620\",\"Beats Solo³\"]},\"color\":{\"decoder\":[\"sfhd\",\"mfd\",22,2],\"lookup\":[\"00\",\"white\",\"01\",\"black\",\"02\",\"red\",\"03\",\"blue\",\"04\",\"pink\",\"05\",\"gray\",\"06\",\"silver\",\"07\",\"gold\",\"08\",\"rose gold\",\"09\",\"space gray\",\"0a\",\"dark blue\",\"0b\",\"light blue\",\"0c\",\"yellow\",\"11\",\"green\"]},\"status\":{\"cond\":[\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"sfhd\",\"mfd\",14,2],\"lookup\":[\"05\",\"both in case\",\"14\",\"both in case\",\"15\",\"both in case\",\"25\",\"both in case\",\"34\",\"both in case\",\"35\",\"both in case\",\"55\",\"both in case\",\"75\",\"both in case\",\"00\",\"L in case - R out of case\",\"11\",\"L in case - R out of case\",\"71\",\"L in case - R out of case\",\"02\",\"L in case - R in ear\",\"13\",\"L in case - R in ear\",\"24\",\"L in case - R in ear\",\"73\",\"L in case - R in ear\",\"20\",\"R in case - L out of case\",\"31\",\"R in case - L out of case\",\"51\",\"R in case - L out of case\",\"04\",\"R in case - L in ear\",\"22\",\"R in case - L in ear\",\"33\",\"R in case - L in ear\",\"53\",\"R in case - L in ear\",\"01\",\"both out of case\",\"21\",\"both out of case\",\"03\",\"R in ear - L out of case\",\"29\",\"R in ear - L out of case\",\"23\",\"L in ear - R out of case\",\"09\",\"L in ear - R out of case\",\"0b\",\"both in ears\",\"2b\",\"both in ears\"]},\"_status\":{\"cond\":[\"mfd\",10,\"0a20\"],\"decoder\":[\"sfhd\",\"mfd\",14,2],\"lookup\":[\"25\",\"in case\",\"34\",\"in case\",\"35\",\"in case\",\"75\",\"in case\",\"21\",\"out of case\",\"2b\",\"on ears\"]},\"batt_r\":{\"cond\":[\"mfd\",14,\"bit\",1,1],\"decoder\":[\"vfhd\",\"mfd\",16,1],\"post_proc\":[\"*\",10,\"max\",100]},\"_batt_r\":{\"cond\":[\"mfd\",14,\"bit\",1,0,\"&\",\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"vfhd\",\"mfd\",17,1],\"post_proc\":[\"*\",10,\"max\",100]},\"batt_l\":{\"cond\":[\"mfd\",14,\"bit\",1,1,\"&\",\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"vfhd\",\"mfd\",17,1],\"post_proc\":[\"*\",10,\"max\",100]},\"_batt_l\":{\"cond\":[\"mfd\",14,\"bit\",1,0,\"&\",\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"vfhd\",\"mfd\",16,1],\"post_proc\":[\"*\",10,\"max\",100]},\"batt_case\":{\"cond\":[\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"vfhd\",\"mfd\",19,1],\"post_proc\":[\"*\",10,\"max\",100]},\"charging_r\":{\"cond\":[\"mfd\",14,\"bit\",1,1],\"decoder\":[\"bit_static_value\",\"mfd\",18,1,false,true]},\"_charging_r\":{\"cond\":[\"mfd\",14,\"bit\",1,0,\"&\",\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"bit_static_value\",\"mfd\",18,0,false,true]},\"charging_l\":{\"cond\":[\"mfd\",14,\"bit\",1,1,\"&\",\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"bit_static_value\",\"mfd\",18,0,false,true]},\"_charging_l\":{\"cond\":[\"mfd\",14,\"bit\",1,0,\"&\",\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"bit_static_value\",\"mfd\",18,1,false,true]},\"charging_case\":{\"cond\":[\"mfd\",10,\"!\",\"0a20\"],\"decoder\":[\"bit_static_value\",\"mfd\",18,2,false,true]}}}";
/*R""""(
{
   "brand":"Apple/Beats",
   "model":"AirPods (Pro)/Solo|Studio Buds",
   "model_id":"APPLEAIRPODS",
   "tag":"1218",
   "cond":["mfd","=", 58, "ind", 0, "4c00071901"],
   "properties":{
      "version":{
         "decoder":["sfhd", "mfd", 10, 4],
         "lookup":["0220", "AirPods 1st gen.",
                   "0f20", "AirPods 2nd gen.",
                   "0e20", "AirPods Pro 1st gen.",
                   "1420", "AirPods Pro 2 Lightning",
                   "2420", "AirPods Pro 2 USB-C",
                   "0a20", "AirPods Max Lightning",
                   "0320", "Powerbeats³",
                   "0520", "BeatsX",
                   "0620", "Beats Solo³"]
      },
      "color":{
         "decoder":["sfhd", "mfd", 22, 2],
         "lookup":["00", "white",
                   "01", "black",
                   "02", "red",
                   "03", "blue",
                   "04", "pink",
                   "05", "gray",
                   "06", "silver",
                   "07", "gold",
                   "08", "rose gold",
                   "09", "space gray",
                   "0a", "dark blue",
                   "0b", "light blue",
                   "0c", "yellow",
                   "11", "green"]
      },
      "status":{
         "cond":["mfd", 10, "!", "0a20"],
         "decoder":["sfhd", "mfd", 14, 2],
         "lookup":["05", "both in case",
                   "14", "both in case",
                   "15", "both in case",
                   "25", "both in case",
                   "34", "both in case",
                   "35", "both in case",
                   "55", "both in case",
                   "75", "both in case",
                   "00", "L in case - R out of case",
                   "11", "L in case - R out of case",
                   "71", "L in case - R out of case",
                   "02", "L in case - R in ear",
                   "13", "L in case - R in ear",
                   "24", "L in case - R in ear",
                   "73", "L in case - R in ear",
                   "20", "R in case - L out of case",
                   "31", "R in case - L out of case",
                   "51", "R in case - L out of case",
                   "04", "R in case - L in ear",
                   "22", "R in case - L in ear",
                   "33", "R in case - L in ear",
                   "53", "R in case - L in ear",
                   "01", "both out of case",
                   "21", "both out of case",
                   "03", "R in ear - L out of case",
                   "29", "R in ear - L out of case",
                   "23", "L in ear - R out of case",
                   "09", "L in ear - R out of case",
                   "0b", "both in ears",
                   "2b", "both in ears"]
      },
       "_status":{
         "cond":["mfd", 10, "0a20"],
         "decoder":["sfhd", "mfd", 14, 2],
         "lookup":["25", "in case",
                   "34", "in case",
                   "35", "in case",
                   "75", "in case",
                   "21", "out of case",
                   "2b", "on ears"]
      },
      "batt_r":{
         "cond":["mfd", 14, "bit", 1, 1],
         "decoder":["vfhd", "mfd", 16, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "_batt_r":{
         "cond":["mfd", 14, "bit", 1, 0, "&", "mfd", 10, "!", "0a20"],
         "decoder":["vfhd", "mfd", 17, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "batt_l":{
         "cond":["mfd", 14, "bit", 1, 1, "&", "mfd", 10, "!", "0a20"],
         "decoder":["vfhd", "mfd", 17, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "_batt_l":{
         "cond":["mfd", 14, "bit", 1, 0, "&", "mfd", 10, "!", "0a20"],
         "decoder":["vfhd", "mfd", 16, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "batt_case":{
         "cond":["mfd", 10, "!", "0a20"],
         "decoder":["vfhd", "mfd", 19, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "charging_r":{
         "cond":["mfd", 14, "bit", 1, 1],
         "decoder":["bit_static_value", "mfd", 18, 1, false, true]
      },
      "_charging_r":{
         "cond":["mfd", 14, "bit", 1, 0, "&", "mfd", 10, "!", "0a20"],
         "decoder":["bit_static_value", "mfd", 18, 0, false, true]
      },
      "charging_l":{
         "cond":["mfd", 14, "bit", 1, 1, "&", "mfd", 10, "!", "0a20"],
         "decoder":["bit_static_value", "mfd", 18, 0, false, true]
      },
      "_charging_l":{
         "cond":["mfd", 14, "bit", 1, 0, "&", "mfd", 10, "!", "0a20"],
         "decoder":["bit_static_value", "mfd", 18, 1, false, true]
      },
      "charging_case":{
         "cond":["mfd", 10, "!", "0a20"],
         "decoder":["bit_static_value", "mfd", 18, 2, false, true]
      }
   }
})"""";*/

const char* _APPLEAIRPODS_json_props = "{\"properties\":{\"version\":{\"unit\":\"string\",\"name\":\"model version\"},\"color\":{\"unit\":\"string\",\"name\":\"color\"},\"status\":{\"unit\":\"string\",\"name\":\"status\"},\"batt_r\":{\"unit\":\"%\",\"name\":\"battery\"},\"batt_l\":{\"unit\":\"%\",\"name\":\"battery\"},\"batt_case\":{\"unit\":\"%\",\"name\":\"battery\"},\"charging_r\":{\"unit\":\"status\",\"name\":\"battery_charging\"},\"charging_l\":{\"unit\":\"status\",\"name\":\"battery_charging\"},\"charging_case\":{\"unit\":\"status\",\"name\":\"battery_charging\"}}}";
/*R""""(
{
   "properties":{
      "version":{
         "unit":"string",
         "name":"model version"
      },
      "color":{
         "unit":"string",
         "name":"color"
      },
      "status":{
         "unit":"string",
         "name":"status"
      },
      "batt_r":{
         "unit":"%",
         "name":"battery"
      },
      "batt_l":{
         "unit":"%",
         "name":"battery"
      },
      "batt_case":{
         "unit":"%",
         "name":"battery"
      },
      "charging_r":{
         "unit":"status",
         "name":"battery_charging"
      },
      "charging_l":{
         "unit":"status",
         "name":"battery_charging"
      },
      "charging_case":{
         "unit":"status",
         "name":"battery_charging"
      }
   }
})"""";*/
