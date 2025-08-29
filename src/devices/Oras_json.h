const char* _Oras_json = "{\"brand\":\"Oras\",\"model\":\"Smart faucet\",\"model_id\":\"ORAS\",\"tag\":\"0801\",\"cond\":[\"mfd\",\"=\",40,\"ind\",0,\"3101\"],\"properties\":{\"serial\":{\"decoder\":[\"ascii_from_hex_data\",\"mfd\",10,20]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",6,2,false,false],\"pprc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"Oras",
   "model":"Smart faucet",
   "model_id":"ORAS",
   "tag":"0801",
   "cond":["mfd", "=", 40, "ind", 0, "3101"],
   "properties":{
      "serial":{
         "decoder":["ascii_from_hex_data", "mfd", 10, 20]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 6, 2, false, false],
         "pprc":["&", 127]
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
