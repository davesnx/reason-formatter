const fs = require('fs')

const template = fs.readFileSync('./content-script-template.js').toString()
const bundle = fs.readFileSync('./dist/bundle.js').toString()

const contentScript = template.replace(
  '[[SCRIPT_TEXT_CONTENT]]',
  'decodeURI("' + encodeURI(bundle) + '")'
)

fs.writeFileSync('./extension/content-script.js', contentScript)
console.log('build.js done')
