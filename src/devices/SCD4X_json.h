const char* _SCD4X_json = "{\"brand\":\"Sensirion\",\"model\":\"MyCO₂/CO₂ Gadget\",\"model_id\":\"SCD4X\",\"tag\":\"0f\",\"condition\":[\"manufacturerdata\",\">=\",24,\"index\",0,\"d5060008\",\"|\",\"manufacturerdata\",\">=\",24,\"index\",0,\"d506000a\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,4,true,true],\"post_proc\":[\"*\",175,\"/\",65535,\"-\",45]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,true,false],\"post_proc\":[\"*\",100,\"/\",65535]},\"co2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false]}}}";

/* R""""(
{
   "brand":"Sensirion",
   "model":"MyCO₂/CO₂ Gadget",
   "model_id":"SCD4X",
   "tag":"0f",
   "condition":["manufacturerdata", ">=", 24, "index", 0, "d5060008", "|", "manufacturerdata", ">=", 24, "index", 0, "d506000a"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 4, true, true],
         "post_proc":["*", 175, "/", 65535, "-", 45]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, true, false],
         "post_proc":["*", 100, "/", 65535]
      },
      "co2":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true, false]
      }
   }
})"""";*/

const char* _SCD4X_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"co2\":{\"unit\":\"ppm\",\"name\":\"carbon dioxide\"}}}";

/* R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "co2":{
         "unit":"ppm",
         "name":"carbon dioxide"
      }
   }
})"""";*/
