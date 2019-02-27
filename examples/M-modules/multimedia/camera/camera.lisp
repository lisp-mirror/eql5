;;; port of example "camera" (QtMultimediaWidgets)

(qrequire :multimedia)

(require :ui             (in-src "examples/M-modules/multimedia/camera/ui/ui-camera"))
(require :ui-image       (in-src "examples/M-modules/multimedia/camera/ui/ui-image-settings"))
(require :ui-video       (in-src "examples/M-modules/multimedia/camera/ui/ui-video-settings"))

(require :image-settings (in-src "examples/M-modules/multimedia/camera/image-settings"))
(require :video-settings (in-src "examples/M-modules/multimedia/camera/video-settings"))

(defpackage :camera
  (:use :common-lisp :eql)
  (:export
   #:ini))

(in-package :camera)

(defvar *camera*                 nil)
(defvar *image-capture*          nil)
(defvar *media-recorder*         nil)
(defvar *image-settings*         (qnew "QImageEncoderSettings"))
(defvar *audio-settings*         (qnew "QAudioEncoderSettings"))
(defvar *video-settings*         (qnew "QVideoEncoderSettings"))
(defvar *video-container-format* nil)

(defparameter *is-capturing-image*  nil)
(defparameter *application-exiting* nil)

(defun make-camera ()
  (let ((devices-group (qnew "QActionGroup(QObject*)" ui:*main*)))
    (|setExclusive| devices-group t)
    (dolist (camera-info (|availableCameras.QCameraInfo|))
      (let ((device-action (|addAction| ui:*menu-devices* (|description| camera-info))))
        (|setActionGroup| device-action devices-group)
        (|setCheckable| device-action t)
        (|setData| device-action (qnew "QVariant(QString)"
                                       (eql::qt-object-to-string camera-info))) ; convenience hack
        (when (string= (|deviceName| camera-info)
                       (|deviceName| (|defaultCamera.QCameraInfo|)))
          (|setChecked| device-action t))))
    (qconnect devices-group "triggered(QAction*)" 'update-camera-device)
    (qconnect ui:*capture-widget* "currentChanged(int)" 'update-capture-mode)
    (set-camera (|defaultCamera.QCameraInfo|))))

(defun set-camera (camera-info)
  ;; delete old
  (dolist (object (list *image-capture* *media-recorder* *camera*))
    (qdel object))
  ;; new camera
  (setf *camera* (qnew "QCamera(QCameraInfo)" camera-info))
  (|setViewfinder| *camera* ui:*viewfinder*)
  (qconnect *camera* "stateChanged(QCamera::State)" 'update-camera-state)
  (qconnect *camera* "error(QCamera::Error)" 'display-camera-error)
  ;; new media recorder
  (setf *media-recorder* (qnew "QMediaRecorder(QMediaObject*)" *camera*))
  (qconnect *media-recorder* "stateChanged(QMediaRecorder::State)" 'update-recorder-state)
  (qconnect *media-recorder* "durationChanged(qint64)" 'update-record-time)
  (qconnect *media-recorder* "error(QMediaRecorder::Error)" 'display-recorder-error)
  ;; new image capture
  (setf *image-capture* (qnew "QCameraImageCapture(QMediaObject*)" *camera*))
  ;; update
  (update-camera-state (|state| *camera*))
  (update-lock-status (|lockStatus| *camera*) |QCamera.UserRequest|)
  (update-recorder-state (|state| *media-recorder*))
  ;; etc
  (|setTabEnabled| ui:*capture-widget* 0 (|isCaptureModeSupported| *camera* |QCamera.CaptureStillImage|))
  (|setTabEnabled| ui:*capture-widget* 1 (|isCaptureModeSupported| *camera* |QCamera.CaptureVideo|))
  (qconnect *image-capture* "readyForCaptureChanged(bool)" 'ready-for-capture)
  (qconnect *image-capture* "imageCaptured(int,QImage)" 'process-captured-image)
  (qconnect *image-capture* "imageSaved(int,QString)" 'image-saved)
  (qconnect *image-capture* "error(int,QCameraImageCapture::Error,QString)" 'display-capture-error)
  (qconnect *camera* "lockStatusChanged(QCamera::LockStatus,QCamera::LockChangeReason)" 'update-lock-status)
  (update-capture-mode)
  (|start| *camera*))

(defun key-press-event (event)
  (unless (|isAutoRepeat| event)
    (case (|key| event)
      (#.|Qt.Key_CameraFocus|
       (display-viewfinder)
       (|searchAndLock| *camera*)
       (|accept| event))
      (#.|Qt.Key_Camera|
       (if (= (|captureMode| *camera*) |QCamera.CaptureStillImage|)
           (take-image)
           (if (= (|state| *media-recorder*) |QMediaRecorder.RecordingSate|)
               (stop)
               (record)))
       (|accept| event))
      (t
       (qcall-default)))))

(defun key-release-event (event)
  (unless (|isAutoRepeat| event)
    (case (|key| event)
      (#.|Qt.Key_CameraFocus|
       (|unlock| *camera*))
      (t
       (qcall-default)))))

(defun update-record-time (&optional duration)
  (|showMessage| ui:*status-bar* (format nil (tr "Recorded ~D sec") (truncate (/ (|duration| *media-recorder*) 1000)))))

(defun process-captured-image (request-id image)
  (qlet ((scaled-image (|scaled| image (|size| ui:*viewfinder*)
                                 |Qt.KeepAspectRatio| |Qt.SmoothTransformation|)))
    (|setPixmap| ui:*last-image-preview-label* (|fromImage.QPixmap| scaled-image)))
  ;; display captured image for 4 seconds
  (display-captured-image)
  (qsingle-shot 4000 'display-viewfinder))

(defun configure-capture-settings ()
  (case (|captureMode| *camera*)
    (#.|QCamera.CaptureStillImage|
     (configure-image-settings))
    (#.|QCamera.CaptureVideo|
     (configure-video-settings))))

(defun configure-video-settings ()
  (qlet ((dialog (video-settings:make-dialog *media-recorder*))) ; temporary UI
    (video-settings:set-audio-settings *audio-settings*)
    (video-settings:set-video-settings *video-settings*)
    (video-settings:set-format *video-container-format*)
    (when (|exec| dialog)
      (setf *audio-settings* (video-settings:audio-settings)
            *video-settings* (video-settings:video-settings)
            *video-container-format* (video-settings:format*))
      (|setEncodingSettings| *media-recorder*
                             *audio-settings*
                             *video-settings*
                             *video-container-format*))))

(defun configure-image-settings ()
  (qlet ((dialog (image-settings:make-dialog *image-capture*))) ; temporary UI
    (image-settings:set-image-settings *image-settings*)
    (when (|exec| dialog)
      (setf *image-settings* (image-settings:image-settings))
      (|setEncodingSettings| *image-capture*
                             *image-settings*))))

(defun record ()
  (|record| *media-recorder*)
  (update-record-time))

(defun pause ()
  (|pause| *media-recorder*))

(defun stop ()
  (|stop| *media-recorder*))

(defun set-muted (muted)
  (|setMuted| *media-recorder* muted))

(defun toggle-lock ()
  (case (|lockStatus| *camera*)
    ((#.|QCamera.Searching| #.|QCamera.Locked|)
     (|unlock| *camera*))
    (#.|QCamera.Unlocked|
     (|searchAndLock| *camera*))))

(defun update-lock-status (status reason)
  (let ((color "black"))
    (case status
      (#.|QCamera.Searching|
       (setf color "yellow")
       (|setText| ui:*lock-button* (tr "Focusing...")))
       (|showMessage| ui:*status-bar* (tr "Focusing..."))
      (#.|QCamera.Locked|
       (setf color "darkgreen")
       (|setText| ui:*lock-button* (tr "Unlock"))
       (|showMessage| ui:*status-bar* (tr "Focused") 2000))
      (#.|QCamera.Unlocked|
       (setf color (if (= reason |QCamera.LockFailed|) "red" "black"))
       (|setText| ui:*lock-button* (tr "Focus"))
       (when (= reason |QCamera.LockFailed|)
         (|showMessage| ui:*status-bar* (tr "Focus Failed") 2000))))
    (qset-color ui:*lock-button* |QPalette.ButtonText| color)))

(defun take-image ()
  (setf *is-capturing-image* t)
  (|capture| *image-capture*))

(defun display-capture-error (id error error-string)
  (|warning.QMessageBox| ui:*main* (tr "Image Capture Error") error-string)
  (setf *is-capturing-image* nil))

(defun start-camera ()
  (|start| *camera*))

(defun stop-camera ()
  (|stop| *camera*))

(defun update-capture-mode (&optional index)
  (let* ((tab-index (|currentIndex| ui:*capture-widget*))
         (capture-mode (if (zerop tab-index) |QCamera.CaptureStillImage| |QCamera.CaptureVideo|)))
    (when (|isCaptureModeSupported| *camera* capture-mode)
      (|setCaptureMode| *camera* capture-mode))))

(defun update-camera-state (state)
  (case state
    (#.|QCamera.ActiveState|
     (|setEnabled| ui:*action-start-camera* nil)
     (|setEnabled| ui:*action-stop-camera*  t)
     (|setEnabled| ui:*capture-widget*      t)
     (|setEnabled| ui:*action-settings*     t))
    ((#.|QCamera.UnloadedState| #.|QCamera.LoadedState|)
     (|setEnabled| ui:*action-start-camera* t)
     (|setEnabled| ui:*action-stop-camera*  nil)
     (|setEnabled| ui:*capture-widget*      nil)
     (|setEnabled| ui:*action-settings*     nil))))

(defun update-recorder-state (state)
  (case state
    (#.|QMediaRecorder.StoppedState|
     (|setEnabled| ui:*record-button* t)
     (|setEnabled| ui:*pause-button*  t)
     (|setEnabled| ui:*stop-button*   nil))
    (#.|QMediaRecorder.PausedState|
     (|setEnabled| ui:*record-button* t)
     (|setEnabled| ui:*pause-button*  nil)
     (|setEnabled| ui:*stop-button*   t))
    (#.|QMediaRecorder.RecordingState|
     (|setEnabled| ui:*record-button* nil)
     (|setEnabled| ui:*pause-button*  t)
     (|setEnabled| ui:*stop-button*   t))))

(defun set-exposure-compensation (index)
  (|setExposureCompensation| (|exposure| *camera*) (* 1/2 index)))

(defun display-recorder-error (&optional error)
  (|warning.QMessageBox| ui:*main* (tr "Capture error") (|errorString| *media-recorder*)))

(defun display-camera-error (&optional error)
  (|warning.QMessageBox| ui:*main* (tr "Camera error") (|errorString| *camera*)))

(defun update-camera-device (action)
  (set-camera (eql::qt-object-from-string (|toString| (|data| action))))) ; convenience hack

(defun display-viewfinder ()
  (|setCurrentIndex| ui:*stacked-widget* 0))

(defun display-captured-image ()
  (|setCurrentIndex| ui:*stacked-widget* 1))

(defun ready-for-capture (ready)
  (|setEnabled| ui:*take-image-button* ready))

(defun image-saved (id file-name)
  (setf *is-capturing-image* nil)
  (when *application-exiting*
    (|close| ui:*main*)))

(defun close-event (event)
  (if *is-capturing-image*
      (progn
        (|setEnabled| ui:*main* nil)
        (setf *appication-exiting* t)
        (|ignore| event))
      (|accept| event)))

(defun ini ()
  (ui:ini)
  ;; override
  (qoverride ui:*main* "keyPressEvent(QKeyEvent*)" 'key-press-event)
  (qoverride ui:*main* "keyReleaseEvent(QKeyEvent*)" 'key-release-event)
  (qoverride ui:*main* "closeEvent(QCloseEvent*)" 'close-event)
  ;; connect
  (qconnect ui:*record-button* "clicked()" 'record)
  (qconnect ui:*stop-button* "clicked()" 'stop)
  (qconnect ui:*pause-button* "clicked()" 'pause)
  (qconnect ui:*take-image-button* "clicked()" 'take-image)
  (qconnect ui:*lock-button* "clicked()" 'toggle-lock)
  (qconnect ui:*mute-button* "toggled(bool)" 'set-muted)
  (qconnect ui:*exposure-compensation* "valueChanged(int)" 'set-exposure-compensation)
  (qconnect ui:*action-settings* "triggered()" 'configure-capture-settings)
  (qconnect ui:*action-start-camera* "triggered()" 'start-camera)
  (qconnect ui:*action-stop-camera* "triggered()" 'stop-camera)
  (qconnect ui:*action-exit* "triggered()" ui:*main* "close()")
  ;; action!
  (make-camera)
  (x:do-with ui:*main* |show| |raise|))

(ini)
