;;; This is a port of the Qt Example "Colliding Mice"
;;;
;;; Note (OSX only):
;;;
;;; Seldom crashes (OSX 10.4, Qt 4.6.2) are not related to this tool, as they happen even in the original Qt example.
;;;
;;; The good news: if a seg.fault happens (in C++), just choose the restart option "Abort" (below "Continue"),
;;; and the application will continue to run.

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(defpackage :colliding-mice
  (:nicknames :mice)
  (:use :common-lisp :eql)
  (:export
   #:start))

(in-package :colliding-mice)

(defconstant +2pi+ (* 2 pi))

(defvar *graphics-scene* (qnew "QGraphicsScene"
                               "sceneRect" '(-300 -300 600 600)))
(defvar *timer*          (qnew "QTimer"))
(defvar *mouse-count*    0)

(defstruct mouse ; DEFSTRUCT (instead of DEFCLASS) is simpler in this case
  (item          (qnew "QGraphicsItem"))
  (brush         (brush (|fromRgb.QColor| (random 256) (random 256) (random 256))))
  (angle         0)
  (speed         0)
  (eye-direction 0))

(defmethod the-qt-object ((object mouse)) ; see example "X-extras/CLOS-encapsulation.lisp"
  (mouse-item object))

(let ((shape (x:let-it (qnew "QPainterPath")
               (|addRect| x:it '(-10 -20 20 40)))))
  (defun new-mouse ()
    (incf *mouse-count*)
    (let ((mouse (make-mouse)))
      (|setRotation| mouse (random (* 360 16)))
      (x:do-with (qoverride mouse)
        ("boundingRect()"
         (lambda () '(-18.5 -22.5 36.5 60.5)))
        ("shape()"
         (lambda () shape))
        ("paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
         (lambda (painter s w) (paint mouse painter)))
        ("advance(int)"
         (lambda (step) (advance mouse step))))
      mouse)))

(defun brush (color &optional (style |Qt.SolidPattern|))
  (x:let-it (qnew "QBrush")
    (|setStyle| x:it style)
    (when color
      (|setColor| x:it color))))

(defparameter *brush-eyes*      (brush "white"))
(defparameter *brush-nose*      (brush "black"))
(defparameter *brush-ears*      (brush "olive"))
(defparameter *brush-colliding* (brush "red"))
(defparameter *brush-tail*      (brush nil |Qt.NoBrush|))

(defparameter *painter-path-tail* (x:let-it (qnew "QPainterPath")
                                    (x:do-with x:it
                                      (|moveTo| '(0 20))
                                      (|cubicTo| '(-5 22) '(-5 22) '(0 25))
                                      (|cubicTo| '(5  27) '(5  32) '(0 30))
                                      (|cubicTo| '(-5 32) '(-5 42) '(0 35)))))

(defun paint (mouse painter)
  (|setBrush| painter (mouse-brush mouse))
  (|drawEllipse| painter '(-10 -20 20 40))
  ;; eyes
  (|setBrush| painter *brush-eyes*)
  (|drawEllipse| painter '(-10 -17 8 8))
  (|drawEllipse| painter '(2 -17 8 8))
  ;; nose
  (|setBrush| painter *brush-nose*)
  (|drawEllipse| painter '(-2 -22 4 4))
  ;; pupils
  (let ((dir (mouse-eye-direction mouse)))
    (|drawEllipse| painter (list (- dir 8) -17 4 4))
    (|drawEllipse| painter (list (+ dir 4) -17 4 4)))
  ;; ears
  (|setBrush| painter (if (null (|collidingItems| (|scene| mouse) mouse))
                                   *brush-ears*
                                   *brush-colliding*))
  (|drawEllipse| painter '(-17 -12 16 16))
  (|drawEllipse| painter '(1 -12 16 16))
  ;; tail
  (|setBrush| painter *brush-tail*)
  (|drawPath| painter *painter-path-tail*))

(defun advance (mouse step)
  (unless (zerop step)
    (labels ((normalize-angle (a)
               (x:while (minusp a)
                 (incf a +2pi+))
               (x:while (> a +2pi+)
                 (decf a +2pi+))
               a)
             (dx (line)
               (- (third line) (first line)))
             (dy (line)
               (- (fourth line) (second line)))
             (len (line)
               (let ((x (dx line))
                     (y (dy line)))
                 (sqrt (+ (* x x) (* y y)))))
             (map-from (p)
               (|mapFromScene| mouse p))
             (map-to (p)
               (|mapToScene| mouse p)))
      (let ((line-to-center (append '(0 0) (map-from '(0 0)))))
        (if (> (len line-to-center) 150)
            (let ((angle-to-center (acos (/ (dx line-to-center) (len line-to-center)))))
              (when (minusp (dy line-to-center))
                (setf angle-to-center (- +2pi+ angle-to-center)))
              (setf angle-to-center (normalize-angle (+ (- pi angle-to-center)
                                                        (/ pi 2))))
              (cond ((< (/ pi 4) angle-to-center pi)
                     ;; rotate left
                     (incf (mouse-angle mouse)
                           (if (< (mouse-angle mouse) (/ (- pi) 2)) 0.25 -0.25)))
                    ((and (>= angle-to-center pi)
                          (< angle-to-center (+ pi (/ pi 2) (/ pi 4))))
                     ;; rotate right
                     (incf (mouse-angle mouse)
                           (if (< (mouse-angle mouse) (/ pi 2)) 0.25 -0.25)))))
            (let ((sin (sin (mouse-angle mouse))))
              (incf (mouse-angle mouse) (cond ((minusp sin) 0.25)
                                              ((plusp sin) -0.25)
                                              (t 0))))))
      ;; try not to crash with any other mice
      (let ((danger-mice (|items| (|scene| mouse)
                                  (append (map-to '(0 0))
                                          (map-to '(-30 -50))
                                          (map-to '(30 -50)))
                                  |Qt.IntersectsItemShape|
                                  |Qt.AscendingOrder|)))
        (dolist (danger-mouse danger-mice)
          (unless (qeql mouse danger-mouse)
            (let* ((line-to-mouse (append '(0 0)
                                          (|mapFromItem| mouse danger-mouse '(0 0))))
                   (angle-to-mouse (acos (/ (dx line-to-mouse) (len line-to-mouse)))))
              (when (minusp (dy line-to-mouse))
                (setf angle-to-mouse (- +2pi+ angle-to-mouse)))
              (setf angle-to-mouse (normalize-angle (+ (- pi angle-to-mouse)
                                                       (/ pi 2))))
              (cond ((and (>= angle-to-mouse 0)
                          (< angle-to-mouse (/ pi 2)))
                     ;; rotate right
                     (incf (mouse-angle mouse) 0.5))
                    ((and (<= angle-to-mouse +2pi+)
                          (> angle-to-mouse (- +2pi+ (/ pi 2))))
                     ;; rotate left
                     (decf (mouse-angle mouse) 0.5))))))
        ;; add some random movement
        (when (and (> (length danger-mice) 1)
                   (zerop (random 10)))
          (let ((rnd (/ (random 100) 500))
                (angle (mouse-angle mouse)))
            (setf (mouse-angle mouse)
                  (if (zerop (random 2)) (+ angle rnd) (- angle rnd)))))
        (incf (mouse-speed mouse) (/ (- (random 100) 50) 100))
        (let ((dx (* 10 (sin (mouse-angle mouse)))))
          (setf (mouse-eye-direction mouse)
                (if (< (abs (/ dx 5)) 1) 0 (/ dx 5)))
          (|setRotation| mouse (+ dx (|rotation| mouse)))
          (|setPos| mouse (|mapToParent| mouse (list 0 (- (+ 3 (* 3 (sin (mouse-speed mouse)))))))))))))

(defun start ()
  (setf *random-state* (make-random-state t))
  (let ((view (qnew "QGraphicsView"
                    "windowTitle" "Colliding Mice"
                    "size" '(400 300))))
    (|setItemIndexMethod| *graphics-scene* |QGraphicsScene.NoIndex|)
    (x:do-with view
      (|setScene| *graphics-scene*)
      (|setRenderHint| |QPainter.Antialiasing|)
      (|setBackgroundBrush| (qnew "QBrush(QPixmap)"
                                  (qnew "QPixmap(QString)"
                                        (in-home "examples/data/icons/cheese.jpg"))))
      (|setCacheMode| |QGraphicsView.CacheBackground|)
      (|setViewportUpdateMode| |QGraphicsView.BoundingRectViewportUpdate|)
      (|setDragMode| |QGraphicsView.ScrollHandDrag|))
    (let ((count 7))
      (dotimes (i count)
        (flet ((pos (fun)
                 (truncate (* 200 (funcall fun (/ (* i +2pi+) count))))))
          (let ((item (new-mouse)))
            (|setPos| item (list (pos 'sin) (pos 'cos)))
            (|addItem| *graphics-scene* item)))))
    (qconnect *timer* "timeout()" *graphics-scene* "advance()")
    (|start| *timer* 30)
    (x:do-with view |show| |raise|)))

;;; for playing around interactively

(defun m+ (&optional (n 1))
  "Add n mice."
  (dotimes (i n)
    (let ((item (new-mouse)))
      (|setPos| item (list (- 100 (random 200)) (- 100 (random 200))))
      (|addItem| *graphics-scene* item)))
  *mouse-count*)

(defun m- (&optional (n 1))
  "Remove n mice."
  (dotimes (i n)
    (when (zerop *mouse-count*)
      (return))
    (decf *mouse-count*)
    (qdel (first (last (|items| *graphics-scene*)))))
  *mouse-count*)

(defun iv (&optional (ms 30))
  "Change move interval."
  (|setInterval| *timer* ms))

(defun ? ()
  ;; demo of QSLEEP (a SLEEP processing Qt events)
  (let ((max (print (length (|items| *graphics-scene*)))))
    (dotimes (n max)
      (print (m-))
      (qsleep 1))
    (dotimes (n max)
      (print (m+))
      (qsleep 1))))

#|
(require :profile)

(progn
  (use-package :profile)
  (profile:profile
   paint
   advance))
|#

(progn
  (start)
  (qlater (lambda () (in-package :mice))))

