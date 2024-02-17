# NodOn NIU smart button

|Model Id|[NODONNIU](https://github.com/theengs/decoder/blob/development/src/devices/NODONNIU_json.h)|
|-|-|
|Brand|NodOn|
|Model|NIU smart button|
|Short Description|Bluetooth smart button|
|Communication|BLE broadcast|
|Frequency|2.4Ghz|
|Power Source|CR2032|
|Exchanged Data|button press type, color, battery|
|Encrypted|No|
|Device Tracker|&#9989;|

The button press type is encoded as:

* 1 - Single short click
* 2 - Double click
* 3 - Triple click
* 4 - Quadruple click
* 5 - Quintuple click
* 9 - Long press
* 10 - Button release
