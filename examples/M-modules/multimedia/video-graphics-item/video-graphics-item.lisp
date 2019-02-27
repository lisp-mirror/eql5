;; port of Qt example "videographicsitem" (QtMultimediaWidgets)

(qrequire :multimedia)

(require :ui (in-src "examples/M-modules/multimedia/video-graphics-item/ui/ui-video-graphics-item"))

(defpackage :video-item
  (:nicknames :vi)
  (:use :common-lisp :eql)
  (:export
   #:*media-player*
   #:*video-item*
   #:ini))

(in-package :video-item)

(defvar *media-player*   (qnew "QMediaPlayer(...)" nil |QMediaPlayer.VideoSurface|))
(defvar *video-item*     (qnew "QGraphicsVideoItem"))
(defvar *graphics-scene* nil)

(defun standard-icon (style-sp)
  (|standardIcon| (|style| ui:*main*) style-sp))

(defun theme-icon (name) ; optional (not used here)
  ;; the names would be:
  ;; "media-playback-start" and "media-playback-pause" (see Qt Assistant)
  (|fromTheme.QIcon| name))

(defun ini ()
  (ui:ini)
  (setf *graphics-scene* (qnew "QGraphicsScene(QObject*)" ui:*main*))
  (let ((size (list 640 480)))
    (|setMinimumSize| ui:*graphics-view* (mapcar (lambda (x) (+ 50 x)) size))
    (|setSize| *video-item* size))
  (|setScene| ui:*graphics-view* *graphics-scene*)
  (|addItem| *graphics-scene* *video-item*)
  (|setRange| ui:*rotate-slider* -180 180)
  (|setValue| ui:*rotate-slider* 0)
  (|setEnabled| ui:*play-button* nil)
  (|setIcon| ui:*play-button* (standard-icon |QStyle.SP_MediaPlay|))
  (|setRange| ui:*position-slider* 0 0)
  (|setSizePolicy| ui:*error-label* (qnew "QSizePolicy(...)" |QSizePolicy.Preferred| |QSizePolicy.Maximum|))
  (|setVideoOutput| *media-player* *video-item*)
  ;; connections
  (qconnect ui:*open-button* "clicked()" 'open-file)
  (qconnect ui:*play-button* "clicked()" 'play)
  (qconnect ui:*position-slider* "sliderMoved(int)"
            (lambda (position) (|setPosition| *media-player* position)))
  (qconnect ui:*rotate-slider* "valueChanged(int)" 'rotate-video)
  (qconnect *media-player* "stateChanged(QMediaPlayer::State)" 'media-state-changed)
  (qconnect *media-player* "positionChanged(qint64)"
            (lambda (position) (|setValue| ui:*position-slider* position)))
  (qconnect *media-player* "durationChanged(qint64)"
            (lambda (duration) (|setRange| ui:*position-slider* 0 duration)))
  (qconnect *media-player* "error(QMediaPlayer::Error)" 'handle-error)
  (|show| ui:*main*))

(defun open-file ()
  (let ((file-name (|getOpenFileName.QFileDialog|
                    ui:*main*
                    (tr "Open Movie")
                    (or (first (|standardLocations.QStandardPaths| |QStandardPaths.MoviesLocation|))
                        (|homePath.QDir|)))))
    (unless (x:empty-string file-name)
      (set-url (|fromLocalFile.QUrl| file-name))
      (play))))

(defun set-url (url)
  (|clear| ui:*error-label*)
  (|setWindowFilePath| ui:*main* (if (|isLocalFile| url) (|toLocalFile| url) ""))
  (qlet ((content "QMediaContent(QUrl)" url))
    (|setMedia| *media-player* content))
  (|setEnabled| ui:*play-button* t))

(defun play ()
  (case (|state| *media-player*)
    (#.|QMediaPlayer.PlayingState|
     (|pause| *media-player*))
    (t
     (|play| *media-player*))))

(defun media-state-changed (state)
  (|setIcon| ui:*play-button* (standard-icon (case state
                                               (#.|QMediaPlayer.PlayingState|
                                                |QStyle.SP_MediaPause|)
                                               (t
                                                |QStyle.SP_MediaPlay|)))))

(defun rotate-video (angle)
  (let* ((rect (|boundingRect| *video-item*))
         (x (/ (third rect) 2))
         (y (/ (fourth rect) 2)))
    (qlet ((transform "QTransform"))
      (x:do-with transform
        (|translate| x y)
        (|rotate| angle)
        (|translate| (- x) (- y)))
      (|setTransform| *video-item* transform))))

(defun enum-error-to-string (number class enum-name)
  (first (find number (cdadr (qenums class enum-name)) :key 'cdr)))

(defun handle-error (&optional num)
  (|setEnabled| ui:*play-button* nil)
  (let ((error-string (|errorString| *media-player*)))
    (|setText| ui:*error-label* (format nil "Error: ~A"
                                        (if (x:empty-string error-string)
                                            (enum-error-to-string (|error| *media-player*) "QMediaPlayer" "Error")
                                            error-string)))))

(ini)
