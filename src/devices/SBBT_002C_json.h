const char* _SBBT_002C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"tag\":\"1106\",\"cond\":[\"svd\",\"=\",14,\"ind\",0,\"40\",\"|\",\"svd\",\"=\",14,\"ind\",0,\"44\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"SBBT-\"],\"properties\":{\"packet\":{\"cond\":[\"svd\",2,\"00\"],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"batt\":{\"cond\":[\"svd\",6,\"01\"],\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]},\"button\":{\"cond\":[\"svd\",10,\"3a\"],\"decoder\":[\"sfhd\",\"svd\",12,2],\"lookup\":[\"00\",0,\"01\",1,\"02\",2,\"03\",3,\"04\",9,\"fe\",11]},\"mac\":{\"cond\":[\"mfd\",\"=\",30],\"decoder\":[\"revmfhd\",\"mfd\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Button1",
   "model_id":"SBBT-002C",
   "tag":"1106",
   "cond":["svd", "=", 14, "ind", 0, "40", "|", "svd", "=", 14, "ind", 0, "44", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "SBBT-"],
   "properties":{
      "packet":{
         "cond":["svd", 2, "00"],
         "decoder":["vfhd", "svd", 4, 2, false, false]
      },
      "batt":{
         "cond":["svd", 6, "01"],
         "decoder":["vfhd", "svd", 8, 2, false, false]
      },
      "button":{
         "cond":["svd", 10, "3a"],
         "decoder":["sfhd", "svd", 12, 2],
         "lookup":["00", 0, 
                   "01", 1, 
                   "02", 2, 
                   "03", 3, 
                   "04", 9,
                   "fe", 11]
      },
      "mac":{
         "cond":["mfd", "=", 30],
         "decoder":["revmfhd", "mfd", 18]
      }
   }
})"""";*/

const char* _SBBT_002C_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"button\":{\"unit\":\"int\",\"name\":\"button press type\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "button":{
         "unit":"int",
         "name":"button press type"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
