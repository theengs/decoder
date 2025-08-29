#include "common_props.h"

const char* _LYWSD03MMC_json_ATC = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_ATC\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",26,\"ind\",0,\"a4c138\",\"&\",\"uuid\",\"ind\",0,\"181a\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",12,4,false,true],\"pprc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",16,2,false,false]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",18,2,false,false]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",20,4,false,false],\"pprc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"mfhd\",\"svd\",0]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_ATC",
   "tag":"01",
   "cond":["svd", "=", 26, "ind", 0 , "a4c138", "&", "uuid", "ind", 0, "181a"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 12, 4, false, true],
         "pprc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "svd", 16, 2, false, false]
      },
      "batt":{
         "decoder":["vfhd", "svd", 18, 2, false, false]
      },
      "volt":{
         "decoder":["vfhd", "svd", 20, 4, false, false],
         "pprc":["/", 1000]
      },
      "mac":{
         "decoder":["mfhd", "svd", 0]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_PVVX = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",30,\"ind\",6,\"38c1a4\",\"&\",\"uuid\",\"ind\",0,\"181a\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",12,4,true,true],\"pprc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",16,4,true,false],\"pprc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",24,2,false,false]},\"volt\":{\"decoder\":[\"vfhd\",\"svd\",20,4,true,false],\"pprc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"revmfhd\",\"svd\",0]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_PVVX",
   "tag":"01",
   "cond":["svd", "=", 30, "ind", 6 , "38c1a4", "&", "uuid", "ind", 0, "181a"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 12, 4, true, true],
         "pprc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "svd", 16, 4, true, false],
         "pprc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "svd", 24, 2, false, false]
      },
      "volt":{
         "decoder":["vfhd", "svd", 20, 4, true, false],
         "pprc":["/", 1000]
      },
      "mac":{
         "decoder":["revmfhd", "svd", 0]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_PVVX_DECR = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX_DECR\",\"tag\":\"01\",\"cond\":[\"svd\",\"=\",12,\"&\",\"uuid\",\"ind\",0,\"181a\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"svd\",0,4,true,true],\"pprc\":[\"/\",100]},\"hum\":{\"decoder\":[\"vfhd\",\"svd\",4,4,true,false],\"pprc\":[\"/\",100]},\"batt\":{\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_PVVX_DECR",
   "tag":"01",
   "cond":["svd", "=", 12, "&", "uuid", "ind", 0, "181a"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "svd", 0, 4, true, true],
         "pprc":["/", 100]
      },
      "hum":{
         "decoder":["vfhd", "svd", 4, 4, true, false],
         "pprc":["/", 100]
      },
      "batt":{
         "decoder":["vfhd", "svd", 8, 2, false, false]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_PVVX_BTHOME = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX_BTHOME\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",22,\"ind\",0,\"40\",\"|\",\"svd\",\"=\",20,\"ind\",0,\"40\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"ATC\"],\"properties\":{\"packet_1\":{\"cond\":[\"svd\",2,\"00\",\"&\",\"svd\",\"=\",22],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"tempc\":{\"cond\":[\"svd\",10,\"02\",\"&\",\"svd\",\"=\",22],\"decoder\":[\"vfhd\",\"svd\",12,4,true,true],\"pprc\":[\"/\",100]},\"hum\":{\"cond\":[\"svd\",16,\"03\",\"&\",\"svd\",\"=\",22],\"decoder\":[\"vfhd\",\"svd\",18,4,true,false],\"pprc\":[\"/\",100]},\"batt\":{\"cond\":[\"svd\",6,\"01\",\"&\",\"svd\",\"=\",22],\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]},\"packet_2\":{\"cond\":[\"svd\",2,\"00\",\"&\",\"svd\",\"=\",20],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"volt\":{\"cond\":[\"svd\",6,\"0c\",\"&\",\"svd\",\"=\",20],\"decoder\":[\"vfhd\",\"svd\",8,4,true,false],\"pprc\":[\"/\",1000]},\"power\":{\"cond\":[\"svd\",12,\"10\",\"&\",\"svd\",\"=\",20],\"decoder\":[\"vfhd\",\"svd\",14,2,false,false]},\"open\":{\"cond\":[\"svd\",16,\"11\",\"&\",\"svd\",\"=\",20],\"decoder\":[\"vfhd\",\"svd\",18,2,false,false]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_PVVX_BTHOME",
   "tag":"0102",
   "cond":["svd", "=", 22, "ind", 0, "40", "|", "svd", "=", 20, "ind", 0, "40", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "ATC"],
   "properties":{
      "packet_1":{
         "cond":["svd", 2, "00", "&", "svd", "=", 22],
         "decoder":["vfhd", "svd", 4, 2, false, false]
      },
      "tempc":{
         "cond":["svd", 10, "02", "&", "svd", "=", 22],
         "decoder":["vfhd", "svd", 12, 4, true, true],
         "pprc":["/", 100]
      },
      "hum":{
         "cond":["svd", 16, "03", "&", "svd", "=", 22],
         "decoder":["vfhd", "svd", 18, 4, true, false],
         "pprc":["/", 100]
      },
      "batt":{
         "cond":["svd", 6, "01", "&", "svd", "=", 22],
         "decoder":["vfhd", "svd", 8, 2, false, false]
      },
      "packet_2":{
         "cond":["svd", 2, "00", "&", "svd", "=", 20],
         "decoder":["vfhd", "svd", 4, 2, false, false]
      },
      "volt":{
         "cond":["svd", 6, "0c", "&", "svd", "=", 20],
         "decoder":["vfhd", "svd", 8, 4, true, false],
         "pprc":["/", 1000]
      },
      "power":{
         "cond":["svd", 12, "10", "&", "svd", "=", 20],
         "decoder":["vfhd", "svd", 14, 2, false, false]
      },
      "open":{
         "cond":["svd", 16, "11", "&", "svd", "=", 20],
         "decoder":["vfhd", "svd", 18, 2, false, false]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_props = _common_BVTH_props;

const char* _LYWSD03MMC_BTHOME_json_props = "{\"properties\":{\"packet_1\":{\"unit\":\"int\",\"name\":\"packet id\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"packet_2\":{\"unit\":\"int\",\"name\":\"packet id\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"},\"power\":{\"unit\":\"int\",\"name\":\"power\"},\"open\":{\"unit\":\"int\",\"name\":\"open\"}}}";
/*R""""(
{
   "properties":{
      "packet_1":{
         "unit":"int",
         "name":"packet id"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "packet_2":{
         "unit":"int",
         "name":"packet id"
      },
      "volt": {
         "unit": "V",
         "name": "voltage"
      },
      "power": {
         "unit": "int",
         "name": "power"
      },
      "open": {
         "unit": "int",
         "name": "open"
      }
   }
})"""";*/
