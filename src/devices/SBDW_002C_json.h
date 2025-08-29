const char* _SBDW_002C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window\",\"model_id\":\"SBDW-002C\",\"tag\":\"0406\",\"cond\":[\"svd\",\"=\",28,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBDW-\"],\"properties\":{\"packet\":{\"cond\":[\"svd\",2,\"00\"],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"batt\":{\"cond\":[\"svd\",6,\"01\"],\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]},\"lux\":{\"cond\":[\"svd\",10,\"05\"],\"decoder\":[\"vfhd\",\"svd\",12,6,true,false],\"post_proc\":[\"/\",100]},\"open\":{\"cond\":[\"svd\",18,\"2d\"],\"decoder\":[\"bit_static_value\",\"svd\",21,0,false,true]},\"rot\":{\"cond\":[\"svd\",22,\"3f\"],\"decoder\":[\"vfhd\",\"svd\",24,4,true,true],\"post_proc\":[\"/\",10]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Door/Window",
   "model_id":"SBDW-002C",
   "tag":"0406",
   "cond":["svd", "=", 28, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBDW-"],
   "properties":{
      "packet":{
         "cond":["svd", 2, "00"],
         "decoder":["vfhd", "svd", 4, 2, false, false]
      },
      "batt":{
         "cond":["svd", 6, "01"],
         "decoder":["vfhd", "svd", 8, 2, false, false]
      },
      "lux":{
         "cond":["svd", 10, "05"],
         "decoder":["vfhd", "svd", 12, 6, true, false],
         "post_proc":["/", 100]
      },
      "open":{
         "cond":["svd", 18, "2d"],
         "decoder":["bit_static_value", "svd", 21, 0, false, true]
      },
      "rot":{
         "cond":["svd", 22, "3f"],
         "decoder":["vfhd", "svd", 24, 4, true, true],
         "post_proc":["/", 10]
      },
      "mac":{
         "cond":["mfd", "=", 30],
         "decoder":["revmfhd", "mfd", 18]
      }
   }
})"""";*/

const char* _SBDW_002C_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"lux\":{\"unit\":\"lux\",\"name\":\"illuminance\"},\"open\":{\"unit\":\"status\",\"name\":\"door\"},\"rot\":{\"unit\":\"0\",\"name\":\"rotation\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "lux":{
         "unit":"lux",
         "name":"illuminance"
      },
      "open":{
         "unit":"status",
         "name":"door"
      },
      "rot":{
         "unit":"0",
         "name":"rotation"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
