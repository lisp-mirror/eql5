;;; copyright (c) Polos Ruetz
;;;
;;; Allows to visually select (mouse click) any (child) widget.
;;; On selecting, the widget will be highlighted, and qsel:*q* will be set to the latest selected widget. 

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

(defvar *q*           nil)
(defvar *on-selected* nil)

(let ((cross-cursor (qnew "QCursor(Qt::CursorShape)" |Qt.CrossCursor|))
      listen)
  (defun object-selected (object event)
    (when listen
      (setf listen nil)
      (setf *q* object)
      (setf (qt-object-unique object) (! ("toUInt" ("property" "EQL.unique") *q*)))
      (indicate)
      (! "restoreOverrideCursor" "QGuiApplication")
      (when *on-selected*
        (funcall *on-selected* object))
      t)) ; event filter
  (defun select-mode ()
    (if (! "topLevelWidgets" "QApplication")
        (progn
          (setf listen t)
          (! "setOverrideCursor" "QGuiApplication" cross-cursor))
        (qmsg (tr "Please create widgets first.")))))

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
