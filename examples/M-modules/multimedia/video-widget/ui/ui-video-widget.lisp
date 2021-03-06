;;; THIS FILE IS GENERATED (see 'eql5 -quic')

(defpackage :ui
  (:use :common-lisp :eql)
  (:export
   ;; all DEFVARs except layouts, spacers
   #:*error-label*
   #:*main*
   #:*open-button*
   #:*play-button*
   #:*position-slider*
   #:*video-widget*
   #:ini
   #:retranslate-ui
   #:show))

(in-package :ui)

(defvar *main*)            ; QWidget (main widget)
(defvar *control-layout*)  ; QHBoxLayout
(defvar *error-label*)     ; QLabel
(defvar *main-layout*)     ; QVBoxLayout
(defvar *open-button*)     ; QPushButton
(defvar *play-button*)     ; QPushButton
(defvar *position-slider*) ; QSlider
(defvar *video-widget*)    ; QVideoWidget

(defun ini (&optional show)
  (qlet (sizepolicy)
    (let ()
      (setf *main* (qnew "QWidget"))
      (qfun *main* "setObjectName" "main")
      (qfun *main* "resize" 400 250)
      (setf *main-layout* (qnew "QVBoxLayout(QWidget*)" *main*))
      (qfun *main-layout* "setObjectName" "main_layout")
      (setf *video-widget* (qnew "QVideoWidget(QWidget*)" *main*))
      (qfun *video-widget* "setObjectName" "video_widget")
      (setf sizepolicy (qnew "QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)" |QSizePolicy.Preferred| |QSizePolicy.Preferred|))
      (qfun sizepolicy "setHorizontalStretch" 0)
      (qfun sizepolicy "setVerticalStretch" 1)
      (qfun sizepolicy "setHeightForWidth" (qfun (qfun *video-widget* "sizePolicy") "hasHeightForWidth"))
      (qfun *video-widget* "setSizePolicy" sizepolicy)
      (qfun *main-layout* "addWidget" *video-widget*)
      (setf *control-layout* (qnew "QHBoxLayout"))
      (qfun *control-layout* "setObjectName" "control_layout")
      (setf *open-button* (qnew "QPushButton(QWidget*)" *main*))
      (qfun *open-button* "setObjectName" "open_button")
      (qfun *control-layout* "addWidget" *open-button*)
      (setf *play-button* (qnew "QPushButton(QWidget*)" *main*))
      (qfun *play-button* "setObjectName" "play_button")
      (qfun *control-layout* "addWidget" *play-button*)
      (setf *position-slider* (qnew "QSlider(QWidget*)" *main*))
      (qfun *position-slider* "setObjectName" "position_slider")
      (qfun *position-slider* "setOrientation" |Qt.Horizontal|)
      (qfun *control-layout* "addWidget" *position-slider*)
      (qfun *main-layout* "addLayout" *control-layout*)
      (setf *error-label* (qnew "QLabel(QWidget*)" *main*))
      (qfun *error-label* "setObjectName" "error_label")
      (qfun *main-layout* "addWidget" *error-label*)
      (retranslate-ui)
      (when show
        (show)))))

(defun show ()
  (qfun *main* "show"))

(defun retranslate-ui ()
  (let ()
    (qfun *main* "setWindowTitle" (tr "Video Widget"))
    (qfun *open-button* "setText" (tr "Open..."))
    (qfun *play-button* "setText" "")
    (qfun *error-label* "setText" "")))
