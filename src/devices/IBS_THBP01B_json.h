const char* _IBS_THBP01B_json = "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B/ITH-12S\",\"tag\":\"0103\",\"cond\":[\"name\",\"ind\",0,\"sps\",\"|\",\"name\",\"ind\",0,\"tps\",\"&\",\"mfd\",\"=\",18],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",0,4,true],\"pprc\":[\"/\",100]},\"extprobe\":{\"cond\":[\"mfd\",9,\"0\",\"&\",\"name\",\"contain\",\"sps\"],\"decoder\":[\"static_value\",false]},\"_extprobe\":{\"cond\":[\"mfd\",9,\"!\",\"0\",\"&\",\"name\",\"contain\",\"sps\"],\"decoder\":[\"static_value\",true]},\"hum\":{\"cond\":[\"mfd\",4,\"!\",\"ffff\",\"&\",\"mfd\",4,\"!\",\"0000\"],\"decoder\":[\"vfhd\",\"mfd\",4,4,true,false],\"pprc\":[\"/\",100]},\"batt\":{\"cond\":[\"mfd\",14,\"!\",\"f\",\"&\",\"mfd\",14,\"!\",\"e\"],\"decoder\":[\"vfhd\",\"mfd\",14,2,false,false]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"T(H) Sensor",
   "model_id":"IBS-TH1/TH2/P01B/ITH-12S",
   "tag":"0103",
   "cond":["name", "ind", 0, "sps", "|", "name", "ind", 0, "tps", "&", "mfd", "=", 18],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 0, 4, true],
         "pprc":["/", 100]
      },
      "extprobe":{
         "cond":["mfd", 9, "0", "&", "name", "contain", "sps"],
         "decoder":["static_value", false]
      },
      "_extprobe":{
         "cond":["mfd", 9, "!", "0", "&", "name", "contain", "sps"],
         "decoder":["static_value", true]
      },
      "hum":{
         "cond":["mfd", 4, "!", "ffff", "&", "mfd", 4, "!", "0000"],
         "decoder":["vfhd", "mfd", 4, 4, true, false],
         "pprc":["/", 100]
      },
      "batt":{
         "cond":["mfd", 14, "!", "f", "&", "mfd", 14, "!", "e"],
         "decoder":["vfhd", "mfd", 14, 2, false, false]
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
