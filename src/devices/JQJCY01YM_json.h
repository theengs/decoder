const char* _JQJCY01YM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"condition\":[\"servicedata\",\"index\",2,\"20df02\"],\"properties\":{\"for\":{\"condition\":[\"servicedata\",23,\"0\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",23,\"6\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"condition\":[\"servicedata\",23,\"4\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"condition\":[\"servicedata\",23,\"a\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",28,2,false,false]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Formaldehyde detector",
   "model_id":"JQJCY01YM",
   "condition":["servicedata", "index", 2, "20df02"],
   "properties":{
      "for":{
         "condition":["servicedata", 23, "0"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["servicedata", 23, "6"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc":{
         "condition":["servicedata", 23, "4"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "condition":["servicedata", 23, "a"],
         "decoder":["value_from_hex_data", "servicedata", 28, 2, false, false]
      }
   }
})"""";*/

const char* _JQJCY01YM_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"for\":{\"unit\":\"mg/m³\",\"name\":\"formaldehyde\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "for":{
         "unit":"mg/m³",
         "name":"formaldehyde"
      }
   }
})"""";*/