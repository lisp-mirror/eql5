#-eql5
(error "Please use the EQL5 executable (see README)")

(require :cmp)

(load "dependencies")
(load "tr")

(push "./" asdf:*central-registry*)

(asdf:make-build "my-app"
                 :monolithic t
                 :type :static-library
                 :move-here "./")

(let ((lib-name #+msvc "my_app_lib.lib"
                #-msvc "libmy_app_lib.a"))
  (when (probe-file lib-name)
    (delete-file lib-name))
  (rename-file (x:cc "my-app--all-systems"
                      #+msvc ".lib"
                      #-msvc ".a")
               lib-name))

