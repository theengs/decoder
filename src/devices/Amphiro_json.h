const char* _AMPHIRO_json = "{\"brand\":\"Oras\",\"model\":\"Hydractiva Digital\",\"model_id\":\"ADHS\",\"tag\":\"0c01\",\"cond\":[\"manufacturerdata\",\"=\",42,\"index\",0,\"eefa\"],\"properties\":{\"session\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",4,6,false,false]},\"seconds\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",10,4,false,false]},\"litres\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",20,6,false,false],\"post_proc\":[\"/\",2560]},\"tempc\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",26,2,false,false]},\"energy\":{\"decoder\":[\"vfhd\",\"manufacturerdata\",28,4,false,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Oras",
   "model":"Hydractiva Digital",
   "model_id":"ADHS",
   "tag":"0c01",
   "cond":["manufacturerdata", "=", 42, "index", 0, "eefa"],
   "properties":{
      "session":{
         "decoder":["vfhd", "manufacturerdata", 4, 6, false, false]
      },
      "seconds":{
         "decoder":["vfhd", "manufacturerdata", 10, 4, false, false]
      },
      "litres":{
         "decoder":["vfhd", "manufacturerdata", 20, 6, false, false],
         "post_proc":["/", 2560]
      },
      "tempc":{
         "decoder":["vfhd", "manufacturerdata", 26, 2, false, false]
      },
      "energy":{
        "decoder":["vfhd", "manufacturerdata", 28, 4, false, false],
        "post_proc":["/", 100]
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
