;;; copyright (c) Polos Ruetz
;;;
;;; Allows to visually select (mouse click) any child widget or QML item.
;;; On selecting, the widget/item will be highlighted, and qsel:*q* will be set
;;; to the latest selected widget/item. 

(defpackage :qselect
  (:nicknames :qsel)
  (:use :common-lisp :eql)
  (:export
   #:*q*
   #:*qml-stack*))

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
(defvar *qml-stack*   nil)
(defvar *on-selected* nil)
(defvar *pos*         nil)

(let ((cross-cursor (qnew "QCursor(Qt::CursorShape)" |Qt.CrossCursor|)))
  (defun object-selected (object event)
    (when (zerop (qt-object-id object)) ; unknown to EQL, so resort to QObject
      (setf (qt-object-id object) #.(qid "QObject")))
    (let ((qml (or (! "inherits" object "QQuickWidget")
                   (! "inherits" object "QQuickWindow"))))
      (when (or qml (! "isWidgetType" object))
        (when *listen*
          (setf *listen*    nil
                *q*         (qt-object-? object)
                *qml-stack* nil
                *pos*       (! "pos" event))
          (setf (qt-object-unique object)
                (! ("toUInt" ("property" "EQL.unique") *q*)))
          (if qml
              (indicate*)
              (indicate))
          (! "restoreOverrideCursor" "QGuiApplication")
          (when *on-selected*
            (funcall *on-selected* object))
          t)))) ; event filter
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

(defun indicate-start (parent child &optional qml)
  (let ((indicate (qnew "QLabel"
                        "size" (nthcdr 2 (qget parent "geometry")))))
    (! "setParent" indicate parent)
    (! "move" indicate '(0 0))
    (let* ((pix (! "grab" parent))
           (dark (to-dark pix)))
      (! "setPixmap" indicate (if qml
                                  (set-highlight* pix dark child)
                                  (set-highlight indicate pix dark child))))
    (! "show" indicate)
    (qsingle-shot 700 (lambda ()
                        (when qml
                          (! "setParent" indicate nil))
                        (qdel indicate))))) 

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
  (paint-highlight dark pixmap (highlight indicate child)))

(defun paint-highlight (dark pixmap rect)
  (qlet ((painter "QPainter(QPixmap*)" dark)
         (pen-w "QPen(QColor)" "white")
         (pen-b "QPen"))
    (! "drawPixmap" painter rect pixmap rect)
    (! "setPen" painter pen-w)
    (! "drawRect" painter (mapcar '+ rect '(0 0 -1 -1)))
    (! "setPen" painter pen-b)
    (! "drawRect" painter (mapcar '+ rect '(1 1 -3 -3))))
  dark)

;; for QML

(defun child (item)
  (let* ((pos (! "mapFromScene" item *pos*))
         (child* (! "childAt" item (first pos) (second pos))))
    (if (qnull child*)
        item
        (progn
          (push child* *qml-stack*)
          (child child*)))))

(defun indicate* ()
  (let ((root (if (= (qt-object-id *q*) #.(qid "QQuickWindow"))
                  (! "contentItem" *q*)
                  (! "rootObject" *q*))))
    (indicate-start* *q* (child root))))

(defun indicate-start* (parent child)
  (setf *q* child)
  (if (! "isWidgetType" parent)
      (indicate-start parent child t)
      (let ((indicate (qnew "QLabel(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|)))
        (! "move" indicate (nbutlast (! "frameGeometry" parent) 2))
        (! "resize" indicate (list (! "width" parent)
                                   (! "height" parent)))
        (let* ((pix (! "fromImage" "QPixmap" (! "grabWindow" parent))) ; QQuickView
               (dark (to-dark pix)))
          (! "setPixmap" indicate (set-highlight* pix dark child)))
        (qlater (lambda () (! "show" indicate)))
        (qsingle-shot 700 (lambda () (qdel indicate))))))

(defun highlight* (child)
  (! "mapRectToScene" child (list 0 0 (! "width" child) (! "height" child))))

(defun set-highlight* (pixmap dark child)
  (paint-highlight dark pixmap (highlight* child)))
