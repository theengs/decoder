const char* _SBDW_002C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window\",\"model_id\":\"SBDW-002C\",\"tag\":\"0406\",\"cond\":[\"servicedata\",\"=\",28,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBDW-\"],\"properties\":{\"packet\":{\"cond\":[\"servicedata\",2,\"00\"],\"decoder\":[\"vfhd\",\"servicedata\",4,2,false,false]},\"batt\":{\"cond\":[\"servicedata\",6,\"01\"],\"decoder\":[\"vfhd\",\"servicedata\",8,2,false,false]},\"lux\":{\"cond\":[\"servicedata\",10,\"05\"],\"decoder\":[\"vfhd\",\"servicedata\",12,6,true,false],\"post_proc\":[\"/\",100]},\"open\":{\"cond\":[\"servicedata\",18,\"2d\"],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,false,true]},\"rot\":{\"cond\":[\"servicedata\",22,\"3f\"],\"decoder\":[\"vfhd\",\"servicedata\",24,4,true,true],\"post_proc\":[\"/\",10]},\"mac\":{\"cond\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmfhd\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Door/Window",
   "model_id":"SBDW-002C",
   "tag":"0406",
   "cond":["servicedata", "=", 28, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBDW-"],
   "properties":{
      "packet":{
         "cond":["servicedata", 2, "00"],
         "decoder":["vfhd", "servicedata", 4, 2, false, false]
      },
      "batt":{
         "cond":["servicedata", 6, "01"],
         "decoder":["vfhd", "servicedata", 8, 2, false, false]
      },
      "lux":{
         "cond":["servicedata", 10, "05"],
         "decoder":["vfhd", "servicedata", 12, 6, true, false],
         "post_proc":["/", 100]
      },
      "open":{
         "cond":["servicedata", 18, "2d"],
         "decoder":["bit_static_value", "servicedata", 21, 0, false, true]
      },
      "rot":{
         "cond":["servicedata", 22, "3f"],
         "decoder":["vfhd", "servicedata", 24, 4, true, true],
         "post_proc":["/", 10]
      },
      "mac":{
         "cond":["manufacturerdata", "=", 30],
         "decoder":["revmfhd", "manufacturerdata", 18]
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
