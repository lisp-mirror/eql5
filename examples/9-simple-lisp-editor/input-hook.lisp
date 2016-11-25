;;; idea & most code from "ecl-readline.lisp"

(defpackage input-hook
    (:use :common-lisp)
  (:export
   #:new))

(provide :input-hook)

(in-package :input-hook)

(defvar *functions* nil)

(defun new (function)
  (let ((stream (make-instance 'gray::input-hook-stream)))
    (push (cons stream function) *functions*)
    stream))

(in-package :gray)

(defclass input-hook-stream (fundamental-character-input-stream)
  ((in-buffer  :initform (make-string 0))
   (in-index   :initform 0)
   (out-buffer :initform (make-array 0 :element-type 'character :adjustable t :fill-pointer t))))

(defmethod stream-read-char ((stream input-hook-stream))
  (if (ensure-stream-data stream)
      (with-slots (in-buffer in-index) stream
        (let ((ch (char in-buffer in-index)))
          (incf in-index)
          ch))
      :eof))

(defmethod stream-unread-char ((stream input-hook-stream) character)
  (with-slots (in-index) stream
    (when (> in-index 0)
      (decf in-index))))

(defmethod stream-listen ((stream input-hook-stream))
  nil)

(defmethod stream-clear-input ((stream input-hook-stream))
  nil)

(defmethod stream-close ((stream input-hook-stream) &key abort)
  (call-next-method))

(defmethod stream-peek-char ((stream input-hook-stream))
  (if (ensure-stream-data stream)
      (with-slots (in-buffer in-index) stream
        (char in-buffer in-index))
      :eof))

(defun ensure-stream-data (stream)
  (with-slots (in-buffer in-index) stream
    (when (= in-index (length in-buffer))
      (setf in-buffer (funcall (cdr (assoc stream input-hook::*functions*)))
            in-index 0))
    in-buffer))
