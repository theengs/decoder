# theengs-decoder

Node.js binding for [Theengs Decoder](https://decoder.theengs.io/) — decode
BLE advertisements from a wide range of consumer sensors and devices.

The decoder runs as WebAssembly, so installation does not require a C++
toolchain on the user's machine.

## Install

```sh
npm install theengs-decoder
```

## Usage

```js
const { decodeBLE, getProperties, getAttribute } = require('theengs-decoder');

const decoded = await decodeBLE({
  servicedata: '71205d0183d20c6d8d7cc40d08100103',
});
// → { brand: 'Xiaomi', model: 'RoPot', model_id: 'HHCCPOT002', moi: 3, mac: 'C4:7C:8D:6D:0C:D2', ... }

const props = await getProperties('HHCCPOT002');
const brand = await getAttribute('HHCCPOT002', 'brand');
```

`decodeBLE` accepts either an object or a JSON string and returns the
decoded device information, or `null` if no decoder matched.

A `ready()` function is also exported; awaiting it pre-loads the WebAssembly
module so the first hot-path call doesn't pay the load cost.

## Build from source

Requires a working [Emscripten](https://emscripten.org/) toolchain (`emcc`,
`emcmake`, `emmake`).

```sh
git clone --recursive https://github.com/theengs/decoder.git
cd decoder/nodejs/theengs-decoder
npm install
npm run build
npm test
```

## License

GPL-3.0-only — same as the underlying Theengs Decoder.
