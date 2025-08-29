const char* _SBBT_002C_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1 encrypted\",\"model_id\":\"SBBT_002C_ENCR\",\"tag\":\"110602\",\"cond\":[\"svd\",\"ind\",0,\"41\",\"|\",\"svd\",\"ind\",0,\"45\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"SBBT-\"],\"properties\":{\"cipher\":{\"decoder\":[\"sfhd\",\"svd\",2,12]},\"ctr\":{\"decoder\":[\"sfhd\",\"svd\",14,8]},\"mic\":{\"decoder\":[\"sfhd\",\"svd\",22,8]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Button1 encrypted",
   "model_id":"SBBT_002C_ENCR",
   "tag":"110602",
   "cond":["svd", "ind", 0, "41", "|", "svd", "ind", 0, "45", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "SBBT-"],
   "properties":{
      "cipher":{
         "decoder":["sfhd", "svd", 2, 12]
      },
      "ctr":{
         "decoder":["sfhd", "svd", 14, 8]
      },
      "mic":{
         "decoder":["sfhd", "svd", 22, 8]
      },
      "mac":{
         "cond":["mfd", "=", 30],
         "decoder":["revmfhd", "mfd", 18]
      }
   }
})"""";*/

const char* _SBBT_002C_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
