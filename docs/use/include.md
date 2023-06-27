# Using the library in a project

Call `decodeBLEJson(JsonObject)` with the input being of the Arduino JSON JsonObject type. If the device is known the JsonObject will have the decoded device data added to it.

### Example
Input JsonObject:
```
{
  "servicedata": "712098000163b6658d7cc40d0410024001"
}
```

JsonObject after decoding:
```
{
  "servicedata": "712098000163b6658d7cc40d0410024001"
  "brand":"Xiaomi",
  "model":"miflora",
  "model_id":"HHCCJCY01HHCC",
  "tempc":32,
  "tempf":89.6
}
```

::: tip
If you are using ArduinoJson library with your project (like TheengsDecoder) you may have to align the ArduinoJson build options into TheengDecoder with it. To do so, go to [decoder.h](https://github.com/theengs/decoder/blob/development/src/decoder.h) and align the flags with your project. In particular you may have to remove `ARDUINOJSON_USE_LONG_LONG=1`.
:::

### Encrypted data

Decoders for encrypted data, indicated by the `"encr": true` tag, will send a JsonObject with the properties cipher, counter, message integrity check and MAC address, e.g.

```
{
  "encr": true,
  "cipher":"62511158bd25",
  "ctr":"b8f09364",
  "mic":"5b573115",
  "mac":"AA:BB:CC:DD:EE:FF"
}
```

With a correct bindkey this encrypted data can be decrypted and sent back to Decoder for properties decoding.
