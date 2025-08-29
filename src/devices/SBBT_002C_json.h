const char* _SBBT_002C_json = "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"tag\":\"1106\",\"cond\":[\"servicedata\",\"=\",14,\"index\",0,\"40\",\"|\",\"servicedata\",\"=\",14,\"index\",0,\"44\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"SBBT-\"],\"properties\":{\"packet\":{\"cond\":[\"servicedata\",2,\"00\"],\"decoder\":[\"vfhd\",\"servicedata\",4,2,false,false]},\"batt\":{\"cond\":[\"servicedata\",6,\"01\"],\"decoder\":[\"vfhd\",\"servicedata\",8,2,false,false]},\"button\":{\"cond\":[\"servicedata\",10,\"3a\"],\"decoder\":[\"sfhd\",\"servicedata\",12,2],\"lookup\":[\"00\",0,\"01\",1,\"02\",2,\"03\",3,\"04\",9,\"fe\",11]},\"mac\":{\"cond\":[\"manufacturerdata\",\"=\",30],\"decoder\":[\"revmfhd\",\"manufacturerdata\",18]}}}";
/*R""""(
{
   "brand":"Shelly",
   "model":"ShellyBLU Button1",
   "model_id":"SBBT-002C",
   "tag":"1106",
   "cond":["servicedata", "=", 14, "index", 0, "40", "|", "servicedata", "=", 14, "index", 0, "44", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "SBBT-"],
   "properties":{
      "packet":{
         "cond":["servicedata", 2, "00"],
         "decoder":["vfhd", "servicedata", 4, 2, false, false]
      },
      "batt":{
         "cond":["servicedata", 6, "01"],
         "decoder":["vfhd", "servicedata", 8, 2, false, false]
      },
      "button":{
         "cond":["servicedata", 10, "3a"],
         "decoder":["sfhd", "servicedata", 12, 2],
         "lookup":["00", 0, 
                   "01", 1, 
                   "02", 2, 
                   "03", 3, 
                   "04", 9,
                   "fe", 11]
      },
      "mac":{
         "cond":["manufacturerdata", "=", 30],
         "decoder":["revmfhd", "manufacturerdata", 18]
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
