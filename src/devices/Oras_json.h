const char* _Oras_json = "{\"brand\":\"Oras\",\"model\":\"Smart faucet\",\"model_id\":\"ORAS\",\"tag\":\"0801\",\"condition\":[\"manufacturerdata\",\"=\",40,\"index\",0,\"3101\"],\"properties\":{\"serial\":{\"decoder\":[\"ascii_from_hex_data\",\"manufacturerdata\",10,20]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"Oras",
   "model":"Smart faucet",
   "model_id":"ORAS",
   "tag":"0801",
   "condition":["manufacturerdata", "=", 40, "index", 0, "3101"],
   "properties":{
      "serial":{
         "decoder":["ascii_from_hex_data", "manufacturerdata", 10, 20]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _Oras_json_props = "{\"properties\":{\"serial\":{\"unit\":\"string\",\"name\":\"serial number\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "serial":{
         "unit":"string",
         "name":"serial number"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
