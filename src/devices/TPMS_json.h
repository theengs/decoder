const char* _TPMS_json = "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",36,\"&\",\"manufacturerdata\",\"mac@index\",4],\"properties\":{\"count\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",5,1,false],\"post_proc\":[\"+\",1]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,8,true],\"post_proc\":[\"/\",100000]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,8,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,true]},\"alarm\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",35,0,false,true]}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"TPMS",
   "model_id":"TPMS",
   "cidc":false,
   "condition":["manufacturerdata", "=", 36, "&", "manufacturerdata", "mac@index", 4],
   "properties":{
      "count":{
         "decoder":["value_from_hex_data", "manufacturerdata", 5, 1, false],
         "post_proc":["+", 1]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 8, true],
         "post_proc":["/", 100000]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 8, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 2, true]
      },
      "alarm":{
         "decoder":["bit_static_value", "manufacturerdata", 35, 0, false, true]
      }
   }
})"""";*/

const char* _TPMS_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"bar\",\"name\":\"pressure\"},\"count\":{\"unit\":\"int\",\"name\":\"count\"},\"alarm\":{\"unit\":\"status\",\"name\":\"alarm\"}}}";
/*R""""(
{
   "properties":{
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "pres":{
         "unit":"bar",
         "name":"pressure"
      },
      "count":{
         "unit":"int",
         "name":"count"
      },
      "alarm":{
         "unit":"status",
         "name":"alarm"
      }
   }
})"""";*/
