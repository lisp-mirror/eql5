;;; THIS FILE IS GENERATED (see 'eql5 -quic')

(defpackage :ui-video
  (:use :common-lisp :eql)
  (:export
   ;; all DEFVARs except layouts, spacers
   #:*audio-codec-box*
   #:*audio-quality-slider*
   #:*audio-sample-rate-box*
   #:*button-box*
   #:*container-format-box*
   #:*dialog*
   #:*group-box*
   #:*groupbox-2*
   #:*label-2*
   #:*label-3*
   #:*label-4*
   #:*label-5*
   #:*label-6*
   #:*label-7*
   #:*label-8*
   #:*label-9*
   #:*scroll-area*
   #:*scroll-area-widget-contents*
   #:*video-codec-box*
   #:*video-framerate-box*
   #:*video-quality-slider*
   #:*video-resolution-box*
   #:ini
   #:retranslate-ui
   #:show))

(in-package :ui-video)

(defvar *dialog*)                      ; QDialog (main widget)
(defvar *audio-codec-box*)             ; QComboBox
(defvar *audio-quality-slider*)        ; QSlider
(defvar *audio-sample-rate-box*)       ; QComboBox
(defvar *button-box*)                  ; QDialogButtonBox
(defvar *container-format-box*)        ; QComboBox
(defvar *grid-layout*)                 ; QGridLayout
(defvar *grid-layout-2*)               ; QGridLayout
(defvar *grid-layout-3*)               ; QGridLayout
(defvar *grid-layout-4*)               ; QGridLayout
(defvar *group-box*)                   ; QGroupBox
(defvar *groupbox-2*)                  ; QGroupBox
(defvar *label-2*)                     ; QLabel
(defvar *label-3*)                     ; QLabel
(defvar *label-4*)                     ; QLabel
(defvar *label-5*)                     ; QLabel
(defvar *label-6*)                     ; QLabel
(defvar *label-7*)                     ; QLabel
(defvar *label-8*)                     ; QLabel
(defvar *label-9*)                     ; QLabel
(defvar *scroll-area*)                 ; QScrollArea
(defvar *scroll-area-widget-contents*) ; QWidget
(defvar *verticalspacer*)              ; QSpacerItem
(defvar *video-codec-box*)             ; QComboBox
(defvar *video-framerate-box*)         ; QComboBox
(defvar *video-quality-slider*)        ; QSlider
(defvar *video-resolution-box*)        ; QComboBox

(defun ini (&optional show)
  (qlet ()
    (let ()
      (setf *dialog* (qnew "QDialog"))
      (qfun *dialog* "setObjectName" "dialog")
      (qfun *dialog* "resize" 561 369)
      (setf *grid-layout-4* (qnew "QGridLayout(QWidget*)" *dialog*))
      (qfun *grid-layout-4* "setObjectName" "grid_layout_4")
      (setf *scroll-area* (qnew "QScrollArea(QWidget*)" *dialog*))
      (qfun *scroll-area* "setObjectName" "scroll_area")
      (qfun *scroll-area* "setFrameShape" |QFrame.NoFrame|)
      (qfun *scroll-area* "setWidgetResizable" t)
      (setf *scroll-area-widget-contents* (qnew "QWidget"))
      (qfun *scroll-area-widget-contents* "setObjectName" "scroll_area_widget_contents")
      (qfun *scroll-area-widget-contents* "setGeometry" 0 0 543 251)
      (setf *grid-layout-3* (qnew "QGridLayout(QWidget*)" *scroll-area-widget-contents*))
      (qfun *grid-layout-3* "setObjectName" "grid_layout_3")
      (setf *group-box* (qnew "QGroupBox(QWidget*)" *scroll-area-widget-contents*))
      (qfun *group-box* "setObjectName" "group_box")
      (setf *grid-layout* (qnew "QGridLayout(QWidget*)" *group-box*))
      (qfun *grid-layout* "setObjectName" "grid_layout")
      (setf *label-2* (qnew "QLabel(QWidget*)" *group-box*))
      (qfun *label-2* "setObjectName" "label_2")
      (qfun *grid-layout* "addWidget" *label-2* 0 0 1 2)
      (setf *audio-codec-box* (qnew "QComboBox(QWidget*)" *group-box*))
      (qfun *audio-codec-box* "setObjectName" "audio_codec_box")
      (qfun *grid-layout* "addWidget" *audio-codec-box* 1 0 1 2)
      (setf *label-5* (qnew "QLabel(QWidget*)" *group-box*))
      (qfun *label-5* "setObjectName" "label_5")
      (qfun *grid-layout* "addWidget" *label-5* 2 0 1 2)
      (setf *audio-sample-rate-box* (qnew "QComboBox(QWidget*)" *group-box*))
      (qfun *audio-sample-rate-box* "setObjectName" "audio_sample_rate_box")
      (qfun *grid-layout* "addWidget" *audio-sample-rate-box* 3 0 1 2)
      (setf *label-3* (qnew "QLabel(QWidget*)" *group-box*))
      (qfun *label-3* "setObjectName" "label_3")
      (qfun *grid-layout* "addWidget" *label-3* 4 0 1 1)
      (setf *audio-quality-slider* (qnew "QSlider(QWidget*)" *group-box*))
      (qfun *audio-quality-slider* "setObjectName" "audio_quality_slider")
      (qfun *audio-quality-slider* "setMinimumSize" 100 0)
      (qfun *audio-quality-slider* "setMaximum" 4)
      (qfun *audio-quality-slider* "setOrientation" |Qt.Horizontal|)
      (qfun *grid-layout* "addWidget" *audio-quality-slider* 4 1 1 1)
      (qfun *grid-layout-3* "addWidget" *group-box* 0 0 1 1)
      (setf *groupbox-2* (qnew "QGroupBox(QWidget*)" *scroll-area-widget-contents*))
      (qfun *groupbox-2* "setObjectName" "groupBox_2")
      (setf *grid-layout-2* (qnew "QGridLayout(QWidget*)" *groupbox-2*))
      (qfun *grid-layout-2* "setObjectName" "grid_layout_2")
      (setf *label-8* (qnew "QLabel(QWidget*)" *groupbox-2*))
      (qfun *label-8* "setObjectName" "label_8")
      (qfun *grid-layout-2* "addWidget" *label-8* 0 0 1 2)
      (setf *video-resolution-box* (qnew "QComboBox(QWidget*)" *groupbox-2*))
      (qfun *video-resolution-box* "setObjectName" "video_resolution_box")
      (qfun *grid-layout-2* "addWidget" *video-resolution-box* 1 0 1 2)
      (setf *label-9* (qnew "QLabel(QWidget*)" *groupbox-2*))
      (qfun *label-9* "setObjectName" "label_9")
      (qfun *grid-layout-2* "addWidget" *label-9* 2 0 1 2)
      (setf *video-framerate-box* (qnew "QComboBox(QWidget*)" *groupbox-2*))
      (qfun *video-framerate-box* "setObjectName" "video_framerate_box")
      (qfun *grid-layout-2* "addWidget" *video-framerate-box* 3 0 1 2)
      (setf *label-6* (qnew "QLabel(QWidget*)" *groupbox-2*))
      (qfun *label-6* "setObjectName" "label_6")
      (qfun *grid-layout-2* "addWidget" *label-6* 4 0 1 2)
      (setf *video-codec-box* (qnew "QComboBox(QWidget*)" *groupbox-2*))
      (qfun *video-codec-box* "setObjectName" "video_codec_box")
      (qfun *grid-layout-2* "addWidget" *video-codec-box* 5 0 1 2)
      (setf *label-7* (qnew "QLabel(QWidget*)" *groupbox-2*))
      (qfun *label-7* "setObjectName" "label_7")
      (qfun *grid-layout-2* "addWidget" *label-7* 6 0 1 1)
      (setf *video-quality-slider* (qnew "QSlider(QWidget*)" *groupbox-2*))
      (qfun *video-quality-slider* "setObjectName" "video_quality_slider")
      (qfun *video-quality-slider* "setMinimumSize" 100 0)
      (qfun *video-quality-slider* "setMaximum" 4)
      (qfun *video-quality-slider* "setOrientation" |Qt.Horizontal|)
      (qfun *grid-layout-2* "addWidget" *video-quality-slider* 6 1 1 1)
      (qfun *grid-layout-3* "addWidget" *groupbox-2* 0 1 3 1)
      (setf *label-4* (qnew "QLabel(QWidget*)" *scroll-area-widget-contents*))
      (qfun *label-4* "setObjectName" "label_4")
      (qfun *grid-layout-3* "addWidget" *label-4* 1 0 1 1)
      (setf *container-format-box* (qnew "QComboBox(QWidget*)" *scroll-area-widget-contents*))
      (qfun *container-format-box* "setObjectName" "container_format_box")
      (qfun *grid-layout-3* "addWidget" *container-format-box* 2 0 1 1)
      (qfun *scroll-area* "setWidget" *scroll-area-widget-contents*)
      (qfun *grid-layout-4* "addWidget" *scroll-area* 0 0 1 1)
      (setf *verticalspacer* (qnew "QSpacerItem(int,int,QSizePolicy::Policy,QSizePolicy::Policy)" 20 14 |QSizePolicy.Minimum| |QSizePolicy.Expanding|))
      (qfun *grid-layout-4* "addItem" *verticalspacer* 1 0 1 1)
      (setf *button-box* (qnew "QDialogButtonBox(QWidget*)" *dialog*))
      (qfun *button-box* "setObjectName" "button_box")
      (qfun *button-box* "setOrientation" |Qt.Horizontal|)
      (qfun *button-box* "setStandardButtons" (logior |QDialogButtonBox.Cancel| |QDialogButtonBox.Ok|))
      (qfun *grid-layout-4* "addWidget" *button-box* 2 0 1 1)
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
    (qfun *group-box* "setTitle" (tr "Audio"))
    (qfun *label-2* "setText" (tr "Audio Codec:"))
    (qfun *label-5* "setText" (tr "Sample Rate:"))
    (qfun *label-3* "setText" (tr "Quality:"))
    (qfun *groupbox-2* "setTitle" (tr "Video"))
    (qfun *label-8* "setText" (tr "Resolution:"))
    (qfun *label-9* "setText" (tr "Framerate:"))
    (qfun *label-6* "setText" (tr "Video Codec:"))
    (qfun *label-7* "setText" (tr "Quality:"))
    (qfun *label-4* "setText" (tr "Container Format:"))))
