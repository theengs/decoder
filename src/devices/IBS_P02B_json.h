const char* _IBS_P02B_json = "{\"brand\":\"Inkbird\",\"model\":\"IBS-P02B\",\"model_id\":\"IBS-P02B\",\"type\":\"THERM\",\"cidc\":false,\"condition\":[\"name\",\"contain\",\"IBS-P02B\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",13,4,true],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",21,2]}}}";
/*R""""(
{
  "brand":"Inkbird",
  "model":"IBS-P02B",
  "model_id":"IBS-P02B",
  "type":"THERM",
  "cidc":false,
  "condition":["name","contain","IBS-P02B"],
  "properties":{
    "tempc":{
      "decoder":["value_from_hex_data","manufacturerdata", 13, 4, true],
      "post_proc":["/",10]
    },
   "batt":{
      "decoder":["value_from_hex_data", "manufacturerdata", 21, 2]
   }
  }
})"""";*/

const char* _IBS_P02B_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
