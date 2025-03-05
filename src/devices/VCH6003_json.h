const char* _VCH6003_json = "{\"brand\":\"VCHON\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"VCH6003\",\"tag\":\"0101\",\"condition\":[\"manufacturerdata\",\"=\",22,\"index\",0,\"0109\",\"&\",\"manufacturerdata\",\"mac@index\",10],\"conditionnomac\":[\"name\",\"index\",\"0\",\"XL0801\",\"&\",\"manufacturerdata\",\"=\",22,\"index\",0,\"0109\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,2,false]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",10]}}}";
/*R""""(
{
   "brand":"VCHON",
   "model":"Thermo-Hygrometer",
   "model_id":"VCH6003",
   "tag":"0101",
   "condition":["manufacturerdata", "=", 22, "index", 0, "0109", "&", "manufacturerdata", "mac@index", 10],
   "conditionnomac":["name", "index", "0", "XL0801", "&", "manufacturerdata", "=", 22, "index", 0, "0109"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 2, false]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 10]
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