from TheengsDecoder import decodeBLE as dble
from TheengsDecoder import getProperties
from TheengsDecoder import getAttribute
import json

test_cases = {
    'Empty - fail': "",
    "Blue Maestro - pass":
      {"manufacturerdata": "330117630e10015c00a301ac00240100"},
    "W5 - target":  
      {"manufacturerdata": "8d02391604127d8b01721f20ba9cff7f2e00000000b59c", "name": "57:41:25", "id": "06:09:16:57:41:25", "rssi": -75},
    "Short - fail":  
      {"manufacturerdata": "8d02391604127d8b01721f20ba9cff7f2e000000b59c", "name": "57:41:25", "id": "06:09:16:57:41:25", "rssi": -75}
}

for scenario, message in test_cases.items():
    print ("---", scenario)
    print (json.dumps(message))
    result = dble(json.dumps(message))
    print ("result-->",result)
    if result is not None:
       parsed = json.loads(result)
       model = parsed['model_id']
       print(getProperties(model))
       print("Brand =", getAttribute(model, 'brand'))
       print("Model =", getAttribute(model, 'model'))
