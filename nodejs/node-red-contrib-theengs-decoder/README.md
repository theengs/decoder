# node-red-contrib-theengs-decoder

A Node-RED node that decodes BLE advertisement messages using
[Theengs Decoder](https://decoder.theengs.io/).

## Install

From the Node-RED palette manager, search for
`node-red-contrib-theengs-decoder` and click install. Or, from the
command line in your Node-RED user directory (typically `~/.node-red`):

```sh
npm install node-red-contrib-theengs-decoder
```

The decoder is shipped as WebAssembly — no native toolchain is required.

## Usage

Wire any BLE-scanner node (or an MQTT input from a Theengs Gateway) into
the **theengs decode** node. The input `msg.payload` should be an object
with at least one of `servicedata` or `manufacturerdata` (hex string).
The output `msg.payload` will be the decoded device information.

An importable example flow is included under
[`examples/`](https://github.com/theengs/decoder/tree/development/nodejs/node-red-contrib-theengs-decoder/examples).

## License

GPL-3.0-only — same as the underlying Theengs Decoder.
