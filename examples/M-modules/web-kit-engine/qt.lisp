;;; generate C++ glue code
;;; (see "invokables.lisp" in sources)

(progn
  (load (in-home "lib/invokables"))
  (load "web-kit-engine")
  (generate-invokables "lib/")
  (qq))

