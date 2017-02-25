;;; show output of QPROPERTIES in a QDialog

(defpackage :properties
  (:nicknames prop)
  (:use :common-lisp :eql)
  (:export
   #:show))

(in-package :properties)

(defvar *main* (qload-ui (in-home "gui/properties")))

(defvar-ui *main*
  *meta-class-names*
  *property-view*
  *class-depth*
  *class-names*
  *instance-properties*
  *select*)

(defvar *font*   (format nil "font-family: ~A; font-size: ~Apt;"
                         #+darwin  "Monaco"      #+darwin  12
                         #+linux   "Monospace"   #+linux   9
                         #+windows "Courier New" #+windows 10))

(defvar *object* nil)

(defun ini ()
  (! "setReadOnly" *property-view* t)
  (! "setMinimum" *class-depth* 1)
  (! "resize" *main* '(650 500))
  (dolist (w (list *meta-class-names* *class-names*))
    (! "setWordWrap" w t))
  (qset-color *property-view* |QPalette.Base| "lightyellow")
  (qconnect *class-depth* "valueChanged(int)" 'update)
  (qconnect *instance-properties* "toggled(bool)" 'all-instance-properties)
  (qconnect *select* "clicked()" 'selected))
  
(defun update (depth)
  (! "setText" *class-names*
               (with-output-to-string (s)
                 (let ((name (qt-object-name *object*)))
                   (princ name s)
                   (dotimes (i (1- depth))
                     (setf name (qsuper-class-name name))
                     (princ " - " s)
                     (princ name s)))))
  (show))

(defun all-instance-properties (checked)
  (dolist (w (list *class-depth* *class-names*))
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
      (! "setText" *meta-class-names* (format nil "<b>~A</b>~A~A"
                                              (first classes)
                                              (if (rest classes) "<br>" "")
                                              (x:join (rest classes) " - "))))
    (! "setChecked" *instance-properties* (! "inherits" *object* "QQuickItem")) ; for QML items
    (let ((depth 1)
          (name (qt-object-name *object*)))
      (! "setText" *class-names* name)
      (! "setWindowTitle" *main* name)
      (x:while (setf name (qsuper-class-name name))
        (incf depth))
      (! "setMaximum" *class-depth* depth)
      (! "setValue" *class-depth* 1)))
  (! "setHtml" *property-view* (format nil "<pre style='~A'>~A</pre>"
                                       *font*
                                       (qescape (with-output-to-string (*standard-output*)
                                                  (if (! "isChecked" *instance-properties*)
                                                      (qproperties* *object*)
                                                      (qproperties *object* (! "value" *class-depth*)))))))
  (unless (! "isVisible" *main*)
    (! "show" *main*)))

(ini)

