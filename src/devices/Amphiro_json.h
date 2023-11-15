const char* _AMPHIRO_json = "{\"brand\":\"Oras\",\"model\":\"Hydractiva Digital\",\"model_id\":\"ADHS\",\"tag\":\"0c01\",\"condition\":[\"manufacturerdata\",\"=\",42,\"index\",0,\"eefa\"],\"properties\":{\"session\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,6,false,false]},\"seconds\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,false,false]},\"litres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,6,false,false],\"post_proc\":[\"/\",2560]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,2,false,false]},\"energy\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,false,false],\"post_proc\":[\"/\",100]}}}";
/*R""""(
{
   "brand":"Oras",
   "model":"Hydractiva Digital",
   "model_id":"ADHS",
   "tag":"0c01",
   "condition":["manufacturerdata", "=", 42, "index", 0, "eefa"],
   "properties":{
      "session":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 6, false, false]
      },
      "seconds":{
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, false, false]
      },
      "litres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 6, false, false],
         "post_proc":["/", 2560]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 2, false, false]
      },
      "energy":{
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4, false, false],
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
