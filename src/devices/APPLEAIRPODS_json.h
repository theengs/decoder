const char* _APPLEAIRPODS_json = "{\"brand\":\"Apple/Beats\",\"model\":\"AirPods (Pro)/Solo|Studio Buds\",\"model_id\":\"APPLEAIRPODS\",\"tag\":\"1218\",\"condition\":[\"manufacturerdata\",\"=\",58,\"index\",0,\"4c00071901\"],\"properties\":{\"version\":{\"decoder\":[\"static_value\",\"thus far unknown - please report your model version\"]},\"_version\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",10,4],\"lookup\":[\"0220\",\"AirPods 1st gen.\",\"0e20\",\"AirPods Pro 1st gen.\",\"1420\",\"AirPods Pro 2nd gen.\",\"0320\",\"Powerbeats3\",\"0520\",\"BeatsX\",\"0620\",\"Beats Solo3\"]},\"color\":{\"decoder\":[\"static_value\",\"thus far unknown - please report your color\"]},\"_color\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",22,2],\"lookup\":[\"00\",\"white\",\"01\",\"black\",\"02\",\"red\",\"03\",\"blue\",\"04\",\"pink\",\"05\",\"gray\",\"06\",\"silver\",\"07\",\"gold\",\"08\",\"rose gold\",\"09\",\"space gray\",\"0a\",\"dark blue\",\"0b\",\"light blue\",\"0c\",\"yellow\"]},\"status\":{\"decoder\":[\"static_value\",\"thus far unknown - please report your status\"]},\"_status\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",15,1],\"lookup\":[\"5\",\"in case\",\"1\",\"out of case\",\"3\",\"in ears\",\"b\",\"in ears\"]},\"batt_r\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,1],\"post_proc\":[\"*\",10,\"max\",100]},\"batt_l\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",17,1],\"post_proc\":[\"*\",10,\"max\",100]},\"batt_case\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",19,1],\"post_proc\":[\"*\",10,\"max\",100]},\"charging_r\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,1,false,true]},\"charging_l\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,0,false,true]},\"charging_case\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,2,false,true]}}}";
/*R""""(
{
   "brand":"Apple/Beats",
   "model":"AirPods (Pro)/Solo|Studio Buds",
   "model_id":"APPLEAIRPODS",
   "tag":"1218",
   "condition":["manufacturerdata","=", 58, "index", 0, "4c00071901"],
   "properties":{
      "version":{
         "decoder":["static_value", "thus far unknown - please report your model version"]
      },
      "_version":{
         "decoder":["string_from_hex_data", "manufacturerdata", 10, 4],
         "lookup":["0220", "AirPods 1st gen.",
                   "0e20", "AirPods Pro 1st gen.",
                   "1420", "AirPods Pro 2nd gen.",
                   "0320", "Powerbeats3",
                   "0520", "BeatsX",
                   "0620", "Beats Solo3"]
      },
      "color":{
         "decoder":["static_value", "thus far unknown - please report your color"]
      },
      "_color":{
         "decoder":["string_from_hex_data", "manufacturerdata", 22, 2],
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
                   "0c", "yellow"]
      },
      "status":{
         "decoder":["static_value", "thus far unknown - please report your status"]
      },
      "_status":{
         "decoder":["string_from_hex_data", "manufacturerdata", 15, 1],
         "lookup":["5", "in case",
                   "1", "out of case",
                   "3", "in ears",
                   "b", "in ears"]
      },
      "batt_r":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "batt_l":{
         "decoder":["value_from_hex_data", "manufacturerdata", 17, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "batt_case":{
         "decoder":["value_from_hex_data", "manufacturerdata", 19, 1],
         "post_proc":["*", 10, "max", 100]
      },
      "charging_r":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 1, false, true]
      },
      "charging_l":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 0, false, true]
      },
      "charging_case":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 2, false, true]
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
