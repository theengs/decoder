# ShellyBLU RC Button4

|Model Id|[SBBT-004CUS](https://github.com/theengs/decoder/blob/development/src/devices/SBBT_004CEU_US_json.h)|
|-|-|
|Brand|Shelly|
|Model|ShellyBLU RC Button4|
|Short Description|Button|
|Communication|BLE broadcast|
|Frequency|2.4Ghz|
|Power Source|CR2032|
|Exchanged Data|button press type of each button, battery, packet ID|
|Encrypted|No - Currently only unencrypted devices are supported|

The button press type for each button is encoded as:

* 0 - None (other Button was pressed or sent every 8 seconds if beacon mode is enabled)
* 1 - Single short click
* 2 - Double click
* 3 - Triple click
* 9 - Long press
* 11 - Button hold
