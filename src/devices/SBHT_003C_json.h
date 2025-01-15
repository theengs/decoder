const char* _SBHT_003C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU H&T\",\"model_id\":\"SBHT-003C\",\"tag\":\"0106\",\"condition\":[\"servicedata\",\"=\",20,\"index\",0,\"44\",\"|\",\"servicedata\",\"=\",24,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBHT-\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"hum\":{\"condition\":[\"servicedata\",10,\"2e\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,2,false,false]},\"button\":{\"condition\":[\"servicedata\",14,\"3a\"],\"decoder\":[\"string_from_hex_data\",\"servicedata\",16,2],\"lookup\":[\"01\",1,\"fe\",11]},\"_button\":{\"condition\":[\"servicedata\",14,\"!\",\"3a\"],\"decoder\":[\"static_value\",0]},\"tempc\":{\"condition\":[\"servicedata\",14,\"45\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,true,true],\"post_proc\":[\"/\",10]},\"_tempc\":{\"condition\":[\"servicedata\",18,\"45\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true,true],\"post_proc\":[\"/\",10]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU H&T",
   "model_id":"SBHT-003C",
   "tag":"0106",
   "condition":["servicedata", "=", 20, "index", 0, "44", "|", "servicedata", "=", 24, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBHT-"],
   "properties":{
      "packet":{
         "condition":["servicedata", 2, "00"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "batt":{
         "condition":["servicedata", 6, "01"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "hum":{
         "condition":["servicedata", 10, "2e"],
         "decoder":["value_from_hex_data", "servicedata", 12, 2, false, false]
      },
      "button":{
         "condition":["servicedata", 14, "3a"],
         "decoder":["string_from_hex_data", "servicedata", 16, 2],
         "lookup":["01", 1, 
                   "fe", 11]
      },
      "_button":{
         "condition":["servicedata", 14, "!", "3a"],
         "decoder":["static_value", 0]
      },
      "tempc":{
         "condition":["servicedata", 14, "45"],
         "decoder":["value_from_hex_data", "servicedata", 16, 4, true, true],
         "post_proc":["/", 10]
      },
      "_tempc":{
         "condition":["servicedata", 18, "45"],
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true, true],
         "post_proc":["/", 10]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
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
