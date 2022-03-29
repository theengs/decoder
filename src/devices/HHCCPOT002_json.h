const char* _HHCCPOT002_json = "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"condition\":[\"servicedata\",\"index\",4,\"5d01\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",25,\"4\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true],\"post_proc\":[\"/\",10]},\"moi\":{\"condition\":[\"servicedata\",25,\"8\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false]},\"fer\":{\"condition\":[\"servicedata\",25,\"9\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"RoPot",
   "model_id":"HHCCPOT002",
   "condition":["servicedata", "index", 4, "5d01"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 25, "4"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true],
         "post_proc":["/", 10]
      },
      "moi":{
         "condition":["servicedata", 25, "8"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false]
      },
      "fer":{
         "condition":["servicedata", 25, "9"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true]
      }
   }
})"""";*/

const char* _HHCCPOT002_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"fer\":{\"unit\":\"µS/cm\",\"name\":\"fertility\"},\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "moi":{
         "unit":"%",
         "name":"moisture"
      },
      "fer":{
         "unit":"µS/cm",
         "name":"fertility"
      }
   }
})"""";*/
