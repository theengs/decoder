const char* _NODONNIU_json = "{\"brand\":\"NodOn\",\"model\":\"NIU smart button\",\"model_id\":\"NODONNIU\",\"tag\":\"110e\",\"condition\":[\"servicedata\",\"=\",32,\"&\",\"uuid\",\"index\",0,\"0000\"],\"properties\":{\"button\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",30,2],\"lookup\":[\"01\",\"short click\",\"02\",\"double click\",\"03\",\"long press\",\"04\",\"button release\",\"05\",\"triple click\",\"06\",\"quadruple click\",\"07\",\"quintuple click\"]},\"color\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",20,4],\"lookup\":[\"0002\",\"White\",\"0003\",\"TechBlue\",\"0004\",\"CozyGrey\",\"0005\",\"Wazabi\",\"0006\",\"Lagoon\",\"0007\",\"Softberry\"]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,2,false,false],\"post_proc\":[\"&\",127]}}}";

/*
R""""(
{
   "brand":"NodOn",
   "model":"NIU smart button",
   "model_id":"NODONNIU",
   "tag":"110e",
   "condition":["servicedata", "=", 32, "&", "uuid", "index", 0, "0000"],
   "properties":{
      "button":{
         "decoder":["string_from_hex_data", "servicedata", 30, 2],
         "lookup":["01", "short click", 
                   "02", "double click", 
                   "03", "long press", 
                   "04", "button release", 
                   "05", "triple click", 
                   "06", "quadruple click",
                   "07", "quintuple click"]
      },
      "color":{
         "decoder":["string_from_hex_data", "servicedata", 20, 4],
         "lookup":["0002", "White", 
                   "0003", "TechBlue", 
                   "0004", "CozyGrey", 
                   "0005", "Wazabi", 
                   "0006", "Lagoon", 
                   "0007", "Softberry"]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 24, 2, false, false],
         "post_proc":["&", 127]
      }
   }
})"""";
*/

const char* _NODONNIU_json_props = "{\"properties\":{\"button\":{\"unit\":\"string\",\"name\":\"button\"},\"color\":{\"unit\":\"string\",\"name\":\"color\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"}}}";

/*
R""""(
{
   "properties": {
      "button":{
         "unit":"string",
         "name":"button"
      },
      "color":{
         "unit":"string",
         "name":"color"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      }
   }
})"""";
*/
