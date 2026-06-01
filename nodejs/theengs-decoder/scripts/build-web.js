'use strict';

const { execFileSync } = require('node:child_process');
const { mkdirSync, copyFileSync } = require('node:fs');
const path = require('node:path');

const pkgDir = path.resolve(__dirname, '..');
const repoRoot = path.resolve(pkgDir, '..', '..');
const buildDir = path.join(pkgDir, 'build-web');
const outDir = path.join(repoRoot, 'docs', '.vitepress', 'public', 'wasm');

mkdirSync(buildDir, { recursive: true });
mkdirSync(outDir, { recursive: true });

const run = (cmd, args) =>
  execFileSync(cmd, args, { cwd: buildDir, stdio: 'inherit' });

run('emcmake', ['cmake', '-DBUILD_WASM=ON', repoRoot]);
run('emmake', ['make', 'theengs_decoder_wasm', '-j']);

copyFileSync(
  path.join(buildDir, 'theengs_decoder_wasm.mjs'),
  path.join(outDir, 'theengs_decoder_wasm.mjs'),
);

console.log(`Built ${path.relative(repoRoot, path.join(outDir, 'theengs_decoder_wasm.mjs'))}`);
