const char* _IBS_TH1_json = "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH1\",\"cidc\":false,\"condition\":[\"name\",\"index\",0,\"sps\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",0,4,true],\"post_proc\":[\"/\",100]},\"extprobe\":{\"condition\":[\"manufacturerdata\",9,\"!\",\"0\"],\"decoder\":[\"static_value\",true]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"TH Sensor",
   "model_id":"IBS-TH1",
   "cidc":false,
   "condition":["name", "index", 0, "sps"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 0, 4, true],
         "post_proc":["/", 100]
      },
      "extprobe":{
         "condition":["manufacturerdata", 9, "!", "0"],
         "decoder":["static_value", true]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";*/

const char* _IBS_TH1_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"extprobe\":{\"unit\":\"status\",\"name\":\"external probe connected\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "extprobe":{
         "unit":"status",
         "name":"external probe connected"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
