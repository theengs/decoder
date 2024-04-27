const char* _OTOD_json = "{\"brand\":\"Otodata\",\"model\":\"Rotarex-compatible Monitor\",\"model_id\":\"RC1010\",\"tag\":\"ff\",\"condition\":[\"manufacturerdata\",\"=\",42,\"index\",0,\"b103\",\"|\",\"manufacturerdata\",\"=\",48,\"index\",0,\"b103\"],\"properties\":{\"level\":{\"condition\":[\"manufacturerdata\",\"=\",42],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,false],\"post_proc\":[\"/\",100]},\"status\":{\"condition\":[\"manufacturerdata\",\"=\",42],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,false]},\"serial\":{\"condition\":[\"manufacturerdata\",\"=\",48],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,8,true,false],\"post_proc\":[\"abs\"]},\"modeltype\":{\"condition\":[\"manufacturerdata\",\"=\",48],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",40,8,true,false],\"post_proc\":[\"abs\"]}}}";
/*R""""(
{
   "brand":"Otodata",
   "model":"Rotarex-compatible Monitor",
   "model_id":"RC1010",
   "tag":"ff",
   "condition":["manufacturerdata", "=", 42, "index", 0, "b103", "|", "manufacturerdata", "=", 48, "index", 0, "b103"],
   "properties":{
      "level":{
        "condition":["manufacturerdata", "=", 42],
        "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, false],
        "post_proc":["/", 100]
      },
      "status":{
        "condition":["manufacturerdata", "=", 42],
        "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, false]
      },
      "serial":{
        "condition":["manufacturerdata", "=", 48],
        "decoder":["value_from_hex_data", "manufacturerdata", 18, 8, true, false],
        "post_proc":["abs"]
      },
      "modeltype":{
        "condition":["manufacturerdata", "=", 48],
        "decoder":["value_from_hex_data", "manufacturerdata", 40, 8, true, false],
        "post_proc":["abs"]
      }
   }
})"""";*/

const char* _OTOD_json_props = "{\"properties\":{\"level\":{\"unit\":\"%\",\"name\":\"level\"},\"status\":{\"unit\":\"int\",\"name\":\"status\"},\"serial\":{\"unit\":\"int\",\"name\":\"serial\"},\"modeltype\":{\"unit\":\"int\",\"name\":\"model type\"}}}";
/*R""""(
{
   "properties":{
      "level":{
         "unit":"%",
         "name":"level"
      },
      "status":{
         "unit":"int",
         "name":"status"
      },
      "serial":{
         "unit":"int",
         "name":"serial"
      },
      "modeltype":{
         "unit":"int",
         "name":"model type"
      }
   }
})"""";*/
