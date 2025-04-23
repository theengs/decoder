const char* _VICTSBP_ENCR_json = "{\"brand\":\"Victron Energy\",\"model\":\"Smart BatteryProtect encrypted\",\"model_id\":\"VICTSBP_ENCR\",\"tag\":\"140003\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"e10210\",\"&\",\"manufacturerdata\",\"index\",12,\"09\"],\"properties\":{\"cipher\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,30]},\"ctr\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",14,4,true]},\"mic\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",18,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Smart BatteryProtect encrypted",
   "model_id":"VICTSBP_ENCR",
   "tag":"140003",
   "condition":["manufacturerdata", "=", 50, "index", 0, "e10210", "&", "manufacturerdata", "index", 12, "09"],
   "properties":{
      "cipher":{
         "decoder":["string_from_hex_data", "manufacturerdata", 20, 30]
      },
      "ctr":{
         "decoder":["string_from_hex_data", "manufacturerdata", 14, 4, true]
      },
      "mic":{
         "decoder":["string_from_hex_data", "manufacturerdata", 18, 2]
      }
   }
})"""";*/

const char* _VICTSBP_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"}}}";
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
