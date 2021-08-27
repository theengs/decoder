const char* _devices[] = {
R""""(
{
   "brand":"Xiaomi",
   "model":"miflora",
   "model_id":"HHCCJCY01HHCC",
   "condition":["servicedata", "contain", "209800"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 25, "4"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true],
         "post_proc":['/', 10]
      },
      "moi":{
         "condition":["servicedata", 25, "8"],
         "decoder":["value_from_hex_data", "servicedata", 30, 2, false]
      },
      "lux":{
         "condition":["servicedata", 25, "7"],
         "decoder":["value_from_hex_data", "servicedata", 30, 6, true]
      },
      "fer":{
         "condition":["servicedata", 25, "9"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true]
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"Cleargrass clock",
   "model_id":"LYWSD02",
   "condition":["servicedata", "contain", "205b04"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 25, "4"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "condition":["servicedata", 25, "6"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true, false],
         "post_proc":['/', 10]
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"Mi Jia round",
   "model_id":"LYWSDCGQ",
   "condition":["servicedata", "contain", "20aa01"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":['/', 10]
      },
      "_hum":{
         "condition":["servicedata", 23, "6"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true, false],
         "post_proc":['/', 10]
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"CG_THP",
   "model_id":"CGP1W",
   "condition":["servicedata", "index", 0, "0809"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":['/', 10]
      },
      "pres":{
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":['/', 100]
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"CG_round_v1",
   "model_id":"CGG1",
   "condition":["servicedata", "index", 0, "0807", '|', "servicedata", "index", 0, "8816"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":['/', 10]
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"CG_round_v2",
   "model_id":"CGG1",
   "condition":["servicedata", "index", 4, "4703"],
   "properties":{
      "tempc":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "condition":["servicedata", 23, "d"],
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":['/', 10]
      },
      "_tempc":{
         "condition":["servicedata", 23, "4"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":['/', 10]
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"CG_alarm_clock",
   "model_id":"CGD1",
   "condition":["servicedata", "index", 0, "080caf", '|', "servicedata", "index", 0, "080c09", '|', "servicedata", "index", 0, "080cd0"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":['/', 10]
      }
   }
})"""",
R""""(
{
   "brand":"Qingping",
   "model":"TH lite",
   "model_id":"CGDK2",
   "condition":["servicedata", "index", 0, "8810"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":['/', 10]
      }
   }
})"""",
R""""(
{
   "brand":"Qingping",
   "model":"Door sensor",
   "model_id":"CGH1",
   "condition":["servicedata", "index", 0, "c804", '|', "servicedata", "index", 0, "4804"],
   "properties":{
      "open":{
         "decoder":["value_from_hex_data", "servicedata", 21, 1, false],
         "val_bits":1,
         "post_proc":['!']
      }
   }
})"""",
R""""(
{
   "brand":"Qingping",
   "model":"Door sensor",
   "model_id":"CGH1",
   "condition":["servicedata", "index", 0, "0804", '|', "servicedata", "index", 0, "8804"],
   "properties":{
      "open":{
         "decoder":["value_from_hex_data", "servicedata", 33, 1, false],
         "val_bits":1,
         "post_proc":['!']
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"Formaldehyde detector",
   "model_id":"JQJCY01YM",
   "condition":["servicedata", "contain", "20df02"],
   "properties":{
      "for":{
         "condition":["servicedata", 23, "0"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true],
         "post_proc":['/', 100]
      },
      "hum":{
         "condition":["servicedata", 23, "6"],
         "decoder":["value_from_hex_data", "servicedata", 28, 4, true, false],
         "post_proc":['/', 10]
      },
      "batt":{
         "condition":["servicedata", 23, "a"],
         "decoder":["value_from_hex_data", "servicedata", 28, 2, false, false]
      }
   }
})"""",
R""""(
{
   "brand":"inkbird",
   "model":"TH Sensor",
   "model_id":"IBS-TH1",
   "condition":["name", "index", 0, "sps"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 0, 4, true],
         "post_proc":['/', 100]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true, false],
         "post_proc":['/', 100]
      },
      "batt":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 2, false, false]
      }
   }
})"""",
R""""(
{
   "brand":"xiaomi",
   "model":"Miband",
   "model_id":"MiBand",
   "condition":["uuid", "contain", "fee0"],
   "properties":{
      "steps":{
         "decoder":["value_from_hex_data", "servicedata", 0, 4, true, false]
      }
   }
})"""",
};