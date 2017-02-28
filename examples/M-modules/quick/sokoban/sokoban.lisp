;;;
;;; This is a QML GUI for CL-Sokoban, see http://www.cliki.net/CL-Sokoban 
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :sokoban  "3rd-party/sokoban")
(require :levels   "3rd-party/levels")
(require :qml-lisp "qml-lisp")

(defpackage :qsoko
  (:use :common-lisp :eql :qml)
  (:export
   #:start))

(in-package :qsoko)

(require :properties "properties")

(defparameter *item-types* '((#\# . :wall)
                             (#\$ . :object)
                             (#\* . :object2)
                             (#\. . :goal)
                             (#\@ . :player)
                             (#\& . :player2)))

(defvar *items*           nil)
(defvar *item-size*       nil)
(defvar *level*           0)
(defvar *maze*            nil)
(defvar *my-mazes*        (mapcar 'sokoban:copy-maze sokoban:*mazes*))
(defvar *print-text-maze* nil)

(setf qml:*quick-view* (qnew "QQuickView"))

(defun qml-component (file)
  (qnew "QQmlComponent(QQmlEngine*,QUrl)"
        (|engine| *quick-view*)
        (|fromLocalFile.QUrl| (x:cc "qml/items/" file))))

(defvar *player-item* (qml-component "player.qml")) ; :player
(defvar *box-item*    (qml-component "box.qml"))    ; :object
(defvar *static-item* (qml-component "static.qml")) ; :wall :goal

(defun assoc* (item alist)
  (cdr (assoc item alist)))

(defun char-type (char)
  (cdr (assoc char *item-types*)))

(defun type-char (type)
  (car (find type *item-types* :key 'cdr)))

(defun set-maze ()
  (setf *maze* (nth *level* *my-mazes*))
  (create-items)
  (place-all-items))

(defun clear-items ()
  (dolist (items *items*)
    (dolist (item (rest items))
      (qdel item)))
  (setf *items* (mapcar (lambda (x) (list (cdr x))) *item-types*)))

(defun create-item (type)
  (let ((item (qt-object-? (|create| (case type
                                       ((:player :player2) *player-item*)
                                       ((:object :object2) *box-item*)
                                       ((:wall :goal)      *static-item*))))))
    (qml-set item "source" (|fromLocalFile.QUrl| (format nil "qml/img/~(~A~).png" type)))
    (|setObjectName| item (symbol-name type))
    (unless *item-size*
      (setf *item-size* (qml-get item "sourceSize")))
    item))

(defun create-items ()
  (clear-items)
  (flet ((add (types)
           (dolist (type (x:ensure-list types))
             (let ((item (create-item type)))
               (push item (cdr (assoc type *items*)))
               (|setParent| item (qml:root-item))
               (|setParentItem| item (qml:root-item))))))
    (dolist (row (sokoban:maze-text *maze*))
      (x:do-string (char row)
        (unless (char= #\Space char)
          (let ((type (char-type char)))
            (cond ((find type '(:player :player2))
                   (add '(:player :player2)))
                  ((find type '(:object :object2))
                   (add '(:object :object2 :goal)))
                  ((eql :wall type)
                   (add :wall)))))))))

(defparameter *running-animations* 0)

(defun animation-change (running)
  "This function gets called from QML only."
  (incf *running-animations* (if running 1 -1)))

(defun key-pressed (object event)
  (when (zerop *running-animations*)
    (flet ((change-level (x)
             (setf *level* (min (1- (length *my-mazes*))
                                (max 0 (+ x *level*))))
             (set-maze)))
      (case (|key| event)
        (#.|Qt.Key_Up|
           (sokoban:move :north *maze*))
        (#.|Qt.Key_Down|
           (sokoban:move :south *maze*))
        (#.|Qt.Key_Left|
           (sokoban:move :west *maze*))
        (#.|Qt.Key_Right|
           (sokoban:move :east *maze*))
        (#.|Qt.Key_N|
           (change-level 1))
        (#.|Qt.Key_P|
           (change-level -1))
        (#.|Qt.Key_R|
           (setf (nth *level* *my-mazes*)
                 (sokoban:copy-maze (nth *level* sokoban:*mazes*)))
           (set-maze)))))
  nil) ; event filter

(defun place-items (type)
  (let ((char (type-char type))
        (items (assoc* type *items*))
        (y 0))
    (unless (eql :wall type)
      (dolist (item items)
        (|setVisible| item nil)))
    (dolist (row (sokoban:maze-text *maze*))
      (let ((x 0))
        (x:do-string (curr-char row)
          (when (char= char curr-char)
            (let ((item (first items)))
              (|setX| item x) ; don't use QML-SET to _not_ trigger QML defined animation
              (|setY| item y)
              (|setVisible| item t))
            (setf items (rest items)))
          (incf x (first *item-size*))))
      (incf y (second *item-size*)))))

(defun place-all-items ()
  (dolist (type '(:player :player2 :object :object2 :goal :wall))
    (place-items type)))

(defun update-placed-items ()
  (if (zerop *running-animations*)
      (dolist (type '(:player :player2 :object :object2 :goal))
        (place-items type))
      (qsingle-shot 50 'update-placed-items)))

(let (ex-type)
  (defun move-item (char pos direction) ; see sokoban:*move-hook*
    (let* ((type (char-type char))
           (x (car pos))
           (y (cdr pos))
           (w (first *item-size*))
           (h (second *item-size*))
           (pos-x (* w x))
           (pos-y (* h y))
           (dx (case direction (:east w) (:west (- w)) (t 0)))
           (dy (case direction (:south h) (:north (- h)) (t 0)))
           (item (|childAt| (qml:root-item) (+ pos-x (/ w 2)) (+ pos-y (/ h 2)))))
      (if (zerop dy)
          (qml-set item "x" (+ pos-x dx))  ; use QML-SET to trigger QML defined animation
          (qml-set item "y" (+ pos-y dy)))
      (let ((update-types '(:player2  :object2 :goal)))
        (when (or (find type update-types)
                  (find ex-type update-types))
          (update-placed-items)))
      (setf ex-type type))
    (when *print-text-maze*
      (format t "~{~&~A~%~}" (sokoban:maze-text *maze*)))))

(defun run ()
  (x:do-with *quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/sokoban.qml"))
    (|resize| '(500 444))
    (|show|))
  (qadd-event-filter nil |QEvent.KeyPress| 'key-pressed)
  (setf sokoban:*move-hook* 'move-item)
  (set-maze))

(progn
  (run)
  (qlater (lambda () (in-package :qsoko))))
