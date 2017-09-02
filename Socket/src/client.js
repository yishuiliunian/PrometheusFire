var PTtraderClient = {
  new: function() {
    var ip;
    var name;
    return cat;
  }
}

var PTClientManager = (function () {
  var instance;
  function init() {
      return {
        clients: new Array()
      }
  }
  return {
    getInstance: function () {
        if (!instance) {
          instance = init()
        }
        return instance
    }
  }
})