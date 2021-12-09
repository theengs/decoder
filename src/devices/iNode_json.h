const char* _iNode_json = "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"condition\":[\"manufacturerdata\",\"=\",26,\"index\",0,\"9082\"],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,true,false],\"post_proc\":[\"&\",16383]},\"power\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,4,true,false],\"post_proc\":[\"/\",\".cal\",\"*\",60000]},\"energy\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,4,true,false],\"post_proc\":[\"/\",\".cal\"]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,2,true,false],\"post_proc\":[\">\",4,\"-\",2,\"*\",10]}}}";
/*R""""(
{
   "brand":"iNode",
   "model":"Energy Meter",
   "model_id":"INEM",
   "condition":["manufacturerdata", "=", 26, "index", 0, "9082"],
   "properties":{
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, true, false],
         "post_proc":["&", 16383]
      },
      "power":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, false],
         "post_proc":["/", ".cal", "*", 60000]
      },
      "energy":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 4, true, false],
         "post_proc":["/", ".cal"]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 2, true, false],
         "post_proc":[">", 4, "-", 2, "*", 10]
      }
   }
})"""";*/

const char* _iNode_json_props = "{\"properties\":{\"power\":{\"unit\":\"W\",\"name\":\"watts\"},\"energy\":{\"unit\":\"kWh\",\"name\":\"consumption\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "power":{
         "unit":"W",
         "name":"watts"
      },
      "energy":{
         "unit":"kWh",
         "name":"consumption"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/