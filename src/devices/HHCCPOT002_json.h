const char* _HHCCPOT002_json = "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"tag\":\"09\",\"condition\":[\"servicedata\",\"index\",2,\"205d01\"],\"properties\":{\"moi\":{\"condition\":[\"servicedata\",25,\"8\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false]},\"fer\":{\"condition\":[\"servicedata\",25,\"9\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",10]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"RoPot",
   "model_id":"HHCCPOT002",
   "tag":"09",
   "condition":["servicedata", "index", 2, "205d01"],
   "properties":{
      "moi":{
         "condition":["servicedata", 25, "8"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false]
      },
      "fer":{
         "condition":["servicedata", 25, "9"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 10]
      }
   }
})"""";*/

const char* _HHCCPOT002_json_props = "{\"properties\":{\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"},\"fer\":{\"unit\":\"µS/cm\",\"name\":\"fertility\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
