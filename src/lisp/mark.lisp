;;; Mark error position (when loading a file in ECL)
;;;
;;; example: eql5 mark file.lisp 5775 (will insert "#|TODO|#")
;;;
;;; Use with caution! May loose your file contents if used wrongly!

(let* ((args (|arguments.QCoreApplication|))
       (file (third args))
       (pos (parse-integer (fourth args)))
       contents)
  (with-open-file (s file :direction :input)
    (setf contents (make-string (file-length s)))
    (read-sequence contents s))
  (with-open-file (s file :direction :output :if-exists :supersede)
    (write-sequence contents s :end pos)
    (write-string "#|TODO|#" s)
    (write-sequence contents s :start pos))
  (qq))
