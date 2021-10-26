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
If you are using ArduinoJson library with your project (like TheengsDecoder) you may have to align the ArduinoJson build options into TheengDecoder with it. To do so, go to [decoder.h](./../../src/decoder.h) and align the flags with your project. In particular you may have to remove `ARDUINOJSON_USE_LONG_LONG=1`.
:::