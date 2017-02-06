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
  else if(typeof(arg1) == "string") {
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
  else if(typeof(arg1) == "string") {
    name = arg1;
    args = arg2; }
  return checkEval(EQL5.apply(caller, name, args)); }
