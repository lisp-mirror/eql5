;;; Define wrapper functions for all Qt methods/signals/slots using case
;;; preserving symbol names, and resolving type ambiguous argument lists
;;; current count: 6007

(dolist (module '(:help :multimedia :network :sql :svg :webkit))
  (eql:qrequire module))

(defconstant +max-symbols-per-file+ 1200) ; required for Windows (string size limit)

(defvar *objects*              (qobject-names))
(defvar *auto-cast-exceptions* '("QGraphicsItem")) ; see note in Sokoban example
(defvar *functions*            nil)
(defvar *unambiguous*          nil)

(let (latest)
  (defun num-args (fun)
    (let ((num (count #\, fun))
          (p (position #\( fun)))
      (setf latest (if (string= "()" (subseq fun p (+ 2 p)))
                       num
                       (1+ num)))))
  (defun latest-num-args ()
    latest))

(defun prepare ()
  (setf *functions* nil)
  (dolist (object *objects*)
    (let ((all-functions (cdar (qapropos* nil object)))
          functions)
      (dolist (type (list "Methods:" "Signals:" "Slots:"))
        (dolist (function (rest (find type all-functions
                                      :key 'first :test 'string=)))
          (let* ((open (position #\( function))
                 (begin (1+ (position #\Space function :from-end t :end open))))
            (unless (upper-case-p (char function begin))
              (let ((fun (subseq function begin)))
                (push (cons fun (num-args fun))
                      functions))))))
      (push (sort functions 'string< :key 'car)
            *functions*)))
  (setf *functions* (nreverse *functions*)))

(defun resolve-ambiguous ()
  (setf *unambiguous* nil)
  (macrolet ((pushnew-ok (arg)
               `(pushnew ,arg ok :test 'string=)))
    (flet ((end-pos (fun p)
             (1+ (or (position #\, fun :start p)
                     (position #\) fun :start p))))
           (add-points (fun)
             (if (x:ends-with "," fun)
                 (format nil "~A...)" (subseq fun 0 (1- (length fun))))
                 fun))
           (simplify (fun)
             (if (x:ends-with "static" fun)
                 (format nil "_s_~A" (subseq fun 0 (1+ (position #\) fun :from-end t))))
                 fun)))
      (dolist (functions *functions*)
        (let (ok todo ex-fun1 ex-diff)
          (dolist (fun functions)
            (if (zerop (cdr fun))
                (let ((f (simplify (car fun))))
                  (pushnew-ok (subseq f 0 (position #\( f))))
                (progn
                  (setf (car fun) (simplify (car fun)))
                  (push fun todo))))
          (do ((funs (stable-sort (sort todo 'string< :key 'car) '< :key 'cdr)
                     (rest funs)))
              ((null funs))
            (let* ((fun1 (first funs))
                   (fun2 (second funs))
                   (fun2* (or fun2 ex-fun1))
                   (f1 (car fun1))
                   (f2 (car fun2*))
                   (n1 (cdr fun1))
                   (n2 (cdr fun2*))
                   (a1 (position #\( f1))
                   (a2 (position #\( f2)))
              (flet ((ambiguous ()
                       (and (= n1 n2)
                            (= a1 a2)
                            (string= (subseq f1 0 a1)
                                     (subseq f2 0 a2)))))
                (if fun2*
                    (if f2
                        (if (ambiguous)
                            (let ((diff (string-not-equal f1 f2)))
                              (setf ex-diff diff)
                              (pushnew-ok (add-points (subseq f1 0 (end-pos f1 diff))))
                              (pushnew-ok (add-points (subseq f2 0 (end-pos f2 diff)))))
                            (pushnew-ok (subseq f1 0 a1)))
                        (if (ambiguous)
                            (pushnew-ok (add-points (subseq f1 0 (when ex-diff (end-pos f1 ex-diff)))))
                            (pushnew-ok (subseq f1 0 a1))))
                    (pushnew-ok (subseq f1 0 a1)))
                (setf ex-fun1 fun1))))
          (push (sort ok 'string<)
                *unambiguous*)))
      (setf *unambiguous* (nreverse *unambiguous*)))))

(defun cast (signature)
  (dolist (exceptions *auto-cast-exceptions*)
    (when (find signature exceptions :test 'string=)
      (return-from cast "(%auto-cast object)")))
  "nil")

(let ((num 0))
  (defun file (file)
    (format nil "~A-~D.lisp" file (incf num))))

(defun define-all-wrappers (&optional (file "all-wrappers"))
  "Defines Lisp functions for all Qt methods/signals/slots, writing them to a file."
  (let (lisp-names definitions)
    (map nil (lambda (object signatures)
               (dolist (signature signatures)
                 (let* ((cast (cast signature))
                        (static (when (x:starts-with "_s_" signature)
                                  (setf signature (subseq signature 3))))
                        (lisp-name (if static
                                       (format nil "|~A.~A|" signature object)
                                       (format nil "|~A|" signature))))
                   (push lisp-name lisp-names)
                   (push (if static
                             (format nil "~%(defun ~A (&rest arguments)~
                                          ~%  (%qinvoke-method ~S nil ~S arguments))~%"
                                     lisp-name object signature)
                             (format nil "~%(defun ~A (object &rest arguments)~
                                          ~%  (%qinvoke-method object ~A ~S arguments))~%"
                                     lisp-name cast signature))
                         definitions))))
         *objects* *unambiguous*)
    ;; splitting into more files needed for Windows (string size limit)
    (let ((symbols (sort (delete-duplicates lisp-names :test 'string=) 'string<))
          (1st t))
      (x:while symbols
        (with-open-file (s (print (file file)) :direction :output :if-exists :supersede)
          (format s "(defpackage :eql~
                   ~%  (:export")
          (dotimes (n +max-symbols-per-file+)
            (format s "~%   #:~A" (first symbols))
            (setf symbols (rest symbols))
            (unless symbols
              (return)))
          (format s "))~%")
          (when 1st
            (setf 1st nil)
            (format s "~%(in-package :eql)~
                       ~%~
                       ~%(pushnew :qt-wrapper-functions *features*)~
                       ~%~
                       ~%(defun %auto-cast (object)~
                       ~%  (when (find (qt-object-id (ensure-qt-object object))~
                       ~%              '#.(list (qid \"QGraphicsSvgItem\")~
                       ~%                       (qid \"QGraphicsTextItem\")~
                       ~%                       (qid \"QGraphicsVideoItem\")~
                       ~%                       (qid \"QGraphicsWidget\")))~
                       ~%    \"QGraphicsItem\"))~%")))))
    (setf definitions (sort (delete-duplicates definitions :test 'string=) 'string<))
    (print (length definitions))
    (x:while definitions
      (with-open-file (s (print (file file)) :direction :output :if-exists :supersede)
        (format s "(in-package :eql)~%")
        (dotimes (n +max-symbols-per-file+)
          (princ (first definitions) s)
          (setf definitions (rest definitions))
          (unless definitions
            (return)))))))

(progn
  (let ((*objects* *auto-cast-exceptions*))
    (prepare)
    (resolve-ambiguous)
    (setf *auto-cast-exceptions* *unambiguous*))
  (prepare)
  (resolve-ambiguous)
  (define-all-wrappers)
  (qq))

