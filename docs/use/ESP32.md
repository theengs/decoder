# Using with ESP32

The library includes a BLE decoder [example](https://github.com/theengs/decoder/blob/development/examples/ESP32/ScanAndDecode/ScanAndDecode.ino) based on ESP32, you can open the folder [ScanAndDecode](https://github.com/theengs/decoder/blob/development/examples/ESP32/ScanAndDecode)  with a platformio environment or directly [ScanAndDecode.ino](https://github.com/theengs/decoder/blob/development/examples/ESP32/ScanAndDecode/ScanAndDecode.ino) with an Arduino IDE.

If Theengs Decoder recognize a device, it will print in the serial output a message like the example below:
```
TheengsDecoder found device: {"id":"AA:BB:CC:DD:EE:FF","name":"ATC_800021","rssi":-90,"servicedatauuid":"0x181a","brand":"Xiaomi","model":"LYWSD03MMC","model_id":"LYWSD03MMC_ATC","tempc":26.3,"tempf":79.34,"hum":49,"batt":29,"volt":2.487}
```
