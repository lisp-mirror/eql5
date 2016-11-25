;;; Generates C++ glue code, typically for the JavaScript / Lisp bridge of QtWebKit
;;;
;;; Assumes the first line of a function documentation string to contain a signature like this:
;;; "Qt: <return type> <function name as seen in JavaScript> ( <argument type>, ...)"
;;; (don't worry about whitespace, it will be normalized anyway)
;;;
;;; Optionally you may define default values; null default values are written as "= 0".
;;;
;;; Examples:
;;;
;;;   "Qt: void funA(int, QString)"
;;;
;;;   "Qt: QString funB(QWebElement, QString = \"ok\", QVariantList = 0)"
;;;
;;; (Packages COMMON-LISP and EQL are excluded from search.)

(defun qvariant-type (type)
  (cond ((string= "qreal" type)
         "Real")
        ((string= "qlonglong" type)
         "LongLong")
        ((x:starts-with "Q" type)
         (subseq type 1))
        (t
         (string-capitalize type))))

(defun to-qvariant-type (type)
  (if (find type '("QBitmap" "QIcon" "QImage" "QPixmap") :test 'string=)
      (format nil "ret.value<~A>()" type)
      (format nil "ret.to~A()" (qvariant-type type))))

(defun qt-value-p (type)
  (and (x:starts-with "Q" type)
       (not (x:ends-with "*" type))))

(defun const-reference (type)
  (if (qt-value-p type)
      (format nil "const ~A&" type)
      type))

(defun default-value (type value)
  (if (and (qt-value-p type)
           (string= "0" value))
      (format nil "~A()" type)
      value))

(defun generate-invokables (&optional (directory "./"))
  (let ((file (x:cc directory "_invokables.h"))
        processed)
    (ensure-directories-exist file)
    (with-open-file (s file :direction :output :if-exists :supersede)
      (format s "// THIS FILE IS GENERATED (see \"invokables.lisp\" in sources)~%~%")
      (do-all-symbols (symbol)
        (unless (find (symbol-package symbol)
                      '#.(mapcar 'find-package (list 'cl 'eql)))
          (let ((doc (documentation symbol 'function)))
            (when (and doc
                       (string-equal "Qt: " (subseq doc 0 (min 4 (length doc))))
                       (not (find symbol processed)))
              (push symbol processed)
              (let ((sig (x:bytes-to-string (! "normalizedSignature" "QMetaObject"
                                               (subseq doc 4 (1+ (position #\) doc))))))
                    (pkg-name (string-downcase (package-name (symbol-package symbol))))
                    (sym-name (string-downcase (symbol-name symbol))))
                (format t "~%\"~A:~A\"~%    ~A~%" pkg-name sym-name sig)
                (let* ((a (position #\Space sig))
                       (b (position #\( sig :start a))
                       (c (position #\) sig :start b))
                       (ret (subseq sig 0 a))
                       (fun (subseq sig (1+ a) b))
                       (types* (mapcar (lambda (type) (x:split type #\=))
                                       (x:split (subseq sig (1+ b) c) #\,)))
                       (types (mapcar 'first types*))
                       (defaults (mapcar (lambda (type value) (default-value type value))
                                         types
                                         (mapcar 'second types*)))
                       (vars (loop :for i :from 1 :to (length types) :collect (format nil "x~D" i)))
                       (void (string= "void" ret)))
                  (format s "Q_INVOKABLE ~A ~A(~{~A~^, ~}) {~%"
                          ret
                          fun
                          (mapcar (lambda (type var default)
                                    (format nil "~A ~A~A"
                                            (const-reference type)
                                            var
                                            (if default (format nil " = ~A" default) "")))
                                  types vars defaults))
                  (unless void
                    (format s "    QVariant ret =~%"))
                  (format s "    eql_fun(\"~A:~A\"" pkg-name sym-name)
                  (unless void
                    (format s ", QVariant::~A" (qvariant-type ret)))
                  (mapc (lambda (type var)
                          (format s ",~%            Q_ARG(~A, ~A)" type var))
                        types vars)
                  (format s ");")
                  (unless void
                    (format s "~%    return ~A;" (to-qvariant-type ret)))
                  (format s " }~%~%")))))))))
  (terpri))
