# Theengs Decoder

## dependencies
Building this module it requires scikit-build and cmake, if not already installed you will need to open a terminal and execute:
```
pip install scikit-build
apt-get install cmake
```

## installation

From a terminal cd to this folder and execute:
```
python setup.py install --user
```

## using

`import TheengsDecoder`

## methods

- `decodeBLE(string)` Returns a new string with the decoded data in json format or None.
- `getProperties('model_id string')` Returns the properties (string) of the given model ID or None
- `getAttribute('model_id string', 'attribute string')` Return the value (string) of named attrubte of the model ID or None.
