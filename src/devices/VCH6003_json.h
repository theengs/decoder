const char* _VCH6003_json = "{\"brand\":\"VCHON\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"VCH6003\",\"tag\":\"0101\",\"cond\":[\"mfd\",\"=\",22,\"ind\",0,\"0109\",\"&\",\"mfd\",\"mac@index\",10],\"conditionnomac\":[\"name\",\"ind\",\"0\",\"XL0801\",\"&\",\"mfd\",\"=\",22,\"ind\",0,\"0109\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",4,4,false],\"pprc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"mfd\",8,2,false]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",10]}}}";
/*R""""(
{
   "brand":"VCHON",
   "model":"Thermo-Hygrometer",
   "model_id":"VCH6003",
   "tag":"0101",
   "cond":["mfd", "=", 22, "ind", 0, "0109", "&", "mfd", "mac@index", 10],
   "conditionnomac":["name", "ind", "0", "XL0801", "&", "mfd", "=", 22, "ind", 0, "0109"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfd", 4, 4, false],
         "pprc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "mfd", 8, 2, false]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 10]
      }
   }
})"""";*/

const char* _VCH6003_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/