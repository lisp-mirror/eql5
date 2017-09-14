;;; Prints currently mounted storage info.
;;;
;;; N.B: If you load this file in Slime, you need to use QLOAD instead of LOAD!

(in-package :eql-user)

(defun print-mounted-volumes ()
  (let ((*byte-array-as-string* t)) ; print byte arrays human readably
    (dolist (info (|mountedVolumes.QStorageInfo|))
      (format t "~%~A ----------~%" info)
      (qproperties info))))

(print-mounted-volumes)
