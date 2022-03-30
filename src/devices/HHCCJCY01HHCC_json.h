const char* _HHCCJCY01HHCC_json = "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"condition\":[\"servicedata\",\"index\",2,\"209800\",\"|\",\"servicedata\",\"index\",2,\"20bc03\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",25,\"4\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true],\"post_proc\":[\"/\",10]},\"moi\":{\"condition\":[\"servicedata\",25,\"8\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,2,false]},\"lux\":{\"condition\":[\"servicedata\",25,\"7\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,6,true]},\"fer\":{\"condition\":[\"servicedata\",25,\"9\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",30,4,true]}}}";
/*R""""(
{
   "brand":"Xiaomi/VegTrug",
   "model":"MiFlora",
   "model_id":"HHCCJCY01HHCC",
   "condition":["servicedata", "index", 2, "209800", "|", "servicedata", "index", 2, "20bc03"],
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
      "lux":{
         "condition":["servicedata", 25, "7"],
         "decoder":["value_from_hex_data", "servicedata", 30, 6, true]
      },
      "fer":{
         "condition":["servicedata", 25, "9"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true]
      }
   }
})"""";*/

const char* _HHCCJCY01HHCC_json_props = "{\"properties\":{\"lux\":{\"unit\":\"lx\",\"name\":\"illuminance\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"fer\":{\"unit\":\"µS/cm\",\"name\":\"fertility\"},\"moi\":{\"unit\":\"%\",\"name\":\"moisture\"}}}";
/*R""""(
{
   "properties":{
      "lux":{
         "unit":"lx",
         "name":"illuminance"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "fer":{
         "unit":"µS/cm",
         "name":"fertility"
      },
      "moi":{
         "unit":"%",
         "name":"moisture"
      }
   }
})"""";*/