;;; generate C++ glue code
;;; (see "invokables.lisp" in sources)

(progn
  (load (in-home "src/lisp/invokables"))
  ;; for simplicity we generate one plugin for 2 example files
  (load "plugin-widget")
  (load "webkit-bridge")
  (generate-invokables "lib/")
  (qq))

