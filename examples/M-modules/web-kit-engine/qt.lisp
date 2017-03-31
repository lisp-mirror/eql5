;;; generate C++ glue code
;;; (see "invokables.lisp" in sources)

(progn
  (load (in-home "src/lisp/invokables"))
  (load "web-kit-engine")
  (generate-invokables "lib/")
  (qq))

