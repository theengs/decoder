module.exports = {
    markdown: {
      lineNumbers: true
    },
    title: 'Theengs decoder',
    description: 'One decoder for many devices, decode easily your BLE devices data and transform these into a readable format',
    head: [
      ['link', { rel: "apple-touch-icon", sizes: "180x180", href: ".apple-touch-icon.png"}],
      ['link', { rel: "icon", type: "image/png", sizes: "32x32", href: "/favicon-32x32.png"}],
      ['link', { rel: "icon", type: "image/png", sizes: "16x16", href: "/favicon-16x16.png"}],
      ['link', { rel: 'manifest', href: '/manifest.json' }],
      ['meta', { name: 'theme-color', content: '#3eaf7c' }],
      ['meta', { name: 'apple-mobile-web-app-capable', content: 'yes' }],
      ['meta', { name: 'apple-mobile-web-app-status-bar-style', content: 'black' }],
      ['link', { rel: 'mask-icon', href: '/icons/safari-pinned-tab.svg', color: '#3eaf7c' }],
      ['meta', { name: 'msapplication-TileImage', content: '/favicon-144x144.png' }],
      ['meta', { name: 'msapplication-TileColor', content: '#000000' }]
    ],
    themeConfig: {
      smoothScroll: true,
      repo: 'theengs/decoder',
      docsDir: 'docs',
      docsBranch: 'development',
      lastUpdated: 'Last Updated',
      editLinks: true,
      nav: [
        { text: 'Gateway', link: 'https://gateway.theengs.io', target:'_self', rel:''},
        { text: 'Decoder', link: 'https://decoder.theengs.io', target:'_self', rel:''}
      ],
      sidebar: [
        ['/','0 - What is it for 🏠'],
        {
          title: '1 - Devices 🌡️',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'devices/BM_V23',
            'devices/BPARASITE',
            'devices/BM2',
            'devices/CGD1',
            'devices/CGP1W',
            'devices/GAEN',
            'devices/H5055',
            'devices/H5072',
            'devices/H5075',
            'devices/H5102',
            'devices/iBeacon',
            'devices/IBS_TH1',
            'devices/IBS_TH2',
            'devices/IBT_4XS',
            'devices/IBT_6XS',
            'devices/IBT_2X',
            'devices/SOLIS_6',
            'devices/iNodeEM',
            'devices/JQJCY01YM',
            'devices/MS_CDP',
            'devices/MokoBeacon',
            'devices/MBXPRO',
            'devices/CGDK2',
            'devices/CGH1',
            'devices/CGPR1',
            'devices/RDL52832',
            'devices/RuuviTag_RAWv1',
            'devices/RuuviTag_RAWv2',
            'devices/SBCU',
            'devices/SBMS',
            'devices/SBMT',
            'devices/SBS1',
            'devices/TPMS',
            'devices/WS02',
            'devices/WS08',
            'devices/HHCCJCY01HHCC',
            'devices/HHCCPOT002',
            'devices/XMTZC04HM',
            'devices/XMTZC05HM',
            'devices/CGG1',
            'devices/LYWSD02',
            'devices/LYWSD03MMC_ATC',
            'devices/LYWSD03MMC_PVVX',
            'devices/LYWSDCGQ',
            'devices/Miband',
            'devices/MUE4094RT'
          ]
        },
        {
          title: '2 - Use ✈️',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'use/include',
            'use/ESP32',
            'use/python'
          ]
        },
        {
          title: '3 - Participate 💻',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'participate/adding-decoders',
            'participate/support',
            'participate/development'
          ]
        }
    ]
    },
    plugins: [
      ['@vuepress/pwa', {
        serviceWorker: true,
        updatePopup: true
      }],
      ['@vuepress/medium-zoom', true],
      ['@vuepress/nprogress']
    ]
  }
