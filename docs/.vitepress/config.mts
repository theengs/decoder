import { defineConfig } from 'vitepress'
import { resolve, dirname } from 'path'
import { fileURLToPath } from 'url'
import { commonNav, commonHead } from './commonConfig.mts'

const __dirname = dirname(fileURLToPath(import.meta.url))

export default defineConfig({
  title: 'Theengs Decoder: BLE message decoder',
  description: 'Theengs Decoder project aims to provide an efficient, portable and lightweight library for BLE Internet of Things messages decoding.',
  base: '/',
  outDir: resolve(__dirname, '../../generated/site'),
  head: commonHead,
  ignoreDeadLinks: [/localhost/],
  lastUpdated: true,
  markdown: { lineNumbers: true },
  themeConfig: {
    siteTitle: 'Theengs Decoder',
    nav: commonNav,
    socialLinks: [
      { icon: 'github', link: 'https://github.com/theengs/decoder' }
    ],
    editLink: {
      pattern: 'https://github.com/theengs/decoder/edit/development/docs/:path'
    },
    sidebar: [
      { text: '0 - What is it for', link: '/' },
      {
        text: '1 - Use',
        collapsed: true,
        items: [
          { text: 'Using the library in a project', link: '/use/include' },
          { text: 'Using with ESP32', link: '/use/ESP32' },
          { text: 'Using with Python', link: '/use/python' },
          { text: 'Using with Node.js', link: '/use/nodejs' },
          { text: 'Using with Node-RED', link: '/use/node-red' }
        ]
      },
      {
        text: '2 - Participate',
        collapsed: true,
        items: [
          { text: 'Adding decoders', link: '/participate/adding-decoders' },
          { text: 'Supporting the project', link: '/participate/support' },
          { text: 'Development contributions', link: '/participate/development' }
        ]
      },
      { text: 'Compatible devices', link: '/devices/devices' },
      { text: 'Web Parser', link: '/parser' }
    ],
    search: { provider: 'local' }
  },
  sitemap: { hostname: 'https://decoder.theengs.io' },
  vite: { publicDir: '.vitepress/public' }
})
