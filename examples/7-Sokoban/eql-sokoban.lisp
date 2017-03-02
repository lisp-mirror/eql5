;;; This is a simple GUI for CL-Sokoban, see http://www.cliki.net/CL-Sokoban 
;;;
;;; ------------------------------------------------------------------------
;;;
;;; IMPORTANT NOTE
;;;
;;; If you use one of: QGraphicsSvgItem, QGraphicsTextItem, QGraphicsWidget
;;; you need a "cast" in order to call QGraphicsItem methods:
;;;
;;;   (! "setPos" ("QGraphicsItem" graphics-text-item) '(0 0)))
;;;
;;; (because of multiple inheritance from both QObject and QGraphicsItem)
;;;
;;; If you use the wrapper functions instead (see "src/lisp/all-wrappers"),
;;; this cast is done automatically:
;;;
;;;   (|setPos| graphics-text-item '(0 0)))
;;;
;;; ------------------------------------------------------------------------

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(load (eql:in-home "examples/7-Sokoban/3rd-party/sokoban"))
(load (eql:in-home "examples/7-Sokoban/3rd-party/levels"))

(defpackage :eql-sokoban
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :eql-sokoban)

(defconstant +item-types+ '((#\# . :wall)
                            (#\$ . :object)
                            (#\* . :object2)
                            (#\. . :goal)
                            (#\@ . :player)
                            (#\& . :player2)))

(defparameter *items*           nil)
(defparameter *item-size*       nil)
(defparameter *maze*            nil)
(defparameter *my-mazes*        (mapcar 'sokoban:copy-maze sokoban:*mazes*))
(defparameter *scene-size*      '(650 550))
(defparameter *print-text-maze* nil "additionally print maze to terminal")

(defvar *scene* (qnew "QGraphicsScene"
                      "sceneRect" (append '(0 0) *scene-size*)
                      "backgroundBrush" (qnew "QBrush(QColor)" "#DED6AD")))
(defvar *view*  (qnew "QGraphicsView"
                      "windowTitle" "Sokoban"
                      "size" (mapcar (lambda (x) (+ 50 x)) *scene-size*)))
(defvar *level* (qnew "QSlider(Qt::Orientation)" |Qt.Vertical|
                      "tickInterval" 5
                      "tickPosition" |QSlider.TicksRight|
                      "maximum" (1- (length *my-mazes*))))

(defun assoc* (item alist)
  (cdr (assoc item alist)))

(defun char-type (char)
  (cdr (assoc char +item-types+)))

(defun type-char (type)
  (car (find type +item-types+ :key 'cdr)))

(defun ini ()
  (x:do-with *view*
    (|setScene| *scene*)
    (|setRenderHint| |QPainter.Antialiasing|)
    (|setCacheMode| |QGraphicsView.CacheBackground|)
    (|setViewportUpdateMode| |QGraphicsView.BoundingRectViewportUpdate|))
  (let ((zoom-in  (qnew "QToolButton"
                        "text" "Zoom In"))
        (zoom-out (qnew "QToolButton"
                        "text" "Zoom Out"))
        (main     (qnew "QWidget"
                        "windowTitle" "Sokoban"
                        "size" (|size| *view*)))
        (help     (qnew "QLabel"
                        "text" "<b>Arrows</b> = Move, <b>N</b> = Next, <b>P</b> = Previous, <b>R</b> = Restart"))
        (hbox1    (qnew "QHBoxLayout"))
        (hbox2    (qnew "QHBoxLayout"))
        (layout   (qnew "QVBoxLayout")))
    (dolist (w (list *level* *view*))
      (|addWidget| hbox1 w))
    (dolist (w (list zoom-in zoom-out help))
      (|addWidget| hbox2 w))
    (dolist (l (list hbox1 hbox2))
      (!"addLayout" layout l))
    (|setStretchFactor| hbox2 help 1)
    (|setLayout| main layout)
    (qconnect *level* "valueChanged(int)" (lambda (val) (set-maze) (draw)))
    (qconnect zoom-in  "clicked()" (lambda () (zoom :in)))
    (qconnect zoom-out "clicked()" (lambda () (zoom :out)))
    (qadd-event-filter nil |QEvent.KeyPress| 'key-pressed)
    (x:do-with main |show| |raise|)))

(defun set-maze ()
  (setf *maze* (nth (|value| *level*) *my-mazes*))
  (create-items)
  (draw-items :wall))

(defun clear-items ()
  (|clear| *scene*)
  (setf *items* (mapcar (lambda (x) (list (cdr x))) +item-types+)))

(defun create-items ()
  (clear-items)
  (flet ((add (types)
           (dolist (type (x:ensure-list types))
             (let ((item (create-item type)))
               (push item (cdr (assoc type *items*)))
               (|addItem| *scene* item)))))
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

(let (pixmaps)
  (defun create-item (type)
    (let* ((file (in-home (format nil "examples/7-Sokoban/pics/~(~A~).png" type)))
           (pixmap (cdr (or (assoc file pixmaps :test 'string=)
                            (first (push (cons file (qnew "QPixmap(QString)" file))
                                         pixmaps)))))
           (item (qnew "QGraphicsPixmapItem(QPixmap)" pixmap)))
      (|setTransformationMode| item |Qt.SmoothTransformation|)
      (unless *item-size*
        (setf *item-size* (cddr (|boundingRect| item))))
      item)))

(defun key-pressed (obj event)
  (flet ((change-level (x)
           (|setValue| *level* (+ x (|value| *level*)))))
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
         (let ((level (|value| *level*)))
           (setf (nth level *my-mazes*)
                 (sokoban:copy-maze (nth level sokoban:*mazes*)))
           (set-maze)))
      (t (return-from key-pressed)))
    (draw)
    t)) ; event filter

(defun draw-items (type)
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
              (|setPos| item (list x y))
              (|setVisible| item t))
            (setf items (rest items)))
          (incf x (first *item-size*))))
      (incf y (second *item-size*)))))
  
(defun draw ()
  (dolist (type '(:player :object :goal :player2 :object2))
    (draw-items type))
  (when *print-text-maze*
    (format t "~{~&~A~%~}" (sokoban:maze-text *maze*))))

(defun zoom (direction)
  (let ((f (if (eql :in direction) 3/2 2/3)))
    (|scale| *view* f f)))

(defun start ()
  (ini)
  (set-maze)
  (draw))

(start)
