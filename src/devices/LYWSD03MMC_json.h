#include "common_props.h"

const char* _LYWSD03MMC_json_ATC = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_ATC\",\"tag\":\"01\",\"condition\":[\"servicedata\",\"=\",26,\"index\",0,\"a4c138\",\"&\",\"uuid\",\"index\",0,\"181a\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,false,true],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,2,false,false]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,2,false,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,false,false],\"post_proc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"mac_from_hex_data\",\"servicedata\",0]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_ATC",
   "tag":"01",
   "condition":["servicedata", "=", 26, "index", 0 , "a4c138", "&", "uuid", "index", 0, "181a"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, false, true],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 2, false, false]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 18, 2, false, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, false, false],
         "post_proc":["/", 1000]
      },
      "mac":{
         "decoder":["mac_from_hex_data", "servicedata", 0]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_PVVX = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"tag\":\"01\",\"condition\":[\"servicedata\",\"=\",30,\"index\",6,\"38c1a4\",\"&\",\"uuid\",\"index\",0,\"181a\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",16,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,2,false,false]},\"volt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",20,4,true,false],\"post_proc\":[\"/\",1000]},\"mac\":{\"decoder\":[\"revmac_from_hex_data\",\"servicedata\",0]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_PVVX",
   "tag":"01",
   "condition":["servicedata", "=", 30, "index", 6 , "38c1a4", "&", "uuid", "index", 0, "181a"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 16, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 24, 2, false, false]
      },
      "volt":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true, false],
         "post_proc":["/", 1000]
      },
      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 0]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_PVVX_DECR = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX_DECR\",\"tag\":\"01\",\"condition\":[\"servicedata\",\"=\",12,\"&\",\"uuid\",\"index\",0,\"181a\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",0,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_PVVX_DECR",
   "tag":"01",
   "condition":["servicedata", "=", 12, "&", "uuid", "index", 0, "181a"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 4, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      }
   }
})"""";*/

const char* _LYWSD03MMC_json_PVVX_BTHOME = "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX_BTHOME\",\"tag\":\"0102\",\"condition\":[\"servicedata\",\"=\",22,\"index\",0,\"40\",\"|\",\"servicedata\",\"=\",20,\"index\",0,\"40\",\"&\",\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"index\",0,\"ATC\"],\"properties\":{\"packet_1\":{\"condition\":[\"servicedata\",2,\"00\",\"&\",\"servicedata\",\"=\",22],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"tempc\":{\"condition\":[\"servicedata\",10,\"02\",\"&\",\"servicedata\",\"=\",22],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",16,\"03\",\"&\",\"servicedata\",\"=\",22],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\",\"&\",\"servicedata\",\"=\",22],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"packet_2\":{\"condition\":[\"servicedata\",2,\"00\",\"&\",\"servicedata\",\"=\",20],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"volt\":{\"condition\":[\"servicedata\",6,\"0c\",\"&\",\"servicedata\",\"=\",20],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,4,true,false],\"post_proc\":[\"/\",1000]},\"power\":{\"condition\":[\"servicedata\",12,\"10\",\"&\",\"servicedata\",\"=\",20],\"decoder\":[\"value_from_hex_data\",\"servicedata\",14,2,false,false]},\"open\":{\"condition\":[\"servicedata\",16,\"11\",\"&\",\"servicedata\",\"=\",20],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,2,false,false]}}}";
/* R""""(
{
   "brand":"Xiaomi",
   "model":"TH Sensor",
   "model_id":"LYWSD03MMC/MJWSD05MMC_PVVX_BTHOME",
   "tag":"0102",
   "condition":["servicedata", "=", 22, "index", 0, "40", "|", "servicedata", "=", 20, "index", 0, "40", "&", "uuid", "index", 0, "fcd2", "&", "name", "index", 0, "ATC"],
   "properties":{
      "packet_1":{
         "condition":["servicedata", 2, "00", "&", "servicedata", "=", 22],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "tempc":{
         "condition":["servicedata", 10, "02", "&", "servicedata", "=", 22],
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["servicedata", 16, "03", "&", "servicedata", "=", 22],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "condition":["servicedata", 6, "01", "&", "servicedata", "=", 22],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "packet_2":{
         "condition":["servicedata", 2, "00", "&", "servicedata", "=", 20],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "volt":{
         "condition":["servicedata", 6, "0c", "&", "servicedata", "=", 20],
         "decoder":["value_from_hex_data", "servicedata", 8, 4, true, false],
         "post_proc":["/", 1000]
      },
      "power":{
         "condition":["servicedata", 12, "10", "&", "servicedata", "=", 20],
         "decoder":["value_from_hex_data", "servicedata", 14, 2, false, false]
      },
      "open":{
         "condition":["servicedata", 16, "11", "&", "servicedata", "=", 20],
         "decoder":["value_from_hex_data", "servicedata", 18, 2, false, false]
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
