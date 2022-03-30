const char* _MBXPRO_json = "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"condition\":[\"uuid\",\"indx\",0,\"feab\"],\"properties\":{\"volt\":{\"condition\":[\"svcd\",0,\"40\"],\"decoder\":[\"vfhd\",\"svcd\",6,4,false],\"post_proc\":[\"/\",1000]},\"x_axis\":{\"condition\":[\"svcd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svcd\",12,4,false]},\"y_axis\":{\"condition\":[\"svcd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svcd\",16,4,false]},\"z_axis\":{\"condition\":[\"svcd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svcd\",20,4,false]},\"_volt\":{\"condition\":[\"svcd\",0,\"60\"],\"decoder\":[\"vfhd\",\"svcd\",24,4,false],\"post_proc\":[\"/\",1000]},\"tempc\":{\"condition\":[\"svcd\",0,\"70\"],\"decoder\":[\"vfhd\",\"svcd\",6,4,false],\"post_proc\":[\"/\",10]},\"hum\":{\"condition\":[\"svcd\",0,\"70\"],\"decoder\":[\"vfhd\",\"svcd\",10,4,false,false],\"post_proc\":[\"/\",10]},\"__volt\":{\"condition\":[\"svcd\",0,\"70\"],\"decoder\":[\"vfhd\",\"svcd\",14,4,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
   "brand":"Mokosmart",
   "model":"BeaconX Pro",
   "model_id":"MBXPRO",
   "condition":["uuid", "indx", 0, "feab"],
   "properties":{
      "volt":{
         "condition":["svcd", 0, "40"],
         "decoder":["vfhd", "svcd", 6, 4, false],
         "post_proc":["/", 1000]
      },
      "x_axis":{
         "condition":["svcd", 0, "60"],
         "decoder":["vfhd", "svcd", 12, 4, false]
      },
      "y_axis":{
         "condition":["svcd", 0, "60"],
         "decoder":["vfhd", "svcd", 16, 4, false]
      },
      "z_axis":{
         "condition":["svcd", 0, "60"],
         "decoder":["vfhd", "svcd", 20, 4, false]
      },
      "_volt":{
         "condition":["svcd", 0, "60"],
         "decoder":["vfhd", "svcd", 24, 4, false],
         "post_proc":["/", 1000]
      },
      "tempc":{
         "condition":["svcd", 0, "70"],
         "decoder":["vfhd", "svcd", 6, 4, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "condition":["svcd", 0, "70"],
         "decoder":["vfhd", "svcd", 10, 4, false, false],
         "post_proc":["/", 10]
      },
      "__volt":{
         "condition":["svcd", 0, "70"],
         "decoder":["vfhd", "svcd", 14, 4, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _MBXPRO_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"x_axis\":{\"unit\":\"int\",\"name\":\"x_axis\"},\"y_axis\":{\"unit\":\"int\",\"name\":\"y_axis\"},\"z_axis\":{\"unit\":\"int\",\"name\":\"z_axis\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
   "properties":{
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "x_axis":{
         "unit":"int",
         "name":"x_axis"
      },
      "y_axis":{
         "unit":"int",
         "name":"y_axis"
      },
      "z_axis":{
         "unit":"int",
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