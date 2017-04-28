;;; generate C++ glue code
;;; (see "invokables.lisp" in sources)

(progn
  (load (in-home "lib/invokables"))
  (load "h-utils")
  (generate-invokables "lib/")
  (qq))

