const char* _SBHT_003C_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU H&T encrypted\",\"model_id\":\"SBHT-003C_ENCR\",\"tag\":\"010602\",\"cond\":[\"servicedata\",\"=\",36,\"index\",0,\"45\",\"|\",\"servicedata\",\"=\",40,\"index\",0,\"45\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBHT-\"],\"properties\":{\"cipher\":{\"cond\":[\"servicedata\",\"=\",36],\"decoder\":[\"sfhd\",\"servicedata\",2,18]},\"_cipher\":{\"cond\":[\"servicedata\",\"=\",40],\"decoder\":[\"sfhd\",\"servicedata\",2,22]},\"ctr\":{\"cond\":[\"servicedata\",\"=\",36],\"decoder\":[\"sfhd\",\"servicedata\",20,8]},\"_ctr\":{\"cond\":[\"servicedata\",\"=\",40],\"decoder\":[\"sfhd\",\"servicedata\",24,8]},\"mic\":{\"cond\":[\"servicedata\",\"=\",36],\"decoder\":[\"sfhd\",\"servicedata\",28,8]},\"_mic\":{\"cond\":[\"servicedata\",\"=\",40],\"decoder\":[\"sfhd\",\"servicedata\",32,8]},\"mac\":{\"cond\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU H&T encrypted",
   "model_id":"SBHT-003C_ENCR",
   "tag":"010602",
   "cond":["servicedata", "=", 36, "index", 0, "45", "|", "servicedata", "=", 40, "index", 0, "45", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBHT-"],
   "properties":{
      "cipher":{
        "cond":["servicedata", "=", 36],
        "decoder":["sfhd", "servicedata", 2, 18]
      },
      "_cipher":{
        "cond":["servicedata", "=", 40],
        "decoder":["sfhd", "servicedata", 2, 22]
      },
      "ctr":{
        "cond":["servicedata", "=", 36],
        "decoder":["sfhd", "servicedata", 20, 8]
      },
      "_ctr":{
        "cond":["servicedata", "=", 40],
        "decoder":["sfhd", "servicedata", 24, 8]
      },
      "mic":{
        "cond":["servicedata", "=", 36],
        "decoder":["sfhd", "servicedata", 28, 8]
      },
      "_mic":{
        "cond":["servicedata", "=", 40],
        "decoder":["sfhd", "servicedata", 32, 8]
      },
      "mac":{
         "cond":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
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
