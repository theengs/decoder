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
