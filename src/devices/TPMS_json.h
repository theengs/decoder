const char* _TPMS_json = "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"condition\":[\"manufacturerdata\",\"=\",36,\"&\",\"name\",\"index\",0,\"TPMS\"],\"properties\":{\"count\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",5,1,false],\"post_proc\":[\"+\",1]},\"pres\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,8,true],\"post_proc\":[\"/\",1000]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,8,true],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,true]},\"alarm\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",35,1,false],\"is_bool\":1}}}";
/*R""""(
{
   "brand":"GENERIC",
   "model":"TPMS",
   "model_id":"TPMS",
   "condition":["manufacturerdata", "=", 36, "&", "name", "index", 0, "TPMS"],
   "properties":{
      "count":{
         "decoder":["value_from_hex_data", "manufacturerdata", 5, 1, false],
         "post_proc":["+", 1]
      },
      "pres":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 8, true],
         "post_proc":["/", 1000]
      },
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 8, true],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 32, 2, true]
      },
      "alarm":{
         "decoder":["value_from_hex_data", "manufacturerdata", 35, 1, false],
         "is_bool":1
      }
   }
})"""";*/

const char* _TPMS_json_props = "{\"properties\":{\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"kPa\",\"name\":\"temperature\"},\"count\":{\"unit\":\"int\",\"name\":\"count\"},\"alarm\":{\"unit\":\"status\",\"name\":\"alarm\"}}}";
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
         "unit":"kPa",
         "name":"temperature"
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