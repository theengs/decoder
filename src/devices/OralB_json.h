const char* _OralB_json = "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"tag\":\"0b\",\"condition\":[\"manufacturerdata\",\">=\",22,\"index\",0,\"dc00\"],\"properties\":{\"state\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",10,2],\"lookup\":[\"01\",\"initialising\",\"02\",\"idle\",\"03\",\"running\",\"04\",\"charging\",\"73\",\"sleeping\"]},\"mode\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",18,2],\"lookup\":[\"00\",\"off\",\"01\",\"daily clean\",\"02\",\"sensitive\",\"03\",\"massage\",\"04\",\"whitening\",\"05\",\"deep clean\",\"06\",\"tongue cleaning\",\"07\",\"turbo\"]},\"sector\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",20,2],\"lookup\":[\"01\",\"sector 1\",\"02\",\"sector 2\",\"03\",\"sector 3\",\"04\",\"sector 4\",\"05\",\"sector 5\",\"06\",\"sector 6\",\"07\",\"sector 7\",\"08\",\"sector 8\"]},\"pressure\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,2,false,false]},\"duration\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false],\"post_proc\":[\"*\",60,\"+\",\".cal\"]}}}";
/*R""""(
{
   "brand":"Oral-B",
   "model":"BT Toothbrush",
   "model_id":"ORALB_BT",
   "tag":"0b",
   "condition":["manufacturerdata", ">=", 22, "index", 0, "dc00"],
   "properties":{
      "state":{
        "decoder":["string_from_hex_data", "manufacturerdata", 10, 2],
         "lookup":["01", "initialising", 
                   "02", "idle", 
                   "03", "running", 
                   "04", "charging", 
                   "73", "sleeping"]
      },
      "mode":{
         "decoder":["string_from_hex_data", "manufacturerdata", 18, 2],
         "lookup":["00", "off", 
                   "01", "daily clean", 
                   "02", "sensitive", 
                   "03", "massage", 
                   "04", "whitening", 
                   "05", "deep clean", 
                   "06", "tongue cleaning", 
                   "07", "turbo"]
      },
      "sector":{
        "decoder":["string_from_hex_data", "manufacturerdata", 20, 2],
        "lookup":["01", "sector 1", 
                  "02", "sector 2", 
                  "03", "sector 3", 
                  "04", "sector 4", 
                  "05", "sector 5", 
                  "06", "sector 6", 
                  "07", "sector 7", 
                  "08", "sector 8"]
      },
      "pressure":{
         "decoder":["value_from_hex_data", "manufacturerdata", 12, 2, false, false]
      },
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 2, false, false]
      },
      "duration":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false],
         "post_proc":["*", 60, "+", ".cal"]
      }
   }
})"""";*/

const char* _OralB_json_props = "{\"properties\":{\"state\":{\"unit\":\"string\",\"name\":\"state\"},\"mode\":{\"unit\":\"string\",\"name\":\"mode\"},\"sector\":{\"unit\":\"string\",\"name\":\"sector\"},\"pressure\":{\"unit\":\"int\",\"name\":\"Pressure\"},\"duration\":{\"unit\":\"s\",\"name\":\"duration\"}}}";
/*R""""(
{
   "properties":{
      "state":{
         "unit":"string",
         "name":"state"
      },
      "mode":{
         "unit":"string",
         "name":"mode"
      },
      "sector":{
         "unit":"string",
         "name":"sector"
      },
      "pressure":{
         "unit":"int",
         "name":"Pressure"
      },
      "duration":{
         "unit":"s",
         "name":"duration"
      }
   }
})"""";*/
