const char* _THB1_json = "{\"brand\":\"Tuya\",\"model\":\"THB1 Thermo-Hygrometer\",\"model_id\":\"THB1\",\"tag\":\"0102\",\"cond\":[\"svd\",\"=\",28,\"ind\",0,\"40\",\"&\",\"uuid\",\"ind\",0,\"fcd2\",\"&\",\"name\",\"ind\",0,\"THB1\"],\"properties\":{\"packet\":{\"cond\":[\"svd\",2,\"00\"],\"decoder\":[\"vfhd\",\"svd\",4,2,false,false]},\"tempc\":{\"cond\":[\"svd\",10,\"02\"],\"decoder\":[\"vfhd\",\"svd\",12,4,true,true],\"pprc\":[\"/\",100]},\"hum\":{\"cond\":[\"svd\",16,\"03\"],\"decoder\":[\"vfhd\",\"svd\",18,4,true,false],\"pprc\":[\"/\",100]},\"batt\":{\"cond\":[\"svd\",6,\"01\"],\"decoder\":[\"vfhd\",\"svd\",8,2,false,false]},\"volt\":{\"cond\":[\"svd\",22,\"0c\"],\"decoder\":[\"vfhd\",\"svd\",24,4,true,false],\"pprc\":[\"/\",1000]}}}";
/* R""""(
{
   "brand":"Tuya",
   "model":"THB1 Thermo-Hygrometer",
   "model_id":"THB1",
   "tag":"0102",
   "cond":["svd", "=", 28, "ind", 0, "40", "&", "uuid", "ind", 0, "fcd2", "&", "name", "ind", 0, "THB1"],
   "properties":{
      "packet":{
         "cond":["svd", 2, "00"],
         "decoder":["vfhd", "svd", 4, 2, false, false]
      },
      "tempc":{
         "cond":["svd", 10, "02"],
         "decoder":["vfhd", "svd", 12, 4, true, true],
         "pprc":["/", 100]
      },
      "hum":{
         "cond":["svd", 16, "03"],
         "decoder":["vfhd", "svd", 18, 4, true, false],
         "pprc":["/", 100]
      },
      "batt":{
         "cond":["svd", 6, "01"],
         "decoder":["vfhd", "svd", 8, 2, false, false]
      },
      "volt":{
         "cond":["svd", 22, "0c"],
         "decoder":["vfhd", "svd", 24, 4, true, false],
         "pprc":["/", 1000]
      }
   }
})"""";*/

const char* _THB1_json_props = "{\"properties\":{\"packet\":{\"unit\":\"int\",\"name\":\"packet id\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"volt\":{\"unit\":\"V\",\"name\":\"voltage\"}}}";
/*R""""(
{
   "properties":{
      "packet":{
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
      "volt": {
         "unit": "V",
         "name": "voltage"
      }
   }
})"""";*/
