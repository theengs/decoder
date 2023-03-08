# Google/Apple Exposure Notification

|Model Id|[GAEN](https://github.com/theengs/decoder/blob/development/src/devices/GAEN_json.h)|
|-|-|
|Brand|Generic|
|Model|GAEN|
|Short Description|Google/Apple Exposure Notification (GAEN) for digital contact tracing|
|Communication|BLE broadcast|
|Frequency|2.4Ghz|
|Power source|Dependent on device|
|Exchanged data|rolling proximity identifier, associated encrypted metadata|
|Encrypted|Yes|

This decoder is not enable by default, to enable it you need to define `DECODE_RANDOM_MAC_DEVICES true` at build time.