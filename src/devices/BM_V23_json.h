#include "common_props.h"

const char* _BM_V23_json = "{\"brand\":\"BlueMaestro\",\"model\":\"TempoDisc\",\"model_id\":\"BM_V23\",\"condition\":[\"mfrd\",\"=\",32,\"indx\",0,\"3301\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"mfrd\",16,4],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"mfrd\",20,4],\"post_proc\":[\"/\",10]},\"dp\":{\"decoder\":[\"vfhd\",\"mfrd\",24,4],\"post_proc\":[\"/\",10]},\"volt\":{\"decoder\":[\"vfhd\",\"mfrd\",28,4],\"post_proc\":[\"/\",100]}}}";

/*R""""(
{
   "brand":"BlueMaestro",
   "model":"TempoDisc",
   "model_id":"BM_V23",
   "condition":["mfrd","=",32, "indx", 0, "3301"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "mfrd", 16, 4],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "mfrd", 20, 4],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "decoder":["vfhd", "mfrd", 24, 4],
         "post_proc":["/", 10]
      },
      "volt":{
         "decoder":["vfhd", "mfrd", 28, 4],
         "post_proc":["/", 100]
      }
   }
})"""";*/

const char* _BM_V23_json_props = "{\"properties\":{\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"dp\":{\"unit\":\"°C\",\"name\":\"dueppoint\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"}}}";
/*R""""(
{
	"properties": {
		"volt": {
			"unit": "V",
			"name": "voltage"
		},
		"tempc": {
			"unit": "°C",
			"name": "temperature"
		},
		"dp": {
			"unit": "°C",
			"name": "duepoint"
		},
		"hum": {
			"unit": "%",
			"name": "humidity"
		}
	}
})"""";*/
