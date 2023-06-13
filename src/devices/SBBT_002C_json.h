const char* _SBBT_002C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"tag\":\"1106\",\"condition\":[\"servicedata\",\"=\",14,\"index\",0,\"40\",\"|\",\"servicedata\",\"=\",14,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBBT-002C\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"press\":{\"condition\":[\"servicedata\",10,\"3a\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,2,false,false]},\"mac\":{\"condition\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Button1",
   "model_id":"SBBT-002C",
   "tag":"1106",
   "condition":["servicedata", "=", 14, "index", 0, "40", "|", "servicedata", "=", 14, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBBT-002C"],
   "properties":{
      "packet":{
         "condition":["servicedata", 2, "00"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "batt":{
         "condition":["servicedata", 6, "01"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "press":{
         "condition":["servicedata", 10, "3a"],
         "decoder":["value_from_hex_data", "servicedata", 12, 2, false, false]
      },
      "mac":{
         "condition":["manufacturerdata", "=", 30],
         "decoder":["revmac_from_hex_data", "manufacturerdata", 18]
      }
   }
})"""";*/

const char* _SBBT_002C_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"press\":{\"unit\":\"int\",\"name\":\"press type\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "press":{
         "unit":"int",
         "name":"press type"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
