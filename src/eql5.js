//
// Helper functions for convenient QML/EQL5 integration.
//
// Both 'Lisp.call()' and 'Lisp.apply()' can be called passing optionally
// 'this' as first argument.
//
// The 'this' argument (a QQuickItem) can be accessed in Lisp via qml:*caller*.
//
// Examples:
//
//   Lisp.call("cl:foo", x, y)
//   Lisp.call(this, "cl:foo", x, y)
//
//   Lisp.apply("cl:foo", [x, y])
//   Lisp.apply(this, "cl:foo", [x, y])
//

function checkEval(arg) {
  // prepared in Lisp for JS evaluation
  if((typeof(arg) == "string") && (arg.substr(0, 3) == "#<>")) {
    return eval(arg.substr(3)); }
  return arg; }

function call() {
  var arg1 = arguments[0];
  if(arguments.length > 1) {
    var arg2 = arguments[1];
    var len = arguments.length - 2;
    var args = new Array(len);
    for(var i = 0; i < len; i++) {
      args[i] = arguments[i + 2]; }
    return apply(arg1, arg2, args); }
  return apply(arg1); }

function apply(arg1, arg2, args) {
  var caller, name;
  if(typeof(arg1) == "object") { // 'this'
    caller = arg1;
    name = arg2; }
  else {
    name = arg1;
    if(args === undefined) {
      args = arg2; }
    else {
      args.unshift(arg2); }}
  return checkEval(EQL5.apply(caller, name, args)); }
