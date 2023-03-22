const char* _MBXPRO_json = "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"tag\":\"0708\",\"condition\":[\"uuid\",\"index\",0,\"feab\"],\"properties\":{\"volt\":{\"condition\":[\"servicedata\",0,\"40\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",6,4,false],\"post_proc\":[\"/\",1000]},\"x_axis\":{\"condition\":[\"servicedata\",0,\"60\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"y_axis\":{\"condition\":[\"servicedata\",0,\"60\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,false],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"z_axis\":{\"condition\":[\"servicedata\",0,\"60\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,false],\"post_proc\":[\"/\",10000,\"*\",9.80665]},\"_volt\":{\"condition\":[\"servicedata\",0,\"60\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,false],\"post_proc\":[\"/\",1000]},\"tempc\":{\"condition\":[\"servicedata\",0,\"70\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",6,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"condition\":[\"servicedata\",0,\"70\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",10,4,false,false],\"post_proc\":[\"/\",10]},\"__volt\":{\"condition\":[\"servicedata\",0,\"70\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,4,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"Mokosmart",
   "model":"BeaconX Pro",
   "model_id":"MBXPRO",
   "tag":"0708",
   "condition":["uuid", "index", 0, "feab"],
   "properties":{
      "volt":{
         "condition":["servicedata", 0, "40"],
         "decoder":["value_from_hex_data", "servicedata", 6, 4, false],
         "post_proc":["/", 1000]
      },
      "x_axis":{
         "condition":["servicedata", 0, "60"],
         "decoder":["value_from_hex_data", "servicedata", 12, 4, false],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "y_axis":{
         "condition":["servicedata", 0, "60"],
         "decoder":["value_from_hex_data", "servicedata", 16, 4, false],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "z_axis":{
         "condition":["servicedata", 0, "60"],
         "decoder":["value_from_hex_data", "servicedata", 20, 4, false],
         "post_proc":["/", 10000, "*", 9.80665]
      },
      "_volt":{
         "condition":["servicedata", 0, "60"],
         "decoder":["value_from_hex_data", "servicedata", 24, 4, false],
         "post_proc":["/", 1000]
      },
      "tempc":{
         "condition":["servicedata", 0, "70"],
         "decoder":["value_from_hex_data", "servicedata", 6, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "condition":["servicedata", 0, "70"],
         "decoder":["value_from_hex_data", "servicedata", 10, 4, false, false],
         "post_proc":["/", 10]
      },
      "__volt":{
         "condition":["servicedata", 0, "70"],
         "decoder":["value_from_hex_data", "servicedata", 14, 4, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _MBXPRO_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"x_axis\":{\"unit\":\"m/s²\",\"name\":\"x_axis\"},\"y_axis\":{\"unit\":\"m/s²\",\"name\":\"y_axis\"},\"z_axis\":{\"unit\":\"m/s²\",\"name\":\"z_axis\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "x_axis":{
         "unit":"m/s²",
         "name":"x_axis"
      },
      "y_axis":{
         "unit":"m/s²",
         "name":"y_axis"
      },
      "z_axis":{
         "unit":"m/s²",
         "name":"z_axis"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      }
   }
})"""";*/