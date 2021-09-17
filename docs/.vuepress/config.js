module.exports = {
    markdown: {
      lineNumbers: true
    },
    title: 'Theengs decoder',
    description: 'One decoder for many devices, decode easily your BLE devices data and transform these into a readable format',
    head: [
      ['link', { rel: "icon", type: "image/png", sizes: "32x32", href: "/img/favicon-32x32.png"}],
      ['link', { rel: "icon", type: "image/png", sizes: "16x16", href: "/img/favicon-16x16.png"}],
      ['link', { rel: 'icon', href: '/img/Openmqttgateway_logo_mini.png' }],
      ['link', { rel: 'manifest', href: '/manifest.json' }],
      ['meta', { name: 'theme-color', content: '#3eaf7c' }],
      ['meta', { name: 'apple-mobile-web-app-capable', content: 'yes' }],
      ['meta', { name: 'apple-mobile-web-app-status-bar-style', content: 'black' }],
      ['link', { rel: "apple-touch-icon", sizes: "180x180", href: "/img/apple-touch-icon.png"}],
      ['link', { rel: 'mask-icon', href: '/icons/safari-pinned-tab.svg', color: '#3eaf7c' }],
      ['meta', { name: 'msapplication-TileImage', content: '/icons/msapplication-icon-144x144.png' }],
      ['meta', { name: 'msapplication-TileColor', content: '#000000' }],
      ['script', {type: 'module', src: 'https://unpkg.com/esp-web-tools@3.4.2/dist/web/install-button.js?module'}]
    ],
    themeConfig: {
      smoothScroll: true,
      repo: 'theengs/1decoder',
      docsDir: 'docs',
      docsBranch: 'development',
      lastUpdated: 'Last Updated',
      editLinks: true,
      sidebar: [
        ['/','0 - What is it for 🏠'],
        {
          title: '1 - Use ✈️',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'use/use'
          ]
        },
        {
          title: '2 - Participate 💻',   // required
          sidebarDepth: 1,    // optional, defaults to 1
          children: [
            'participate/support',
            'participate/development',
            'participate/adding-protocols',
            ['https://github.com/1technophile/OpenMQTTGateway/blob/development/LICENSE.txt','License']
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
