const char* _iNodeEM_json = "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"tag\":\"0c01\",\"condition\":[\"manufacturerdata\",\"index\",0,\"90\",\"|\",\"manufacturerdata\",\"index\",0,\"92\",\"|\",\"manufacturerdata\",\"index\",0,\"94\",\"|\",\"manufacturerdata\",\"index\",0,\"96\",\"&\",\"manufacturerdata\",\"=\",26,\"index\",2,\"82\"],\"properties\":{\".cal\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",16,4,true,false],\"post_proc\":[\"&\",16383]},\"avg\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",4,4,true,false],\"post_proc\":[\"*\",60,\"/\",\".cal\"]},\"avgu\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,0,\"kW\",\"m³\"]},\"sum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,4,true,false],\"post_proc\":[\"/\",\".cal\"]},\"sumu\":{\"decoder\":[\"bit_static_value\",\"manufacturerdata\",18,0,\"kWh\",\"m³\"]},\"batt\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",20,1,false,false],\"post_proc\":[\"-\",1,\"*\",10]},\"_batt\":{\"condition\":[\"manufacturerdata\",20,\"1\",\"|\",\"manufacturerdata\",20,\"c\",\"|\",\"manufacturerdata\",20,\"d\",\"|\",\"manufacturerdata\",20,\"e\",\"|\",\"manufacturerdata\",20,\"f\"],\"decoder\":[\"static_value\",\"100\"]},\"lowbatt\":{\"condition\":[\"manufacturerdata\",1,\"bit\",2,1],\"decoder\":[\"static_value\",true]}}}";
/*R""""(
{
   "brand":"iNode",
   "model":"Energy Meter",
   "model_id":"INEM",
   "tag":"0c01",
   "condition":["manufacturerdata", "index", 0, "90", "|", "manufacturerdata", "index", 0, "92", "|", "manufacturerdata", "index", 0, "94", "|", "manufacturerdata", "index", 0, "96", "&", "manufacturerdata", "=", 26, "index", 2, "82"],
   "properties":{
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, true, false],
         "post_proc":["&", 16383]
      },
      "avg":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, false],
         "post_proc":[ "*", 60, "/", ".cal"]
      },
      "avgu":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 0, "kW", "m³"]
      },
      "sum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 4, true, false],
         "post_proc":["/", ".cal"]
      },
      "sumu":{
         "decoder":["bit_static_value", "manufacturerdata", 18, 0, "kWh", "m³"]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 20, 1, false, false],
         "post_proc":["-", 1, "*", 10]
      },
      "_batt":{
         "condition":["manufacturerdata", 20, "1", "|", "manufacturerdata", 20, "c", "|", "manufacturerdata", 20, "d", "|", "manufacturerdata", 20, "e", "|", "manufacturerdata", 20, "f"],
         "decoder":["static_value", "100"]
      },
      "lowbatt":{
         "condition":["manufacturerdata", 1, "bit", 2, 1],
         "decoder":["static_value", true]
      }
   }
})"""";*/

const char* _iNodeEM_json_props = "{\"properties\":{\"avg\":{\"unit\":\"kW/m³\",\"name\":\"average\"},\"avgu\":{\"unit\":\"string\",\"name\":\"average unit\"},\"sum\":{\"unit\":\"kWh/m³\",\"name\":\"sum\"},\"sumu\":{\"unit\":\"string\",\"name\":\"sum unit\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"lowbatt\":{\"unit\":\"status\",\"name\":\"low battery\"}}}";
/*R""""(
{
   "properties":{
      "avg":{
         "unit":"kW/m³",
         "name":"average"
      },
      "avgu":{
         "unit":"string",
         "name":"average unit"
      },
      "sum":{
         "unit":"kWh/m³",
         "name":"sum"
      },
      "sumu":{
         "unit":"string",
         "name":"sum unit"
      },
      "batt":{
         "unit":"%",
         "name":"battery"
      },
      "lowbatt":{
         "unit":"status",
         "name":"low battery"
      }
   }
})"""";*/
