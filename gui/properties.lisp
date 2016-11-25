;;; show output of QPROPERTIES in a QDialog

(defpackage :properties
  (:nicknames prop)
  (:use :common-lisp :eql)
  (:export
   #:show))

(in-package :properties)

(defvar *main* (qload-ui (in-home "gui/properties")))

(defvar-ui *main*
  *view*
  *depth*
  *label*)

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
  (qconnect *depth* "valueChanged(int)" 'update))
  
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

(defun show (&optional object)
  (when object
    (setf *object* object)
    (let ((depth 1)
          (name (qt-object-name object)))
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
                                         (qproperties *object* (! "value" *depth*))))))
  (unless (! "isVisible" *main*)
    (! "show" *main*)))

(ini)

