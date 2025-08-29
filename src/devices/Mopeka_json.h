const char* _Mopeka_json = "{\"brand\":\"Mopeka/Lippert\",\"model\":\"Pro Check (Universal)/BottleCheck Sensor\",\"model_id\":\"M1017\",\"tag\":\"ff01\",\"cond\":[\"mfd\",\"=\",24,\"ind\",0,\"590003\",\"|\",\"mfd\",\"=\",24,\"ind\",0,\"590006\",\"|\",\"mfd\",\"=\",24,\"ind\",0,\"59000c\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",8,2,false,true],\"post_proc\":[\"&\",127,\"-\",40,\"min\",-40]},\".cal\":{\"decoder\":[\"vfhd\",\"mfd\",8,2,false,true],\"post_proc\":[\"&\",127]},\"_.cal\":{\"decoder\":[\"vfhd\",\"mfd\",8,2,false,true],\"post_proc\":[\"&\",127,\"*\",\".cal\",\"*\",-0.00000535]},\"__.cal\":{\"decoder\":[\"vfhd\",\"mfd\",8,2,false,true],\"post_proc\":[\"&\",127,\"*\",-0.002822,\"+\",0.573045,\"+\",\".cal\"]},\"lvl_cm\":{\"decoder\":[\"vfhd\",\"mfd\",10,4,true,false],\"post_proc\":[\"&\",16383,\"*\",\".cal\",\"/\",10]},\"sync\":{\"decoder\":[\"bit_static_value\",\"mfd\",8,3,false,true]},\"volt\":{\"decoder\":[\"vfhd\",\"mfd\",6,2,false,false],\"post_proc\":[\"&\",127,\"/\",32]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",6,2,false,false],\"post_proc\":[\"&\",127,\"/\",32,\"-\",2.2,\"/\",0.65,\"*\",100,\"max\",100,\"min\",0]},\"quality\":{\"decoder\":[\"vfhd\",\"mfd\",12,2,false,false],\"post_proc\":[\">\",6,\"max\",3,\"min\",0]},\"accx\":{\"decoder\":[\"vfhd\",\"mfd\",20,2,false,true]},\"accy\":{\"decoder\":[\"vfhd\",\"mfd\",22,2,false,true]}}}";
/* R""""(
{
   "brand":"Mopeka/Lippert",
   "model":"Pro Check (Universal)/BottleCheck Sensor",
   "model_id":"M1017",
   "tag":"ff01",
   "cond":["mfd", "=", 24, "ind", 0, "590003", "|", "mfd", "=", 24, "ind", 0, "590006", "|", "mfd", "=", 24, "ind", 0, "59000c"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 8, 2, false, true],
         "post_proc":["&", 127, "-", 40, "min", -40]
      },
      ".cal":{
         "decoder":["vfhd", "mfd", 8, 2, false, true],
         "post_proc":["&", 127]
      },
      "_.cal":{
         "decoder":["vfhd", "mfd", 8, 2, false, true],
         "post_proc":["&", 127, "*", ".cal", "*", -0.00000535]
      },
      "__.cal":{
         "decoder":["vfhd", "mfd", 8, 2, false, true],
         "post_proc":["&", 127, "*", -0.002822, "+", 0.573045, "+", ".cal"]
      },
      "lvl_cm":{
         "decoder":["vfhd", "mfd", 10, 4, true, false],
         "post_proc":["&", 16383, "*", ".cal", "/", 10]
      },
      "sync":{
         "decoder":["bit_static_value", "mfd", 8, 3, false, true]
      },
      "volt":{
         "decoder":["vfhd", "mfd", 6, 2, false, false],
         "post_proc":["&", 127, "/", 32]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 6, 2, false, false],
         "post_proc":["&", 127, "/", 32, "-", 2.2, "/", 0.65, "*", 100, "max", 100, "min", 0]
      },
      "quality":{
         "decoder":["vfhd", "mfd", 12, 2, false, false],
         "post_proc":[">", 6, "max", 3, "min", 0]
      },
      "accx":{
         "decoder":["vfhd", "mfd", 20, 2, false, true]
      },
      "accy":{
         "decoder":["vfhd", "mfd", 22, 2, false, true]
      }
   }
})"""";*/

const char* _Mopeka_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"lvl_cm\":{\"unit\":\"cm\",\"name\":\"distance\"},\"sync\":{\"unit\":\"status\",\"name\":\"sync pressed\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"quality\":{\"unit\":\"status\",\"name\":\"reading quality\"},\"accx\":{\"unit\":\"m/s²\",\"name\":\"acceleration x\"},\"accy\":{\"unit\":\"m/s²\",\"name\":\"acceleration y\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "lvl_cm":{
         "unit":"cm",
         "name":"distance"
      },
      "sync":{
         "unit":"status",
         "name":"sync pressed"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "quality":{
         "unit":"status",
         "name":"reading quality"
      },
      "accx":{
         "unit":"m/s²",
         "name":"acceleration x"
      },
      "accy":{
         "unit":"m/s²",
         "name":"acceleration y"
      }
   }
})"""";*/
