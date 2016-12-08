(defpackage :image-settings
  (:use :common-lisp :eql)
  (:export
   #:image-settings
   #:make-dialog
   #:set-image-settings))

(in-package :image-settings)

(defparameter *image-capture* nil)

(defun make-dialog (image-capture)
  (ui-image:ini)
  (setf *image-capture* image-capture)
  ;; image codecs
  (|addItem| ui-image:*image-codec-box* (tr "Default image format"))
  (dolist (codec-name (|supportedImageCodecs| *image-capture*))
    (let ((description (|imageCodecDescription| *image-capture* codec-name)))
      (qlet ((data "QVariant(QString)" codec-name))
        (|addItem| ui-image:*image-codec-box* (x:cc codec-name ": " description) data))))
  (|setRange| ui-image:*image-quality-slider* 0 |QMultimedia.VeryHighQuality|)
  (|addItem| ui-image:*image-resolution-box* (tr "Defaut Resolution"))
  (dolist (resolution (|supportedResolutions| *image-capture*))
    (qlet ((data "QVariant(QSize)" resolution))
      (|addItem| ui-image:*image-resolution-box* (format nil "~{~A~^x~}" resolution) data)))
  (qconnect ui-image:*button-box* "accepted()" ui-image:*dialog* "accept()")
  (qconnect ui-image:*button-box* "rejected()" ui-image:*dialog* "reject()")
  ui-image:*dialog*)

(defun image-settings ()
  (let ((settings (|encodingSettings| *image-capture*)))
    (|setCodec| settings (|toString| (box-value ui-image:*image-codec-box*)))
    (|setQuality| settings (|value| ui-image:*image-quality-slider*))
    (|setResolution| settings (|toSize| (box-value ui-image:*image-resolution-box*)))
    settings))

(defun set-image-settings (image-settings)
  (qlet ((codec "QVariant(QString)" (|codec| image-settings))
         (resolution "QVariant(QSize)" (|resolution| image-settings)))
    (select-combo-box-item ui-image:*image-codec-box* codec)
    (select-combo-box-item ui-image:*image-resolution-box* resolution)
    (|setValue| ui-image:*image-quality-slider* (|quality| image-settings))))

(let (empty)
  (defun box-value (box)
    (let ((i (|currentIndex| box)))
      (if (= i -1)
          (or empty (setf empty (qnew "QVariant")))
          (|itemData| box i)))))

(defun select-combo-box-item (box value)
  (dotimes (i (|count| box))
    (when (qeql (|itemData| box i) value) ; QEQL works for QVariant values, too
      (|setCurrentIndex| box i)
      (return))))
