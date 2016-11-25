;;; generate C++ glue code
;;; (see "invokables.lisp" in sources)

(progn
  (load (in-home "src/lisp/invokables"))
  (load "examples-browser")
  (generate-invokables "lib/")
  (qq))

