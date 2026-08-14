const char* _VICTRON_ENCR_json = "{\"brand\":\"Victron Energy\",\"model\":\"Victron encrypted\",\"model_id\":\"VICTRON_ENCR\",\"tag\":\"0c0003\",\"condition\":[\"manufacturerdata\",\">=\",44,\"index\",0,\"e10210\"],\"properties\":{\"cipher\":{\"condition\":[\"manufacturerdata\",\"=\",44],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,24]},\"_cipher\":{\"condition\":[\"manufacturerdata\",\"=\",46],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,26]},\"__cipher\":{\"condition\":[\"manufacturerdata\",\"=\",48],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,28]},\"___cipher\":{\"condition\":[\"manufacturerdata\",\"=\",50],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,30]},\"ctr\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",14,4,true]},\"mic\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",18,2]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Victron encrypted",
   "model_id":"VICTRON_ENCR",
   "tag":"0c0003",
   "condition":["manufacturerdata", ">=", 44, "index", 0, "e10210"],
   "properties":{
      "cipher":{
         "condition":["manufacturerdata", "=", 44],
         "decoder":["string_from_hex_data", "manufacturerdata", 20, 24]
      },
      "_cipher":{
         "condition":["manufacturerdata", "=", 46],
         "decoder":["string_from_hex_data", "manufacturerdata", 20, 26]
      },
      "__cipher":{
         "condition":["manufacturerdata", "=", 48],
         "decoder":["string_from_hex_data", "manufacturerdata", 20, 28]
      },
      "___cipher":{
         "condition":["manufacturerdata", "=", 50],
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

const char* _VICTRON_ENCR_json_props = "{\"properties\":{\"cipher\":{\"unit\":\"hex\",\"name\":\"ciphertext\"},\"ctr\":{\"unit\":\"hex\",\"name\":\"counter\"},\"mic\":{\"unit\":\"hex\",\"name\":\"message integrity check\"}}}";
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
