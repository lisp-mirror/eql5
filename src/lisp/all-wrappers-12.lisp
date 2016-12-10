(in-package :eql)

(defun |y| (object &rest arguments)
  (%qinvoke-method object (%auto-cast object) "y" arguments))

(defun |zChanged| (object &rest arguments)
  (%qinvoke-method object nil "zChanged" arguments))

(defun |zScaleChanged| (object &rest arguments)
  (%qinvoke-method object nil "zScaleChanged" arguments))

(defun |zScale| (object &rest arguments)
  (%qinvoke-method object nil "zScale" arguments))

(defun |zValue| (object &rest arguments)
  (%qinvoke-method object (%auto-cast object) "zValue" arguments))

(defun |zeroDigit| (object &rest arguments)
  (%qinvoke-method object nil "zeroDigit" arguments))

(defun |zoomFactor| (object &rest arguments)
  (%qinvoke-method object nil "zoomFactor" arguments))

(defun |zoomIn| (object &rest arguments)
  (%qinvoke-method object nil "zoomIn" arguments))

(defun |zoomMode| (object &rest arguments)
  (%qinvoke-method object nil "zoomMode" arguments))

(defun |zoomOut| (object &rest arguments)
  (%qinvoke-method object nil "zoomOut" arguments))

(defun |zoomTo| (object &rest arguments)
  (%qinvoke-method object nil "zoomTo" arguments))

(defun |z| (object &rest arguments)
  (%qinvoke-method object nil "z" arguments))
