;;; generates QML file for animation (see "definitions.lisp")

(require :utils    "utils")
(require :qml-file "qml-file")

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
                 (qml "PalindromeImage { objectName: 'img~A'; source: 'img/~A.png'; x: ~D; y: ~D }"
                      num
                      (image-of-char char)
                      (* 31 (first xy))
                      (* 31 (second xy))))
               *chars* (first *move-to-positions*)))))
