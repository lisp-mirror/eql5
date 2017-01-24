// helper functions for convenient QML/EQL5 integration

function checkEval(arg) {
  // prepared in Lisp for JS evaluation
  if((typeof(arg) == "string") && (arg.substr(0, 3) == "#<>")) {
    return eval(arg.substr(3)); }
  return arg; }

function fun() {
  var name = arguments[0];
  var len = arguments.length - 1;
  var args = new Array(len);
  for(var i = 0; i < len; i++) {
    args[i] = arguments[i + 1]; }
  return checkEval(EQL5.apply(name, args)); }

function apply(name, args) {
  return checkEval(EQL5.apply(name, args)); }
