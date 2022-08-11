#ifndef PROGMEM
#  define PROGMEM
#endif

const char _GAEN_json[] PROGMEM = "{\"brand\":\"GENERIC\",\"model\":\"GAEN\",\"model_id\":\"GAEN\",\"condition\":[\"uuid\",\"index\",0,\"fd6f\"],\"properties\":{\"rpi\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",0,32]},\"aem\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",32,8]}}}";

/*R""""(
{
   "brand":"GENERIC",
   "model":"GAEN",
   "model_id":"GAEN",
   "condition":["uuid", "index", 0, "fd6f"],
   "properties":{
      "rpi":{
         "decoder":["string_from_hex_data", "servicedata", 0, 32]
      },
      "aem":{
         "decoder":["string_from_hex_data", "servicedata", 32, 8]
      }
   }
})"""";*/

const char _GAEN_json_props[] PROGMEM = "{\"properties\":{\"rpi\":{\"unit\":\"hex\",\"name\":\"rolling proximity identifier\"},\"aem\":{\"unit\":\"hex\",\"name\":\"associated encrypted metadata\"}}}";
/*R""""(
{
   "properties":{
      "rpi":{
         "unit":"hex",
         "name":"rolling proximity identifier"
      },
      "aem":{
         "unit":"hex",
         "name":"associated encrypted metadata"
      }
   }
})"""";*/
