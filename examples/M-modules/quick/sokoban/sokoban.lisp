;;;
;;; This is a QML GUI for CL-Sokoban, see http://www.cliki.net/CL-Sokoban 
;;;
;;; Use CHANGE-LEVEL to directly change the level index.
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :sokoban  "3rd-party/sokoban")
(require :levels   "3rd-party/my-levels")
(require :qml-lisp "qml-lisp")

(defpackage :qsoko
  (:use :common-lisp :eql :qml)
  (:export
   #:change-level
   #:start))

(in-package :qsoko)

(require :properties "properties")

(defvar *item-types*
  '((#\# . :wall)
    (#\$ . :object)
    (#\* . :object2)
    (#\. . :goal)
    (#\@ . :player)
    (#\& . :player2)))

(defvar *items*      nil)
(defvar *item-size*  nil)
(defvar *maze*       nil)
(defvar *my-mazes*   (mapcar 'sokoban:copy-maze sokoban:*mazes*))
(defvar *solving*    nil)
(defvar *undo-stack* nil)

(setf qml:*quick-view* (qnew "QQuickView"))

(defun qml-component (file)
  (qnew "QQmlComponent(QQmlEngine*,QUrl)"
        (|engine| *quick-view*)
        (|fromLocalFile.QUrl| (x:cc "qml/items/" file))))

(defvar *player-item* (qml-component "player.qml")) ; :player
(defvar *box-item*    (qml-component "box.qml"))    ; :object
(defvar *box-item-2*  (qml-component "box2.qml"))   ; :object2
(defvar *static-item* (qml-component "static.qml")) ; :wall :goal

(defun board ()
  (qml:find-quick-item "board"))

(defun level ()
  (floor (qml-get "level" "value")))

(defun set-level (index)
  (qml-set "level" "value" index))

(defun assoc* (item alist)
  (cdr (assoc item alist)))

(defun char-type (char)
  (cdr (assoc char *item-types*)))

(defun type-char (type)
  (car (find type *item-types* :key 'cdr)))

(defun set-maze ()
  (setf *maze* (nth (level) *my-mazes*))
  (update-translate-xy)
  (create-items)
  (place-all-items)
  (setf *undo-stack* nil))

(defun reset-maze ()
  (setf *maze* (setf (nth (level) *my-mazes*)
                     (sokoban:copy-maze (nth (level) sokoban:*mazes*))))
  (update-placed-items t)
  (setf *undo-stack* nil))

(defvar *translate-x* 0)
(defvar *translate-y* 0)

(defun update-translate-xy ()
  "Set x and y translation for maze centering."
  (let ((dim (sokoban:maze-dimensions *maze*))
        (img-px 32)
        (board-size 16))
    (setf *translate-x* (floor (/ (* img-px (- board-size (car dim))) 2))
          *translate-y* (floor (/ (* img-px (- board-size (cdr dim))) 2)))))
  
(defun create-item-type (type)
  (qt-object-? (|create| (case type
                           (:object *box-item*)
                           (:object2 *box-item-2*)
                           ((:player :player2) *player-item*)
                           ((:wall :goal) *static-item*)))))

(defun create-item (type)
  (let ((item (create-item-type type)))
    (qml-set item "source" (|fromLocalFile.QUrl| (format nil "qml/img/~(~A~).png" type)))
    (|setObjectName| item (string-downcase type))
    (unless *item-size*
      (setf *item-size* (qml-get item "sourceSize")))
    item))

(defun create-items ()
  (clear-items)
  (flet ((add (types)
           (dolist (type (x:ensure-list types))
             (let ((item (create-item type)))
               (push item (cdr (assoc type *items*)))
               (|setParent| item (board))
               (|setParentItem| item (board))))))
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

(defun clear-items ()
  (dolist (items *items*)
    (dolist (item (rest items))
      (qdel item)))
  (setf *items* (mapcar (lambda (x) (list (cdr x))) *item-types*)))

(defvar *running-animations* 0)
(defvar *function-queue*     nil)

(defun animation-change (running) ; called from QML
  (incf *running-animations* (if running 1 -1))
  (x:while (and (zerop *running-animations*)
                *function-queue*)
    (funcall (pop *function-queue*))))

(defun run-or-enqueue (function)
  (if (zerop *running-animations*)
      (funcall function)
      (setf *function-queue* (nconc *function-queue* (list function)))))

(defmacro queued (&rest functions)
  "Run passed functions in order, waiting for currently running (or newly triggered) animations to finish first."
  `(progn
     ,@(mapcar (lambda (fun) `(run-or-enqueue (lambda () ,fun)))
               functions)))

(defun change-level (direction/index)
  "Changes *LEVEL* in given direction or to index."
  (let ((level (min (1- (length *my-mazes*))
                    (max 0 (if (numberp direction/index)
                               direction/index
                               (+ (if (eql :next direction/index) 1 -1)
                                  (level)))))))
    (when (/= level (level))
      (queued (qml-set "zoom_board_out" "running" t)
              (set-level level) ; will call SET-MAZE from QML
              (qml-set "zoom_board_in" "running" t))))
  (level))

(defun key-pressed (object event)
  (when (and (zerop *running-animations*)
             (not *solving*))
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
         (change-level :next))
      (#.|Qt.Key_P|
         (change-level :previous))
      (#.|Qt.Key_U|
         (undo))
      (#.|Qt.Key_R|
         (reset-maze))
      (#.|Qt.Key_S|
         (solve))))
  nil) ; event filter

(defun solve ()
  (let ((*solving* t))
    (reset-maze)
    (x:do-string (ch (nth (level) sokoban:*solutions*))
      (sokoban:move (case (char-downcase ch)
                      (#\u :north)
                      (#\d :south)
                      (#\l :west)
                      (#\r :east))
                    *maze*)
      (x:while (plusp *running-animations*)
        (qsleep 0.05)))))

(defun set-x (item x &optional animate)
  (let ((x* (+ x *translate-x*)))
    (if animate
        (qml-set item "x" x*)
        (|setX| item x*))))

(defun set-y (item y &optional animate)
  (let ((y* (+ y *translate-y*)))
    (if animate
        (qml-set item "y" y*)
        (|setY| item y*))))

(defun child-at (x y)
  (|childAt| (board) (+ x *translate-x*) (+ y *translate-y*)))

(defun place-items (type &optional reset)
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
              (|setVisible| item t)
              (set-x item x)
              (set-y item y))
            (setf items (rest items)))
          (incf x (first *item-size*))))
      (incf y (second *item-size*)))))

(defun place-all-items ()
  (dolist (type '(:wall :goal :object2 :player2 :player :object))
    (place-items type)))

(defun update-placed-items (&optional reset)
  (dolist (type '(:goal :object2 :player2 :player :object))
    (place-items type reset)))

(let (ex ex-ex)
  (defun move-item (char pos direction) ; see sokoban:*move-hook*
    (let* ((type (char-type char))
           (pos-x (car pos))
           (pos-y (cdr pos))
           (w (first *item-size*))
           (h (second *item-size*))
           (x (* w pos-x))
           (y (* h pos-y))
           (dx (case direction (:east w) (:west (- w)) (t 0)))
           (dy (case direction (:south h) (:north (- h)) (t 0)))
           (item (child-at (+ x (/ w 2)) (+ y (/ h 2)))))
      (unless (qnull item)
        (if (zerop dy)
            (set-x item (+ x dx) 'animate)
            (set-y item (+ y dy) 'animate))
        (dolist (tp (list type ex ex-ex))
          (when (find tp '(:player2  :object2 :goal))
            (queued (update-placed-items))
            (return)))
        (shiftf ex-ex ex type)
        (when (eql :player type)
          (qlater (lambda () (when (game-finished)
                               (final-animation)))))))))

(defun add-undo-step (step)
  (push step *undo-stack*))

(defun undo ()
  (when *undo-stack*
    (sokoban:undo *maze* (pop *undo-stack*))
    (update-placed-items)))

(defun game-finished ()
  ;; finished: no more :object, only :object2
  (let ((ch (type-char :object)))
    (dolist (str (sokoban:maze-text *maze*))
      (when (find ch str)
        (return-from game-finished))))
  t)

(defun final-animation ()
  (queued (qml-set "rotate_player" "running" t)
          (qml-set-all "wiggle_box" "running" t)))

(defun run ()
  (x:do-with *quick-view*
    (|setSource| (|fromLocalFile.QUrl| "qml/sokoban.qml"))
    (|setMinimumSize| '(444 444))
    (|resize| (|minimumSize| *quick-view*))
    (|show|))
  (qadd-event-filter nil |QEvent.KeyPress| 'key-pressed)
  (setf sokoban:*move-hook* 'move-item
        sokoban:*undo-hook* 'add-undo-step)
  (qml-set "level" "maximumValue" (1- (length *my-mazes*)))
  (set-maze))

(progn
  (run)
  (qlater (lambda () (in-package :qsoko))))

