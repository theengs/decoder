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
* 1 - Press
* 2 - Double press
* 3 - Triple press
* 4 - Long press
