const char* _iNodeEM_json = "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"tag\":\"0c01\",\"cond\":[\"mfd\",\"ind\",0,\"90\",\"|\",\"mfd\",\"ind\",0,\"92\",\"|\",\"mfd\",\"ind\",0,\"94\",\"|\",\"mfd\",\"ind\",0,\"96\",\"&\",\"mfd\",\"=\",26,\"ind\",2,\"82\"],\"properties\":{\".cal\":{\"decoder\":[\"vfhd\",\"mfd\",16,4,true,false],\"pprc\":[\"&\",16383]},\"avg\":{\"decoder\":[\"vfhd\",\"mfd\",4,4,true,false],\"pprc\":[\"*\",60,\"/\",\".cal\"]},\"avgu\":{\"decoder\":[\"bit_static_value\",\"mfd\",18,0,\"kW\",\"m³\"]},\"sum\":{\"decoder\":[\"vfhd\",\"mfd\",8,4,true,false],\"pprc\":[\"/\",\".cal\"]},\"sumu\":{\"decoder\":[\"bit_static_value\",\"mfd\",18,0,\"kWh\",\"m³\"]},\"batt\":{\"decoder\":[\"vfhd\",\"mfd\",20,1,false,false],\"pprc\":[\"-\",1,\"*\",10]},\"_batt\":{\"cond\":[\"mfd\",20,\"1\",\"|\",\"mfd\",20,\"c\",\"|\",\"mfd\",20,\"d\",\"|\",\"mfd\",20,\"e\",\"|\",\"mfd\",20,\"f\"],\"decoder\":[\"static_value\",\"100\"]},\"lowbatt\":{\"decoder\":[\"bit_static_value\",\"mfd\",1,2,false,true]}}}";
/*R""""(
{
   "brand":"iNode",
   "model":"Energy Meter",
   "model_id":"INEM",
   "tag":"0c01",
   "cond":["mfd", "ind", 0, "90", "|", "mfd", "ind", 0, "92", "|", "mfd", "ind", 0, "94", "|", "mfd", "ind", 0, "96", "&", "mfd", "=", 26, "ind", 2, "82"],
   "properties":{
      ".cal":{
         "decoder":["vfhd", "mfd", 16, 4, true, false],
         "pprc":["&", 16383]
      },
      "avg":{
         "decoder":["vfhd", "mfd", 4, 4, true, false],
         "pprc":[ "*", 60, "/", ".cal"]
      },
      "avgu":{
         "decoder":["bit_static_value", "mfd", 18, 0, "kW", "m³"]
      },
      "sum":{
         "decoder":["vfhd", "mfd", 8, 4, true, false],
         "pprc":["/", ".cal"]
      },
      "sumu":{
         "decoder":["bit_static_value", "mfd", 18, 0, "kWh", "m³"]
      },
      "batt":{
         "decoder":["vfhd", "mfd", 20, 1, false, false],
         "pprc":["-", 1, "*", 10]
      },
      "_batt":{
         "cond":["mfd", 20, "1", "|", "mfd", 20, "c", "|", "mfd", 20, "d", "|", "mfd", 20, "e", "|", "mfd", 20, "f"],
         "decoder":["static_value", "100"]
      },
      "lowbatt":{
         "decoder":["bit_static_value", "mfd", 1, 2, false, true]
      }
   }
})"""";*/

const char* _iNodeEM_json_props = "{\"properties\":{\"avg\":{\"unit\":\"kW/m³\",\"name\":\"average\"},\"avgu\":{\"unit\":\"string\",\"name\":\"average unit\"},\"sum\":{\"unit\":\"kWh/m³\",\"name\":\"sum\"},\"sumu\":{\"unit\":\"string\",\"name\":\"sum unit\"},\"batt\":{\"unit\":\"%\",\"name\":\"battery\"},\"lowbatt\":{\"unit\":\"status\",\"name\":\"battery\"}}}";
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
         "name":"battery"
      }
   }
})"""";*/
