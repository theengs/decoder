const char* _CGH1_json = R""""(
{
   "brand":"Qingping",
   "model":"Door sensor",
   "model_id":"CGH1",
   "condition":["servicedata", "index", 0, "c804", '|', "servicedata", "index", 0, "4804", '|', "servicedata", "index", 0, "0804", '|', "servicedata", "index", 0, "8804"],
   "properties":{
      "open":{
         "condition":["servicedata", 0, "c804"],
         "decoder":["value_from_hex_data", "servicedata", 21, 1, false],
         "val_bits":1,
         "post_proc":['!']
      },
     "_open":{
         "condition":["servicedata", 0, "4804"],
         "decoder":["value_from_hex_data", "servicedata", 21, 1, false],
         "val_bits":1,
         "post_proc":['!']
      },
      "__open":{
         "condition":["servicedata", 0, "0804"],
         "decoder":["value_from_hex_data", "servicedata", 33, 1, false],
         "val_bits":1,
         "post_proc":['!']
      },
      "___open":{
         "condition":["servicedata", 0, "8804"],
         "decoder":["value_from_hex_data", "servicedata", 33, 1, false],
         "val_bits":1,
         "post_proc":['!']
      }
   }
})"""";
