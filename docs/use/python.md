# Using with Python

## Installing from PyPI

Install the latest stable version from PyPI:

```
pip install TheengsDecoder
```

## Installing a development version
Building this module requires scikit-build and cmake. If not already installed you will need to open a terminal and execute:
```
pip install scikit-build
sudo apt-get install cmake
```

Then clone the repository and install the latest development version:

```
git clone --recursive https://github.com/theengs/decoder.git
cd decoder/python
cp -r ../src .
pip install .
```

## Using

Import the TheengsDecoder in your Python modules as:

```
import TheengsDecoder
```

The library includes a BLE decoder [example](https://github.com/theengs/decoder/blob/development/examples/python/ScanAndDecode.py). To run the example, open the folder [ScanAndDecode](https://github.com/theengs/decoder/blob/development/examples/python/ScanAndDecode.py) in a terminal and type 'python ScanAndDecode.py`

If Theengs Decoder recognized a device, it will print a message like the example below, otherwise None.
```
TheengsDecoder found device: {"brand":"Xiaomi","model":"LYWSD03MMC","model_id":"LYWSD03MMC_ATC","tempc":26.3,"tempf":79.34,"hum":49,"batt":29,"volt":2.487}
```

Additionally the example will print the properties of the device as well as the brand and model using the `getProperties` and `getAttributes` methods. The output of these looks like:
```
{"properties":{"volt":{"unit":"V","name":"voltage"},"x_axis":{"unit":"int","name":"x_axis"},"y_axis":{"unit":"int","name":"y_axis"},"z_axis":{"unit":"int","name":"z_axis"},"tempc":{"unit":"°C","name":"temperature"},"hum":{"unit":"%","name":"humidity"}}}

brand: Mokosmart , model: BeaconX Pro
```

These functions are useful for passing the data to HomeAssistant or other home automation/monitoring services.

## Methods

- `decodeBLE(string)` Returns a string with the decoded data in JSON format or None.
- `getProperties('model_id string')` Returns the properties (string) of the given model ID or None
- `getAttribute('model_id string', 'attribute string')` Return the value (string) of named attribute of the model ID or None.
