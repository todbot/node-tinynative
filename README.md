node-tinynative

Smallest possible Node.js native module.
Exposes a single function that prints to console

To use:
```
npm install tinynative
```

```
var tinynative = require('tinynative');
tinynative("hello there");  // prints out "tinynative: hello there"
```


To develop:

```
git clone https://github.com/todbot/node-tinynative
cd node-tinynative
npm install
node-gyp rebuild
```
