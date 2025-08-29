const char* _CGDN1_json = "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"tag\":\"0f\",\"cond\":[\"servicedata\",\"=\",48,\"index\",2,\"0e\",\"|\",\"servicedata\",\"=\",48,\"index\",2,\"24\",\"&\",\"uuid\",\"index\",0,\"fdcd\"],\"properties\":{\"tempc\":{\"decoder\":[\"vfhd\",\"servicedata\",20,4,true,false],\"post_proc\":[\"/\",10]},\"hum\":{\"decoder\":[\"vfhd\",\"servicedata\",24,4,true,false],\"post_proc\":[\"/\",10]},\"pm25\":{\"decoder\":[\"vfhd\",\"servicedata\",32,4,true,false]},\"pm10\":{\"decoder\":[\"vfhd\",\"servicedata\",36,4,true,false]},\"co2\":{\"decoder\":[\"vfhd\",\"servicedata\",44,4,true,false]}}}";
/*R""""(
{
   "brand":"Qingping",
   "model":"Air Monitor Lite",
   "model_id":"CGDN1",
   "tag":"0f",
   "cond":["servicedata", "=", 48, "index", 2, "0e", "|", "servicedata", "=", 48, "index", 2, "24", "&", "uuid", "index", 0, "fdcd"],
   "properties":{
      "tempc":{
         "decoder":["vfhd", "servicedata", 20, 4, true, false],
         "post_proc":["/", 10]
      },
      "hum":{
         "decoder":["vfhd", "servicedata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
      "pm25":{
         "decoder":["vfhd", "servicedata", 32, 4, true, false]
      },
      "pm10":{
         "decoder":["vfhd", "servicedata", 36, 4, true, false]
      },
      "co2":{
         "decoder":["vfhd", "servicedata", 44, 4, true, false]
      }
   }
})"""";*/

const char* _CGDN1_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"pm25\":{\"unit\":\"μg/m³\",\"name\":\"pm25\"},\"pm10\":{\"unit\":\"μg/m³\",\"name\":\"pm10\"},\"co2\":{\"unit\":\"ppm\",\"name\":\"carbon_dioxide\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "pm25":{
         "unit":"μg/m³",
         "name":"pm25"
      },
      "pm10":{
         "unit":"μg/m³",
         "name":"pm10"
      },
      "co2":{
         "unit":"ppm",
         "name":"carbon_dioxide"
      }
   }
})"""";*/
