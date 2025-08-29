const char* _MBXPRO_json = "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"tag\":\"0708\",\"cond\":[\"uuid\",\"ind\",0,\"feab\"],\"properties\":{\"volt\":{\"cond\":[\"svd\",0,\"40\"],\"decoder\":[\"vfhd\",\"svd\",6,4,false],\"pprc\":[\"/\",1000]},\"x_axis\":{\"cond\":[\"svd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svd\",12,4,false],\"pprc\":[\"/\",10000,\"*\",9.80665]},\"y_axis\":{\"cond\":[\"svd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svd\",16,4,false],\"pprc\":[\"/\",10000,\"*\",9.80665]},\"z_axis\":{\"cond\":[\"svd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svd\",20,4,false],\"pprc\":[\"/\",10000,\"*\",9.80665]},\"_volt\":{\"cond\":[\"svd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svd\",24,4,false],\"pprc\":[\"/\",1000]},\"tempc\":{\"cond\":[\"svd\",0,\"70\"],\"decoder\":[\"vfhd\",\"svd\",6,4,false],\"pprc\":[\"/\",10]},\"hum\":{\"cond\":[\"svd\",0,\"70\"],\"decoder\":[\"vfhd\",\"svd\",10,4,false,false],\"pprc\":[\"/\",10]},\"__volt\":{\"cond\":[\"svd\",0,\"70\"],\"decoder\":[\"vfhd\",\"svd\",14,4,false],\"pprc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"Mokosmart",
   "model":"BeaconX Pro",
   "model_id":"MBXPRO",
   "tag":"0708",
   "cond":["uuid", "ind", 0, "feab"],
   "properties":{
      "volt":{
         "cond":["svd", 0, "40"],
         "decoder":["vfhd", "svd", 6, 4, false],
         "pprc":["/", 1000]
      },
      "x_axis":{
         "cond":["svd", 0, "60"],
         "decoder":["vfhd", "svd", 12, 4, false],
         "pprc":["/", 10000, "*", 9.80665]
      },
      "y_axis":{
         "cond":["svd", 0, "60"],
         "decoder":["vfhd", "svd", 16, 4, false],
         "pprc":["/", 10000, "*", 9.80665]
      },
      "z_axis":{
         "cond":["svd", 0, "60"],
         "decoder":["vfhd", "svd", 20, 4, false],
         "pprc":["/", 10000, "*", 9.80665]
      },
      "_volt":{
         "cond":["svd", 0, "60"],
         "decoder":["vfhd", "svd", 24, 4, false],
         "pprc":["/", 1000]
      },
      "tempc":{
         "cond":["svd", 0, "70"],
         "decoder":["vfhd", "svd", 6, 4, false],
         "pprc":["/", 10]
      },
      "hum":{
         "cond":["svd", 0, "70"],
         "decoder":["vfhd", "svd", 10, 4, false, false],
         "pprc":["/", 10]
      },
      "__volt":{
         "cond":["svd", 0, "70"],
         "decoder":["vfhd", "svd", 14, 4, false],
         "pprc":["/", 1000]
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