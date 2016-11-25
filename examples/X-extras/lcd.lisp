;;; LCD pixel color test (inspired by a "comp.lang.lisp" thread)

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(in-package :eql-user)

(defun lcd-test ()
  (let ((widget (qnew "QWidget(QWidget*,Qt::WindowFlags)" nil |Qt.WindowStaysOnTopHint|
                      "mouseTracking" t)))
    (qoverride widget "mouseMoveEvent(QMouseEvent*)"
               (lambda (event)
                 (qset-color widget |QPalette.Window|
                             (|fromHsv.QColor|
                               (floor (* 359 (/ (|x| event) (|width| widget))))
                               (floor (* 255 (/ (|y| event) (|height| widget))))
                               255))))
    (qoverride widget "mousePressEvent(QMouseEvent*)" (lambda (event) (qquit)))
    (|setPos.QCursor| '(0 0))
    (|showFullScreen| widget)
    #+darwin
    (|raise| widget)))

(lcd-test)
