const char* _SBMO_003Z_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Motion\",\"model_id\":\"SBMO-003Z\",\"tag\":\"0406\",\"condition\":[\"servicedata\",\"=\",22,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBMO-003Z\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"lux\":{\"condition\":[\"servicedata\",10,\"05\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,6,true,false],\"post_proc\":[\"/\",100]},\"motion\":{\"condition\":[\"servicedata\",18,\"21\"],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,false,true]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Motion",
   "model_id":"SBMO-003Z",
   "tag":"0406",
   "condition":["servicedata", "=", 22, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBMO-003Z"],
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
      "motion":{
         "condition":["servicedata", 18, "21"],
         "decoder":["bit_static_value", "servicedata", 21, 0, false, true]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
      }
   }
})"""";*/

const char* _SBMO_003Z_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"lux\":{\"unit\":\"lux\",\"name\":\"illuminance\"},\"motion\":{\"unit\":\"status\",\"name\":\"motion\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "motion":{
         "unit":"status",
         "name":"motion"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
