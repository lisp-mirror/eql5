(defpackage :video-settings
  (:use :common-lisp :eql)
  (:export
   #:audio-settings
   #:format*
   #:make-dialog
   #:set-audio-settings
   #:set-format
   #:set-video-settings
   #:video-settings))

(in-package :video-settings)

(defparameter *media-recorder* nil)

(defun make-dialog (media-recorder)
  (ui-video:ini)
  (setf *media-recorder* media-recorder)
  ;; audio codecs
  (|addItem| ui-video:*audio-codec-box* (tr "Default audio codec"))
  (dolist (codec-name (|supportedAudioCodecs| *media-recorder*))
    (let ((description (|audioCodecDescription| *media-recorder* codec-name)))
      (qlet ((data "QVariant(QString)" codec-name))
        (|addItem| ui-video:*audio-codec-box* (x:cc codec-name ": " description) data))))
  ;; sample rate
  (dolist (sample-rate (|supportedAudioSampleRates| *media-recorder*))
    (qlet ((data "QVariant(int)" sample-rate))
      (|addItem| ui-video:*audio-sample-rate-box* (princ-to-string sample-rate) data)))
  (|setRange| ui-video:*audio-quality-slider* 0 |QMultimedia.VeryHighQuality|)
  ;; video codecs
  (|addItem| ui-video:*video-codec-box* (tr "Default video codec"))
  (dolist (codec-name (|supportedVideoCodecs| *media-recorder*))
    (let ((description (|videoCodecDescription| *media-recorder* codec-name)))
      (qlet ((data "QVariant(QString)" codec-name))
        (|addItem| ui-video:*video-codec-box* (x:cc codec-name ": " description) data))))
  (|addItem| ui-video:*video-resolution-box* (tr "Default"))
  (dolist (resolution (|supportedResolutions| *media-recorder*))
    (qlet ((data "QVariant(QSize)" resolution))
      (|addItem| ui-video:*video-resolution-box* (format nil "~{~A~^x~}" resolution) data)))
  (|addItem| ui-video:*video-framerate-box* (tr "Default"))
  (dolist (rate (|supportedFrameRates| *media-recorder*))
    (qlet ((data "QVariant(float)" rate))
      (|addItem| ui-video:*video-framerate-box* (format nil "~$" rate) data)))
  ;; containers
  (|addItem| ui-video:*container-format-box* (tr "Default container"))
  (dolist (format (|supportedContainers| *media-recorder*))
    (qlet ((data "QVariant(QString)" format))
      (|addItem| ui-video:*container-format-box*
                 (x:cc format ":" (|containerDescription| *media-recorder* format))
                 data)))
  (qconnect ui-video:*button-box* "accepted()" ui-video:*dialog* "accept()")
  (qconnect ui-video:*button-box* "rejected()" ui-video:*dialog* "reject()")
  ui-video:*dialog*)

(defun audio-settings ()
  (let ((settings (|audioSettings| *media-recorder*)))
    (x:do-with settings
      (|setCodec| (|toString| (box-value ui-video:*audio-codec-box*)))
      (|setQuality| (|value| ui-video:*audio-quality-slider*))
      (|setSampleRate| (|toInt| (box-value ui-video:*audio-sample-rate-box*))))
    settings))

(defun set-audio-settings (audio-settings)
  (qlet ((codec "QVariant(QString)" (|codec| audio-settings))
         (sample-rate "QVariant(int)" (|sampleRate| audio-settings)))
    (select-combo-box-item ui-video:*audio-codec-box* codec)
    (select-combo-box-item ui-video:*audio-sample-rate-box* sample-rate)
    (|setValue| ui-video:*audio-quality-slider* (|quality| audio-settings))))

(defun video-settings ()
  (let ((settings (|videoSettings| *media-recorder*)))
    (x:do-with settings
      (|setCodec| (|toString| (box-value ui-video:*video-codec-box*)))
      (|setQuality| (|value| ui-video:*video-quality-slider*))
      (|setResolution| (|toSize| (box-value ui-video:*video-resolution-box*)))
      (|setFrameRate| (|toFloat| (box-value ui-video:*video-framerate-box*))))
    settings))

(defun fuzzy-compare (float1 float2)
  (<= (* (abs (- float1 float2)) 100000f0)
      (min (abs float1) (abs float2))))

(defun set-video-settings (video-settings)
  (qlet ((codec "QVariant(QString)" (|codec| video-settings))
         (resolution "QVariant(QSize)" (|resolution| video-settings)))
    (select-combo-box-item ui-video:*video-codec-box* codec)
    (select-combo-box-item ui-video:*video-resolution-box* resolution))
  ;; special case for frame rate
  (dotimes (i (|count| ui-video:*video-framerate-box*))
    (let ((item-rate (|toFloat| (|itemData| ui-video:*video-framerate-box* i))))
      (when (fuzzy-compare item-rate (|frameRate| video-settings))
        (|setCurrentIndex| ui-video:*video-framerate-box* i)
        (return)))))

(defun format* ()
  (|toString| (box-value ui-video:*container-format-box*)))

(defun set-format (format)
  (qlet ((data "QVariant(QString)" format))
    (select-combo-box-item ui-video:*container-format-box* data)))

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
