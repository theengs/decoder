# Apple AirPods (Pro)

|Model Id|[APPLEAIRPODS](https://github.com/theengs/decoder/blob/development/src/devices/APPLEAIRPODS_json.h)|
|-|-|
|Brand|Apple|
|Model|AirPods (Pro)|
|Short Description|Various Apple AirPods (Pro) models|
|Communication|BLE broadcast|
|Frequency|2.4Ghz|
|Power Source|Rechargeable battery|
|Exchanged Data|model version, color, status, (left, right, case) battery level*, (left, right, case) charging state|
|Encrypted|No|
|Device Tracker|&#9989;|

Currently only usefully working with the [Theengs Gateway](https://gateway.theengs.io/use/use.html#details-options) **Identity Address** and **IRK** functionality, to be able to decrypt the randomly changing Bluetooth MAC address to the static identity MAC address.

Instructions on how to get the [Identity Address and IRK for an Apple Watch, iPhone, iPad or AirPods](https://gateway.theengs.io/use/use.html#getting-identity-resolving-key-irk-for-apple-watch-iphone-and-ipad)

\* battery levels are only reported in 10% steps by the BLE broadcasts.

Some model versions and statuses are not decoded correctly yet, due to the various models and generations. In such a case please report your device's MQTT message with the [PUBLISH_ADVDATA option](https://gateway.theengs.io/use/use.html#details-options) set to **true**.
