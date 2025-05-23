# Theengs Decoder

## Installation

* Create a virtual environment
`python3 -m venv theengs-venv`

* Activate the virtual environment
`source theengs-venv/bin/activate`

* Install and upgrade pip
`python3 -m pip install --upgrade pip`

* Install dependencies
`pip3 install setuptools setuptools_scm cmake==3.25.0 wheel scikit-build ninja`

* Clone Theengs Decoder
`git clone --recursive https://github.com/Theengs/decoder.git`

* cd to python folder inside the repository
`cd decoder/python`

* Copy sources inside the build repository
`cp -r ../src .`

* Build wheel
`python3 setup.py bdist_wheel`

* Install
`cd ..`
`pip3 install python/dist/*.whl`

* Verify installation
`python3 -c "from TheengsDecoder import decodeBLE; print('Successfully imported decodeBLE from PR_build.yml')"`

You should see:
`Successfully imported decodeBLE from PR_build.yml`

## using

`import TheengsDecoder`

## methods

- `decodeBLE(string)` Returns a new string with the decoded data in json format or None.
- `getProperties('model_id string')` Returns the properties (string) of the given model ID or None
- `getAttribute('model_id string', 'attribute string')` Return the value (string) of named attrubte of the model ID or None.
