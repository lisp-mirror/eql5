;;;
;;; This is a less convenient Slime mode using a REPL eval hook,
;;; with the advantage of running all EQL functions natively.
;;;
;;; (See "../lib/thread-safe.lisp" for the default Slime mode.)

(in-package :eql)

(setf *slime-mode* :repl-hook)

(defun %qeval (form)
  (multiple-value-bind (values package)
      (qrun-in-gui-thread*
        (values (multiple-value-list
                  (with-simple-restart (abort "Return to SLIME's top level.")
                    (eval (subst 'identity 'qeval form))))
                *package*))
    (finish-output)
    (setf *package* package)
    (values-list values)))

(defmacro qeval (&rest forms)
  (if *load-pathname* ; ignore QEVAL when loading a file (from the Slime REPL)
      (if (second forms)
          (cons 'progn forms)
          (first forms))      
      `(%qeval (quote ,(if (second forms)
                           (cons 'progn forms)
                           (first forms))))))

(push '%qeval swank::*slime-repl-eval-hooks*)
