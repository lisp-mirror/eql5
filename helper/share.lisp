(defparameter *qt-documentation-path* "~/doc-qt5-txt/")
(defparameter *not-found*             0)

(defun doc-file (class)
  (format nil "~A~(~A~).txt" *qt-documentation-path* class))

(unless (probe-file (doc-file "QWidget"))
  (error "Please set the *qt-documentation-path* first")
  (ext:quit))

(defun search* (str1 str2 &optional (start 0))
  (search str1 str2 :test 'string-equal :start2 start))

(defun sort-names (names)
  (sort (remove-duplicates names :test 'string=)
        'string<
        :key (lambda (str) (string-trim "=/" str))))
