;;; generates a QML animation (see "definitions.lisp")

(require :definitions "definitions")

;; utils

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

;; palindrome

(defun item-count ()
  (loop :for item :in *items*
        :sum (length (second item))))

(defvar *chars* (loop :for i :below (item-count) :collect (code-char (+ i #.(char-code #\a)))))

(defun compute-from-to-list ()
  (flet ((item-pos (char list)
           (let ((y 0))
             (dolist (state list)
               (incf y)
               (x:when-it (position char state)
                 (return-from item-pos (list (1+ x:it) y)))))))
    (let (states)
      (dolist (state *states*)
        (let (positions)
          (dolist (char *chars*)
            (push (item-pos char state)
                  positions))
          (push (nreverse positions) states)))
      (nreverse states))))

(defun image-of-char (char)
  (dolist (item *items*)
    (x:when-it (find char (second item))
      (return-from image-of-char (first item)))))

;; qml file

(with-qml-file ("qml/palindrome.qml")
  "import QtQuick 2.0"
  "import 'ext/'"
  (qml "Rectangle"
       "width: 527; height: 527"
       "color: 'black'"
       (let ((n 0))
         (dolist (char *chars*)
           (format s "Image { id: img~A; source: 'img/~A.png' }~%"
                   (incf n) (image-of-char char))))
       (qml "SequentialAnimation"
            "loops: Animation.Infinite"
            "running: true"
            (let ((from-to-list (compute-from-to-list)))
              (do ((from-to from-to-list (rest from-to)))
                  ((null from-to))
                (let ((from (first from-to))
                      (to (or (second from-to)
                              (first from-to-list)))) ; back to beginning
                  (qml "ParallelAnimation"
                       (let ((target 0))
                         (mapc (lambda (from-xy to-xy)
                                 (incf target)
                                 (format s "PalindromeAnimation { target: img~A; property: 'x'; from: ~A; to: ~A } "
                                         target
                                         (* 31 (first from-xy))
                                         (* 31 (first to-xy)))
                                 (format s "PalindromeAnimation { target: img~A; property: 'y'; from: ~A; to: ~A }~%"
                                         target
                                         (* 31 (second from-xy))
                                         (* 31 (second to-xy))))
                               from to)))
                  (qml "PauseAnimation { duration: 500 }")))))))
