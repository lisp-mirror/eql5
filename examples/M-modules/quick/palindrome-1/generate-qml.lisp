;;; generates a QML animation (see "definitions.lisp")

(require :definitions "definitions")
(require :qml-file    "qml-file")

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
           (qml "Image { id: img~D; source: 'img/~A.png' }"
                (incf n)
                (image-of-char char))))
       (qml "SequentialAnimation"
            "id: seq"
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
                                 (qml "PalindromeAnimation { target: img~D; property: 'x'; from: ~D; to: ~D }"
                                      target
                                      (* 31 (first from-xy))
                                      (* 31 (first to-xy)))
                                 (qml "PalindromeAnimation { target: img~D; property: 'y'; from: ~D; to: ~D }"
                                      target
                                      (* 31 (second from-xy))
                                      (* 31 (second to-xy))))
                               from to)))
                  (qml "PauseAnimation { duration: 500 }")))))))
