(window.webpackJsonp=window.webpackJsonp||[]).push([[103],{411:function(e,t,s){"use strict";s.r(t);var n=s(14),a=Object(n.a)({},(function(){var e=this,t=e._self._c;return t("ContentSlotsDistributor",{attrs:{"slot-key":e.$parent.slotKey}},[t("h1",{attrs:{id:"using-with-python"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#using-with-python"}},[e._v("#")]),e._v(" Using with Python")]),e._v(" "),t("h2",{attrs:{id:"installing-from-pypi"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#installing-from-pypi"}},[e._v("#")]),e._v(" Installing from PyPI")]),e._v(" "),t("p",[e._v("Install the latest stable version from PyPI:")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v("pip install TheengsDecoder\n")])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br")])]),t("h2",{attrs:{id:"installing-a-development-version"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#installing-a-development-version"}},[e._v("#")]),e._v(" Installing a development version")]),e._v(" "),t("p",[e._v("Building this module requires scikit-build and cmake. If not already installed you will need to open a terminal and execute:")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v("pip install scikit-build\nsudo apt-get install cmake\n")])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br"),t("span",{staticClass:"line-number"},[e._v("2")]),t("br")])]),t("p",[e._v("The clone the repository and install the latest development version:")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v("git clone https://github.com/theengs/decoder.git\ncd decoder/python\npip install .\n")])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br"),t("span",{staticClass:"line-number"},[e._v("2")]),t("br"),t("span",{staticClass:"line-number"},[e._v("3")]),t("br")])]),t("h2",{attrs:{id:"using"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#using"}},[e._v("#")]),e._v(" Using")]),e._v(" "),t("p",[e._v("Import the TheengsDecoder in your Python modules as:")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v("import TheengsDecoder\n")])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br")])]),t("p",[e._v("The library includes a BLE decoder "),t("a",{attrs:{href:"https://github.com/theengs/decoder/blob/development/examples/python/ScanAndDecode.py",target:"_blank",rel:"noopener noreferrer"}},[e._v("example"),t("OutboundLink")],1),e._v(". To run the example, open the folder "),t("a",{attrs:{href:"https://github.com/theengs/decoder/blob/development/examples/python/ScanAndDecode.py",target:"_blank",rel:"noopener noreferrer"}},[e._v("ScanAndDecode"),t("OutboundLink")],1),e._v(" in a terminal and type 'python ScanAndDecode.py`")]),e._v(" "),t("p",[e._v("If Theengs Decoder recognized a device, it will print a message like the example below, otherwise None.")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v('TheengsDecoder found device: {"brand":"Xiaomi","model":"LYWSD03MMC","model_id":"LYWSD03MMC_ATC","tempc":26.3,"tempf":79.34,"hum":49,"batt":29,"volt":2.487}\n')])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br")])]),t("p",[e._v("Additionally the example will print the properties of the device as well as the brand and model using the "),t("code",[e._v("getProperties")]),e._v(" and "),t("code",[e._v("getAttributes")]),e._v(" methods. The output of these looks like:")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v('{"properties":{"volt":{"unit":"V","name":"voltage"},"x_axis":{"unit":"int","name":"x_axis"},"y_axis":{"unit":"int","name":"y_axis"},"z_axis":{"unit":"int","name":"z_axis"},"tempc":{"unit":"°C","name":"temperature"},"hum":{"unit":"%","name":"humidity"}}}\n\nbrand: Mokosmart , model: BeaconX Pro\n')])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br"),t("span",{staticClass:"line-number"},[e._v("2")]),t("br"),t("span",{staticClass:"line-number"},[e._v("3")]),t("br")])]),t("p",[e._v("These functions are useful for passing the data to HomeAssistant or other home automation/monitoring services.")]),e._v(" "),t("h2",{attrs:{id:"methods"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#methods"}},[e._v("#")]),e._v(" Methods")]),e._v(" "),t("ul",[t("li",[t("code",[e._v("decodeBLE(string)")]),e._v(" Returns a string with the decoded data in JSON format or None.")]),e._v(" "),t("li",[t("code",[e._v("getProperties('model_id string')")]),e._v(" Returns the properties (string) of the given model ID or None")]),e._v(" "),t("li",[t("code",[e._v("getAttribute('model_id string', 'attribute string')")]),e._v(" Return the value (string) of named attribute of the model ID or None.")])])])}),[],!1,null,null,null);t.default=a.exports}}]);