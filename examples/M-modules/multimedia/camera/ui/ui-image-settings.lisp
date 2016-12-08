;;; THIS FILE IS GENERATED (see 'eql5 -quic')

(defpackage :ui-image
  (:use :common-lisp :eql)
  (:export
   ;; all DEFVARs except layouts, spacers
   #:*button-box*
   #:*dialog*
   #:*group-box-2*
   #:*image-codec-box*
   #:*image-quality-slider*
   #:*image-resolution-box*
   #:*label-6*
   #:*label-7*
   #:*label-8*
   #:ini
   #:retranslate-ui
   #:show))

(in-package :ui-image)

(defvar *dialog*)               ; QDialog (main widget)
(defvar *button-box*)           ; QDialogButtonBox
(defvar *grid-ayout-2*)         ; QGridLayout
(defvar *grid-layout*)          ; QGridLayout
(defvar *group-box-2*)          ; QGroupBox
(defvar *image-codec-box*)      ; QComboBox
(defvar *image-quality-slider*) ; QSlider
(defvar *image-resolution-box*) ; QComboBox
(defvar *label-6*)              ; QLabel
(defvar *label-7*)              ; QLabel
(defvar *label-8*)              ; QLabel
(defvar *verticalspacer*)       ; QSpacerItem

(defun ini (&optional show)
  (qlet ()
    (let ()
      (setf *dialog* (qnew "QDialog"))
      (qfun *dialog* "setObjectName" "dialog")
      (qfun *dialog* "resize" 332 270)
      (setf *grid-layout* (qnew "QGridLayout(QWidget*)" *dialog*))
      (qfun *grid-layout* "setObjectName" "grid_layout")
      (setf *group-box-2* (qnew "QGroupBox(QWidget*)" *dialog*))
      (qfun *group-box-2* "setObjectName" "group_box_2")
      (setf *grid-ayout-2* (qnew "QGridLayout(QWidget*)" *group-box-2*))
      (qfun *grid-ayout-2* "setObjectName" "grid_ayout_2")
      (setf *label-8* (qnew "QLabel(QWidget*)" *group-box-2*))
      (qfun *label-8* "setObjectName" "label_8")
      (qfun *grid-ayout-2* "addWidget" *label-8* 0 0 1 2)
      (setf *image-resolution-box* (qnew "QComboBox(QWidget*)" *group-box-2*))
      (qfun *image-resolution-box* "setObjectName" "image_resolution_box")
      (qfun *grid-ayout-2* "addWidget" *image-resolution-box* 1 0 1 2)
      (setf *label-6* (qnew "QLabel(QWidget*)" *group-box-2*))
      (qfun *label-6* "setObjectName" "label_6")
      (qfun *grid-ayout-2* "addWidget" *label-6* 2 0 1 2)
      (setf *image-codec-box* (qnew "QComboBox(QWidget*)" *group-box-2*))
      (qfun *image-codec-box* "setObjectName" "image_codec_box")
      (qfun *grid-ayout-2* "addWidget" *image-codec-box* 3 0 1 2)
      (setf *label-7* (qnew "QLabel(QWidget*)" *group-box-2*))
      (qfun *label-7* "setObjectName" "label_7")
      (qfun *grid-ayout-2* "addWidget" *label-7* 4 0 1 1)
      (setf *image-quality-slider* (qnew "QSlider(QWidget*)" *group-box-2*))
      (qfun *image-quality-slider* "setObjectName" "image_quality_slider")
      (qfun *image-quality-slider* "setMaximum" 4)
      (qfun *image-quality-slider* "setOrientation" |Qt.Horizontal|)
      (qfun *grid-ayout-2* "addWidget" *image-quality-slider* 4 1 1 1)
      (qfun *grid-layout* "addWidget" *group-box-2* 0 0 1 1)
      (setf *verticalspacer* (qnew "QSpacerItem(int,int,QSizePolicy::Policy,QSizePolicy::Policy)" 20 14 |QSizePolicy.Minimum| |QSizePolicy.Expanding|))
      (qfun *grid-layout* "addItem" *verticalspacer* 1 0 1 1)
      (setf *button-box* (qnew "QDialogButtonBox(QWidget*)" *dialog*))
      (qfun *button-box* "setObjectName" "button_box")
      (qfun *button-box* "setOrientation" |Qt.Horizontal|)
      (qfun *button-box* "setStandardButtons" (logior |QDialogButtonBox.Cancel| |QDialogButtonBox.Ok|))
      (qfun *grid-layout* "addWidget" *button-box* 2 0 1 1)
      ;; (qconnect *button-box* "accepted()" *dialog* "accept()")
      ;; (qconnect *button-box* "rejected()" *dialog* "reject()")
      (retranslate-ui)
      (when show
        (show)))))

(defun show ()
  (qfun *dialog* "show"))

(defun retranslate-ui ()
  (let ()
    (qfun *dialog* "setWindowTitle" (tr "Dialog"))
    (qfun *group-box-2* "setTitle" (tr "Image"))
    (qfun *label-8* "setText" (tr "Resolution:"))
    (qfun *label-6* "setText" (tr "Image Format:"))
    (qfun *label-7* "setText" (tr "Quality:"))))
