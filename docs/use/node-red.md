# Using with Node-RED

The `node-red-contrib-theengs-decoder` package adds a **theengs decode**
node to the Node-RED palette. Wire it after any node that produces BLE
advertisement messages — for example an MQTT input from a Theengs Gateway,
or a BLE-scanner node — and it will replace the raw advertisement on
`msg.payload` with the decoded device information.

The decoder runs as WebAssembly, so installation does not require a C++
toolchain on the host running Node-RED.

## Installing

From inside Node-RED, open the palette manager (☰ → Manage palette →
Install) and search for `node-red-contrib-theengs-decoder`. Click
**Install**.

Or from the command line in your Node-RED user directory (typically
`~/.node-red`):

```sh
npm install node-red-contrib-theengs-decoder
```

Then restart Node-RED.

## Wiring it up

The node accepts `msg.payload` as either an object or a JSON string with
at least one of:

- `servicedata` — hex string of the BLE service data
- `manufacturerdata` — hex string of the BLE manufacturer data
- `id` — device identifier (MAC), optional, used by some decoders
- `name` — advertised local name, optional, used by some decoders

A typical flow looks like:

```
[ MQTT in (BTtoMQTT/+) ] → [ theengs decode ] → [ debug ]
```

When a decoder matches, `msg.payload` becomes an object with `brand`,
`model`, `model_id`, and any device-specific readings (`tempc`, `hum`,
`batt`, …).

## Configuration

- **Name** — optional label shown in the editor.
- **Pass through on no match** — when checked (default), advertisements
  that no decoder recognizes are forwarded unchanged so the rest of your
  flow can still see them. When unchecked, unmatched messages are
  dropped.

## Example flow

The package ships an importable example flow at
[`examples/decode-flow.json`](https://github.com/theengs/decoder/blob/development/nodejs/node-red-contrib-theengs-decoder/examples/decode-flow.json).
In Node-RED: ☰ → Import → paste the JSON → **Import**. Deploy, click the
inject node, and the debug pane should show the decoded miflora reading.

## Building a development version

The Node-RED node depends on the
[`theengs-decoder`](./nodejs) base package. To work on both from a
checkout, build the base package locally first:

```sh
git clone --recursive https://github.com/theengs/decoder.git
cd decoder/nodejs/theengs-decoder
npm install
npm run build

cd ../node-red-contrib-theengs-decoder
npm install
npm install --no-save ../theengs-decoder
```

Then point Node-RED at the local checkout:

```sh
cd ~/.node-red
npm install /path/to/decoder/nodejs/node-red-contrib-theengs-decoder
```
