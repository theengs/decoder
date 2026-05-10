'use strict';

const { execFileSync } = require('node:child_process');
const { mkdirSync, copyFileSync } = require('node:fs');
const path = require('node:path');

const pkgDir = path.resolve(__dirname, '..');
const repoRoot = path.resolve(pkgDir, '..', '..');
const buildDir = path.join(pkgDir, 'build');
const distDir = path.join(pkgDir, 'dist');

mkdirSync(buildDir, { recursive: true });
mkdirSync(distDir, { recursive: true });

const run = (cmd, args) =>
  execFileSync(cmd, args, { cwd: buildDir, stdio: 'inherit' });

run('emcmake', ['cmake', '-DBUILD_WASM=ON', repoRoot]);
run('emmake', ['make', 'theengs_decoder_wasm', '-j']);

copyFileSync(
  path.join(buildDir, 'theengs_decoder_wasm.js'),
  path.join(distDir, 'theengs_decoder_wasm.js'),
);

console.log('Built dist/theengs_decoder_wasm.js');
