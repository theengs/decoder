# Microsoft Advertising Beacon 

|Model Id|[MS-CDP](https://github.com/theengs/decoder/blob/development/src/devices/MS_CDP_json.h)|
|-|-|
|Brand|Generic|
|Model|MS-CDP|
|Short Description|Microsoft Advertising Beacon (Connected Devices Platform)|
|Communication|BLE broadcast|
|Frequency|2.4Ghz|
|Power source|Dependent on device|
|Exchanged data|device type, salt, device hash|
|Encrypted|No|

This decoder is not enable by default, to enable it you need to define `DECODE_RANDOM_MAC_DEVICES true` at build time.
