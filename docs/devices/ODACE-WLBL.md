# Schneider Electric Odace SFSP / Odace WLBL one way switch

|Model Id|[S520104](https://github.com/theengs/decoder/blob/development/src/devices/ODACE_WLBL_json.h)|
|-|-|
|Brand|Schneider Electric|
|Model|Odace WLBL (Odace SFSP in French-speaking markets)|
|Short Description|Bluetooth event switch|
|Communication|BLE broadcast|
|Frequency|2.4Ghz|
|Power Source|Kinetic energy harvesting (battery-free)|
|Exchanged Data|device UID, button action|
|Encrypted|No|

The button action is encoded as:

* 0 - Off
* 1 - On
* 2 - Toggle
* 3 - Dim up
* 4 - Dim down
* 5 - Up
* 6 - Down
* 7 - Stop
* 8 - User scene
* 9 - Scene in
* 10 - Scene out
