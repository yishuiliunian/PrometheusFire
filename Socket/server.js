const PTtraderClient = require("./src/client.js")
const PTClientManager = require("./src/client.js")
const express = require('express');
const http = require('http');
const url = require('url');
const WebSocket = require('ws');
const TradeModels = require('./src/protobuff/trader_pb.js')
const app = express();

app.use(function (req, res) {
  res.send({ msg: "hello" });
});

const server = http.createServer(app);
const wss = new WebSocket.Server({ server });
global.res = null
wss.on('connection', function connection(ws, req) {
  const location = url.parse(req.url, true);
  // You might use location.query.access_token to authenticate or share sessions
  // or req.headers.cookie (see http://stackoverflow.com/a/16395220/151312)

  ws.on('message', function incoming(message) {
    console.log('received: %s', message);
    if (Buffer.isBuffer(message)) {
        var bytes = Array.prototype.slice.call(message, 0);
        var msg = new TradeModels.PTMessage.deserializeBinary(bytes);
        console.log('message seq:%s code:%s message:%s', msg.getSeq(), msg.getCode(), JSON.stringify(msg));
        if(global.res != null) {
            global.res.send(msg.getMessage())
        }
    } else {
      console.log("ERROR type %s %s %s", JSON.stringify(message), message.binaryType, typeof message)
    }

  });
  console.log("xxxx %s", ws.header)
});

server.listen(8080, function listening() {
  console.log('Listening on %d', server.address().port);
});


const httpApp = express();
httpApp.get("/", function(req, res) {
  wss.clients.forEach(function (client) {
    var msg = new TradeModels.PTMessage();
    msg.setVersion(1);
    msg.setSeq(100);
    msg.oneway = false;
    msg.servant = "trade";
    msg.code = 0;
    msg.setMethod("trade");
    console.log("send %s", typeof msg.serializeBinary())
    client.send(msg.serializeBinary());
    global.res = res;
  })
});

httpApp.listen(3000, function() {
  console.log('Example app listening on port 3000!');

})
