;;; copyright (c) Polos Ruetz
;;;
;;; N.B: file "parsed-enums.lisp" will need some manual intervention (you'll see for yourself)

(load "load-modules")
(load "../src/lisp/x")
(load "share")

(defparameter *skip*
  (list "QStyle::CC_"
        "QStyle::CT_"
        "QStyle::CE_"
        "QStyle::PM_"
        "QStyle::PE_"
        "QStyle::RSIP_"
        "QStyle::SP_"
        "QStyle::SH_"
        "QStyle::SC_"
        "QStyle::SE_"
        "QStyle::SO_"))

(defparameter *enum-begin* (format nil "Constant~CValue" #\Tab))
(defparameter *namespaces* (list "QAudio" "QGL" "QMultimedia"))

(defun parse (class out)
  (let ((path (doc-file class)))
    (if (probe-file path)
        (let (in-enum)
          (with-open-file (in path :direction :input :external-format :latin-1)
            (x:while-it (read-line in nil nil)
              (unless (dolist (skip *skip*)
                        (when (x:starts-with skip x:it)
                          (return t)))
                (if in-enum
                    (progn
                      (if (not (x:starts-with (format nil "~A::" class) x:it))
                          (setf in-enum nil)
                          (let ((name-val (x:split x:it #\Tab)))
                            (format out "~%(\"|~A|\" . ~A)"
                                    (x:string-substitute "." "::" (first name-val))
                                    (x:string-substitute "#x" "0x" (second name-val))))))
                    (when (x:starts-with *enum-begin* x:it)
                      (setf in-enum t)))))))
        (progn
          (incf *not-found*)
          (x:d :not-found path)))))

(defun parse-classes (classes s)
  (dolist (class classes)
    (let ((class* (string-left-trim "/" class)))
      (format t "~%enums ~A" class*)
      (parse class* s))))

(defun start ()
  (with-open-file (s "../src/lisp/enum-lists/parsed-enums.lisp" :direction :output :if-exists :supersede)
    (write-char #\( s)
    (dolist (names (list *q-names* *n-names* *namespaces*))
      (parse-classes (mapcar (lambda (name)
                               (string-trim "= " (x:if-it (position #\( name)
                                                          (subseq name 0 it)
                                                          name)))
                             names)
                     s))
    (terpri s)
    (write-char #\) s))
  (if (zerop *not-found*)
      (format t "~%OK~%~%")
      (warn (format nil "Text files not found: ~D" *not-found*))))

(start)
