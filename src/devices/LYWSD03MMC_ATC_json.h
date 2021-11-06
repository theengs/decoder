const char* _LYWSD03MMC_ATC_json = "{\"brand\":\"Xiaomi\",\"model\":\"LYWSD03MMC\",\"model_id\":\"LYWSD03MMC_ATC\",\"condition\":[\"servicedata\",\"contain\",\"a4c138\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,false],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"LYWSD03MMC",
   "model_id":"LYWSD03MMC_ATC",
   "condition":["servicedata", "contain", "a4c138"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 18, 2, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _LYWSD03MMC_ATC_props = 
R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      }
   }
})"""";