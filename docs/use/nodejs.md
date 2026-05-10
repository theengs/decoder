# Using with Node.js

The `theengs-decoder` package is a Node.js binding for the Theengs Decoder
library. It runs as WebAssembly, so installation does not require a C++
toolchain on the user's machine.

## Installing from npm

```sh
npm install theengs-decoder
```

Requires Node.js 18 or newer.

## Using

```js
const { decodeBLE, getProperties, getAttribute } = require('theengs-decoder');

const decoded = await decodeBLE({
  servicedata: '71205d0183d20c6d8d7cc40d08100103',
});
// → { brand: 'Xiaomi', model: 'RoPot', model_id: 'HHCCPOT002', moi: 3, mac: 'C4:7C:8D:6D:0C:D2', ... }
```

If the decoder doesn't recognize the advertisement, `decodeBLE` returns
`null`. The input may be either an object or a JSON string — both work.

The package also exposes `getProperties(model_id)` and
`getAttribute(model_id, attribute)`, mirroring the Python binding:

```js
const props = await getProperties('HHCCPOT002');
// → { properties: { moi: { unit: '%', name: 'moisture' }, ... } }

const brand = await getAttribute('HHCCPOT002', 'brand');
// → 'Xiaomi'
```

These are useful for forwarding decoded values to Home Assistant or other
automation systems with the right unit and naming metadata.

## Pre-loading the WebAssembly module

The first call to any of the three functions implicitly loads the
WebAssembly module. To pay that cost at startup instead of on the first
hot-path call, await `ready()` once:

```js
const { ready, decodeBLE } = require('theengs-decoder');

await ready();
// subsequent decodeBLE() calls don't pay the load cost
```

## Building a development version

Building the module from source requires an
[Emscripten](https://emscripten.org/) toolchain (`emcc`, `emcmake`,
`emmake`).

```sh
git clone --recursive https://github.com/theengs/decoder.git
cd decoder/nodejs/theengs-decoder
npm install
npm run build
npm test
```

## Methods

- `ready()` — Resolves once the WebAssembly module is loaded. Optional.
- `decodeBLE(input)` — Returns the decoded object, or `null` if no
  decoder matched. Input can be an object or a JSON string.
- `getProperties(modelId)` — Returns the properties object for a known
  model id, or `null`.
- `getAttribute(modelId, attribute)` — Returns the attribute value as a
  string, or `null`.
