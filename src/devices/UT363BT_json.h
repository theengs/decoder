const char* _UT363BT_json = "{\"brand\":\"UNI-T\",\"model\":\"UT363 BT Anemometer\",\"model_id\":\"UT363BT\",\"tag\":\"1301\",\"condition\":[\"manufacturerdata\",\"=\",38,\"index\",22,\"4d2f53\",\"&\",\"manufacturerdata\",\"=\",38,\"index\",0,\"aabb\"],\"properties\":{\"windspeed\":{\"decoder\":[\"ascii_from_hex_data\",\"manufacturerdata\",10,12],\"is_double\":1}}}";
/*R""""(
{
   "brand":"UNI-T",
   "model":"UT363 BT Anemometer",
   "model_id":"UT363BT",
   "tag":"1301",
   "condition":["manufacturerdata", "=", 38, "index", 22, "4d2f53", "&", "manufacturerdata", "=", 38, "index", 0, "aabb"],
   "properties":{
      "windspeed":{
         "decoder":["ascii_from_hex_data", "manufacturerdata", 10, 12],
         "is_double": 1
      }
   }
})"""";*/

const char* _UT363BT_json_props = "{\"properties\":{\"windspeed\":{\"unit\":\"m/s\",\"name\":\"wind_speed\"}}}";
/*R""""(
{
   "properties":{
      "windspeed":{
         "unit":"m/s",
         "name":"wind_speed"
      }
   }
})"""";*/
