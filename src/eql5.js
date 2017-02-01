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
  // accepts any number of arguments (no way to achieve the same in Qt/C++)
  var caller, name, args;
  var start = 1;
  var arg1 = arguments[0];
  if(typeof(arg1) == "object") { // 'this'
    caller = arg1;
    name = arguments[1];
    start++; }
  else {
    name = arg1; }
  if(arguments.length > start) {
    var len = arguments.length - start;
    args = new Array(len);
    for(var i = 0; i < len; i++) {
      args[i] = arguments[i + start]; }}
  if(undefined != caller) {
    return apply(caller, name, args); }
  return apply(name, args); }

function apply(arg1, arg2, arg3) {
  var caller, name, args;
  if(typeof(arg1) == "object") { // 'this'
    caller = arg1;
    name = arg2;
    args = arg3; }
  else {
    name = arg1;
    args = arg2; }
  return checkEval(EQL5.apply(caller, name, args)); }

function tr(source, context, pluralNumber) {
  // for i18n
  return EQL5.apply(null, "eql:qtranslate", [context, source, (typeof(pluralNumber) == "number") ? pluralNumber : 0]); }
