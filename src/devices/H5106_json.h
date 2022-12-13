const char* _H5106_json = "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"cidc\":false,\"condition\":[\"name\",\"index\",0,\"GVH5106\",\"&\",\"manufacturerdata\",\"=\",16,\"index\",0,\"0100\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,0],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,8,false,false],\"post_proc\":[\"/\",1000000,\">\",0,\"/\",10]},\"_tempc\":{\"condition\":[\"manufacturerdata\",8,\"bit\",3,1],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"/\",1000000,\">\",0,\"/\",10,\"*\",-1]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"%\",1000000,\"/\",10000,\">\",0]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"/\",1000,\">\",0,\"*\",1000]},\"pm25\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"-\",\".cal\"]}}}";
/* R""""(
{
   "brand":"Govee",
   "model":"Smart Air Quality Monitor",
   "model_id":"H5106",
   "cidc":false,
   "condition":["name", "index", 0, "GVH5106", "&", "manufacturerdata", "=", 16, "index", 0, "0100"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 8, "bit", 3, 0],
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 8, false, false],
         "post_proc":["/", 1000000, ">", 0, "/", 10]
      },
      "_tempc":{
         "condition":["manufacturerdata", 8, "bit", 3, 1],
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 8, false, false],
         "post_proc":["&", 2147483647, "/", 1000000, ">", 0, "/", 10, "*", -1]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 8, false, false],
         "post_proc":["&", 2147483647, "%", 1000000, "/", 10000, ">", 0]
      },
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 8, false, false],
         "post_proc":["&", 2147483647, "/", 1000, ">", 0, "*", 1000]
      },
      "pm25":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 8, false, false],
         "post_proc":["&", 2147483647, "-", ".cal"]
      }
   }
})"""";*/

const char* _H5106_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"pm25\":{\"unit\":\"μg/m³\",\"name\":\"PM2.5\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "pm25":{
         "unit":"μg/m³",
         "name":"PM2.5"
      }
   }
})"""";*/
