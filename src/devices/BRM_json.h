// Based on product doc https://doc.mybroodminder.com/87_physics_and_tech_stuff/
// Hive scale support: _BRM_json_W, BRMW_json_W3, _BRM_json_W5, _BRM_json_XLR 
// Temp support: _BRM_json_TH, _BRM_json_TH2, _BRM_json_T, _BRMW_json_TH3
const char* _BRM_json_W = "{\"brand\":\"BroodMinder\",\"model\":\"W Half-Hive Scale\",\"model_id\":\"BRM-43\",\"tag\":\"0500\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"2B\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"/\",10813400]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,false,true],\"post_proc\":[\"<\",\"8\"]},\"temp_rt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,true],\"post_proc\":[\"+\",\".cal\",\"-\",5000,\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,true]},\"wt_t\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",42,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_l\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_r\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]}}}";

/*R""""(
{
  "brand":"BroodMinder",
  "model":"W Half-Hive Scale",
  "model_id":"BRM-43",
  "tag":"0500",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"2B"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["/",10813400]
      },
     ".cal":{
       "decoder":["value_from_hex_data","manufacturerdata",22,2,false,true],
       "post_proc":["<","8"]
     }, 
     "temp_rt":{
       "decoder":["value_from_hex_data","manufacturerdata",10,2,false,true],
       "post_proc":["+",".cal","-",5000,"/",100]
     },
     "hum":{
       "decoder":["value_from_hex_data","manufacturerdata",32,2,false,true]
      },
     "wt_t":{  
       "decoder":["value_from_hex_data","manufacturerdata",42,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_l":{ 
       "decoder":["value_from_hex_data","manufacturerdata",24,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_r":{   
       "decoder":["value_from_hex_data","manufacturerdata",28,4,true,false],
       "post_proc":["-",32767,"/",100]
      } 
  }
})"""";*/

const char* _BRM_json_W3 = "{\"brand\":\"BroodMinder\",\"model\":\"W3/W4 Full Hive Scale\",\"model_id\":\"BRM-49\",\"tag\":\"0500\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"31\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"-\",5000,\"/\",100]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,false,true],\"post_proc\":[\"<\",\"8\"]},\"temp_rt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,true],\"post_proc\":[\"+\",\".cal\",\"-\",5000,\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,true]},\"wt_t\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",42,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_l\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_r\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_l2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_r2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]}}}";
/*R""""(
{
  "brand":"BroodMinder",
  "model":"W3/W4 Full Hive Scale",
  "model_id":"BRM-49",
  "tag":"0500",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"31"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["-",5000,"/",100]
      },
     ".cal":{
       "decoder":["value_from_hex_data","manufacturerdata",22,2,false,true],
       "post_proc":["<","8"]
     }, 
     "temp_rt":{
       "decoder":["value_from_hex_data","manufacturerdata",10,2,false,true],
       "post_proc":["+",".cal","-",5000,"/",100]
     },
     "hum":{
       "decoder":["value_from_hex_data","manufacturerdata",32,2,false,true]
      },
     "wt_t":{  
       "decoder":["value_from_hex_data","manufacturerdata",42,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_l":{ 
       "decoder":["value_from_hex_data","manufacturerdata",24,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_r":{   
       "decoder":["value_from_hex_data","manufacturerdata",28,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_l2":{
       "decoder":["value_from_hex_data","manufacturerdata",34,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_r2":{ 
       "decoder":["value_from_hex_data","manufacturerdata",38,4,true,false],
       "post_proc":["-",32767,"/",100]
      }       
  }
})"""";*/

const char* _BRM_json_W5 = "{\"brand\":\"BroodMinder\",\"model\":\"W5 Full-Hive Scale\",\"model_id\":\"BRM-57\",\"tag\":\"0500\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"39\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"-\",5000,\"/\",100]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,false,true],\"post_proc\":[\"<\",\"8\"]},\"temp_rt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,true],\"post_proc\":[\"+\",\".cal\",\"-\",5000,\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,true]},\"wt_t\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",42,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_l\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_r\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]}}}";
/*R""""(
{
  "brand":"BroodMinder",
  "model":"W5 Full-Hive Scale",
  "model_id":"BRM-57",
  "tag":"0500",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"39"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["-",5000,"/",100]
      },
     ".cal":{
       "decoder":["value_from_hex_data","manufacturerdata",22,2,false,true],
       "post_proc":["<","8"]
     }, 
     "temp_rt":{
       "decoder":["value_from_hex_data","manufacturerdata",10,2,false,true],
       "post_proc":["+",".cal","-",5000,"/",100]
     },
     "hum":{
       "decoder":["value_from_hex_data","manufacturerdata",32,2,false,true]
      },
     "wt_t":{  
       "decoder":["value_from_hex_data","manufacturerdata",42,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_l":{ 
       "decoder":["value_from_hex_data","manufacturerdata",24,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_r":{   
       "decoder":["value_from_hex_data","manufacturerdata",28,4,true,false],
       "post_proc":["-",32767,"/",100]
      } 
  }
})"""";*/

const char* _BRM_json_XLR = "{\"brand\":\"BroodMinder\",\"model\":\"XLR Board\",\"model_id\":\"BRM-58\",\"tag\":\"0500\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"3a\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"-\",5000,\"/\",100]},\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,2,false,true],\"post_proc\":[\"<\",\"8\"]},\"temp_rt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,2,false,true],\"post_proc\":[\"+\",\".cal\",\"-\",5000,\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,true]},\"wt_t\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",42,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_l\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",24,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_r\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",28,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_l2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]},\"wt_r2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false],\"post_proc\":[\"-\",32767,\"/\",100]}}}";
/*R""""(
{
  "brand":"BroodMinder",
  "model":"XLR Board",
  "model_id":"BRM-58",
  "tag":"0500",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"3a"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["-",5000,"/",100]
      },
     ".cal":{
       "decoder":["value_from_hex_data","manufacturerdata",22,2,false,true],
       "post_proc":["<","8"]
     }, 
     "temp_rt":{
       "decoder":["value_from_hex_data","manufacturerdata",10,2,false,true],
       "post_proc":["+",".cal","-",5000,"/",100]
     },
     "hum":{
       "decoder":["value_from_hex_data","manufacturerdata",32,2,false,true]
      },
     "wt_t":{  
       "decoder":["value_from_hex_data","manufacturerdata",42,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_l":{ 
       "decoder":["value_from_hex_data","manufacturerdata",24,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_r":{   
       "decoder":["value_from_hex_data","manufacturerdata",28,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_l2":{
       "decoder":["value_from_hex_data","manufacturerdata",34,4,true,false],
       "post_proc":["-",32767,"/",100]
      },
     "wt_r2":{ 
       "decoder":["value_from_hex_data","manufacturerdata",38,4,true,false],
       "post_proc":["-",32767,"/",100]
      }       
  }
})"""";*/

const char* _BRM_json_TH = "{\"brand\":\"BroodMinder\",\"model\":\"T/H\",\"model_id\":\"BRM-41\",\"tag\":\"0200\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"29\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"/\",10813400]}}}";
/*R""""(
{
  "brand":"BroodMinder",
  "model":"T/H",
  "model_id":"BRM-41",
  "tag":"0200",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"29"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["/",10813400]
      }
  }
})"""";*/

const char* _BRM_json_TH2 = "{\"brand\":\"BroodMinder\",\"model\":\"TH2\",\"model_id\":\"BRM-42\",\"tag\":\"0200\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"2a\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"/\",10813400]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,true]}}}";
/*R""""(
{
  "brand":"BroodMinder",
  "model":"TH2",
  "model_id":"BRM-42",
  "tag":"0200",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"2a"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["/",10813400]
      },
     "hum":{
       "decoder":["value_from_hex_data","manufacturerdata",32,2,false,true]
      }
  }
})"""";*/

const char* _BRM_json_T = "{\"brand\":\"BroodMinder\",\"model\":\"T,T2,T3,SM\",\"model_id\":\"BRM-47\",\"tag\":\"0200\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"2f\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"+\",\".cal\",\"-\",5000,\"/\",100]}}}";
/*R""""(
{
  "brand":"BroodMinder",
  "model":"T,T2,T3,SM",
  "model_id":"BRM-47",
  "tag":"0200",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"2f"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["+",".cal","-",5000,"/",100]
      }
  }
})"""";*/

const char* _BRM_json_TH3 = "{\"brand\":\"BroodMinder\",\"model\":\"TH3\",\"model_id\":\"BRM-56\",\"tag\":\"0200\",\"condition\":[\"manufacturerdata\",\"=\",46,\"index\",0,\"8d02\",\"&\",\"manufacturerdata\",\"index\",4,\"38\"],\"properties\":{\"version\":{\"decoder\":[\"bf_value_from_hex_data\",\"manufacturerdata\",6,4,true]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",12,2,false,false]},\"sample\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,true]},\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,true],\"post_proc\":[\"+\",\".cal\",\"-\",5000,\"/\",100]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",32,2,false,true]}}}";
/*R""""(
{
  "brand":"BroodMinder",
  "model":"TH3",
  "model_id":"BRM-56",
  "tag":"0200",  
  "condition":["manufacturerdata","=",46,"index",0,"8d02","&","manufacturerdata","index",4,"38"],
  "properties":{
     "version":{
       "decoder":["bf_value_from_hex_data","manufacturerdata",6,4,true]
     }  ,   
     "batt":{ 
       "decoder":["value_from_hex_data","manufacturerdata",12,2,false,false]
      },
     "sample":{ 
       "decoder":["value_from_hex_data","manufacturerdata",14,4,true,true]
      },
     "tempc":{ 
       "decoder":["value_from_hex_data","manufacturerdata",18,4,true,true],
       "post_proc":["+",".cal","-",5000,"/",100]
      },
     "hum":{
       "decoder":["value_from_hex_data","manufacturerdata",32,2,false,true]
      }
  }
})"""";*/

const char* _BRM_json_props = "{\"properties\":{\"cfg\":{\"unit\":\"string\",\"name\":\"device type\"},\"version\":{\"unit\":\"float\",\"name\":\"firmware version\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"sample\":{\"unit\":\"int\",\"name\":\"sample count\"},\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"temp_rt\":{\"unit\":\"°C\",\"name\":\"reatime temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"wt_t\":{\"unit\":\"kg\",\"name\":\"weight-total\"},\"wt_l\":{\"unit\":\"kg\",\"name\":\"weight-left\"},\"wt_r\":{\"unit\":\"kg\",\"name\":\"weight-right\"},\"wt_l2\":{\"unit\":\"kg\",\"name\":\"weight-left-2\"},\"wt_r2\":{\"unit\":\"kg\",\"name\":\"weight-right-2\"}}}";
/*R""""(
{
   "properties":{
      "cfg":{
        "unit":"string",
        "name":"device type"
        },
      "version":{
        "unit":"float",
        "name":"firmware version"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "sample":{
          "unit":"int",
          "name":"sample count"
      },
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "temp_rt": {
         "unit":"°C",
         "name":"reatime temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "wt_t":{
          "unit":"kg",
          "name":"weight-total"
      },
      "wt_l": {
          "unit":"kg",
          "name":"weight-left"
      },
      "wt_r": {
          "unit":"kg",
          "name":"weight-right"
      }, 
      "wt_l2": {
          "unit":"kg",
          "name":"weight-left-2"
      },
      "wt_r2": {
          "unit":"kg",
          "name":"weight-right-2"
      }
   }
})"""";*/

