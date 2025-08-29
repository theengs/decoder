const char* _JQJCY01YM_json = "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"tag\":\"0f\",\"cond\":[\"servicedata\",\"index\",2,\"20df02\"],\"properties\":{\"for\":{\"cond\":[\"servicedata\",23,\"0\"],\"decoder\":[\"vfhd\",\"servicedata\",28,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"cond\":[\"servicedata\",23,\"6\"],\"decoder\":[\"vfhd\",\"servicedata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"tempc\":{\"cond\":[\"servicedata\",23,\"4\"],\"decoder\":[\"vfhd\",\"servicedata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"batt\":{\"cond\":[\"servicedata\",23,\"a\"],\"decoder\":[\"vfhd\",\"servicedata\",28,2,false,false]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",10]}}}";
/*R""""(
{
   "brand":"Xiaomi",
   "model":"Formaldehyde detector",
   "model_id":"JQJCY01YM",
   "tag":"0f",
   "cond":["servicedata", "index", 2, "20df02"],
   "properties":{
      "for":{
         "cond":["servicedata", 23, "0"],
         "decoder":["vfhd", "servicedata", 28, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "cond":["servicedata", 23, "6"],
         "decoder":["vfhd", "servicedata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc":{
         "cond":["servicedata", 23, "4"],
         "decoder":["vfhd", "servicedata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "batt":{
         "cond":["servicedata", 23, "a"],
         "decoder":["vfhd", "servicedata", 28, 2, false, false]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 10]
      }
   }
})"""";*/

const char* _JQJCY01YM_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"for\":{\"unit\":\"mg/m³\",\"name\":\"formaldehyde\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "for":{
         "unit":"mg/m³",
         "name":"formaldehyde"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/