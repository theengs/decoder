from TheengsDecoder import decodeBLE as dble
from TheengsDecoder import getProperties
from TheengsDecoder import getAttribute
import json

x = {"servicedata":"712098004a63b6658d7cc40d071003f32600"}
z = dble(json.dumps(x))
print(z, "\n")

p = json.loads(z)
print(getProperties(p['model_id']), "\n")
brand = getAttribute(p['model_id'], 'brand')
model = getAttribute(p['model_id'], 'model')
print("brand:", brand, ", model:", model)

y = {}
z = dble(json.dumps(y))
print("decoder result (None expected): ", z)
print("Done")