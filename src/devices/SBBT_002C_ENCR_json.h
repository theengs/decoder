const char* _SBBT_002C_ENCR_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1 encrypted\",\"model_id\":\"SBBT_002C_ENCR\",\"tag\":\"110602\",\"cond\":[\"servicedata\",\"index\",0,\"41\",\"|\",\"servicedata\",\"index\",0,\"45\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBBT-\"],\"properties\":{\"cipher\":{\"decoder\":[\"sfhd\",\"servicedata\",2,12]},\"ctr\":{\"decoder\":[\"sfhd\",\"servicedata\",14,8]},\"mic\":{\"decoder\":[\"sfhd\",\"servicedata\",22,8]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Button1 encrypted",
   "model_id":"SBBT_002C_ENCR",
   "tag":"110602",
   "cond":["servicedata", "index", 0, "41", "|", "servicedata", "index", 0, "45", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBBT-"],
   "properties":{
      "cipher":{
         "decoder":["sfhd", "servicedata", 2, 12]
      },
      "ctr":{
         "decoder":["sfhd", "servicedata", 14, 8]
      },
      "mic":{
         "decoder":["sfhd", "servicedata", 22, 8]
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
