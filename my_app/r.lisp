;;; this is the same as 'run.lisp', except for compiling
;;; (for development only)

;; same for all systems
(load "dependencies") ; for QL dependencies
(load "package")

;; system files
(load "lisp/my.lisp")
