;;;
;;; OSX note: unloading may not work!
;;;
;;; Simple demo:
;;;
;;;    0) do: eql5 reload.lisp -qtpl
;;;
;;;    1) make some changes in "cpp/lib.h", "cpp/lib.cpp"
;;;    2) do: (recompile-c++)
;;;    3) goto 1)
;;;
;;; Call plugin functions like this:
;;;
;;;     (qfun+ *lib* "myFunction")   ; a)
;;;     (! "myFunction" (:qt *lib*)) ; b)
;;;

(in-package :eql-user)

(defvar *lib* (qload-c++ (in-home "Qt_EQL/eql_cpp")))

(defun recompile-c++ ()
  (qload-c++ (in-home "Qt_EQL/eql_cpp")
             :unload)
  (ext:run-program #+msvc "make.bat" #-msvc "make"
                   #+msvc nil        #-msvc '("-C" "cpp/")
                   :output t)
  (setf *lib* (qload-c++ (in-home "Qt_EQL/eql_cpp")))
  (assert (qt-object-p *lib*))
  (qapropos nil *lib*))
