const char* _H5106_json = "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"tag\":\"0f03\",\"cond\":[\"name\",\"index\",0,\"GVH5106\",\"&\",\"mfd\",\">=\",16,\"index\",0,\"0100\"],\"properties\":{\"tempc\":{\"cond\":[\"mfd\",8,\"bit\",3,0],\"decoder\":[\"vfhd\",\"mfd\",8,8,false,false],\"post_proc\":[\"/\",1000000,\">\",0,\"/\",10]},\"_tempc\":{\"cond\":[\"mfd\",8,\"bit\",3,1],\"decoder\":[\"vfhd\",\"mfd\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"/\",1000000,\">\",0,\"/\",10,\"*\",-1]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"%\",1000000,\"/\",1000,\">\",0,\"/\",10]},\".cal\":{\"decoder\":[\"vfhd\",\"mfd\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"/\",1000,\">\",0,\"*\",1000]},\"pm25\":{\"decoder\":[\"vfhd\",\"mfd\",8,8,false,false],\"post_proc\":[\"&\",2147483647,\"-\",\".cal\"]}}}";
/* R""""(
{
   "brand":"Govee",
   "model":"Smart Air Quality Monitor",
   "model_id":"H5106",
   "tag":"0f03",
   "cond":["name", "index", 0, "GVH5106", "&", "mfd", ">=", 16, "index", 0, "0100"],
   "properties":{
      "tempc":{
         "cond":["mfd", 8, "bit", 3, 0],
         "decoder":["vfhd", "mfd", 8, 8, false, false],
         "post_proc":["/", 1000000, ">", 0, "/", 10]
      },
      "_tempc":{
         "cond":["mfd", 8, "bit", 3, 1],
         "decoder":["vfhd", "mfd", 8, 8, false, false],
         "post_proc":["&", 2147483647, "/", 1000000, ">", 0, "/", 10, "*", -1]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 8, 8, false, false],
         "post_proc":["&", 2147483647, "%", 1000000, "/", 1000, ">", 0, "/", 10]
      },
      ".cal":{
         "decoder":["vfhd", "mfd", 8, 8, false, false],
         "post_proc":["&", 2147483647, "/", 1000, ">", 0, "*", 1000]
      },
      "pm25":{
         "decoder":["vfhd", "mfd", 8, 8, false, false],
         "post_proc":["&", 2147483647, "-", ".cal"]
      }
   }
})"""";*/

const char* _H5106_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"pm25\":{\"unit\":\"μg/m³\",\"name\":\"pm25\"}}}";
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
         "name":"pm25"
      }
   }
})"""";*/
