const char* _H5055_json = "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"condition\":[\"manufacturerdata\",\">=\",41,\"index\",12,\"06\",\"&\",\"manufacturerdata\",\"index\",26,\"06\",\"&\",\"manufacturerdata\",\"index\",40,\"0\"],\"properties\":{\"tempc1\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"0\",\"|\",\"manufacturerdata\",10,\"1\",\"|\",\"manufacturerdata\",10,\"2\",\"|\",\"manufacturerdata\",10,\"3\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"tempc2\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"0\",\"|\",\"manufacturerdata\",10,\"1\",\"|\",\"manufacturerdata\",10,\"2\",\"|\",\"manufacturerdata\",10,\"3\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false]},\"tempc3\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"4\",\"|\",\"manufacturerdata\",10,\"5\",\"|\",\"manufacturerdata\",10,\"6\",\"|\",\"manufacturerdata\",10,\"7\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"tempc4\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"4\",\"|\",\"manufacturerdata\",10,\"5\",\"|\",\"manufacturerdata\",10,\"6\",\"|\",\"manufacturerdata\",10,\"7\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false]},\"tempc5\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"8\",\"|\",\"manufacturerdata\",10,\"9\",\"|\",\"manufacturerdata\",10,\"a\",\"|\",\"manufacturerdata\",10,\"b\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"tempc6\":{\"condition\":[\"manufacturerdata\",28,\"!\",\"ffff\",\"&\",\"manufacturerdata\",10,\"8\",\"|\",\"manufacturerdata\",10,\"9\",\"|\",\"manufacturerdata\",10,\"a\",\"|\",\"manufacturerdata\",10,\"b\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false]}}}";
/*R""""(
{
   "brand":"Govee",
   "model":"Bluetooth BBQ Thermometer",
   "model_id":"H5055",
   "condition":["manufacturerdata", ">=", 41, "index", 12, "06", "&", "manufacturerdata", "index", 26, "06", "&", "manufacturerdata", "index", 40, "0"],
   "properties":{
      "tempc1":{
        "condition":["manufacturerdata", 14, "!", "ffff", "&", "manufacturerdata", 10, "0", "|", "manufacturerdata", 10, "1", "|", "manufacturerdata", 10, "2", "|", "manufacturerdata", 10, "3"],
        "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "tempc2":{
        "condition":["manufacturerdata", 28, "!", "ffff", "&", "manufacturerdata", 10, "0", "|", "manufacturerdata", 10, "1", "|", "manufacturerdata", 10, "2", "|", "manufacturerdata", 10, "3"],
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false]
      },
      "tempc3":{
        "condition":["manufacturerdata", 14, "!", "ffff", "&", "manufacturerdata", 10, "4", "|", "manufacturerdata", 10, "5", "|", "manufacturerdata", 10, "6", "|", "manufacturerdata", 10, "7"],
        "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "tempc4":{
        "condition":["manufacturerdata", 28, "!", "ffff", "&", "manufacturerdata", 10, "4", "|", "manufacturerdata", 10, "5", "|", "manufacturerdata", 10, "6", "|", "manufacturerdata", 10, "7"],
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false]
      },
      "tempc5":{
        "condition":["manufacturerdata", 14, "!", "ffff", "&", "manufacturerdata", 10, "8", "|", "manufacturerdata", 10, "9", "|", "manufacturerdata", 10, "a", "|", "manufacturerdata", 10, "b"],
        "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "tempc6":{
        "condition":["manufacturerdata", 28, "!", "ffff", "&", "manufacturerdata", 10, "8", "|", "manufacturerdata", 10, "9", "|", "manufacturerdata", 10, "a", "|", "manufacturerdata", 10, "b"],
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false]
      },
      "batt":{
        "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false]
      }
   }
})"""";*/

const char* _H5055_json_props = "{\"properties\":{\"tempc1\":{\"unit\":\"°C\",\"name\":\"tempc1\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"tempc2\"},\"tempc3\":{\"unit\":\"°C\",\"name\":\"tempc3\"},\"tempc4\":{\"unit\":\"°C\",\"name\":\"tempc4\"},\"tempc5\":{\"unit\":\"°C\",\"name\":\"tempc5\"},\"tempc6\":{\"unit\":\"°C\",\"name\":\"tempc6\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";
/*R""""(
{
   "properties":{
      "tempc1":{
         "unit":"°C",
         "name":"tempc1"
      },
      "tempc2":{
         "unit":"°C",
         "name":"tempc2"
      },
      "tempc3":{
         "unit":"°C",
         "name":"tempc3"
      },
      "tempc4":{
         "unit":"°C",
         "name":"tempc4"
      },
      "tempc5":{
         "unit":"°C",
         "name":"tempc5"
      },
      "tempc6":{
         "unit":"°C",
         "name":"tempc6"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";*/
