(window.webpackJsonp=window.webpackJsonp||[]).push([[102],{413:function(e,t,a){"use strict";a.r(t);var s=a(14),n=Object(s.a)({},(function(){var e=this,t=e._self._c;return t("ContentSlotsDistributor",{attrs:{"slot-key":e.$parent.slotKey}},[t("h1",{attrs:{id:"using-the-library-in-a-project"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#using-the-library-in-a-project"}},[e._v("#")]),e._v(" Using the library in a project")]),e._v(" "),t("p",[e._v("Call "),t("code",[e._v("decodeBLEJson(JsonObject)")]),e._v(" with the input being of the Arduino JSON JsonObject type. If the device is known the JsonObject will have the decoded device data added to it.")]),e._v(" "),t("h3",{attrs:{id:"example"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#example"}},[e._v("#")]),e._v(" Example")]),e._v(" "),t("p",[e._v("Input JsonObject:")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v('{\n  "servicedata": "712098000163b6658d7cc40d0410024001"\n}\n')])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br"),t("span",{staticClass:"line-number"},[e._v("2")]),t("br"),t("span",{staticClass:"line-number"},[e._v("3")]),t("br")])]),t("p",[e._v("JsonObject after decoding:")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v('{\n  "servicedata": "712098000163b6658d7cc40d0410024001"\n  "brand":"Xiaomi",\n  "model":"miflora",\n  "model_id":"HHCCJCY01HHCC",\n  "tempc":32,\n  "tempf":89.6\n}\n')])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br"),t("span",{staticClass:"line-number"},[e._v("2")]),t("br"),t("span",{staticClass:"line-number"},[e._v("3")]),t("br"),t("span",{staticClass:"line-number"},[e._v("4")]),t("br"),t("span",{staticClass:"line-number"},[e._v("5")]),t("br"),t("span",{staticClass:"line-number"},[e._v("6")]),t("br"),t("span",{staticClass:"line-number"},[e._v("7")]),t("br"),t("span",{staticClass:"line-number"},[e._v("8")]),t("br")])]),t("div",{staticClass:"custom-block tip"},[t("p",{staticClass:"custom-block-title"},[e._v("TIP")]),e._v(" "),t("p",[e._v("If you are using ArduinoJson library with your project (like TheengsDecoder) you may have to align the ArduinoJson build options into TheengDecoder with it. To do so, go to "),t("a",{attrs:{href:"https://github.com/theengs/decoder/blob/development/src/decoder.h",target:"_blank",rel:"noopener noreferrer"}},[e._v("decoder.h"),t("OutboundLink")],1),e._v(" and align the flags with your project. In particular you may have to remove "),t("code",[e._v("ARDUINOJSON_USE_LONG_LONG=1")]),e._v(".")])]),e._v(" "),t("h3",{attrs:{id:"encrypted-data"}},[t("a",{staticClass:"header-anchor",attrs:{href:"#encrypted-data"}},[e._v("#")]),e._v(" Encrypted data")]),e._v(" "),t("p",[e._v("Decoders for encrypted data, indicated by the "),t("code",[e._v('"encr": true')]),e._v(" tag, will send a JsonObject with the properties cipher, counter, message integrity check and MAC address, e.g.")]),e._v(" "),t("div",{staticClass:"language- line-numbers-mode"},[t("pre",{pre:!0,attrs:{class:"language-text"}},[t("code",[e._v('{\n  "encr": true,\n  "cipher":"62511158bd25",\n  "ctr":"b8f09364",\n  "mic":"5b573115",\n  "mac":"AA:BB:CC:DD:EE:FF"\n}\n')])]),e._v(" "),t("div",{staticClass:"line-numbers-wrapper"},[t("span",{staticClass:"line-number"},[e._v("1")]),t("br"),t("span",{staticClass:"line-number"},[e._v("2")]),t("br"),t("span",{staticClass:"line-number"},[e._v("3")]),t("br"),t("span",{staticClass:"line-number"},[e._v("4")]),t("br"),t("span",{staticClass:"line-number"},[e._v("5")]),t("br"),t("span",{staticClass:"line-number"},[e._v("6")]),t("br"),t("span",{staticClass:"line-number"},[e._v("7")]),t("br")])]),t("p",[e._v("With a correct bindkey this encrypted data can be decrypted and sent back to Decoder for properties decoding.")])])}),[],!1,null,null,null);t.default=n.exports}}]);