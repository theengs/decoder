const char* _SBHT_003C_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU H&T encrypted\",\"model_id\":\"SBHT-003C_ENCR\",\"tag\":\"010602\",\"cond\":[\"svd\",\"=\",36,\"ind\",0,\"45\",\"|\",\"svd\",\"=\",40,\"ind\",0,\"45\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"SBHT-\"],\"properties\":{\"cipher\":{\"cond\":[\"svd\",\"=\",36],\"decoder\":[\"sfhd\",\"svd\",2,18]},\"_cipher\":{\"cond\":[\"svd\",\"=\",40],\"decoder\":[\"sfhd\",\"svd\",2,22]},\"ctr\":{\"cond\":[\"svd\",\"=\",36],\"decoder\":[\"sfhd\",\"svd\",20,8]},\"_ctr\":{\"cond\":[\"svd\",\"=\",40],\"decoder\":[\"sfhd\",\"svd\",24,8]},\"mic\":{\"cond\":[\"svd\",\"=\",36],\"decoder\":[\"sfhd\",\"svd\",28,8]},\"_mic\":{\"cond\":[\"svd\",\"=\",40],\"decoder\":[\"sfhd\",\"svd\",32,8]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU H&T encrypted",
   "model_id":"SBHT-003C_ENCR",
   "tag":"010602",
   "cond":["svd", "=", 36, "ind", 0, "45", "|", "svd", "=", 40, "ind", 0, "45", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "SBHT-"],
   "properties":{
      "cipher":{
        "cond":["svd", "=", 36],
        "decoder":["sfhd", "svd", 2, 18]
      },
      "_cipher":{
        "cond":["svd", "=", 40],
        "decoder":["sfhd", "svd", 2, 22]
      },
      "ctr":{
        "cond":["svd", "=", 36],
        "decoder":["sfhd", "svd", 20, 8]
      },
      "_ctr":{
        "cond":["svd", "=", 40],
        "decoder":["sfhd", "svd", 24, 8]
      },
      "mic":{
        "cond":["svd", "=", 36],
        "decoder":["sfhd", "svd", 28, 8]
      },
      "_mic":{
        "cond":["svd", "=", 40],
        "decoder":["sfhd", "svd", 32, 8]
      },
      "mac":{
         "cond":["mfd", "=", 30],
         "decoder":["revmfhd", "mfd", 18]
      }
   }
})"""";*/

const char* _SBHT_003C_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
