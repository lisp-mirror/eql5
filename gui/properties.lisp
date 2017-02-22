;;; show output of QPROPERTIES in a QDialog

(defpackage :properties
  (:nicknames prop)
  (:use :common-lisp :eql)
  (:export
   #:show))

(in-package :properties)

(defvar *main* (qload-ui (in-home "gui/properties")))

(defvar-ui *main*
  *class-name*
  *view*
  *depth*
  *label*
  *instance-properties*
  *select*)

(defvar *font*   (format nil "font-family: ~A; font-size: ~Apt;"
                         #+darwin  "Monaco"      #+darwin  12
                         #+linux   "Monospace"   #+linux   9
                         #+windows "Courier New" #+windows 10))

(defvar *object* nil)

(defun ini ()
  (! "setReadOnly" *view* t)
  (! "setMinimum" *depth* 1)
  (! "resize" *main* '(650 500))
  (qset-color *view* |QPalette.Base| "lightyellow")
  (qconnect *depth* "valueChanged(int)" 'update)
  (qconnect *instance-properties* "toggled(bool)" 'all-instance-properties)
  (qconnect *select* "clicked()" 'selected))
  
(defun update (depth)
  (! "setText" *label*
               (with-output-to-string (s)
                 (let ((name (qt-object-name *object*)))
                   (princ name s)
                   (dotimes (i (1- depth))
                     (setf name (qsuper-class-name name))
                     (princ " - " s)
                     (princ name s)))))
  (show))

(defun all-instance-properties (checked)
  (dolist (w (list *depth* *label*))
    (|setEnabled| w (not checked)))
  (show))

(defun selected ()
  (qselect (lambda (object) (show (symbol-value (find-symbol (symbol-name :*q*) :qsel))))))

(defun super-class-names (object)
  (flet ((name (name)
           (subseq name 0 (position #\_ name))))
    (let ((mo (|metaObject| object))
          names)
      (x:while (not (qnull mo))
        (pushnew (name (|className| mo))
                 names :test 'string=)
        (setf mo (|superClass| mo)))
      (nreverse names))))

(defun show (&optional object)
  (when object
    (setf *object* object)
    (let ((classes (super-class-names *object*)))
      (! "setText" *class-name* (format nil "<b>~A</b>~A~A"
                                        (first classes)
                                        (if (rest classes) "<br>" "")
                                        (x:join (rest classes) " - "))))
    (! "setChecked" *instance-properties* (! "inherits" *object* "QQuickItem")) ; for QML items
    (let ((depth 1)
          (name (qt-object-name *object*)))
      (! "setText" *label* name)
      (! "setWindowTitle" *main* name)
      (x:while (setf name (qsuper-class-name name))
        (incf depth))
      (! "setMaximum" *depth* depth)
      (! "setValue" *depth* 1)))
  (! "setHtml" *view* (format nil
                              "<pre style='~A'>~A</pre>"
                              *font*
                              (qescape (with-output-to-string (*standard-output*)
                                         (if (! "isChecked" *instance-properties*)
                                             (qproperties* *object*)
                                             (qproperties *object* (! "value" *depth*)))))))
  (unless (! "isVisible" *main*)
    (! "show" *main*)))

(ini)

