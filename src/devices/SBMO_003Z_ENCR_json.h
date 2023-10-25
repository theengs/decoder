const char* _SBMO_003Z_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Motion encrypted\",\"model_id\":\"SBMO_003Z_ENCR\",\"tag\":\"040602\",\"condition\":[\"servicedata\",\"index\",0,\"45\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBMO-003Z\"],\"properties\":{\"cipher\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",2,20]},\"ctr\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",22,8]},\"mic\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",30,8]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Motion encrypted",
   "model_id":"SBMO_003Z_ENCR",
   "tag":"040602",
   "condition":["servicedata", "index", 0, "45", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBMO-003Z"],
   "properties":{
      "cipher":{
         "decoder":["string_from_hex_data", "servicedata", 2, 20]
      },
      "ctr":{
         "decoder":["string_from_hex_data", "servicedata", 22, 8]
      },
      "mic":{
         "decoder":["string_from_hex_data", "servicedata", 30, 8]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
      }
   }
})"""";*/

const char* _SBMO_003Z_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
