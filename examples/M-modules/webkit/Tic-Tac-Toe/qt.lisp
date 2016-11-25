;;; generate C++ glue code
;;; (see "invokables.lisp" in sources)

(progn
  (load (in-home "src/lisp/invokables"))
  (load "h-utils")
  (generate-invokables "lib/")
  (qq))

