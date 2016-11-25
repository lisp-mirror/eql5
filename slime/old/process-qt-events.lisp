;;; Original code taken from "swank-backend.lisp"
;;; (this is a hack)

(in-package :swank-backend)

(defimplementation wait-for-input (streams &optional timeout)
  (if (null (cdr streams)) 
      (wait-for-one-stream (car streams) timeout)
      (wait-for-streams streams timeout)))

(defun wait-for-streams (streams timeout)
  (loop
    (when (check-slime-interrupts) (return :interrupt))
    (let ((ready (remove-if-not #'stream-readable-p streams)))
      (when ready (return ready)))
    (when timeout (return nil))
    (eql:qsleep 0.1))) ; instead of (sleep 0.1)

