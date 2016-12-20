;;; copyright (c) 2010-2013 Polos Ruetz

(in-package :eql-user)

(defparameter *help* nil)

(defun add-cpp-docu ()
  (with-open-file (s (eql:in-home "src/ecl_fun.cpp") :direction :input)
    (let (curr ex)
      (flet ((add-curr ()
               (when curr
                 (push (reverse curr) *help*)
                 (setf curr nil)))
             (trim (str)
               (string-trim '(#\/ #\Space) str)))
        (x:while-it (read-line s nil nil)
          (let ((line (string-trim " " x:it)))
            (when (x:starts-with "///" line)
              (when (x:starts-with "cl_object " ex)
                (add-curr)
                (let* ((pos (search "///" ex :start2 3)) ; exception: Lisp name at end of line
                       (fun (if pos
                                (trim (subseq ex (+ 3 pos)))
                                (trim (subseq ex 10)))))
                  (push (if pos
                            fun
                            (substitute #\- #\_ (string-trim "2" (subseq fun 0 (position #\( fun)))))
                        curr)))
              (push (trim line) curr))
            (setf ex line)))
        (add-curr)))))

(defun add-lisp-docu ()
  (do-external-symbols (sym (find-package :eql))
    (let ((name (symbol-name sym)))
      (when (or (char= #\Q (char name 0))
                (find name '("ENSURE-QT-OBJECT" "DEFINE-QT-WRAPPERS" "DEFVAR-UI" "TR") :test 'string=))
        (x:when-it (documentation sym 'function)
          (let ((fun  (string-downcase (symbol-name sym)))
                (docu (mapcar #'(lambda (s) (string-trim " " s)) (x:split x:it #\Newline))))
            (unless (string= fun (subseq (second docu) 7))
              (push (cons fun docu) *help*))))))))

(defun help ()
  (setf *help* nil)
  (add-cpp-docu)
  (add-lisp-docu)
  (with-open-file (s (eql:in-home "doc/auto-doc.htm") :direction :output :if-exists :supersede)
    (format s "<!doctype html>~%~
               <html lang=\"en\">~%~
               <head>~%~
               <title>Function List</title>~%~
               <meta charset=\"utf-8\">~%~
               </head>~%~
               <body style=\"font-family: sans-serif; font-size: 10.5pt;\">~%")
    (flet ((el (tag x)
             (format nil "<~A>~A</~A>" tag x tag))
           (! (x)
             (format s "~A~%" x))
           (tab ()
             (write-string "  " s)))
      (setf *help* (sort *help* #'string< :key #'first))
      (dolist (curr *help*)
        (! (el "b" (format nil "~A ~A" (string-upcase (first curr)) (subseq (second curr) 6))))
        (let ((n 2))
          (when (x:starts-with "alias:" (third curr))
            (incf n)
            (! "<br>")
            (! (el "b" (string-upcase (subseq (third curr) 7)))))
          (! "<br><br>")
          (! (nth n curr))
          (! "<br>")
          (let ((examples (nthcdr (1+ n) curr)))
            (when examples
              (! "<pre>")
              (dolist (example examples)
                (tab)
                (! example))
              (! "</pre>"))))
        (! "<br><br>"))
      (format s "</body>~%</html>~%"))))

(progn
  (help)
  (eql:qq))
