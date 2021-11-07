const char* _CGH1_json = "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"condition\":[\"servicedata\",\"index\",0,\"c804\",\"|\",\"servicedata\",\"index\",0,\"4804\",\"|\",\"servicedata\",\"index\",0,\"0804\",\"|\",\"servicedata\",\"index\",0,\"8804\"],\"properties\":{\"open\":{\"condition\":[\"servicedata\",0,\"c804\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",21,1,false],\"is_bool\":1,\"post_proc\":[\"!\"]},\"_open\":{\"condition\":[\"servicedata\",0,\"4804\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",21,1,false],\"is_bool\":1,\"post_proc\":[\"!\"]},\"__open\":{\"condition\":[\"servicedata\",0,\"0804\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",33,1,false],\"is_bool\":1,\"post_proc\":[\"!\"]},\"___open\":{\"condition\":[\"servicedata\",0,\"8804\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",33,1,false],\"is_bool\":1,\"post_proc\":[\"!\"]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"Door sensor",
   "model_id":"CGH1",
   "condition":["servicedata", "index", 0, "c804", "|", "servicedata", "index", 0, "4804", "|", "servicedata", "index", 0, "0804", "|", "servicedata", "index", 0, "8804"],
   "properties":{
      "open":{
         "condition":["servicedata", 0, "c804"],
         "decoder":["value_from_hex_data", "servicedata", 21, 1, false],
         "is_bool":1,
         "post_proc":["!"]
      },
     "_open":{
         "condition":["servicedata", 0, "4804"],
         "decoder":["value_from_hex_data", "servicedata", 21, 1, false],
         "is_bool":1,
         "post_proc":["!"]
      },
      "__open":{
         "condition":["servicedata", 0, "0804"],
         "decoder":["value_from_hex_data", "servicedata", 33, 1, false],
         "is_bool":1,
         "post_proc":["!"]
      },
      "___open":{
         "condition":["servicedata", 0, "8804"],
         "decoder":["value_from_hex_data", "servicedata", 33, 1, false],
         "is_bool":1,
         "post_proc":["!"]
      }
   }
})"""";*/

const char* _CGH1_json_props = "{\"properties\":{\"open\":{\"name\":\"door\"}}}";
/*R""""(
{
   "properties":{
      "open":{
         "name":"door"
      }
   }
})"""";*/
