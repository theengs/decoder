const char* _Mopeka_json = "{\"brand\":\"Mopeka\",\"model\":\"Pro Check Sensor\",\"model_id\":\"M1017\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",24,\"index\",0,\"590003\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false,true],\"post_proc\":[\"&\",127,\"-\",40,\"min\",-40]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false,true],\"post_proc\":[\"&\",127]},\"_.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false,true],\"post_proc\":[\"&\",127,\"*\",\".cal\",\"*\",-0.00000535]},\"__.cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false,true],\"post_proc\":[\"&\",127,\"*\",-0.002822,\"+\",0.573045,\"+\",\".cal\"]},\"lvl_cm\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false],\"post_proc\":[\"&\",16383,\"*\",\".cal\",\"/\",10]},\"sync\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",8,3,false,true]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false],\"post_proc\":[\"&\",127,\"/\",32]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,2,false,false],\"post_proc\":[\"&\",127,\"/\",32,\"-\",2.2,\"/\",0.65,\"*\",100,\"max\",100,\"min\",0]},\"quality\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false],\"post_proc\":[\">\",6,\"max\",3,\"min\",0]}}}";
/* R""""(
{
   "brand":"Mopeka",
   "model":"Pro Check Sensor",
   "model_id":"M1017",
   "cidc":false,
   "condition":["manufacturerdata", "=", 24, "index", 0, "590003"],
   "properties":{
      // "tempraw":{
      //    "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false, true],
      //    "post_proc":["&", 127]
      // },
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false, true],
         "post_proc":["&", 127, "-", 40, "min", -40]
      },
      // "levl":{
      //    "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false],
      //    "post_proc":["&", 16383]
      // },
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false, true],
         "post_proc":["&", 127]
      },
      "_.cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false, true],
         "post_proc":["&", 127, "*", ".cal", "*", -0.00000535]
      },
      "__.cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false, true],
         "post_proc":["&", 127, "*", -0.002822, "+", 0.573045, "+", ".cal"]
      },
      "lvl_cm":{
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false],
         "post_proc":["&", 16383, "*", ".cal", "/", 10]
      },
      "sync":{
         "decoder":["bit_static_value", "manufacturerdata", 8, 3, false, true]
      },
      "volt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false],
         "post_proc":["&", 127, "/", 32]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 2, false, false],
         "post_proc":["&", 127, "/", 32, "-", 2.2, "/", 0.65, "*", 100, "max", 100, "min", 0]
      },
      "quality":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 2, false, false],
         "post_proc":[">", 6, "max", 3, "min", 0]
      }
   }
})"""";*/

const char* _Mopeka_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"lvl_cm\":{\"unit\":\"cm\",\"name\":\"level in cm\"},\"sync\":{\"unit\":\"status\",\"name\":\"sync pressed\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"quality\":{\"unit\":\"status\",\"name\":\"reading quality\"}}}";
/*R""""(
{
   "properties":{
      // "tempraw":{
      //    "unit":"°C",
      //    "name":"temperature"
      // },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      // "levl":{
      //    "unit":"int",
      //    "name":"raw level"
      // },
      "lvl_cm":{
         "unit":"cm",
         "name":"level in cm"
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
      }
   }
})"""";*/
