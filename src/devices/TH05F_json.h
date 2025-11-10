// Decode information from Tuya TH05F (internal TH05Y - https://pvvx.github.io/TH05F/) running pvvx v2.1 firmware

const char* _TH05F_json = "{\"brand\":\"Tuya\",\"model\":\"TH05F Thermo-Hygrometer\",\"model_id\":\"TH05F\",\"tag\":\"0102\",\"condition\":[\"uuid\",\"index\",0,\"fcd2\",\"&\",\"name\",\"contain\",\"TH05F\"],\"properties\":{\"packet\":{\"condition\":[\"servicedata\",2,\"00\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",4,2,false,false]},\"tempc\":{\"condition\":[\"servicedata\",10,\"02\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",12,4,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"servicedata\",16,\"03\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",18,4,true,false],\"post_proc\":[\"/\",100]},\"batt\":{\"condition\":[\"servicedata\",6,\"01\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",8,2,false,false]},\"volt\":{\"condition\":[\"servicedata\",22,\"0c\"],\"decoder\":[\"value_from_hex_data\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",1000]}}}";
/*R""""(
{
  "brand": "Tuya",
  "model": "TH05F Thermo-Hygrometer",
  "model_id": "TH05F",
  "tag": "0102",
  "condition": ["uuid", "index", 0, "fcd2", "&","name", "contain", "TH05F"],
   "properties":{
      "packet":{
         "condition":["servicedata", 2, "00"],
         "decoder":["value_from_hex_data", "servicedata", 4, 2, false, false]
      },
      "tempc":{
         "condition":["servicedata", 10, "02"],
         "decoder":["value_from_hex_data", "servicedata", 12, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["servicedata", 16, "03"],
         "decoder":["value_from_hex_data", "servicedata", 18, 4, true, false],
         "post_proc":["/", 100]
      },
      "batt":{
         "condition":["servicedata", 6, "01"],
         "decoder":["value_from_hex_data", "servicedata", 8, 2, false, false]
      },
      "volt":{
         "condition":["servicedata", 22, "0c"],
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":["/", 1000]
      }
  }
}
)"""";*/


const char* _TH05F_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
/*R""""(
{
  "properties": {
    "tempc": { "unit": "°C", "name": "temperature" },
    "hum":   { "unit": "%",  "name": "humidity" },
    "volt":  { "unit": "V",  "name": "voltage" }
  }
}
)"""";*/
