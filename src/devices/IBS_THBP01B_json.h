const char* _IBS_THBP01B_json = "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B\",\"tag\":\"0103\",\"condition\":[\"name\",\"index\",0,\"sps\",\"|\",\"name\",\"index\",0,\"tps\",\"&\",\"manufacturerdata\",\"=\",18],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",0,4,true],\"post_proc\":[\"/\",100]},\"extprobe\":{\"condition\":[\"manufacturerdata\",9,\"!\",\"0\"],\"decoder\":[\"static_value\",true]},\"hum\":{\"condition\":[\"manufacturerdata\",4,\"!\",\"ffff\",\"&\",\"manufacturerdata\",4,\"!\",\"0000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"T(H) Sensor",
   "model_id":"IBS-TH1/TH2/P01B",
   "tag":"0103",
   "condition":["name", "index", 0, "sps", "|", "name", "index", 0, "tps", "&", "manufacturerdata", "=", 18],
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
         "condition":["manufacturerdata", 4, "!", "ffff", "&", "manufacturerdata", 4, "!", "0000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";*/

const char* _IBS_THBP01B_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"extprobe\":{\"unit\":\"status\",\"name\":\"external probe connected\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
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
