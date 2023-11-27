# Adding decoders

Adding your device protocol to Theengs Decoder enables to increase interoperability and to create new use cases with your device. Below you will find some guidance to do that. 

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
         "post_proc":["/", 10]
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

### Tag property
Each device should also have an encoded **tag** property to, at the minimum, define the device type for a decoder, and additionally define other descriptive properties to be published. This enables projects to adjust their display and scanning behaviour accordingly.

<table>
    <thead>
        <tr>
            <th colspan=3>tag encoding</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td rowspan=21>Byte[0]</td>
            <td rowspan=21>Device Type > "type":</td>
            <td rowspan=1>0 - Reserved</td>
        </tr>
        <tr>
            <td rowspan=1>1 - THB - temperature, humidity, battery</td>
        </tr>
        <tr>
            <td rowspan=1>2 - THBX - temperature, humidity, battery, extras</td>
        </tr>
        <tr>
            <td rowspan=1>3 - BBQ - temperatures with several probes</td>
        </tr>
        <tr>
            <td rowspan=1>4 - CTMO - contact and/or motion sensors</td>
        </tr>
        <tr>
            <td rowspan=1>5 - SCALE - weight scales</td>
        </tr>
        <tr>
            <td rowspan=1>6 - BCON - iBeacon protocol</td>
        </tr>
        <tr>
            <td rowspan=1>7 - ACEL - acceleration</td>
        </tr>
        <tr>
            <td rowspan=1>8 - BATT - battery</td>
        </tr>
        <tr>
            <td rowspan=1>9 - PLANT - plant sensors</td>
        </tr>
        <tr>
            <td rowspan=1>10 - TIRE - tire pressure monitoring system</td>
        </tr>
        <tr>
            <td rowspan=1>11 - BODY - health monitoring devices</td>
        </tr>
        <tr>
            <td rowspan=1>12 - ENRG - energy monitoring devices</td>
        </tr>
        <tr>
            <td rowspan=1>13 - WCVR - window covering devices</td>
        </tr>
        <tr>
            <td rowspan=1>14 - ACTR - ON/OFF actuators</td>
        </tr>
        <tr>
            <td rowspan=1>15 - AIR - air environmental monitoring devices</td>
        </tr>
        <tr>
            <td rowspan=1>16 - TRACK - bluetooth tracker</td>
        </tr>
        <tr>
            <td rowspan=1>17 - BTN - button</td>
        </tr>
        <tr>
            <td rowspan=1>18-253 - Reserved</td>
        </tr>
        <tr>
            <td rowspan=1>254 - RMAC - known random MAC address devices</td>
        </tr>
        <tr>
            <td rowspan=1>255 - UNIQ - unique devices</td>
        </tr>
		<tr>
            <td rowspan=5>Byte[1]</td>
            <td rowspan=5>Additional properties</td>
            <td rowspan=1>Bits[7-4] - Reserved</td>
        </tr>
        <tr>
            <td rowspan=1>Bit[3] Device compatible with presence tracking > "track":</td>
        </tr>
        <tr>
            <td rowspan=1>Bit[2] Requires continuous scanning > "cont":</td>
        </tr>
        <tr>
            <td rowspan=1>Bit[1] Requires active scanning > "acts":</td>
        </tr>
        <tr>
            <td rowspan=1>Bit[0] Is NOT Company ID compliant > "cidc":</td>
        </tr>
<tr>
            <td rowspan=2>Byte[2]</td>
            <td rowspan=2>Encryption Model > "encr":</td>
            <td rowspan=1>1 - LYWSD03MMC PVVX</td>
        </tr>
        <tr>
            <td rowspan=1>2 - BTHome v2</td>
        </tr>
    </tbody>
</table>

**cidc** - Whenever a decoder is based on "manufacturerdata" and the first bytes do not comply with the [Bluetooth SIG's company identifier convention](https://www.bluetooth.com/specifications/assigned-numbers/company-identifiers/), this should be set to 1/true, to then produce "cidc":false in the published message.

```
   "brand":"Otio/BeeWi",
   "model":"Door & Window Sensor",
   "model_id":"BSDOO",
   "tag":"0405",
   …
```

will have `… "type":"CTMO","cidc":false,"cont":true …` in the published message.

### Condition
`condition` is a JSON array, which must contain as the first parameter, the data source to test for the condition. Valid inputs are:
- "servicedata"
- "manufacturerdata"
- "name"
- "uuid"

The second parameter is variable. If required, further qualification can be made by setting a conditional data length in the case of "servicedata" or "manufacturerdata" as the first condition. This is an operator in the form of `">" , ">=" , "=" , "<" , "<="` followed by the third parameter being a numeric value that specifies the length of the data to accept. If no data length is defined the second parameter must indicate how the data should be tested. Valid inputs are:
- "contain" tests if the specified value (see below) exists the data source 
- "index" tests if the specified value exists at the index location (see below) in the data source
- "mac@index" tests if the device's MAC address exists at the index location (see below) in the data source
- "revmac@index" tests if the device's MAC address exists octet-reversed at the index location (see below) in the data source

::: warning Note
For compatibility of a decoder for running successfully on an OS which masks the real MAC addresses of devices by generic uuids, like macOS and iOS, an alternative model condition with the name "conditionnomac" needs to be defined in addition to "condition" if the latter contains "mac@index" or "revmac@index".
:::

Examples:
`"condition":["servicedata", "index", 0, "0804"` -- no data length check
`"condition":["servicedata", ">=", 40, "index", 0, "0804"` -- data length must be equal to or greater than 40 bytes

The third parameter (fifth if data length is specified) can be either the index value or the data value to find. If the second (fourth if data length specified) parameter is `contain`, the next parameter should be the value to look for in the data source. If the second (fourth if data length specified) parameter is `index`, `mac@index` or `revmac@index` the next parameter should be the location in the data source to look for the value.

`condition` can have multiple conditions chained together using "|" and "&" between them.  
For example: `"condition":["servicedata", "index", 0, "0804", "|", "servicedata", "index", 0, "8804"]`  
This will match if the service data at index 0 is "0804" `OR` "8804".

`condition` can contain JSON arrays that can be processed separately. This allows for nesting of detection tests such as:  
`"condition": [["servicedata", "index", 0, "1234", "&" "servicedata", "index", 5, "5678"], "|", "servicedata", "index", 30, "abcd"]`  
This will result in a positive detection if the service data at index `0` == `0x1234` and the service data at index `5` == `0x5678`, otherwise, if the service data at index `30` == `0xabcd`, the result will also be positive.

::: warning Note
Nesting is discouraged from use wherever possible as the recursive nature may cause stack overflowing in some circumstances.
It should only be used if absolutely necessary, as in the above example.
If all the conditions in an array bracket are chained with "|", as in
`"condition": [["servicedata", "index", 0, "abcd", "|", "servicedata", "index", 0, "efef"], "&", "servicedata", "index", 5, "1212"]`
this could be re-written as
`"condition": ["servicedata", "index", 0, "abcd", "|", "servicedata", "index", 0, "efef", "&", "servicedata", "index", 5, "1212"]`  
making sure the additional AND condition is at the end. This has the same result, without nesting.
:::

`condition` NOT(!) testing; Anytime a condition test value is preceded by a "!", the inverse of the result will be used to determine the result.  
Example: `"condition": ["servicedata", "index", 30, "!", "abcd", "&", "servicedata", "index", 0, "1234"]  
If the value of the service data at index 30 is not 0xabcd and the data at index 0 is 0x1234, the result is a positive detection.

### Properties
Properties is a nested JSON object containing one or more JSON objects. In the example above it looks like:
```
 "properties":{
      "tempc":{
         "condition":["servicedata", 25, "4"],
         "decoder":["value_from_hex_data", "servicedata", 30, 4, true],
         "post_proc":["/", 10]
      },
```

Here we have a single property that defines a value that we want to decode. The key "tempc" will be used as the key in the JsonObject provided when `decodeBLEJson(JsonObject)` is called. "tempc" in this example is another JSON object that has an (optional, explained below) `condition`, `decoder`, and `post_proc`.

`condition` is a JSON array. The first parameter defines the data source of the condition to test and must be one of:
- "servicedata"
- "manufacturerdata"

The second parameter is the index of the data source to look for the value. Then the third parameter is the value to test for.

If a direct binary bit evaluation encoded in a hex digit is desired the third parameter is `"bit"`, the fourth parameter the bit position from `3-0` and the fifth parameter the bit state `0` or `1`.
```
 "properties":{
      "hum":{
         "condition":["servicedata", 10, "bit", 3, 0],
         "decoder":["value_from_hex_data", "servicedata", 10, 2, false, false]
      },
```

The second parameter can also be an operator in the form of `">" , ">=" , "=" , "<" , "<="`, then followed by the third parameter being a numeric value that specifies the length of the data to accept for evaluation of the first parameter.

```
 "properties":{
      "tempc":{
         "condition":["manufacturerdata", "=", 40],
         "decoder":["value_from_hex_data", "manufacturerdata", 24, 4, true]
      },
```

If the condition is met the data will be decoded and added to the JsonObject.

`condition` can contain JSON arrays that can be processed separately. This allows for nesting of detection tests such as:  
`"condition": [["servicedata", 25, "4", "&" "servicedata", 26, "5"], "|", "servicedata", 30, "abcd"]`  
This will result in a positive detection if the service data at index `25` == `4` and the service data at index `26` == `5`, otherwise, if the service data at index `30` == `0xabcd`, the result will also be positive.

::: warning Note
Nesting is discouraged from use wherever possible as the recursive nature may cause stack overflowing in some circumstances.
It should only be used if absolutely necessary, as in the above example.
If all the conditions in an array bracket are chained with "|", as in
`"condition": [["servicedata", 20, "5", "|", "servicedata", 20, "6"], "&", "servicedata", 30, "a"]`
this could be re-written as
`"condition": ["servicedata", 20 , "5", "|", "servicedata", 20, "6", "&", "servicedata", 30, "a"]`  
making sure the additional AND condition is at the end. This has the same result, without nesting.
:::

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
The NOT comparison is case sensitive! Therefore any NOT comparisons should be defined in lower case, as this is the format in which devices' "servicedata" and "manufacturerdata" are being reported.
:::

`decoder` is a JSON array that specifies the decoder function and parameters to decode the value.
The first parameter is the name of the function to call, The available functions are:
- "value_from_hex_data"  - converts the hex string value into an `integer` or `double` type.
- "bf_value_from_hex_data" - converts the (binary fraction) hex string value into a `double` type.  This should be used when the hex data is represented in the format of `XX.XX`. For example: when `0x1a1e` should output 26.30.
- "string_from_hex_data" - converts the hex value to a string type.
- "static_value" - sets the value to the static value specified if the condition is met.
- "bit_static_value" - sets the value to either one of two given values, depending on the evaluated binary bit.

The other parameters for the first three functions are:
- "servicedata" or "manufacturerdata" Extract the value from the specified data.
- 24, The index of the data source where the value exists.
- 4, The length of the data in bytes (characters in the string).
and additional boolean parameters applicable to the first two functions:
- true/false, If the value in the data source should have its endianness reversed before converting.
- (optional)true/false, Sets if the resulting value can be a negative number. Defaults to true when omitted.
- (optional)false/true, Sets if the "value_from_hex_data" decoding result is a `float` instead of an `integer` type. Defaults to false when omitted.

```
 "properties":{
      "unit":{
         "decoder":["bit_static_value", "servicedata", 1, 0, "kg", "lb"]
      },
```

The parameters for the "bit_static_value" function are:
- "servicedata" or "manufacturerdata" - extract the value from the specified data.
- 1, the index of the data source where the value exists.
- 0, the bit position from `3-0`.
- The return value for bit state `0`.
- The return value for bit state `1`.

`post_proc` This specifies any post processing of the resulting decoded value. This is a JSON array that should be written in the order that the operation order is desired. In the simple example the first parameter is the "/" divide operation and the second parameter (10) is the value to divide the result by. Multiple operations can be chained together in this array to perform more complex calculations.  

Valid operations are:
- "/" divide
- "*" multiply
- "+" add
- "-" subtract
- "%" modulo
- "<" shift left
- ">" shift right
- "!" Not (invert), useful for bool types
- "&" Logical And the values
- "min" the minimum allowed value
- "max" the maximum allowed value

`lookup` This specifies a lookup table for any decoded "string_from_hex_data" string. If the string is defined in the table its related string will be assigned to the property. If no matching hex string is present the property is defined as not decoded. 

```
 "state":{
    "decoder":["string_from_hex_data", "manufacturerdata", 10, 2],
    "lookup":["01", "initialising", 
              "02", "idle", 
              "03", "running", 
              "04", "charging", 
              "73", "sleeping"]
 },
```

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

#### Special property "mac"
The "mac" property contains a device's MAC address if this is contained in the broadcast service- or manufacturerdata, with either forward or reversed octet order.

In such cases the "mac" property should be included in the decoder, so that these devices can have their proper MAC address assigned on iOS or macOS, which usually masks these with generic uuids.

```
"properties":{
      "mac":{
         "decoder":["mac_from_hex_data", "servicedata", 4]
      }

      … or

      "mac":{
         "decoder":["revmac_from_hex_data", "servicedata", 4]
      }

```

# Checking and fixing your changes
You can use a script to check whether your raw JSON strings correspond to the escaped string value in the line before. Run the script as:

```
python scripts/check_decoder.py src/devices/NAMEOFDEVICE.h
```

You can also install [pre-commit](https://pre-commit.com) to run this check every time you commit a file change:

```
pip install pre-commit
pre-commit install
```

The last command should be run in the root directory of the decoder repository.

If you're using [Visual Studio Code](https://code.visualstudio.com), you can install the [pre-commit extension](https://marketplace.visualstudio.com/items?itemName=elagil.pre-commit-helper). After this, when you have a decoder file open, just open the command palette with Ctrl+Shift+P and choose **pre-commit run (current file)** to check and fix its JSON strings.

Tip: if you just declare a JSON string with an empty string, such as:

```c
const char* _SBBT_002C_json = "";
```

Then the script automatically copies the following raw string in the comment to fill the empty string in the previous line, with all double quotes escaped correctly.
