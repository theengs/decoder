# Adding decoders

Adding your device protocol to Theengs decoder enable to increase interoperability and to create new use cases with your device. You will find below some guidance to do that. 

You can do a pull request directly to the [Repository](https://github.com/theengs/decoder).

# Adding device decoding

Device decode specifications are located in a json file, example [HHCCJCY01HHCC_json.h](../../src/device_json.h). The format is:
```
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
```

Each device must provide a `brand`, `model`, `model_id`, `condition`, and `properties`.
- `brand` = brand name of the device.
- `model` = model name of the device.
- `model_id` = model id number of the device.

### Condition
`condition` is a JSON array, which must contain as the first parameter, the data source to test for the condtion. Valid inputs are:
- "servicedata"
- "manufacturerdata"
- "name"
- "uuid"

The second parameter is variable. If required, further qualification can be made by setting a conditional data length in the case of "servicedata" or "manufacturerdata" as the first condition. This is an operator in the form of `">" , ">=" , "=" , "<" , "<="` followed by the third parameter being a numeric value that specifies the length of the data to accept. If no data length is defined the second paramater must indicate how the data should be tested. Valid inputs are:
- "contain" tests if the specified value (see below) exists the data source 
- "index" tests if the specified value exists at the index location (see below) in the data source

Examples:
`"condition":["servicedata", "index", 0, "0804"` -- no data length check
`"condition":["servicedata", ">=", 40, "index", 0, "0804"` -- data length must be equal to or greater than 40 bytes

The third parameter (fifth if data length is specified) can be either the index value or the data value to find. If the second (fourth if data length specified) parameter is `contain`, the next parameter should be the value to look for in the data source. If the second (fourth if data length specified) parameter is `index`, the next parameter should be the location in the data source to look for the value.

`condition` can have multiple conditions chanined together using '|' and '&' between them.  
For example: `"condition":["servicedata", "index", 0, "0804", '|', "servicedata", "index", 0, "8804"]`  
This will match if the service data at index 0 is "0804" `OR` "8804".

### Properties
Properties is a nested JSON object containing one or more JSON objects. In the example above it looks like:
```
 "properties":{
      "tempc":{
         "condition":["servicedata", 25, "4"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true],
         "post_proc":['/', 10]
      },
```

Here we have a single property that defines a value that we want to decode. The key "tempc" will be used as the key in the JsonObject provided when `decodeBLEJson(JsonObject)` is called. "tempc" in this example is another JSON object that has an (optional, explained below) `condition`, `decoder`, and `post_proc`.

`condition` is a JSON array. The first parameter defines the data source of the condition to test and must be one of:
- "servicedata"
- "manufacturerdata"

The second parameter is the index of the data source to look for the value. The third parameter is the value to test for.
If the condition is met the data will be decoded and added to the JsonObject.

Property conditions also allow for a NOT comparison, as in
```
 "properties":{
      "tempc":{
         "condition":["manufacturerdata", 24, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true, false],
         "post_proc":["/", 10]
      },
```

where then the fourth parameter is the value to test for.

::: warning Note
The NOT comparison is case sensitive! Therefor any NOT comparisons should be defined in lower case, as this is the format in which devices' "servicedata" and "manufacturerdata" are being reported.
:::

`decoder` is a JSON array that specifies the decoder function and parameters to decode the value.
The first parameter is the name of the function to call, The available functions are:
- "value_from_hex_data"  - converts the hex string value into an `integer` or `double` type.
- "bf_value_from_hex_data" - converts the (binary fraction) hex string value into a `double` type.  This should be used when the hex data is represented in the format of `XX.XX`. For example: when `0x1a1e` should output 26.30.
- "static_value" - sets the value to the static value specified if the condition is met.
- "string_from_hex_data" - converts the hex value to a string type.

The other parameters are:
- "servicedata" or "manufacturerdata" Extract the value from the specified data.
- 30, The index of the data source where the value exists.
- 4, The length of the data in bytes (characters in the string).
- true/false, If the value in the data source should have it's endianness reversed before converting.
- (optional)true/false, Sets if the resulting value can be a negative number.

`post_proc` This specifies any post processing of the resulting decoded value. This is a JSON array that should be written in the order that the operation order is desired. In the simple example the first parameter is the '/' divide operation and the second parameter (10) is the value to divide the result by. Multiple operations can be chained together in this array to perform more complex calculations.  

Valid operations are:
- '/' divide
- '*' multiply
- '+' add
- '-' subtract
- '%' modulo
- '<' shift left
- '>' shift right
- '!' Not (invert), useful for bool types
- '&' Logical And the values

#### Special property .cal
.cal is a special property that can extracted from the provided data and used in calculations of other properties following it's definition. For example:
```
"properties":{
      ".cal":{
         "decoder":["value_from_hex_data", "manufacturerdata", 16, 4, true],
         "post_proc":["&", 16383]
      },
      "power":{
         "decoder":["value_from_hex_data", "manufacturerdata", 4, 4, true],
         "post_proc":["/", ".cal", "*", 60000]
      }
   }
```
Here the calculation value extracted first from the data stream and used by the next property to calculate the data value.

