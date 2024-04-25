const char* _TILT_json = "{\"brand\":\"Tilt\",\"model\":\"Brewing Hydro- Thermometer\",\"model_id\":\"TILT\",\"tag\":\"0201\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"4c000215a495bb\",\"&\",\"manufacturerdata\",\"index\",16,\"c5b14b44b5121370f02d74de\"],\"properties\":{\"color\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",14,2],\"lookup\":[\"10\",\"red\",\"20\",\"green\",\"30\",\"black\",\"40\",\"purple\",\"50\",\"orange\",\"60\",\"blue\",\"70\",\"yellow\",\"80\",\"pink\"]},\"tempf\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,4,false,true]},\"gravity\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",44,4,false,false],\"post_proc\":[\"/\",1000]},\"txpower\":{\"condition\":[\"manufacturerdata\",48,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,false,true]}}}";

/*R""""(
{
   "brand":"Tilt",
   "model":"Brewing Hydro- Thermometer",
   "model_id":"TILT",
   "tag":"0201",
   "condition":["manufacturerdata", "=", 50, "index", 0, "4c000215a495bb", "&", "manufacturerdata", "index", 16, "c5b14b44b5121370f02d74de"],
   "properties":{
      "color":{
         "decoder":["string_from_hex_data", "manufacturerdata", 14, 2],
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
         "decoder":["value_from_hex_data", "manufacturerdata", 40, 4, false, true]
      },
      "gravity":{
         "decoder":["value_from_hex_data", "manufacturerdata", 44, 4, false, false],
         "post_proc":["/", 1000]
      },
      "txpower":{
         "condition":["manufacturerdata", 48, "bit", 3, 1],
         "decoder":["value_from_hex_data","manufacturerdata", 48, 2, false, true]
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
