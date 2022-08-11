#ifndef PROGMEM
#  define PROGMEM
#endif

const char _HHCCPOT002_json[] PROGMEM = "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"condition\":[\"servicedata\",\"index\",2,\"205d01\"],\"properties\":{\"moi\":{\"condition\":[\"servicedata\",25,\"8\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false]},\"fer\":{\"condition\":[\"servicedata\",25,\"9\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"RoPot",
   "model_id":"HHCCPOT002",
   "condition":["servicedata", "index", 2, "205d01"],
   "properties":{
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

const char _HHCCPOT002_json_props[] PROGMEM = "{\"properties\":{\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"},\"fer\":{\"unit\":\"µS/cm\",\"name\":\"fertility\"}}}";
/*R""""(
{
   "properties":{
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
