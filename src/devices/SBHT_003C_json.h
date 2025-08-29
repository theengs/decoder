const char* _SBHT_003C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU H&T\",\"model_id\":\"SBHT-003C\",\"tag\":\"0106\",\"cond\":[\"svd\",\"=\",20,\"index\",0,\"44\",\"|\",\"svd\",\"=\",24,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBHT-\"],\"properties\":{\"packet\":{\"cond\":[\"svd\",2,\"00\"],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"batt\":{\"cond\":[\"svd\",6,\"01\"],\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]},\"hum\":{\"cond\":[\"svd\",10,\"2e\"],\"decoder\":[\"vfhd\",\"svd\",12,2,false,false]},\"button\":{\"cond\":[\"svd\",14,\"3a\"],\"decoder\":[\"sfhd\",\"svd\",16,2],\"lookup\":[\"01\",1,\"fe\",11]},\"_button\":{\"cond\":[\"svd\",14,\"!\",\"3a\"],\"decoder\":[\"static_value\",0]},\"tempc\":{\"cond\":[\"svd\",14,\"45\"],\"decoder\":[\"vfhd\",\"svd\",16,4,true,true],\"post_proc\":[\"/\",10]},\"_tempc\":{\"cond\":[\"svd\",18,\"45\"],\"decoder\":[\"vfhd\",\"svd\",20,4,true,true],\"post_proc\":[\"/\",10]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU H&T",
   "model_id":"SBHT-003C",
   "tag":"0106",
   "cond":["svd", "=", 20, "index", 0, "44", "|", "svd", "=", 24, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBHT-"],
   "properties":{
      "packet":{
         "cond":["svd", 2, "00"],
         "decoder":["vfhd", "svd", 4, 2, false, false]
      },
      "batt":{
         "cond":["svd", 6, "01"],
         "decoder":["vfhd", "svd", 8, 2, false, false]
      },
      "hum":{
         "cond":["svd", 10, "2e"],
         "decoder":["vfhd", "svd", 12, 2, false, false]
      },
      "button":{
         "cond":["svd", 14, "3a"],
         "decoder":["sfhd", "svd", 16, 2],
         "lookup":["01", 1, 
                   "fe", 11]
      },
      "_button":{
         "cond":["svd", 14, "!", "3a"],
         "decoder":["static_value", 0]
      },
      "tempc":{
         "cond":["svd", 14, "45"],
         "decoder":["vfhd", "svd", 16, 4, true, true],
         "post_proc":["/", 10]
      },
      "_tempc":{
         "cond":["svd", 18, "45"],
         "decoder":["vfhd", "svd", 20, 4, true, true],
         "post_proc":["/", 10]
      },
      "mac":{
         "cond":["mfd", "=", 30],
         "decoder":["revmfhd", "mfd", 18]
      }
   }
})"""";*/

const char* _SBHT_003C_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"button\":{\"unit\":\"int\",\"name\":\"button press type\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "packet":{
         "unit":"int",
         "name":"packet id"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "button":{
         "unit":"int",
         "name":"button press type"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
