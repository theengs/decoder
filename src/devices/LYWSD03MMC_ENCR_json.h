const char* _LYWSD03MMC_ENCR_json_PVVX = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX_ENCR\",\"tag\":\"010001\",\"condition\":[\"servicedata\",\"=\",22,\"&\",\"uuid\",\"index\",0,\"181a\"],\"properties\":{\"cipher\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",2,12]},\"ctr\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",0,2]},\"mic\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",14,8]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_PVVX_ENCR",
   "tag":"010001",
   "condition":["servicedata", "=", 22, "&", "uuid", "index", 0, "181a"],
   "properties":{
      "cipher":{
         "decoder":["string_from_hex_data", "servicedata", 2, 12]
      },
      "ctr":{
         "decoder":["string_from_hex_data", "servicedata", 0, 2]
      },
      "mic":{
         "decoder":["string_from_hex_data", "servicedata", 14, 8]
      }
   }
})"""";*/

const char* _LYWSD03MMC_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"}}}";
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
      }
   }
})"""";*/
