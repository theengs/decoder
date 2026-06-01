---
title: Web Parser
aside: false
---

# Web Parser

Decode a Bluetooth Low Energy advertisement directly in your browser. The
Theengs Decoder library is compiled to WebAssembly and runs locally — your
payload is never sent to a server.

<WebParser />

## How to capture an advertisement

Most BLE scanners on a phone or computer expose the raw service data or
manufacturer data fields of an advertisement. Copy the hex string and wrap
it as a JSON object. At least one of `servicedata` or `manufacturerdata`
must be present; the other fields below are optional but help match the
right decoder.

| Field | Description |
|---|---|
| `servicedata` | Service data payload, as a hex string. |
| `servicedatauuid` | UUID of the service the data was advertised under. |
| `manufacturerdata` | Manufacturer data payload, as a hex string. |
| `name` | Advertised device name (used by some decoders). |
| `mac` or `id` | Device MAC address (used by some decoders). |

## Programmatic access

The same decoder is also available as a Node.js package — see
[Using with Node.js](./use/nodejs.md) — and as a Node-RED node — see
[Using with Node-RED](./use/node-red.md).
