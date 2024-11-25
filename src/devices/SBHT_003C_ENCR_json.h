const char* _SBHT_003C_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU H&T encrypted\",\"model_id\":\"SBHT-003C_ENCR\",\"tag\":\"010602\",\"condition\":[\"servicedata\",\"=\",36,\"index\",0,\"45\",\"|\",\"servicedata\",\"=\",40,\"index\",0,\"45\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBHT-\"],\"properties\":{\"cipher\":{\"condition\":[\"servicedata\",\"=\",36],\"decoder\":[\"string_from_hex_data\",\"servicedata\",2,18]},\"_cipher\":{\"condition\":[\"servicedata\",\"=\",40],\"decoder\":[\"string_from_hex_data\",\"servicedata\",2,22]},\"ctr\":{\"condition\":[\"servicedata\",\"=\",36],\"decoder\":[\"string_from_hex_data\",\"servicedata\",20,8]},\"_ctr\":{\"condition\":[\"servicedata\",\"=\",40],\"decoder\":[\"string_from_hex_data\",\"servicedata\",24,8]},\"mic\":{\"condition\":[\"servicedata\",\"=\",36],\"decoder\":[\"string_from_hex_data\",\"servicedata\",28,8]},\"_mic\":{\"condition\":[\"servicedata\",\"=\",40],\"decoder\":[\"string_from_hex_data\",\"servicedata\",32,8]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU H&T encrypted",
   "model_id":"SBHT-003C_ENCR",
   "tag":"010602",
   "condition":["servicedata", "=", 36, "index", 0, "45", "|", "servicedata", "=", 40, "index", 0, "45", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBHT-"],
   "properties":{
      "cipher":{
        "condition":["servicedata", "=", 36],
        "decoder":["string_from_hex_data", "servicedata", 2, 18]
      },
      "_cipher":{
        "condition":["servicedata", "=", 40],
        "decoder":["string_from_hex_data", "servicedata", 2, 22]
      },
      "ctr":{
        "condition":["servicedata", "=", 36],
        "decoder":["string_from_hex_data", "servicedata", 20, 8]
      },
      "_ctr":{
        "condition":["servicedata", "=", 40],
        "decoder":["string_from_hex_data", "servicedata", 24, 8]
      },
      "mic":{
        "condition":["servicedata", "=", 36],
        "decoder":["string_from_hex_data", "servicedata", 28, 8]
      },
      "_mic":{
        "condition":["servicedata", "=", 40],
        "decoder":["string_from_hex_data", "servicedata", 32, 8]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
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
