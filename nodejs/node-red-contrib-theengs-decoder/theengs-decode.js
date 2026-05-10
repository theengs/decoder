'use strict';

module.exports = function (RED) {
  let decoderModule = null;

  function getDecoder() {
    if (!decoderModule) {
      decoderModule = require('theengs-decoder');
    }
    return decoderModule;
  }

  function TheengsDecodeNode(config) {
    RED.nodes.createNode(this, config);
    const node = this;
    const passOnNoMatch = config.passOnNoMatch !== false;
    const decoder = getDecoder();

    decoder.ready().catch((err) => {
      node.error(`Failed to initialize Theengs Decoder: ${err.message}`);
    });

    node.on('input', async function (msg, send, done) {
      send = send || function () { node.send.apply(node, arguments); };
      done = done || function (err) { if (err) node.error(err, msg); };

      try {
        const decoded = await decoder.decodeBLE(msg.payload);
        if (decoded) {
          msg.payload = decoded;
          send(msg);
        } else if (passOnNoMatch) {
          send(msg);
        }
        done();
      } catch (err) {
        done(err);
      }
    });
  }

  RED.nodes.registerType('theengs-decode', TheengsDecodeNode);
};
