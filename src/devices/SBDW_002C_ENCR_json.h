const char* _SBDW_002C_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window encrypted\",\"model_id\":\"SBDW_002C_ENCR\",\"tag\":\"040602\",\"condition\":[\"servicedata\",\"index\",0,\"45\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBDW-002C\"],\"properties\":{\"cipher\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",2,26]},\"ctr\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",28,8]},\"mic\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",36,8]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Door/Window encrypted",
   "model_id":"SBDW_002C_ENCR",
   "tag":"040602",
   "condition":["servicedata", "index", 0, "45", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBDW-002C"],
   "properties":{
      "cipher":{
         "decoder":["string_from_hex_data", "servicedata", 2, 26]
      },
      "ctr":{
         "decoder":["string_from_hex_data", "servicedata", 28, 8]
      },
      "mic":{
         "decoder":["string_from_hex_data", "servicedata", 36, 8]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
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
