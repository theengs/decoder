const char* _SBDW_002C_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window encrypted\",\"model_id\":\"SBDW_002C_ENCR\",\"tag\":\"040602\",\"cond\":[\"svd\",\"ind\",0,\"45\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"SBDW-\"],\"properties\":{\"cipher\":{\"decoder\":[\"sfhd\",\"svd\",2,26]},\"ctr\":{\"decoder\":[\"sfhd\",\"svd\",28,8]},\"mic\":{\"decoder\":[\"sfhd\",\"svd\",36,8]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Door/Window encrypted",
   "model_id":"SBDW_002C_ENCR",
   "tag":"040602",
   "cond":["svd", "ind", 0, "45", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "SBDW-"],
   "properties":{
      "cipher":{
         "decoder":["sfhd", "svd", 2, 26]
      },
      "ctr":{
         "decoder":["sfhd", "svd", 28, 8]
      },
      "mic":{
         "decoder":["sfhd", "svd", 36, 8]
      },
      "mac":{
         "cond":["mfd", "=", 30],
         "decoder":["revmfhd", "mfd", 18]
      }
   }
})"""";*/

const char* _SBDW_002C_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "cipher":{
         "unit":"hex",
         "name":"ciphertext"
      },
      "ctr":{
         "unit":"hex",
         "name":"counter"
      },
      "mic":{
         "unit":"hex",
         "name":"message integrity check"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
