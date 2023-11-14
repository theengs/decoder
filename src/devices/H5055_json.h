const char* _H5055_json = "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"tag\":\"0301\",\"condition\":[\"manufacturerdata\",\">=\",41,\"index\",12,\"06\",\"|\",\"manufacturerdata\",\">=\",41,\"index\",12,\"20\",\"&\",\"manufacturerdata\",\"index\",26,\"06\",\"|\",\"manufacturerdata\",\">=\",41,\"index\",26,\"20\",\"&\",\"manufacturerdata\",\"index\",40,\"0\"],\"properties\":{\"tempc1\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"bit\",3,0,\"&\",\"manufacturerdata\",10,\"bit\",2,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"tempc2\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"bit\",3,0,\"&\",\"manufacturerdata\",10,\"bit\",2,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false]},\"tempc3\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"bit\",3,0,\"&\",\"manufacturerdata\",10,\"bit\",2,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"tempc4\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"bit\",3,0,\"&\",\"manufacturerdata\",10,\"bit\",2,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false]},\"tempc5\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"bit\",3,1,\"&\",\"manufacturerdata\",10,\"bit\",2,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"tempc6\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"bit\",3,1,\"&\",\"manufacturerdata\",10,\"bit\",2,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false]}}}";
/*R""""(
{
   "brand":"Govee",
   "model":"Bluetooth BBQ Thermometer",
   "model_id":"H5055",
   "tag":"0301",
   "condition":["manufacturerdata", ">=", 41, "index", 12, "06", "|", "manufacturerdata", ">=", 41, "index", 12, "20", "&", "manufacturerdata", "index", 26, "06", "|", "manufacturerdata", ">=", 41, "index", 26, "20", "&", "manufacturerdata", "index", 40, "0"],
   "properties":{
      "tempc1":{
        "condition":["manufacturerdata", 14, "!", "ffff", "&", "manufacturerdata", 10, "bit", 3, 0, "&", "manufacturerdata", 10, "bit", 2, 0],
        "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "tempc2":{
        "condition":["manufacturerdata", 28, "!", "ffff", "&", "manufacturerdata", 10, "bit", 3, 0, "&", "manufacturerdata", 10, "bit", 2, 0],
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false]
      },
      "tempc3":{
        "condition":["manufacturerdata", 14, "!", "ffff", "&", "manufacturerdata", 10, "bit", 3, 0, "&", "manufacturerdata", 10, "bit", 2, 1],
        "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "tempc4":{
        "condition":["manufacturerdata", 28, "!", "ffff", "&", "manufacturerdata", 10, "bit", 3, 0, "&", "manufacturerdata", 10, "bit", 2, 1],
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false]
      },
      "tempc5":{
        "condition":["manufacturerdata", 14, "!", "ffff", "&", "manufacturerdata", 10, "bit", 3, 1, "&", "manufacturerdata", 10, "bit", 2, 0],
        "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "tempc6":{
        "condition":["manufacturerdata", 28, "!", "ffff", "&", "manufacturerdata", 10, "bit", 3, 1, "&", "manufacturerdata", 10, "bit", 2, 0],
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false]
      },
      "batt":{
        "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false]
      }
   }
})"""";*/

const char* _H5055_json_props = "{\"properties\":{\"tempc1\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc3\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc4\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc5\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc6\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      
      "tempc1":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc2":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc3":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc4":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc5":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc6":{
         "unit":"°C",
         "name":"temperature"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
