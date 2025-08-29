const char* _AMPHIRO_json = "{\"brand\":\"Oras\",\"model\":\"Hydractiva Digital\",\"model_id\":\"ADHS\",\"tag\":\"0c01\",\"cond\":[\"mfd\",\"=\",42,\"ind\",0,\"eefa\"],\"properties\":{\"session\":{\"decoder\":[\"vfhd\",\"mfd\",4,6,false,false]},\"seconds\":{\"decoder\":[\"vfhd\",\"mfd\",10,4,false,false]},\"litres\":{\"decoder\":[\"vfhd\",\"mfd\",20,6,false,false],\"pprc\":[\"/\",2560]},\"tempc\":{\"decoder\":[\"vfhd\",\"mfd\",26,2,false,false]},\"energy\":{\"decoder\":[\"vfhd\",\"mfd\",28,4,false,false],\"pprc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Oras",
   "model":"Hydractiva Digital",
   "model_id":"ADHS",
   "tag":"0c01",
   "cond":["mfd", "=", 42, "ind", 0, "eefa"],
   "properties":{
      "session":{
         "decoder":["vfhd", "mfd", 4, 6, false, false]
      },
      "seconds":{
         "decoder":["vfhd", "mfd", 10, 4, false, false]
      },
      "litres":{
         "decoder":["vfhd", "mfd", 20, 6, false, false],
         "pprc":["/", 2560]
      },
      "tempc":{
         "decoder":["vfhd", "mfd", 26, 2, false, false]
      },
      "energy":{
        "decoder":["vfhd", "mfd", 28, 4, false, false],
        "pprc":["/", 100]
      }
   }
})"""";*/

const char* _AMPHIRO_json_props = "{\"properties\":{\"session\":{\"unit\":\"int\",\"name\":\"session\"},\"seconds\":{\"unit\":\"s\",\"name\":\"duration\"},\"litres\":{\"unit\":\"L\",\"name\":\"water\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"energy\":{\"unit\":\"kWh\",\"name\":\"energy\"}}}";
/*R""""(
{
   "properties":{
      "session":{
         "unit":"int",
         "name":"session"
      },
      "seconds":{
         "unit":"s",
         "name":"duration"
      },
      "litres":{
         "unit":"L",
         "name":"water"
      },
      "tempc": {
         "unit": "°C",
         "name": "temperature"
      },  
      "energy":{
         "unit":"kWh",
         "name":"energy"
      }
   }
})"""";*/
