;;; prints currently mounted storage info

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(in-package :eql-user)

(defun print-mounted-volumes ()
  (let ((*byte-array-as-string* t)) ; print byte arrays human readably
    (dolist (info (|mountedVolumes.QStorageInfo|))
      (format t "~%~A ----------~%" info)
      (qproperties info))))

(progn
  (print-mounted-volumes)
  (qq))
