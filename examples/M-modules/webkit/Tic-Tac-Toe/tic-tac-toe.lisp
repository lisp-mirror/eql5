;;; "Tic-Tac-Toe" as WebKit Application
;;;
;;; (depends on small plugin, see "lib/")

(require :h-utils "h-utils")

(defpackage :tic-tac-toe
  (:nicknames :ttt)
  (:use :common-lisp :eql)
  (:export
   #:*board*
   #:*cells*
   #:*clear-history*
   #:*demo*
   #:*level-x*
   #:*level-o*
   #:*levels*
   #:*new-game*
   #:*player-x*
   #:*player-o*
   #:*win-rows*
   #:move
   #:new-game))

(in-package :tic-tac-toe)

(defun ini (html-file size)
  (qconnect h:*web-view* "loadFinished(bool)" (lambda (ok) (ini-html)))
  (x:do-with h:*web-view*
    ("setUrl" (qnew "QUrl(QString)" html-file))
    ("setWindowTitle" "WebKit Application")
    ("resize" size)
    ("show")))

;;;
;;; WebKit Application (neither EQL functions nor JavaScript code needed, see "h-utils.lisp")
;;; 

;;                      CSS2 selectors
(defvar *board*         "#board")
(defvar *cells*         "[class='cells']")
(defvar *clear-history* "#clear-history")
(defvar *demo*          "#demo")
(defvar *new-game*      "#new-game")

(defvar *cell-count* 9)
(defvar *levels*     '(:novice :intermediate :experienced))
(defvar *level-x*    (second *levels*))
(defvar *level-o*    *level-x*)
(defvar *player-x*   :human)
(defvar *player-o*   :computer)

(defun cell-id (index)
  (format nil "#c~D" (1+ index)))

(defun cell-text (index)
  (h:hget (cell-id index) :text))

(defun pretty-binary (number)
  (reverse (substitute #\. #\0 (format nil "~9,'0B" number))))

(defun ini-html ()
  (dotimes (i *cell-count*)
    (h:hset (cell-id i)
            :class "cells"
            :binary-position (pretty-binary (s i)))) ; dynamic property
  (h:hset *cells*
          :onclick (h:lisp (move :this))) ; pass QWebElement as JS 'this'
  (h:hset *new-game*
          :onclick (h:lisp (new-game)))
  (h:hset *clear-history*
          :onclick (h:lisp (clear-history)))
  (h:hset *demo*
          :onclick (h:lisp (demo)))
  (new-game))

(let ((s ""))
  (defun x-o ()
    (setf s (if (string= "X" s) "O" "X")))
  (defun previous-x-o ()
    s)
  (defun reset-x-o ()
    (setf s "")))

(defun new-game ()
  (dolist (var '(*player-x* *player-o* *level-x* *level-o*))
    (format t "~%~(~A~12T~S~)" var (symbol-value var)))
  (terpri)
  (reset-x-o)
  (unmark-row)
  (h:hset *cells* :text "")
  (when (eql :computer *player-x*)
    (computer-move)))

(defun move (web-element)
  (when (and (not (won))
             (x:empty-string (h:hget web-element :text)))
    (h:hset web-element :text (x-o))
    (check-win)
    (when (and (not (won))
               (or (eql :computer *player-x*)
                   (eql :computer *player-o*)))
      (computer-move))))

(defun s (&rest numbers)
  "Sum of binary shifted numbers."
  (loop :for n :in numbers :sum (ash 1 n)))

(let (sum)
  (defun state (x-o)
    (setf sum 0)
    (dotimes (i *cell-count*)
      (when (string= x-o (cell-text i))
        (incf sum (s i))))
    sum)
  (defun latest-state ()
    sum))

(defvar *win-rows* '#.(list (s 0 1 2) (s 3 4 5) (s 6 7 8) ; horizontal
                            (s 0 3 6) (s 1 4 7) (s 2 5 8) ; vertical
                            (s 0 4 8) (s 2 4 6)))         ; X

(defun check-win ()
  (dolist (x-o '("X" "O"))
    (let ((state (state x-o)))
      (dolist (row *win-rows*)
        (when (= row (logand state row)) ; bit logic
          (print-win-state row)
          (mark-row row)
          (blink-row)
          (add-to-history)
          (return-from check-win t))))))

(defun print-win-state (row)
  (format t "~%~A~%~A~%"
          (map 'string (lambda (s) (if (x:empty-string s) #\. (char s 0)))
               (multiple-value-list (h:hget *cells* :text)))
          (pretty-binary row)))

(defun blink-row ()
  (dotimes (n 2)
    (h:pause 1/7)
    (unmark-row nil)
    (h:pause 1/7)
    (unmark-row nil "orange")))

(defun img-id (i)
  (format nil "#i~D" (1+ i)))

(defun add-to-history ()
  (dotimes (i 4)
    ;; shift right
    (h:assign-pixmap (img-id (- 4 i))
                     (h:to-pixmap (img-id (- 3 i)))))
  (h:assign-pixmap (img-id 0)
                   (h:to-pixmap *board* 1/6)))

(defun clear-history ()
  (dotimes (i 5)
    (h:clear-pixmap (img-id i))))

(defun set-background-color (i color)
  (h:set-style-property (cell-id i) :background-color color))

(let (marked)
  (defun mark-row (row)
    (dotimes (i *cell-count*)
      (when (= row (logior (s i) row)) ; bit logic
        (set-background-color i "orange")
        (push i marked))))
  (defun unmark-row (&optional (reset t) (color "steelblue"))
    (dolist (i marked)
      (set-background-color i color))
    (when reset
      (setf marked nil)))
  (defun won ()
    marked))

;;; computer player

(defun check-win-move (x-o)
  "Find missing position for 3-in-a-row."
  (let ((state (state x-o)))
    (dolist (row *win-rows*)
      (let ((i (position (- row (logand state row)) ; bit logic
                         '#.(loop :for i :below 9 :collect (s i)))))
        (when (and i (x:empty-string (cell-text i)))
          (return-from check-win-move i))))))

(defun level ()
  (if (string= "X" (previous-x-o))
      *level-x*
      *level-o*))

(defun computer-move ()
  (h:pause 1/7)
  (flet ((mv (i)
           (when (and i (x:empty-string (cell-text i)))
             i))
         (rnd (nums)
           (x:when-it (remove-if-not (lambda (i) (x:empty-string (cell-text i)))
                                     nums)
             (nth (random (length x:it)) x:it)))
         (state (s)
           (= (logior s (latest-state))
              (latest-state))))
    (let ((prev (previous-x-o))
          (curr (x-o)))
      (x:when-it (or (check-win-move curr)                                 ; win move? (me)
                     (and (or (not (eql :novice (level)))
                              (zerop (random 2)))
                          (check-win-move prev))                           ; prevent win move (you)
                     ;; novice
                     (and (eql :novice (level))
                          (mv (rnd '#.(loop :for i :below 9 :collect i))))
                     ;; intermediate
                     (and (eql :intermediate (level))
                          (or (mv (rnd '(0 2 4 6 8)))                      ; any corner, center
                              (mv (rnd '(1 3 5 7)))))                      ; any mid
                     ;; experienced
                     (mv 4)                                                ; center
                     (and (not (find (latest-state)
                                     '#.(list (s 0 8) (s 2 6))))
                          (or (and (state (s 1)) (mv (rnd '(0 2))))        ; corner top
                              (and (state (s 3)) (mv (rnd '(0 6))))        ; corner left
                              (and (state (s 5)) (mv (rnd '(2 8))))        ; corner right
                              (and (state (s 7)) (mv (rnd '(6 8))))        ; corner bottom
                              (mv (rnd '(0 2 6 8)))))                      ; any corner
                     (mv (rnd '(1 3 5 7))))                                ; any mid
        (h:hset (cell-id x:it) :text curr)
        (check-win)
        (when (and (not (won))
                   (eql :computer *player-x*)
                   (eql :computer *player-o*))
          (computer-move))))))

(defun demo (&optional (repeat 10) (level-x 1) (level-o 2))
  (clear-history)
  (%demo repeat level-x level-o))

(let (stop)
  (defun %demo (repeat level-x level-o)
    (if (eql :stopping stop)
        (setf stop nil)
        (when (plusp repeat)
          (let ((*player-x* :computer)
                (*player-o* :computer)
                (*level-x* (nth (1- level-x) *levels*))
                (*level-o* (nth (1- level-o) *levels*)))
            (new-game)
            (qsingle-shot 500 (lambda () (%demo (1- repeat) level-x level-o)))))))
  (defun stop ()
    (setf stop :stopping)))

;;; run

(progn
  (ini (x:cc "file://" (namestring (probe-file "tic-tac-toe.htm")))
       '(350 450))
  (qlater (lambda () (in-package :tic-tac-toe))))
