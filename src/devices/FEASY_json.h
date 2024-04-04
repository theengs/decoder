const char* _FEASY_json = "{\"brand\":\"Feasycom\",\"model\":\"Beacon\",\"model_id\":\"FEASY\",\"tag\":\"0608\",\"condition\":[\"servicedata\",\"=\",22,\"&\",\"uuid\",\"index\",0,\"fff0\"],\"properties\":{\"beaconmodel\":{\"decoder\":[\"string_from_hex_data\",\"servicedata\",0,2,false,false],\"lookup\":[\"15\",\"BP102\",\"19\",\"BP109\",\"1a\",\"BP103\",\"1b\",\"BP104\",\"1c\",\"BP201\",\"1d\",\"BP106\",\"1e\",\"BP101\",\"24\",\"BP120\",\"27\",\"BP108\",\"28\",\"BP108N\",\"29\",\"BP103B\"]},\"batt\":{\"condition\":[\"servicedata\",20,\"!\",\"65\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,2,false,false],\"post_proc\":[\"&\",127]},\"plugged-in\":{\"condition\":[\"servicedata\",20,\"65\"],\"decoder\":[\"static_value\",true]},\"_plugged-in\":{\"condition\":[\"servicedata\",20,\"!\",\"65\"],\"decoder\":[\"static_value\",false]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"servicedata\",8]}}}";

/*R""""(
{
   "brand":"Feasycom",
   "model":"Beacon",
   "model_id":"FEASY",
   "tag":"0608",
   "condition":["servicedata", "=", 22, "&", "uuid", "index", 0, "fff0"],
   "properties":{
      "beaconmodel":{
         "decoder":["string_from_hex_data", "servicedata", 0, 2, false, false],
         "lookup":["15", "BP102", 
                   "19", "BP109", 
                   "1a", "BP103", 
                   "1b", "BP104", 
                   "1c", "BP201", 
                   "1d", "BP106", 
                   "1e", "BP101",
                   "24", "BP120", 
                   "27", "BP108", 
                   "28", "BP108N",
                   "29", "BP103B"]
      },
      "batt":{
         "condition":["servicedata", 20, "!", "65"],
         "decoder":["value_from_hex_data", "servicedata", 20, 2, false, false],
         "post_proc":["&", 127]
      },
      "plugged-in":{
         "condition":["servicedata", 20, "65"],
         "decoder":["static_value", true]
      },
      "_plugged-in":{
         "condition":["servicedata", 20, "!", "65"],
         "decoder":["static_value", false]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "servicedata", 8]
      }
   }
})"""";*/

const char* _FEASY_json_props = "{\"properties\":{\"beaconmodel\":{\"unit\":\"string\",\"name\":\"beacon model\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"plugged-in\":{\"unit\":\"status\",\"name\":\"plug\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "beaconmodel":{
         "unit":"string",
         "name":"beacon model"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "plugged-in":{
         "unit":"status",
         "name":"plug"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
