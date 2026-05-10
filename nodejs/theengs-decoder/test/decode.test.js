'use strict';

const test = require('node:test');
const assert = require('node:assert');
const { ready, decodeBLE, getProperties, getAttribute } = require('..');

const ROPOT_PAYLOAD = '71205d0183d20c6d8d7cc40d08100103';

test('decodes a Xiaomi RoPot servicedata advertisement', async () => {
  await ready();
  const result = await decodeBLE({ servicedata: ROPOT_PAYLOAD });
  assert.ok(result, 'expected a decoded result');
  assert.strictEqual(result.brand, 'Xiaomi');
  assert.strictEqual(result.model_id, 'HHCCPOT002');
  assert.strictEqual(result.moi, 3);
  assert.strictEqual(result.mac, 'C4:7C:8D:6D:0C:D2');
});

test('returns null on a payload with no matching decoder', async () => {
  await ready();
  const result = await decodeBLE({});
  assert.strictEqual(result, null);
});

test('accepts a JSON string as input', async () => {
  await ready();
  const result = await decodeBLE(`{"servicedata":"${ROPOT_PAYLOAD}"}`);
  assert.ok(result);
  assert.strictEqual(result.model_id, 'HHCCPOT002');
});

test('getProperties returns the property dictionary for a known model', async () => {
  await ready();
  const props = await getProperties('HHCCPOT002');
  assert.ok(props && props.properties, 'expected a properties object');
  assert.ok(props.properties.moi, 'expected moisture property');
});

test('getAttribute returns the brand for a known model', async () => {
  await ready();
  const brand = await getAttribute('HHCCPOT002', 'brand');
  assert.strictEqual(brand, 'Xiaomi');
});
