(defsystem :my-app
  :serial t
  :depends-on (:alexandria)
  :components ((:file "package")
               (:file "lisp/my")))
