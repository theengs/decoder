#include "common_props.h"

const char* _SE_RHT_json = "{\"brand\":\"Sensor Easy\",\"model\":\"SE RHT\",\"model_id\":\"SE_RHT\",\"tag\":\"01\",\"condition\":[\"name\",\"index\",1,\" RHT \",\"&\",\"uuid\",\"index\",0,\"2a6e\",\"|\",\"uuid\",\"index\",0,\"2a6f\"],\"properties\":{\"tempc\":{\"condition\":[\"servicedata\",\"=\",4],\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",\"=\",2],\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,2,true,true]},\"volt\":{\"condition\":[\"manufacturerdata\",\"=\",10,\"index\",4,\"f2\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false],\"post_proc\":[\"/\",1000]}}}";

/*R""""(
{
   "brand":"Sensor Easy",
   "model":"SE RHT",
   "model_id":"SE_RHT",
   "tag":"01",
   "condition":["name", "index", 1, " RHT ","&", "uuid", "index", 0, "2a6e","|", "uuid", "index", 0, "2a6f"],
   "properties":{
      "tempc":{
         "condition":["servicedata", "=", 4],
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["servicedata", "=", 2],
         "decoder":["value_from_hex_data", "servicedata", 0, 2, true, true]
      },
      "volt":{
         "condition":["manufacturerdata", "=", 10,"index", 4, "f2"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false],
         "post_proc":["/", 1000]
      }
   }
})"""";*/

const char* _SE_RHT_json_props =  _common_BVTH_props;
