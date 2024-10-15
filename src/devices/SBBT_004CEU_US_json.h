const char* _SBBT_004CEU_US_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Switch4\",\"model_id\":\"SBBT-004CEU/US\",\"tag\":\"1106\",\"condition\":[\"servicedata\",\"=\",26,\"index\",0,\"40\",\"|\",\"servicedata\",\"=\",26,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBBT-\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"button1\":{\"condition\":[\"servicedata\",10,\"3a\"],\"decoder\":[\"string_from_hex_data\",\"servicedata\",12,2],\"lookup\":[\"00\",0,\"01\",1,\"02\",2,\"03\",3,\"04\",9,\"fe\",11]},\"button2\":{\"condition\":[\"servicedata\",14,\"3a\"],\"decoder\":[\"string_from_hex_data\",\"servicedata\",16,2],\"lookup\":[\"00\",0,\"01\",1,\"02\",2,\"03\",3,\"04\",9,\"fe\",11]},\"button3\":{\"condition\":[\"servicedata\",18,\"3a\"],\"decoder\":[\"string_from_hex_data\",\"servicedata\",20,2],\"lookup\":[\"00\",0,\"01\",1,\"02\",2,\"03\",3,\"04\",9,\"fe\",11]},\"button4\":{\"condition\":[\"servicedata\",22,\"3a\"],\"decoder\":[\"string_from_hex_data\",\"servicedata\",24,2],\"lookup\":[\"00\",0,\"01\",1,\"02\",2,\"03\",3,\"04\",9,\"fe\",11]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Switch4",
   "model_id":"SBBT-004CEU/US",
   "tag":"1106",
   "condition":["servicedata", "=", 26, "index", 0, "40", "|", "servicedata", "=", 26, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBBT-"],
   "properties":{
      "packet":{
         "condition":["servicedata", 2, "00"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "batt":{
         "condition":["servicedata", 6, "01"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "button1":{
         "condition":["servicedata", 10, "3a"],
         "decoder":["string_from_hex_data", "servicedata", 12, 2],
         "lookup":["00", 0,
                   "01", 1,
                   "02", 2,
                   "03", 3,
                   "04", 9,
                   "fe", 11]
      },
      "button2":{
         "condition":["servicedata", 14, "3a"],
         "decoder":["string_from_hex_data", "servicedata", 16, 2],
         "lookup":["00", 0,
                   "01", 1,
                   "02", 2,
                   "03", 3,
                   "04", 9,
                   "fe", 11]
      },
      "button3":{
         "condition":["servicedata", 18, "3a"],
         "decoder":["string_from_hex_data", "servicedata", 20, 2],
         "lookup":["00", 0,
                   "01", 1,
                   "02", 2,
                   "03", 3,
                   "04", 9,
                   "fe", 11]
      },
      "button4":{
         "condition":["servicedata", 22, "3a"],
         "decoder":["string_from_hex_data", "servicedata", 24, 2],
         "lookup":["00", 0,
                   "01", 1,
                   "02", 2,
                   "03", 3,
                   "04", 9,
                   "fe", 11]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
      }
   }
})"""";*/

const char* _SBBT_004CEU_US_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"button1\":{\"unit\":\"int\",\"name\":\"button1 press type\"},\"button2\":{\"unit\":\"int\",\"name\":\"button2 press type\"},\"button3\":{\"unit\":\"int\",\"name\":\"button3 press type\"},\"button4\":{\"unit\":\"int\",\"name\":\"button4 press type\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "button1":{
         "unit":"int",
         "name":"button1 press type"
      },
      "button2":{
         "unit":"int",
         "name":"button2 press type"
      },
      "button3":{
         "unit":"int",
         "name":"button3 press type"
      },
      "button4":{
         "unit":"int",
         "name":"button4 press type"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
