const char* _VICTORIONXS_ENCR_json = "{\"brand\":\"Victron Energy\",\"model\":\"Orion XS encrypted\",\"model_id\":\"VICTORIONXS_ENCR\",\"tag\":\"140003\",\"cond\":[\"mfd\",\"=\",48,\"index\",0,\"e10210\",\"&\",\"mfd\",\"index\",12,\"0f\"],\"properties\":{\"cipher\":{\"decoder\":[\"sfhd\",\"mfd\",20,28]},\"ctr\":{\"decoder\":[\"sfhd\",\"mfd\",14,4,true]},\"mic\":{\"decoder\":[\"sfhd\",\"mfd\",18,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Orion XS encrypted",
   "model_id":"VICTORIONXS_ENCR",
   "tag":"140003",
   "cond":["mfd", "=", 48, "index", 0, "e10210", "&", "mfd", "index", 12, "0f"],
   "properties":{
      "cipher":{
         "decoder":["sfhd", "mfd", 20, 28]
      },
      "ctr":{
         "decoder":["sfhd", "mfd", 14, 4, true]
      },
      "mic":{
         "decoder":["sfhd", "mfd", 18, 2]
      }
   }
})"""";*/

const char* _VICTORIONXS_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"}}}";
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
