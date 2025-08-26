const char* _IBS_P02B_json = "{\"brand\":\"Inkbird\",\"model\":\"Pool Thermometer\",\"model_id\":\"IBS-P02B\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"IBS-P02B\",\"&\",\"manufacturerdata\",\"=\",36],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,2]},\"lowbatt\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",26,0,false,true]},\"displayunit\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",23,0,\"°C\",\"°F\"]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",0]}}}";
/*R""""(
{
  "brand":"Inkbird",
  "model":"Pool Thermometer",
  "model_id":"IBS-P02B",
  "tag": "0103",
  "condition":["name", "index", 0, "IBS-P02B", "&", "manufacturerdata", "=", 36],
  "properties":{
    "tempc":{
      "decoder":["value_from_hex_data","manufacturerdata", 12, 2, true, false],
      "post_proc":["/",10]
    },
   "batt":{
      "decoder":["value_from_hex_data", "manufacturerdata", 20, 2]
   },
   "lowbatt":{
      "decoder":["bit_static_value", "manufacturerdata", 26, 0, false, true]
   },
   "displayunit":{
      "decoder":["bit_static_value", "manufacturerdata", 23, 0, "°C", "°F"]
   },
   "mac":{
      "decoder":["mac_from_hex_data", "manufacturerdata", 0]
   }
  }
})"""";*/

const char* _IBS_P02B_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"lowbatt\":{\"unit\":\"status\",\"name\":\"battery\"},\"displayunit\":{\"unit\":\"string\",\"name\":\"displayUnit\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "lowbatt":{
         "unit":"status",
         "name":"battery"
      },
      "displayunit":{
         "unit":"string",
         "name":"displayUnit"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
