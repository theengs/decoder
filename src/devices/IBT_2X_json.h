const char* _IBT_2X_json_2XS = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"tag\":\"0301\",\"condition\":[\"manufacturerdata\",\"=\",28,\"index\",0,\"00000000\",\"&\",\"manufacturerdata\",\"mac@index\",8],\"conditionnomac\":[\"name\",\"index\",0,\"iBBQ\",\"|\",\"name\",\"index\",0,\"xBBQ\",\"&\",\"manufacturerdata\",\"=\",28,\"index\",0,\"00000000\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"manufacturerdata\",8]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-2X(S)",
   "tag":"0301",
   "condition":["manufacturerdata", "=", 28, "index", 0, "00000000", "&", "manufacturerdata", "mac@index", 8],
   "conditionnomac":["name", "index", 0, "iBBQ", "|", "name", "index", 0, "xBBQ", "&","manufacturerdata", "=", 28, "index", 0, "00000000"],
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
      "mac":{
         "decoder":["mac_from_hex_data", "manufacturerdata", 8]
      }
   }
})"""";*/

const char* _IBT_2X_json_2X = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"tag\":\"0301\",\"condition\":[\"manufacturerdata\",\"=\",28,\"index\",0,\"01000000\",\"&\",\"manufacturerdata\",\"revmac@index\",8],\"conditionnomac\":[\"name\",\"index\",0,\"iBBQ\",\"|\",\"name\",\"index\",0,\"xBBQ\",\"&\",\"manufacturerdata\",\"=\",28,\"index\",0,\"01000000\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"manufacturerdata\",8]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-2X(S)",
   "tag":"0301",
   "condition":["manufacturerdata", "=", 28, "index", 0, "01000000", "&", "manufacturerdata", "revmac@index", 8],
   "conditionnomac":["name", "index", 0, "iBBQ", "|", "name", "index", 0, "xBBQ", "&", "manufacturerdata", "=", 28, "index", 0, "01000000"],
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
      "mac":{
         "decoder":["revmac_from_hex_data", "manufacturerdata", 8]
      }
   }
})"""";*/

const char* _IBT_2X_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"mac\":{\"unit\":\"string\",\"name\":\"MAC address\"}}}";
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
      "mac":{
         "unit":"string",
         "name":"MAC address"
      }
   }
})"""";*/
