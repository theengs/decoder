const char* _TILT_json = "{\"brand\":\"Tilt\",\"model\":\"Brewing Hydro- Thermometer\",\"model_id\":\"TILT\",\"tag\":\"0201\",\"cond\":[\"mfd\",\"=\",50,\"ind\",0,\"4c000215a495bb\",\"&\",\"mfd\",\"ind\",16,\"c5b14b44b5121370f02d74de\"],\"properties\":{\"color\":{\"decoder\":[\"sfhd\",\"mfd\",14,2],\"lookup\":[\"10\",\"red\",\"20\",\"green\",\"30\",\"black\",\"40\",\"purple\",\"50\",\"orange\",\"60\",\"blue\",\"70\",\"yellow\",\"80\",\"pink\"]},\"tempf\":{\"decoder\":[\"vfhd\",\"mfd\",40,4,false,true]},\"gravity\":{\"decoder\":[\"vfhd\",\"mfd\",44,4,false,false],\"pprc\":[\"/\",1000]},\"txpower\":{\"cond\":[\"mfd\",48,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",48,2,false,true]}}}";

/*R""""(
{
   "brand":"Tilt",
   "model":"Brewing Hydro- Thermometer",
   "model_id":"TILT",
   "tag":"0201",
   "cond":["mfd", "=", 50, "ind", 0, "4c000215a495bb", "&", "mfd", "ind", 16, "c5b14b44b5121370f02d74de"],
   "properties":{
      "color":{
         "decoder":["sfhd", "mfd", 14, 2],
         "lookup":["10", "red", 
                   "20", "green", 
                   "30", "black", 
                   "40", "purple", 
                   "50", "orange",
                   "60", "blue", 
                   "70", "yellow", 
                   "80", "pink"]
      },
      "tempf":{
         "decoder":["vfhd", "mfd", 40, 4, false, true]
      },
      "gravity":{
         "decoder":["vfhd", "mfd", 44, 4, false, false],
         "pprc":["/", 1000]
      },
      "txpower":{
         "cond":["mfd", 48, "bit", 3, 1],
         "decoder":["vfhd","mfd", 48, 2, false, true]
      }
   }
})"""";*/

const char* _TILT_json_props = "{\"properties\":{\"color\":{\"unit\":\"string\",\"name\":\"color\"},\"tempf\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"gravity\":{\"unit\":\"SG\",\"name\":\"specific_gravity\"},\"txpower\":{\"unit\":\"dBm\",\"name\":\"signal_strength\"}}}";
/*R""""(
{
   "properties":{
      "color":{
         "unit":"string",
         "name":"color"
      },
      "tempf":{
         "unit":"°C",
         "name":"temperature"
      },
      "gravity":{
         "unit":"SG",
         "name":"specific_gravity"
      },
      "txpower":{
         "unit":"dBm",
         "name":"signal_strength"
      }
   }
})"""";*/
