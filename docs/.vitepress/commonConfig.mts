import { createRequire } from 'module'
import { existsSync } from 'fs'
import { resolve, dirname } from 'path'
import { fileURLToPath } from 'url'

const __dirname = dirname(fileURLToPath(import.meta.url))
const require = createRequire(import.meta.url)

const commonConfigPath = resolve(__dirname, 'public/commonConfig.js')

let sharedConfig: any = null

if (existsSync(commonConfigPath)) {
  sharedConfig = require(commonConfigPath)
} else {
  console.warn(
    'commonConfig.js not found in .vitepress/public/. ' +
    'Using fallback nav/head. Run CI or download from https://www.theengs.io/commonConfig.js'
  )
}

export const commonNav = sharedConfig?.themeConfig?.nav ?? [
  { text: 'Home', link: 'https://www.theengs.io' },
  { text: 'Community', link: 'https://community.openmqttgateway.com' },
  { text: 'Shop', link: 'https://shop.theengs.io/' }
]

export const commonHead = sharedConfig?.head ?? [
  ['meta', { name: 'viewport', content: 'width=device-width, initial-scale=1' }],
  ['meta', { name: 'theme-color', content: '#3eaf7c' }]
]
