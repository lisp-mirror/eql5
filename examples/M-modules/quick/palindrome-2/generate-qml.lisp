;;; generates a QML animation (see "definitions.lisp")

(require :utils "utils")

(defmacro with-qml-file ((file) &body body)
  (let ((text (gensym)))
    `(let ((,text (with-output-to-string (s)
                    ,@(mapcar (lambda (x) (if (stringp x) `(write-line ,x s) x))
                              body))))
       (with-open-file (s ,file :direction :output :if-exists :supersede)
         (format s "// THIS FILE IS GENERATED~%~%")
         (write-string (indent ,text) s)
         (qlater (lambda () (format t "~%QML file generated, see ~S~%~%" ,file)))))))

(defmacro qml (first &body body)
  (let ((open-close (and (upper-case-p (char first 0))
                         (not (find #\{ first)))))
    (if body
        `(progn
           ,(if open-close
                `(format s "~%~A {~%" ,first)
                (if (find #\{ first)
                    `(format s "~%~A~%" ,first)
                    `(write-line ,first s)))
           ,@(mapcar (lambda (x) (if (stringp x) `(write-line ,x s) x))
                     body)
           ,(when open-close `(write-line "}" s)))
        (if (find #\{ first)
            `(format s "~%~A~%" ,first)
            `(write-line ,first s)))))

(defun indent (text)
  (with-output-to-string (out)
    (let ((in (make-string-input-stream text))
          (depth 0))
      (x:while-it (read-line in nil nil)
        (let ((open (count #\{ x:it))
              (close (count #\} x:it)))
          (write-string (make-string (* 4 (- depth (if (= (- open close) -1) 1 0)))) out)
          (write-line (string-left-trim " " x:it) out)
          (setf depth (+ depth open (- close))))))))

;; qml file

(with-qml-file ("qml/palindrome.qml")
  "import QtQuick 2.0"
  "import 'ext/'"
  (qml "Rectangle"
       "width: 527; height: 527"
       "color: 'black'"
       (let ((num 0))
         (mapc (lambda (char xy)
                 (incf num)
                 (qml "PalindromeImage"
                      (format s "objectName: 'img~A'~% source: 'img/~A.png'~% x: ~D; y: ~D~%"
                              num
                              (image-of-char char)
                              (* 31 (first xy))
                              (* 31 (second xy)))))
               *chars* (first *move-to-positions*)))))
