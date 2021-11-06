const char* _LYWSD03MMC_PVVX_json = "{\"brand\":\"Xiaomi\",\"model\":\"LYWSD03MMC\",\"model_id\":\"LYWSD03MMC_PVVX\",\"condition\":[\"servicedata\",\"index\",6,\"38c1a4\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,2,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true],\"post_proc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"LYWSD03MMC",
   "model_id":"LYWSD03MMC_PVVX",
   "condition":["servicedata", "index",6 , "38c1a4"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 4, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 24, 2, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _LYWSD03MMC_PVVX_props = 
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