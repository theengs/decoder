const char* _VICTRON_BAT_MON_json = "{\"brand\":\"Victron Energy\",\"model\":\"Bat Mon\",\"model_id\":\"VICTRON_BAT_MON\",\"tag\":\"0c48\",\"condition\":[\"manufacturerdata\",\"=\",50,\"index\",0,\"e10211\",\"&\",\"manufacturerdata\",\"index\",8,\"83a3\",\"&\",\"manufacturerdata\",\"index\",12,\"02ffff\"],\"properties\":{\"ttg\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",80,16,false]},\"volt\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",96,16,true],\"post_proc\":[\"/\",100]},\"alarm_reason\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",112,16,false]},\"aux_voltage\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",128,16,true],\"post_proc\":[\"/\",100]},\"aux_input\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",144,2,false],\"lookup\":[\"00\",\"auxiliary voltage\",\"01\",\"mid-point voltage\",\"02\",\"battery temperature\",\"03\",\"none\"]},\"current\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",146,22,true],\"post_proc\":[\"/\",1000]},\"consumed_ah\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",168,20,true],\"post_proc\":[\"/\",-10]},\"soc\":{\"decoder\":[\"value_from_bit_data\",\"manufacturerdata\",188,10,false],\"post_proc\":[\"/\",10]}}}";
/*R""""(
{
   "brand":"Victron Energy",
   "model":"Bat Mon",
   "model_id":"VICTRON_BAT_MON",
   "tag":"0c48",
   "condition":["manufacturerdata", "=", 50, "index", 0, "e10211", "&", "manufacturerdata", "index", 8, "83a3", "&", "manufacturerdata", "index", 12, "02ffff"],
   "properties":{
      "ttg":{
         "decoder":["value_from_bit_data", "manufacturerdata", 80, 16, false]
      },
      "volt":{
         "decoder":["value_from_bit_data", "manufacturerdata", 96, 16, true],
         "post_proc":["/", 100]
      },
      "alarm_reason":{
         "decoder":["value_from_bit_data", "manufacturerdata", 112, 16, false]
      },
      "aux_voltage":{
         "decoder":["value_from_bit_data", "manufacturerdata", 128, 16, true],
         "post_proc":["/", 100]
      },
      "aux_input":{
         "decoder":["value_from_bit_data", "manufacturerdata", 144, 2, false],
         "lookup":["00", "auxiliary voltage",
                   "01", "mid-point voltage",
                   "02", "battery temperature",
                   "03", "none"]
      },
      "current":{
         "decoder":["value_from_bit_data", "manufacturerdata", 146, 22, true],
         "post_proc":["/", 1000]
      },
      "consumed_ah":{
         "decoder":["value_from_bit_data", "manufacturerdata", 168, 20, true],
         "post_proc":["/", -10]
      },
      "soc":{
         "decoder":["value_from_bit_data", "manufacturerdata", 188, 10, false],
         "post_proc":["/", 10]
      }
   }
})"""";*/

const char* _VICTRON_BAT_MON_json_props = "{\"properties\":{\"ttg\":{\"unit\":\"min\",\"name\":\"time to go\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"alarm_reason\":{\"unit\":\"int\",\"name\":\"alarm reason\"},\"aux_voltage\":{\"unit\":\"V\",\"name\":\"auxiliary voltage\"},\"aux_input\":{\"unit\":\"string\",\"name\":\"aux input\"},\"current\":{\"unit\":\"A\",\"name\":\"current\"},\"consumed_ah\":{\"unit\":\"Ah\",\"name\":\"consumed ampere hours\"},\"soc\":{\"unit\":\"%\",\"name\":\"state of charge\"}}}";
/*R""""(
{
   "properties":{
      "ttg":{
         "unit":"min",
         "name":"time to go"
      },
      "volt":{
         "unit":"V",
         "name":"voltage"
      },
      "alarm_reason":{
         "unit":"int",
         "name":"alarm reason"
      },
      "aux_voltage":{
         "unit":"V",
         "name":"auxiliary voltage"
      },
      "aux_input":{
         "unit":"string",
         "name":"aux input"
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
      }
   }
})"""";*/
