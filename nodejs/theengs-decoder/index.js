'use strict';

const path = require('node:path');
const { pathToFileURL } = require('node:url');

let _modulePromise = null;
let _decoderInstance = null;

function _loadModule() {
  if (!_modulePromise) {
    // The wasm glue is an ES module (.mjs); load it via dynamic import so it
    // works from this CommonJS package without changing the public API.
    const moduleUrl = pathToFileURL(
      path.join(__dirname, 'dist', 'theengs_decoder_wasm.mjs'),
    ).href;
    _modulePromise = import(moduleUrl).then(({ default: createModule }) =>
      createModule(),
    );
  }
  return _modulePromise;
}

async function _getDecoder() {
  if (_decoderInstance) return _decoderInstance;
  const Module = await _loadModule();
  _decoderInstance = new Module.TheengsDecoder();
  return _decoderInstance;
}

async function ready() {
  await _getDecoder();
}

async function decodeBLE(input) {
  const decoder = await _getDecoder();
  const json = typeof input === 'string' ? input : JSON.stringify(input);
  const out = decoder.decodeBLE(json);
  if (!out) return null;
  return JSON.parse(out);
}

async function getProperties(modelId) {
  const decoder = await _getDecoder();
  const out = decoder.getProperties(modelId);
  if (!out) return null;
  return JSON.parse(out);
}

async function getAttribute(modelId, attribute) {
  const decoder = await _getDecoder();
  const out = decoder.getAttribute(modelId, attribute);
  return out || null;
}

module.exports = { ready, decodeBLE, getProperties, getAttribute };
