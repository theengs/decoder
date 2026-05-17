<script setup lang="ts">
import { computed, onMounted, ref, shallowRef } from 'vue'

const DEFAULT_PAYLOAD = {
  id: '88:22:44:44:11:44',
  rssi: -85,
  servicedata: '08094411444422880104e500c6020702aa2702012d',
  servicedatauuid: '0xfdcd',
}

const input = ref(JSON.stringify(DEFAULT_PAYLOAD, null, 2))
const status = ref<'idle' | 'loading' | 'ready' | 'error'>('idle')
const errorMsg = ref<string | null>(null)
const result = ref<unknown>(null)
const noMatch = ref(false)
const decoder = shallowRef<any>(null)

const formattedResult = computed(() =>
  result.value === null ? '' : JSON.stringify(result.value, null, 2),
)

async function loadDecoder() {
  if (decoder.value || status.value === 'loading') return
  status.value = 'loading'
  try {
    const base = (import.meta as any).env?.BASE_URL ?? '/'
    const path = `${base}wasm/theengs_decoder_web.js`
    const absoluteUrl = new URL(path, window.location.href).href
    const shimSource = `export { default } from ${JSON.stringify(absoluteUrl)}`
    const blob = new Blob([shimSource], { type: 'application/javascript' })
    const blobUrl = URL.createObjectURL(blob)
    let mod: any
    try {
      mod = await import(/* @vite-ignore */ blobUrl)
    } finally {
      URL.revokeObjectURL(blobUrl)
    }
    const factory = mod.default ?? mod.createTheengsDecoderModule
    const Module = await factory()
    decoder.value = new Module.TheengsDecoder()
    status.value = 'ready'
  } catch (err: any) {
    status.value = 'error'
    errorMsg.value = `Failed to load decoder: ${err?.message ?? err}`
  }
}

function decode() {
  errorMsg.value = null
  noMatch.value = false
  result.value = null

  if (!decoder.value) {
    errorMsg.value = 'Decoder not ready yet. Try again in a moment.'
    return
  }

  let parsed: Record<string, unknown>
  try {
    parsed = JSON.parse(input.value)
  } catch (err: any) {
    errorMsg.value = `Invalid JSON: ${err?.message ?? err}`
    return
  }

  if (!parsed || typeof parsed !== 'object' || Array.isArray(parsed)) {
    errorMsg.value = 'Input must be a JSON object.'
    return
  }

  if (!('servicedata' in parsed) && !('manufacturerdata' in parsed)) {
    errorMsg.value =
      'Object must include at least one of "servicedata" or "manufacturerdata".'
    return
  }

  try {
    const raw = decoder.value.decodeBLE(JSON.stringify(parsed))
    if (!raw) {
      noMatch.value = true
      return
    }
    result.value = JSON.parse(raw)
  } catch (err: any) {
    errorMsg.value = `Decode failed: ${err?.message ?? err}`
  }
}

function resetExample() {
  input.value = JSON.stringify(DEFAULT_PAYLOAD, null, 2)
  errorMsg.value = null
  noMatch.value = false
  result.value = null
}

onMounted(() => {
  loadDecoder()
})
</script>

<template>
  <div class="web-parser">
    <p class="intro">
      Paste a BLE advertisement as a JSON object below and the decoder runs
      locally in your browser via WebAssembly — no data leaves your device.
      The object must include
      <code>servicedata</code> or <code>manufacturerdata</code> (hex strings),
      optionally with <code>servicedatauuid</code>, <code>name</code>,
      <code>mac</code>, or <code>id</code>.
    </p>

    <div class="controls">
      <button type="button" class="reset-btn" @click="resetExample">
        Reset to example
      </button>
      <span class="status" :data-state="status">
        <template v-if="status === 'loading'">Loading decoder…</template>
        <template v-else-if="status === 'ready'">Decoder ready</template>
        <template v-else-if="status === 'error'">Decoder unavailable</template>
        <template v-else>Initializing…</template>
      </span>
    </div>

    <div class="grid">
      <div class="pane">
        <label class="pane-label" for="parser-input">Input JSON</label>
        <textarea
          id="parser-input"
          v-model="input"
          spellcheck="false"
          autocomplete="off"
          autocapitalize="off"
          rows="10"
        />
        <button
          class="decode-btn"
          :disabled="status !== 'ready'"
          @click="decode"
        >
          Decode
        </button>
      </div>

      <div class="pane">
        <label class="pane-label">Decoded output</label>
        <pre v-if="errorMsg" class="output error">{{ errorMsg }}</pre>
        <pre v-else-if="noMatch" class="output muted">No decoder matched this payload.</pre>
        <pre v-else-if="formattedResult" class="output">{{ formattedResult }}</pre>
        <pre v-else class="output muted">Click <strong>Decode</strong> to see the result.</pre>
      </div>
    </div>
  </div>
</template>

<style scoped>
.web-parser {
  margin: 1rem 0 2rem;
}

.intro {
  color: var(--vp-c-text-2);
  font-size: 0.95rem;
  line-height: 1.55;
  margin-bottom: 1.25rem;
}

.intro code {
  font-size: 0.85em;
  padding: 0.1em 0.35em;
  border-radius: 4px;
  background: var(--vp-c-bg-soft);
  color: var(--vp-c-text-1);
}

.controls {
  display: flex;
  align-items: center;
  justify-content: space-between;
  flex-wrap: wrap;
  gap: 0.75rem;
  margin-bottom: 1rem;
}

.reset-btn {
  padding: 0.4rem 0.8rem;
  border: 1px solid var(--vp-c-divider);
  border-radius: 6px;
  background: var(--vp-c-bg);
  color: var(--vp-c-text-1);
  font-size: 0.85rem;
  cursor: pointer;
  transition: border-color 0.2s, color 0.2s;
}

.reset-btn:hover {
  border-color: var(--vp-c-brand-1);
  color: var(--vp-c-brand-1);
}

.status {
  font-size: 0.85rem;
  color: var(--vp-c-text-2);
  padding: 0.25rem 0.6rem;
  border-radius: 999px;
  background: var(--vp-c-bg-soft);
}

.status[data-state="ready"] {
  color: var(--vp-c-brand-1);
}

.status[data-state="error"] {
  color: var(--vp-c-danger-1, #d93f3f);
}

.grid {
  display: grid;
  grid-template-columns: 1fr 1fr;
  gap: 1rem;
}

@media (max-width: 720px) {
  .grid {
    grid-template-columns: 1fr;
  }
}

.pane {
  display: flex;
  flex-direction: column;
  gap: 0.5rem;
  min-width: 0;
}

.pane-label {
  font-size: 0.85rem;
  font-weight: 600;
  color: var(--vp-c-text-2);
  text-transform: uppercase;
  letter-spacing: 0.04em;
}

textarea {
  width: 100%;
  min-height: 220px;
  padding: 0.75rem;
  border: 1px solid var(--vp-c-divider);
  border-radius: 8px;
  background: var(--vp-c-bg);
  color: var(--vp-c-text-1);
  font-family: var(--vp-font-family-mono);
  font-size: 0.85rem;
  line-height: 1.5;
  resize: vertical;
  transition: border-color 0.2s;
}

textarea:focus {
  outline: none;
  border-color: var(--vp-c-brand-1);
}

.decode-btn {
  align-self: flex-start;
  padding: 0.55rem 1.2rem;
  border: none;
  border-radius: 6px;
  background: var(--vp-c-brand-1);
  color: var(--vp-c-white, #fff);
  font-weight: 600;
  font-size: 0.9rem;
  cursor: pointer;
  transition: background 0.2s, opacity 0.2s;
}

.decode-btn:hover:not(:disabled) {
  background: var(--vp-c-brand-2);
}

.decode-btn:disabled {
  opacity: 0.55;
  cursor: not-allowed;
}

.output {
  margin: 0;
  padding: 0.75rem;
  min-height: 220px;
  border: 1px solid var(--vp-c-divider);
  border-radius: 8px;
  background: var(--vp-c-bg-soft);
  color: var(--vp-c-text-1);
  font-family: var(--vp-font-family-mono);
  font-size: 0.85rem;
  line-height: 1.5;
  white-space: pre-wrap;
  word-break: break-word;
  overflow: auto;
}

.output.error {
  border-color: var(--vp-c-danger-1, #d93f3f);
  color: var(--vp-c-danger-1, #d93f3f);
  background: var(--vp-c-danger-soft, rgba(217, 63, 63, 0.08));
}

.output.muted {
  color: var(--vp-c-text-3, var(--vp-c-text-2));
  font-style: italic;
}
</style>
