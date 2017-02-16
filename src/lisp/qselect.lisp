;;; copyright (c) Polos Ruetz
;;;
;;; Allows to visually select (mouse click) any child widget or QML item.
;;; On selecting, the widget/item will be highlighted, and qsel:*q* will be set
;;; to the latest selected widget/item. 

(defpackage :qselect
  (:nicknames :qsel)
  (:use :common-lisp :eql)
  (:export
   #:*q*))

(in-package :eql)

(let (initialized)
  (defun %qselect (on-selected)
    (unless initialized
      (setf initialized t)
      (qadd-event-filter nil |QEvent.MouseButtonPress| 'qsel::object-selected))
    (setf qsel::*on-selected* on-selected)
    (qsel::select-mode)))

(in-package :qselect)

(defvar *listen*      nil)
(defvar *q*           nil)
(defvar *on-selected* nil)
(defvar *pos*         nil)

(let ((cross-cursor (qnew "QCursor(Qt::CursorShape)" |Qt.CrossCursor|)))
  (defun object-selected (object event)
    (unless (zerop (qt-object-id object)) ; exclude unknown to EQL
      (when *listen*
        (setf *listen* nil
              *q*      object
              *pos*    (! "pos" event))
        (setf (qt-object-unique object)
              (! ("toUInt" ("property" "EQL.unique") *q*)))
        (if  (find (! "className" (! "metaObject" *q*))
                   '("LQuickView" "LQuickWidget") :test 'string=)
             (indicate*) ; QML items
             (indicate)) ; QWidgets
        (! "restoreOverrideCursor" "QGuiApplication")
        (when *on-selected*
          (funcall *on-selected* object))
        t))) ; event filter
  (defun select-mode ()
    (setf *listen* t)
    (! "setOverrideCursor" "QGuiApplication" cross-cursor)))

;; for QWidgets

(defun indicate ()
  (let ((object *q*))
    (loop
      (let ((p (! "parentWidget" object)))
        (if (qnull p)
            (return)
            (setf object p))))
    (indicate-start object *q*)))

(defun indicate-start (parent child)
  (let ((indicate (qnew "QLabel"
                        "size" (nthcdr 2 (qget parent "geometry")))))
    (! "setParent" indicate parent)
    (! "move" indicate '(0 0))
    (let* ((pix (! "grab" parent))
           (dark (to-dark pix)))
      (! "setPixmap" indicate (set-highlight indicate pix dark child)))
    (! "show" indicate)
    (qsingle-shot 500 (lambda () (qdel indicate)))))

(defun to-dark (pixmap)
  (let ((dark (qcopy pixmap)))
    (qlet ((brush "QBrush")
           (painter "QPainter(QPixmap*)" dark))
      (! "setColor" brush "black")
      (! "setStyle" brush |Qt.SolidPattern|)
      (! "setOpacity" painter 0.6)
      (! "fillRect" painter (! "rect" dark) brush))
    dark))

(defun highlight (indicate child)
  (let ((pos '(0 0))
        (object child))
    (loop
      (when (qnull object)
        (return))
      (setf pos (mapcar '+ pos (! "mapToParent" object '(0 0))))
      (when (qeql (! "parentWidget" indicate)
                  (setf object (! "parentWidget" object)))
        (return)))
    (if (qnull object)
        '(0 0 0 0)
        (append pos (list (qget child "width")
                          (qget child "height"))))))

(defun set-highlight (indicate pixmap dark child)
  (let ((rect (highlight indicate child)))
    (qlet ((painter "QPainter(QPixmap*)" dark))
      (! "drawPixmap" painter rect pixmap rect))
    dark))

;; for QML

(defun child (item)
  (let* ((pos (! "mapFromScene" item *pos*))
         (child* (! "childAt" item (first pos) (second pos))))
    (if (qnull child*)
        item
        (child child*))))

(defun indicate* ()
  (let ((root (! "rootObject" *q*)))
    (indicate-start* *q* (child root))))

(defun indicate-start* (parent child)
  (setf *q* child)
  (let ((indicate (qnew "QLabel(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|)))
    (! "move" indicate (nbutlast (! "frameGeometry" parent) 2))
    (! "resize" indicate (list (! "width" parent)
                               (! "height" parent)))
    (let* ((pix (if (! "isWidgetType" parent)
                    (! "grab" parent)                                   ; QQuickWidget
                    (! "fromImage" "QPixmap" (! "grabWindow" parent)))) ; QQuickView
           (dark (to-dark pix)))
      (! "setPixmap" indicate (set-highlight* indicate pix dark child)))
    (qlater (lambda () (! "show" indicate)))
    (qsingle-shot 500 (lambda () (qdel indicate)))))

(defun highlight* (child)
  (! "mapRectToScene" child (list 0 0 (! "width" child) (! "height" child))))

(defun set-highlight* (indicate pixmap dark child)
  (let ((rect (highlight* child)))
    (qlet ((painter "QPainter(QPixmap*)" dark))
      (! "drawPixmap" painter rect pixmap rect))
    dark))
