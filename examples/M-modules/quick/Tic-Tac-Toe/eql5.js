// helper functions for convenient QML/EQL5 integration

function fun(name, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9) {
  var args = [];
  if(undefined != arg1) args.push(arg1); {
    if(undefined != arg2) args.push(arg2); {
      if(undefined != arg3) args.push(arg3); {
        if(undefined != arg4) args.push(arg4); {
          if(undefined != arg5) args.push(arg5); {
            if(undefined != arg6) args.push(arg6); {
              if(undefined != arg7) args.push(arg7); {
                if(undefined != arg8) args.push(arg8); {
                  if(undefined != arg9) args.push(arg9); }}}}}}}}
  return EQL5.apply(name, args); }

function apply(name, args) {
  return EQL5.apply(name, args); }

