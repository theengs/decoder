const char* _IBS_P02B_json = "{\"brand\":\"Inkbird\",\"model\":\"Pool Thermometer\",\"model_id\":\"IBS-P02B\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"IBS-P02B\",\"&\",\"manufacturerdata\",\"=\",36],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",13,4,true],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,2]},\"lowBat\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",26,0,\"false\",\"true\"]}}}";
/*R""""(
{
  "brand":"Inkbird",
  "model":"Pool Thermometer",
  "model_id":"IBS-P02B",
  "tag": "0103",
  "condition":["name", "index", 0, "IBS-P02B", "&", "manufacturerdata", "=", 36],
  "properties":{
    "tempc":{
      "decoder":["value_from_hex_data","manufacturerdata", 13, 4, true],
      "post_proc":["/",10]
    },
   "batt":{
      "decoder":["value_from_hex_data", "manufacturerdata", 20, 2]
   },
   "lowBat":{
      "decoder":["bit_static_value", "manufacturerdata", 26, 0, "false", "true"]
   }
  }
})"""";*/

const char* _IBS_P02B_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"lowBat\":{\"unit\":\"string\",\"name\":\"lowBat\"}}}";
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
      },
      "lowBat":{
         "unit":"string",
         "name":"lowBat"
      }
   }
})"""";*/
