'use strict';

const test = require('node:test');
const assert = require('node:assert');
const path = require('node:path');

const NODE_FILE = path.resolve(__dirname, '..', 'theengs-decode.js');
const ROPOT_PAYLOAD = '71205d0183d20c6d8d7cc40d08100103';

function makeMockRED() {
  const RED = {
    registered: {},
    nodes: {
      createNode(node /*, cfg */) {
        node._handlers = {};
        node.error = () => {};
        node.on = (ev, cb) => {
          node._handlers[ev] = cb;
        };
      },
      registerType(name, ctor) {
        RED.registered[name] = ctor;
      },
    },
  };
  return RED;
}

async function runOnce(RED, config, payload) {
  const ctor = RED.registered['theengs-decode'];
  assert.ok(ctor, 'theengs-decode constructor should be registered');
  const node = {};
  ctor.call(node, config);
  const sent = [];
  await new Promise((resolve, reject) => {
    node._handlers.input(
      { payload },
      (m) => sent.push(m),
      (err) => (err ? reject(err) : resolve()),
    );
  });
  return sent;
}

test('registers the theengs-decode node type', () => {
  const RED = makeMockRED();
  require(NODE_FILE)(RED);
  assert.strictEqual(typeof RED.registered['theengs-decode'], 'function');
});

test('decodes a matched payload and forwards enriched message', async () => {
  const RED = makeMockRED();
  require(NODE_FILE)(RED);
  const sent = await runOnce(RED, {}, { servicedata: ROPOT_PAYLOAD });
  assert.strictEqual(sent.length, 1);
  assert.strictEqual(sent[0].payload.brand, 'Xiaomi');
  assert.strictEqual(sent[0].payload.model_id, 'HHCCPOT002');
  assert.strictEqual(sent[0].payload.moi, 3);
  assert.strictEqual(sent[0].payload.mac, 'C4:7C:8D:6D:0C:D2');
});

test('passes message through unchanged when no decoder matches (default)', async () => {
  const RED = makeMockRED();
  require(NODE_FILE)(RED);
  const sent = await runOnce(RED, {}, { servicedata: 'deadbeef' });
  assert.strictEqual(sent.length, 1);
  assert.deepStrictEqual(sent[0].payload, { servicedata: 'deadbeef' });
});

test('drops message when passOnNoMatch is false and no decoder matches', async () => {
  const RED = makeMockRED();
  require(NODE_FILE)(RED);
  const sent = await runOnce(
    RED,
    { passOnNoMatch: false },
    { servicedata: 'deadbeef' },
  );
  assert.strictEqual(sent.length, 0);
});

test('accepts a JSON string payload', async () => {
  const RED = makeMockRED();
  require(NODE_FILE)(RED);
  const sent = await runOnce(
    RED,
    {},
    `{"servicedata":"${ROPOT_PAYLOAD}"}`,
  );
  assert.strictEqual(sent.length, 1);
  assert.strictEqual(sent[0].payload.model_id, 'HHCCPOT002');
});
