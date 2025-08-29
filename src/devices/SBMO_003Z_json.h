const char* _SBMO_003Z_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Motion\",\"model_id\":\"SBMO-003Z\",\"tag\":\"0406\",\"cond\":[\"svd\",\"=\",22,\"ind\",0,\"44\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"SBMO-\"],\"properties\":{\"packet\":{\"cond\":[\"svd\",2,\"00\"],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"batt\":{\"cond\":[\"svd\",6,\"01\"],\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]},\"lux\":{\"cond\":[\"svd\",10,\"05\"],\"decoder\":[\"vfhd\",\"svd\",12,6,true,false],\"pprc\":[\"/\",100]},\"motion\":{\"cond\":[\"svd\",18,\"21\"],\"decoder\":[\"bit_static_value\",\"svd\",21,0,false,true]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Motion",
   "model_id":"SBMO-003Z",
   "tag":"0406",
   "cond":["svd", "=", 22, "ind", 0, "44", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "SBMO-"],
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
         "pprc":["/", 100]
      },
      "motion":{
         "cond":["svd", 18, "21"],
         "decoder":["bit_static_value", "svd", 21, 0, false, true]
      },
      "mac":{
         "cond":["mfd", "=", 30],
         "decoder":["revmfhd", "mfd", 18]
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
