Theengs Decoder project aims to provide an efficient, portable and lightweight library for Internet of Things messages decoding.

![Iot](https://github.com/theengs/decoder/raw/development//docs/img/Theengs_decoder_iot_chain.jpg)

Sensors and devices use chains of data to communicate to gateways, computers, servers. Enabling them to have lightweight and fast communication.
On the other hand we have a huge diversity of communication methods, resulting in the sensors or devices being closed to one ecosystem or a few.

Theengs decoder library translates these data chains into human readable data leveraging the well known data interchange format JSON. This format can easily be integrated into different systems or software.

![Overview](https://github.com/theengs/decoder/raw/development//docs/img/Theengs_decoder.jpg)

It's also a simplified way of defining the thing properties and how to decode these.

Theengs Decoder can be used on memory constraint environments like micro controllers (ESP32, ESP8266, Arduino), on a PC or on a Unix server.
Unit testing assures that the modification done on the library doesn't affect previous capabilities.

In a few words:
* Light
* Portable
* Expandable
* Interoperable

Projects using the Theengs Decoder library
* [OpenMQTTGateway](https://github.com/1technophile/OpenMQTTGateway) - A BLE to MQTT bridge running on ESP8266, ESP32 or Arduino boards.
* [Theengs Gateway](https://github.com/theengs/gateway) - A Python-based BLE to MQTT bridge running on Raspberry Pi, Windows or Linux.
* [Theengs Explorer](https://github.com/theengs/explorer) - A text user interface to discover BLE devices, showing their raw advertisement alongside the decoded data; running on Linux, Windows or macOS.
* [Theengs App](https://github.com/theengs/app) - A paid app for Android and iOS/iPadOS phones and tablets displaying decoded BLE sensor data and optionally acting as a BLE to MQTT bridge.
* [BresserWeatherSensorTTN](https://github.com/matthias-bs/BresserWeatherSensorTTN) - Bresser 5-in-1/6-in-1/7-in-1 868 MHz Weather Sensor Radio Receiver based on ESP32 and RFM95W/SX1276 - sends data to a LoRaWAN Network.

For more information view the [documentation](https://decoder.theengs.io/)
