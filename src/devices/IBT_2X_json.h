const char* _IBT_2X_json_2XS = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"tag\":\"0301\",\"cond\":[\"mfd\",\"=\",28,\"ind\",0,\"00000000\",\"&\",\"mfd\",\"mac@index\",8],\"conditionnomac\":[\"name\",\"ind\",0,\"iBBQ\",\"|\",\"name\",\"ind\",0,\"xBBQ\",\"&\",\"mfd\",\"=\",28,\"ind\",0,\"00000000\"],\"properties\":{\"tempc\":{\"cond\":[\"mfd\",22,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"cond\":[\"mfd\",26,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",24,4,true,false],\"post_proc\":[\"/\",10]},\"mac\":{\"decoder\":[\"mfhd\",\"mfd\",8]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-2X(S)",
   "tag":"0301",
   "cond":["mfd", "=", 28, "ind", 0, "00000000", "&", "mfd", "mac@index", 8],
   "conditionnomac":["name", "ind", 0, "iBBQ", "|", "name", "ind", 0, "xBBQ", "&","mfd", "=", 28, "ind", 0, "00000000"],
   "properties":{
      "tempc":{
         "cond":["mfd", 22, "!", "ff"],
         "decoder":["vfhd", "mfd", 20, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "cond":["mfd", 26, "!", "ff"],
         "decoder":["vfhd", "mfd", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "mac":{
         "decoder":["mfhd", "mfd", 8]
      }
   }
})"""";*/

const char* _IBT_2X_json_2X = "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"tag\":\"0301\",\"cond\":[\"mfd\",\"=\",28,\"ind\",0,\"01000000\",\"&\",\"mfd\",\"revmac@index\",8],\"conditionnomac\":[\"name\",\"ind\",0,\"iBBQ\",\"|\",\"name\",\"ind\",0,\"xBBQ\",\"&\",\"mfd\",\"=\",28,\"ind\",0,\"01000000\"],\"properties\":{\"tempc\":{\"cond\":[\"mfd\",22,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",20,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"cond\":[\"mfd\",26,\"!\",\"ff\"],\"decoder\":[\"vfhd\",\"mfd\",24,4,true,false],\"post_proc\":[\"/\",10]},\"mac\":{\"decoder\":[\"revmfhd\",\"mfd\",8]}}}";
/*R""""(
{
   "brand":"Inkbird",
   "model":"iBBQ",
   "model_id":"IBT-2X(S)",
   "tag":"0301",
   "cond":["mfd", "=", 28, "ind", 0, "01000000", "&", "mfd", "revmac@index", 8],
   "conditionnomac":["name", "ind", 0, "iBBQ", "|", "name", "ind", 0, "xBBQ", "&", "mfd", "=", 28, "ind", 0, "01000000"],
   "properties":{
      "tempc":{
         "cond":["mfd", 22, "!", "ff"],
         "decoder":["vfhd", "mfd", 20, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "cond":["mfd", 26, "!", "ff"],
         "decoder":["vfhd", "mfd", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "mac":{
         "decoder":["revmfhd", "mfd", 8]
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
