'use strict';

let _modulePromise = null;
let _decoderInstance = null;

function _loadModule() {
  if (!_modulePromise) {
    const createModule = require('./dist/theengs_decoder_wasm.js');
    _modulePromise = createModule();
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
