const char* _SmartDry_json = "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"tag\":\"ff01\",\"condition\":[\"manufacturerdata\",\"=\",28,\"index\",0,\"ae01\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,8,true,false,true]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,8,true,false,true]},\"shake\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,4,true,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,2,false,false],\"post_proc\":[\"+\",\"2847\",\"/\",1000]},\"wake\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",27,0,false,true]}}}";
/* R""""(
{
   "brand":"SmartDry",
   "model":"Laundry Sensor",
   "model_id":"SDLS",
   "tag":"ff01",
   "condition":["manufacturerdata", "=", 28, "index", 0, "ae01"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 8, true, false, true]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 8, true, false, true]
      },
      "shake":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 4, true, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 2, false, false],
         "post_proc":["+", "2847", "/", 1000]
      },
      "wake":{
         "decoder":["bit_static_value", "manufacturerdata", 27, 0, false, true]
      }
   }
})"""";*/

const char* _SmartDry_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"shake\":{\"unit\":\"int\",\"name\":\"shake\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"wake\":{\"unit\":\"status\",\"name\":\"wake\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "shake":{
         "unit":"int",
         "name":"shake"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "wake":{
         "unit":"status",
         "name":"wake"
      }
   }
})"""";*/
