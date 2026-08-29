const char* _VICTSBS_json = "{\"brand\":\"Victron Energy\",\"model\":\"Battery Monitor/Smart Battery Sense/SmartShunt\",\"model_id\":\"VICTSBS\",\"tag\":\"0c48\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"e10211\",\"&\",\"manufacturerdata\",\"index\",12,\"02ffff\"],\"properties\":{\"ttg\":{\"condition\":[\"manufacturerdata\",20,\"!\",\"ffff\"],\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",80,16,false]},\"volt\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",96,16,true],\"post_proc\":[\"/\",100]},\"volt_aux\":{\"condition\":[\"manufacturerdata\",37,\"bit\",0,0,\"&\",\"manufacturerdata\",37,\"bit\",1,0],\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",128,16,true],\"post_proc\":[\"/\",100]},\"volt_mid\":{\"condition\":[\"manufacturerdata\",37,\"bit\",0,1,\"&\",\"manufacturerdata\",37,\"bit\",1,0],\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",128,16,true],\"post_proc\":[\"/\",100]},\"tempc\":{\"condition\":[\"manufacturerdata\",37,\"bit\",0,0,\"&\",\"manufacturerdata\",37,\"bit\",1,1],\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",128,16,true],\"post_proc\":[\"-\",27315,\"/\",100]},\"current\":{\"condition\":[\"manufacturerdata\",38,\"!\",\"ff\"],\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",146,22,true],\"post_proc\":[\"/\",1000]},\"consumed_ah\":{\"condition\":[\"manufacturerdata\",41,\"!\",\"fffff\"],\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",168,20,true],\"post_proc\":[\"/\",-10]},\"soc\":{\"condition\":[\"manufacturerdata\",46,\"!\",\"fff\"],\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",188,10,false],\"post_proc\":[\"/\",10]},\"alarm_reason\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Battery Monitor/Smart Battery Sense/SmartShunt",
   "model_id":"VICTSBS",
   "tag":"0c48",
   "condition":["manufacturerdata", "=", 50, "index", 0, "e10211", "&", "manufacturerdata", "index", 12, "02ffff"],
   "properties":{
      "ttg":{
         "condition":["manufacturerdata", 20, "!", "ffff"],
         "decoder":["value_from_bit_data", "manufacturerdata", 80, 16, false]
      },
      "volt":{
         "decoder":["value_from_bit_data", "manufacturerdata", 96, 16, true],
         "post_proc":["/", 100]
      },
      "volt_aux":{
         "condition":["manufacturerdata", 37, "bit", 0, 0, "&", "manufacturerdata", 37, "bit", 1, 0],
         "decoder":["value_from_bit_data", "manufacturerdata", 128, 16, true],
         "post_proc":["/", 100]
      },
      "volt_mid":{
         "condition":["manufacturerdata", 37, "bit", 0, 1, "&", "manufacturerdata", 37, "bit", 1, 0],
         "decoder":["value_from_bit_data", "manufacturerdata", 128, 16, true],
         "post_proc":["/", 100]
      },
      "tempc":{
         "condition":["manufacturerdata", 37, "bit", 0, 0, "&", "manufacturerdata", 37, "bit", 1, 1],
         "decoder":["value_from_bit_data", "manufacturerdata", 128, 16, true],
         "post_proc":["-", 27315, "/", 100]
      },
      "current":{
         "condition":["manufacturerdata", 38, "!", "ff"],
         "decoder":["value_from_bit_data", "manufacturerdata", 146, 22, true],
         "post_proc":["/", 1000]
      },
      "consumed_ah":{
         "condition":["manufacturerdata", 41, "!", "fffff"],
         "decoder":["value_from_bit_data", "manufacturerdata", 168, 20, true],
         "post_proc":["/", -10]
      },
      "soc":{
         "condition":["manufacturerdata", 46, "!", "fff"],
         "decoder":["value_from_bit_data", "manufacturerdata", 188, 10, false],
         "post_proc":["/", 10]
      },
      "alarm_reason":{
        "decoder":["value_from_hex_data", "manufacturerdata", 28, 4]
      }
   }
})"""";*/

const char* _VICTSBS_json_props = "{\"properties\":{\"ttg\":{\"unit\":\"min\",\"name\":\"duration\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"volt_aux\":{\"unit\":\"V\",\"name\":\"voltage\"},\"volt_mid\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"current\":{\"unit\":\"A\",\"name\":\"current\"},\"consumed_ah\":{\"unit\":\"Ah\",\"name\":\"consumed ampere hours\"},\"soc\":{\"unit\":\"%\",\"name\":\"state of charge\"},\"alarm_reason\":{\"unit\":\"int\",\"name\":\"alarm reason\"}}}";
/*R""""(
{
   "properties":{
      "ttg":{
         "unit":"min",
         "name":"duration"
      },
      "volt": {
         "unit": "V",
         "name": "voltage"
      },
      "volt_aux":{
         "unit":"V",
         "name":"voltage"
      },
      "volt_mid":{
         "unit":"V",
         "name":"voltage"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "current":{
         "unit":"A",
         "name":"current"
      },
      "consumed_ah":{
         "unit":"Ah",
         "name":"consumed ampere hours"
      },
      "soc":{
         "unit":"%",
         "name":"state of charge"
      },
      "alarm_reason":{
         "unit":"int",
         "name":"alarm reason"
      }
   }
})"""";*/
