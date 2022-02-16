const char* _MS_CDP_json = "{\"brand\":\"GENERIC\",\"model\":\"MS-CDP\",\"model_id\":\"MS-CDP\",\"condition\":[\"manufacturerdata\",\"index\",0,\"060001\"],\"properties\":{\"device\":{\"condition\":[\"manufacturerdata\",7,\"1\"],\"decoder\":[\"static_value\",\"Xbox One\"]},\"_device\":{\"condition\":[\"manufacturerdata\",7,\"6\"],\"decoder\":[\"static_value\",\"Apple iPhone\"]},\"__device\":{\"condition\":[\"manufacturerdata\",7,\"7\"],\"decoder\":[\"static_value\",\"Apple iPad\"]},\"___device\":{\"condition\":[\"manufacturerdata\",7,\"8\"],\"decoder\":[\"static_value\",\"Android device\"]},\"____device\":{\"condition\":[\"manufacturerdata\",7,\"9\"],\"decoder\":[\"static_value\",\"Windows 10 Desktop\"]},\"_____device\":{\"condition\":[\"manufacturerdata\",7,\"11\"],\"decoder\":[\"static_value\",\"Windows 10 Phone\"]},\"______device\":{\"condition\":[\"manufacturerdata\",7,\"12\"],\"decoder\":[\"static_value\",\"Linux device\"]},\"_______device\":{\"condition\":[\"manufacturerdata\",7,\"17\"],\"decoder\":[\"static_value\",\"Windows IoT\"]},\"________device\":{\"condition\":[\"manufacturerdata\",7,\"14\"],\"decoder\":[\"static_value\",\"Surface Hub\"]},\"salt\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",12,8]},\"hash\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,32]}}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"MS-CDP",
   "model_id":"MS-CDP",
   "condition":["manufacturerdata", "index", 0, "060001"],
   "properties":{
      "device":{
         "condition":["manufacturerdata", 7, "1"],
         "decoder":["static_value", "Xbox One"]
      },
      "_device":{
         "condition":["manufacturerdata", 7, "6"],
         "decoder":["static_value", "Apple iPhone"]
      },
      "__device":{
         "condition":["manufacturerdata", 7, "7"],
         "decoder":["static_value", "Apple iPad"]
      },
      "___device":{
         "condition":["manufacturerdata", 7, "8"],
         "decoder":["static_value", "Android device"]
      },
      "____device":{
         "condition":["manufacturerdata", 7, "9"],
         "decoder":["static_value", "Windows 10 Desktop"]
      },
      "_____device":{
         "condition":["manufacturerdata", 7, "11"],
         "decoder":["static_value", "Windows 10 Phone"]
      },
      "______device":{
         "condition":["manufacturerdata", 7, "12"],
         "decoder":["static_value", "Linux device"]
      },
      "_______device":{
         "condition":["manufacturerdata", 7, "13"],
         "decoder":["static_value", "Windows IoT"]
      },
      "________device":{
         "condition":["manufacturerdata", 7, "14"],
         "decoder":["static_value", "Surface Hub"]
      },
      "salt":{
         "decoder":["string_from_hex_data", "manufacturerdata", 12, 8]
      },
      "hash":{
         "decoder":["string_from_hex_data", "manufacturerdata", 20, 32]
      }
   }
})"""";*/

const char* _MS_CDP_json_props = "{\"properties\":{\"device\":{\"unit\":\"string\",\"name\":\"device type\"},\"salt\":{\"unit\":\"hex\",\"name\":\"salt\"},\"hash\":{\"unit\":\"hex\",\"name\":\"device hash\"}}}";
/*R""""(
{
   "properties":{
      "device":{
         "unit":"string",
         "name":"device type"
      },
      "salt":{
         "unit":"hex",
         "name":"salt"
      },
      "hash":{
         "unit":"hex",
         "name":"device hash"
      }

   }
})"""";*/
