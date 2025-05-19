const char* _ECOFLOW_ADV_json = "{\"brand\":\"EcoFlow\",\"model\":\"Power Station\",\"model_id\":\"ECOFLOW_ADV\",\"tag\":\"1409\",\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"b5b5\"],\"properties\":{\"version\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",6,6],\"lookup\":[\"00\",\"off\",\"523630\",\"RIVER 2\",\"523631\",\"RIVER 2 Max\",\"523632\",\"RIVER 2 Pro\",\"523635\",\"RIVER 3\",\"523333\",\"DELTA 2\"]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,2,false,false],\"post_proc\":[\"&\",127]}}}";
/*R""""(
{
   "brand":"EcoFlow",
   "model":"Power Station",
   "model_id":"ECOFLOW_ADV",
   "tag":"1409",
   "condition":["manufacturerdata", "=", 52, "index", 0, "b5b5"],
   "properties":{
      "version":{
        "decoder":["string_from_hex_data", "manufacturerdata", 6, 6],
        "lookup":["00", "off",
                  "523630", "RIVER 2",
                  "523631", "RIVER 2 Max",
                  "523632", "RIVER 2 Pro",
                  "523635", "RIVER 3",
                  "523333", "DELTA 2"]
      },
      "batt":{
        "decoder":["value_from_hex_data", "manufacturerdata", 38, 2, false, false],
        "post_proc":["&", 127]
      }
   }
})"""";*/

const char* _ECOFLOW_ADV_json_props = "{\"properties\":{\"version\":{\"unit\":\"string\",\"name\":\"model version\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties": {
      "version":{
        "unit":"string",
        "name":"model version"
      },
      "batt": {
        "unit": "%",
        "name": "battery"
      }
   }
})"""";*/
