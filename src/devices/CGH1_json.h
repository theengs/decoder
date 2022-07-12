const char* _CGH1_json = "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"condition\":[\"servicedata\",\"index\",0,\"c804\",\"|\",\"servicedata\",\"index\",0,\"4804\",\"|\",\"servicedata\",\"index\",0,\"0804\",\"|\",\"servicedata\",\"index\",0,\"8804\"],\"properties\":{\"open\":{\"condition\":[\"servicedata\",0,\"c804\",\"|\",\"servicedata\",0,\"4804\"],\"decoder\":[\"bit_static_value\",\"servicedata\",21,0,true,false]},\"_open\":{\"condition\":[\"servicedata\",0,\"0804\",\"|\",\"servicedata\",0,\"8804\"],\"decoder\":[\"bit_static_value\",\"servicedata\",33,0,true,false]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"Door sensor",
   "model_id":"CGH1",
   "condition":["servicedata", "index", 0, "c804", "|", "servicedata", "index", 0, "4804", "|", "servicedata", "index", 0, "0804", "|", "servicedata", "index", 0, "8804"],
   "properties":{
      "open":{
         "condition":["servicedata", 0, "c804", "|", "servicedata", 0, "4804"],
         "decoder":["bit_static_value", "servicedata", 21, 0, true, false]
      },
      "_open":{
         "condition":["servicedata", 0, "0804", "|", "servicedata", 0, "8804"],
         "decoder":["bit_static_value", "servicedata", 33, 0, true, false]
      }
   }
})"""";*/

const char* _CGH1_json_props = "{\"properties\":{\"open\":{\"unit\":\"status\",\"name\":\"door\"}}}";
/*R""""(
{
   "properties":{
      "open":{
         "unit":"status",
         "name":"door"
      }
   }
})"""";*/
