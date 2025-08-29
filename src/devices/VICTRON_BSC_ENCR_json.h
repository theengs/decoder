const char* _VICTBSC_ENCR_json = "{\"brand\":\"Victron Energy\",\"model\":\"Blue Smart Charger encrypted\",\"model_id\":\"VICTBSC_ENCR\",\"tag\":\"140003\",\"cond\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"e10210\",\"&\",\"manufacturerdata\",\"index\",12,\"08\"],\"properties\":{\"cipher\":{\"decoder\":[\"sfhd\",\"manufacturerdata\",20,26]},\"ctr\":{\"decoder\":[\"sfhd\",\"manufacturerdata\",14,4,true]},\"mic\":{\"decoder\":[\"sfhd\",\"manufacturerdata\",18,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Blue Smart Charger encrypted",
   "model_id":"VICTBSC_ENCR",
   "tag":"140003",
   "cond":["manufacturerdata", "=", 46, "index", 0, "e10210", "&", "manufacturerdata", "index", 12, "08"],
   "properties":{
      "cipher":{
         "decoder":["sfhd", "manufacturerdata", 20, 26]
      },
      "ctr":{
         "decoder":["sfhd", "manufacturerdata", 14, 4, true]
      },
      "mic":{
         "decoder":["sfhd", "manufacturerdata", 18, 2]
      }
   }
})"""";*/

const char* _VICTBSC_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"}}}";
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
