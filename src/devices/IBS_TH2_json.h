#ifndef PROGMEM
#  define PROGMEM
#endif

const char _IBS_TH2_json[] PROGMEM = "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH2/P01B\",\"condition\":[\"name\",\"index\",0,\"tps\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",0,4,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"manufacturerdata\",4,\"!\",\"ffff\",\"&\",\"manufacturerdata\",4,\"!\",\"0000\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,2,false,false]}}}";

/*R""""(
{
   "brand":"Inkbird",
   "model":"TH Sensor",
   "model_id":"IBS-TH2/P01B",
   "condition":["name", "index", 0, "tps"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 0, 4, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["manufacturerdata", 4, "!", "ffff", "&", "manufacturerdata", 4, "!", "0000"],
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""";*/

const char* _IBS_TH2_json_props = _common_BTH_props;
