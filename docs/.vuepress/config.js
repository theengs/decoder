const commonConfig = require('./public/commonConfig');

module.exports = {
  ...commonConfig,
  themeConfig: {
    repo: 'theengs/decoder',
    ...commonConfig.themeConfig,
    sidebar: [
      ['/','0 - What is it for 🏠'],
      {
        title: '1 - Use ✈️',   // required
        sidebarDepth: 1,    // optional, defaults to 1
        children: [
          'use/include',
          'use/ESP32',
          'use/python'
        ]
      },
      {
        title: '2 - Participate 💻',   // required
        sidebarDepth: 1,    // optional, defaults to 1
        children: [
          'participate/adding-decoders',
          'participate/support',
          'participate/development'
        ]
      }
  ]
  }
}
