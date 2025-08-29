const char* _OTOD_json = "{\"brand\":\"Otodata\",\"model\":\"Rotarex-compatible Monitor\",\"model_id\":\"RC1010\",\"tag\":\"ff\",\"cond\":[\"mfd\",\"=\",42,\"ind\",0,\"b103\",\"|\",\"mfd\",\"=\",48,\"ind\",0,\"b103\"],\"properties\":{\"level\":{\"cond\":[\"mfd\",\"=\",42],\"decoder\":[\"vfhd\",\"mfd\",22,4,true,false],\"pprc\":[\"/\",100]},\"status\":{\"cond\":[\"mfd\",\"=\",42],\"decoder\":[\"vfhd\",\"mfd\",26,4,true,false]},\"serial\":{\"cond\":[\"mfd\",\"=\",48],\"decoder\":[\"vfhd\",\"mfd\",18,8,true,false],\"pprc\":[\"abs\"]},\"modeltype\":{\"cond\":[\"mfd\",\"=\",48],\"decoder\":[\"vfhd\",\"mfd\",40,8,true,false],\"pprc\":[\"abs\"]}}}";
/*R""""(
{
   "brand":"Otodata",
   "model":"Rotarex-compatible Monitor",
   "model_id":"RC1010",
   "tag":"ff",
   "cond":["mfd", "=", 42, "ind", 0, "b103", "|", "mfd", "=", 48, "ind", 0, "b103"],
   "properties":{
      "level":{
        "cond":["mfd", "=", 42],
        "decoder":["vfhd", "mfd", 22, 4, true, false],
        "pprc":["/", 100]
      },
      "status":{
        "cond":["mfd", "=", 42],
        "decoder":["vfhd", "mfd", 26, 4, true, false]
      },
      "serial":{
        "cond":["mfd", "=", 48],
        "decoder":["vfhd", "mfd", 18, 8, true, false],
        "pprc":["abs"]
      },
      "modeltype":{
        "cond":["mfd", "=", 48],
        "decoder":["vfhd", "mfd", 40, 8, true, false],
        "pprc":["abs"]
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
