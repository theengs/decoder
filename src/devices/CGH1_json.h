const char* _CGH1_json = "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"tag\":\"0404\",\"cond\":[\"svd\",\"=\",34,\"ind\",2,\"04\",\"|\",\"svd\",\"=\",28,\"ind\",2,\"04\",\"&\",\"uuid\",\"ind\",0,\"fdcd\"],\"properties\":{\"open\":{\"cond\":[\"svd\",\"=\",28],\"decoder\":[\"bit_static_value\",\"svd\",21,0,true,false]},\"_open\":{\"cond\":[\"svd\",\"=\",34],\"decoder\":[\"bit_static_value\",\"svd\",33,0,true,false]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",4]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"Contact Sensor",
   "model_id":"CGH1",
   "tag":"0404",
   "cond":["svd", "=", 34, "ind", 2, "04", "|", "svd", "=", 28, "ind", 2, "04", "&", "uuid", "ind", 0, "fdcd"],
   "properties":{
      "open":{
         "cond":["svd", "=", 28],
         "decoder":["bit_static_value", "svd", 21, 0, true, false]
      },
      "_open":{
         "cond":["svd", "=", 34],
         "decoder":["bit_static_value", "svd", 33, 0, true, false]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 4]
      }
   }
})"""";*/

const char* _CGH1_json_props = "{\"properties\":{\"open\":{\"unit\":\"status\",\"name\":\"door\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "open":{
         "unit":"status",
         "name":"door"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
