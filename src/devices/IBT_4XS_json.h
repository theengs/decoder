const char* _IBT_4XS_json = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4X(S/C)\",\"tag\":\"0301\",\"condition\":[\"manufacturerdata\",\"=\",36,\"index\",0,\"00000000\",\"&\",\"manufacturerdata\",\"mac@index\",8],\"conditionnomac\":[\"name\",\"index\",0,\"iBBQ\",\"&\",\"manufacturerdata\",\"=\",36,\"index\",0,\"00000000\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"tempc3\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"/\",10]},\"tempc4\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,4,true,false],\"post_proc\":[\"/\",10]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",8]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-4X(S/C)",
   "tag":"0301",
   "condition":["manufacturerdata", "=" ,36 ,"index", 0, "00000000", "&", "manufacturerdata", "mac@index", 8],
   "conditionnomac":["name", "index", 0, "iBBQ","&","manufacturerdata", "=" ,36 ,"index", 0, "00000000"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 22, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "condition":["manufacturerdata", 26, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc3":{
         "condition":["manufacturerdata", 30, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc4":{
         "condition":["manufacturerdata", 34, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 4, true, false],
         "post_proc":["/", 10]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 8]
      }
   }
})"""";*/

const char* _IBT_4XS_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc3\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc4\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc2":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc3":{
         "unit":"°C",
         "name":"temperature"
      },
      "tempc4":{
         "unit":"°C",
         "name":"temperature"
      },
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
