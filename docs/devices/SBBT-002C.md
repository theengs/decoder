# ShellyBLU Button1

|Model Id|[SBBT-002C](https://github.com/theengs/decoder/blob/development/src/devices/SBBT_002C_json.h)|
|-|-|
|Brand|Shelly|
|Model|ShellyBLU Button1|
|Short Description|Button|
|Communication|BLE broadcast|
|Frequency|2.4Ghz|
|Power Source|CR2032|
|Exchanged Data|button press type, battery, packet ID|
|Encrypted|Yes/No - Optional|

The button press type is encoded as:

* 0 - None (sent every 8 seconds if beacon mode is enabled)
* 1 - Single short click
* 2 - Double click
* 3 - Triple click
* 9 - Long press
* 11 - Button hold
