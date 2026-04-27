<script setup lang="ts">
import { computed, ref } from 'vue'
import devices from '../data/devices.json'

type Device = {
  model_id: string
  page: string
  image: string | null
  brand: string
  model: string
  short_description: string
  exchanged_data: string
  device_tracker: string
  [key: string]: any
}

const list = devices as Device[]

const search = ref('')
const sortKey = ref<keyof Device>('model_id')
const sortDir = ref<'asc' | 'desc'>('asc')

const mobileAppKeys = Object.keys(list[0] ?? {}).filter(
  (k) => !['model_id', 'page', 'image', 'brand', 'model', 'short_description', 'exchanged_data', 'device_tracker'].includes(k)
)

function searchableText(d: Device): string {
  return [
    d.model_id,
    d.brand,
    d.model,
    d.short_description,
    d.exchanged_data,
  ].join(' ').toLowerCase()
}

const filtered = computed(() => {
  const term = search.value.trim().toLowerCase()
  let rows = list
  if (term) {
    rows = rows.filter((d) => searchableText(d).includes(term))
  }
  const k = sortKey.value
  const dir = sortDir.value === 'asc' ? 1 : -1
  return [...rows].sort((a, b) => {
    const av = String(a[k] ?? '').toLowerCase()
    const bv = String(b[k] ?? '').toLowerCase()
    if (av < bv) return -1 * dir
    if (av > bv) return 1 * dir
    return 0
  })
})

function toggleSort(key: keyof Device) {
  if (sortKey.value === key) {
    sortDir.value = sortDir.value === 'asc' ? 'desc' : 'asc'
  } else {
    sortKey.value = key
    sortDir.value = 'asc'
  }
}

function sortIcon(key: keyof Device): string {
  if (sortKey.value !== key) return ''
  return sortDir.value === 'asc' ? '▲' : '▼'
}
</script>

<template>
  <div class="devices-table">
    <div class="devices-controls">
      <input
        v-model="search"
        type="search"
        placeholder="Search by model, brand, description…"
        class="devices-search"
        autocomplete="off"
      />
      <span class="devices-count">{{ filtered.length }} of {{ list.length }} devices</span>
    </div>

    <div class="devices-scroll">
      <table class="devices">
        <colgroup>
          <col class="col-model-id" />
          <col class="col-image" />
          <col class="col-brand" />
          <col class="col-model" />
          <col class="col-desc" />
          <col class="col-data" />
          <col class="col-tracker" />
          <col v-for="k in mobileAppKeys" :key="k" class="col-app" />
        </colgroup>
        <thead>
          <tr>
            <th class="sortable" @click="toggleSort('model_id')">
              Model ID <span class="sort-icon">{{ sortIcon('model_id') }}</span>
            </th>
            <th>Image</th>
            <th class="sortable" @click="toggleSort('brand')">
              Brand <span class="sort-icon">{{ sortIcon('brand') }}</span>
            </th>
            <th class="sortable" @click="toggleSort('model')">
              Model <span class="sort-icon">{{ sortIcon('model') }}</span>
            </th>
            <th>Description</th>
            <th>Exchanged Data</th>
            <th class="centered">Tracker</th>
            <th v-for="k in mobileAppKeys" :key="k" class="centered">
              {{ k.replace(/_/g, ' ').replace(/\b\w/g, (c) => c.toUpperCase()) }}
            </th>
          </tr>
        </thead>
        <tbody>
          <tr v-for="d in filtered" :key="d.model_id">
            <td>
              <a :href="`./${d.page}.html`" class="model-link">{{ d.model_id }}</a>
            </td>
            <td class="image-cell">
              <img
                v-if="d.image"
                :src="d.image"
                :alt="d.model_id"
                loading="lazy"
                class="device-image"
              />
            </td>
            <td>{{ d.brand }}</td>
            <td>{{ d.model }}</td>
            <td>{{ d.short_description }}</td>
            <td>{{ d.exchanged_data }}</td>
            <td class="centered">{{ d.device_tracker }}</td>
            <td v-for="k in mobileAppKeys" :key="k" class="centered">{{ d[k] }}</td>
          </tr>
          <tr v-if="filtered.length === 0">
            <td :colspan="7 + mobileAppKeys.length" class="empty">
              No devices match your search.
            </td>
          </tr>
        </tbody>
      </table>
    </div>
  </div>
</template>

<style scoped>
.devices-table {
  margin: 1rem 0 2rem;
}

.devices-controls {
  display: flex;
  gap: 1rem;
  align-items: center;
  margin-bottom: 1rem;
  flex-wrap: wrap;
}

.devices-search {
  flex: 1;
  min-width: 240px;
  max-width: 480px;
  padding: 0.55rem 0.8rem;
  border: 1px solid var(--vp-c-divider);
  border-radius: 6px;
  background: var(--vp-c-bg);
  color: var(--vp-c-text-1);
  font-size: 0.95rem;
  transition: border-color 0.2s;
}

.devices-search:focus {
  outline: none;
  border-color: var(--vp-c-brand-1);
}

.devices-count {
  font-size: 0.85rem;
  color: var(--vp-c-text-2);
}

.devices-scroll {
  overflow-x: auto;
  border: 1px solid var(--vp-c-divider);
  border-radius: 8px;
}

table.devices {
  width: 100%;
  border-collapse: collapse;
  font-size: 0.9rem;
  table-layout: fixed;
}

.col-model-id { width: 110px; }
.col-image    { width: 120px; }
.col-brand    { width: 130px; }
.col-model    { width: 160px; }
.col-desc     { width: auto; }
.col-data     { width: auto; }
.col-tracker  { width: 80px; }
.col-app      { width: 90px; }

table.devices thead {
  background: var(--vp-c-bg-soft);
  position: sticky;
  top: 0;
  z-index: 1;
}

table.devices th {
  text-align: left;
  padding: 0.7rem 0.9rem;
  font-weight: 600;
  color: var(--vp-c-text-1);
  border-bottom: 1px solid var(--vp-c-divider);
  white-space: nowrap;
}

table.devices td {
  word-break: break-word;
  overflow-wrap: anywhere;
  white-space: normal;
}

table.devices th.sortable {
  cursor: pointer;
  user-select: none;
}

table.devices th.sortable:hover {
  color: var(--vp-c-brand-1);
}

table.devices th.centered,
table.devices td.centered {
  text-align: center;
}

table.devices td {
  padding: 0.6rem 0.9rem;
  border-bottom: 1px solid var(--vp-c-divider);
  vertical-align: middle;
  color: var(--vp-c-text-1);
}

table.devices tbody tr:last-child td {
  border-bottom: none;
}

table.devices tbody tr:hover {
  background: var(--vp-c-bg-soft);
}

.image-cell {
  text-align: center;
  padding: 0.4rem !important;
}

.device-image {
  display: block;
  width: 100px;
  height: 100px;
  object-fit: contain;
  border-radius: 4px;
  background: var(--vp-c-bg-soft);
  margin: 0 auto;
}

.model-link {
  color: var(--vp-c-brand-1);
  font-weight: 500;
  text-decoration: none;
}

.model-link:hover {
  text-decoration: underline;
}

.sort-icon {
  display: inline-block;
  font-size: 0.7rem;
  color: var(--vp-c-text-2);
  margin-left: 0.2rem;
}

.empty {
  text-align: center;
  padding: 2rem;
  color: var(--vp-c-text-2);
}
</style>
