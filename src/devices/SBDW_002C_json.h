const char* _SBDW_002C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window\",\"model_id\":\"SBDW-002C\",\"tag\":\"0406\",\"condition\":[\"servicedata\",\"=\",28,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBDW-002C\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"lux\":{\"condition\":[\"servicedata\",10,\"05\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,6,true,false],\"post_proc\":[\"/\",100]},\"open\":{\"condition\":[\"servicedata\",18,\"2d\"],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,false,true]},\"rot\":{\"condition\":[\"servicedata\",22,\"3f\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,true],\"post_proc\":[\"/\",10]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Door/Window",
   "model_id":"SBDW-002C",
   "tag":"0406",
   "condition":["servicedata", "=", 28, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBDW-002C"],
   "properties":{
      "packet":{
         "condition":["servicedata", 2, "00"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "batt":{
         "condition":["servicedata", 6, "01"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "lux":{
         "condition":["servicedata", 10, "05"],
         "decoder":["value_from_hex_data", "servicedata", 12, 6, true, false],
         "post_proc":["/", 100]
      },
      "open":{
         "condition":["servicedata", 18, "2d"],
         "decoder":["bit_static_value", "servicedata", 21, 0, false, true]
      },
      "rot":{
         "condition":["servicedata", 22, "3f"],
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, true],
         "post_proc":["/", 10]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
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
