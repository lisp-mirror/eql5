;; port of Qt example "videowidget" (QtMultimediaWidgets)

(qrequire :multimedia)

(require :ui (in-src "examples/M-modules/multimedia/video-widget/ui/ui-video-widget"))

(defpackage :video-widget
  (:nicknames :vw)
  (:use :common-lisp :eql)
  (:export
   #:*media-player*
   #:ini))

(in-package :video-widget)

(defvar *media-player* (qnew "QMediaPlayer(...)" nil |QMediaPlayer.VideoSurface|))

(defun standard-icon (style-sp)
  (|standardIcon| (|style| ui:*main*) style-sp))

(defun theme-icon (name) ; optional (not used here)
  ;; the names would be:
  ;; "media-playback-start" and "media-playback-pause" (see Qt Assistant)
  (|fromTheme.QIcon| name))

(defun ini ()
  (ui:ini)
  ;; settings
  (|setEnabled| ui:*play-button* nil)
  (|setIcon| ui:*play-button* (standard-icon |QStyle.SP_MediaPlay|))
  (|setRange| ui:*position-slider* 0 0)
  (|setSizePolicy| ui:*error-label* (qnew "QSizePolicy(...)" |QSizePolicy.Preferred| |QSizePolicy.Maximum|))
  (|setVideoOutput| *media-player* ui:*video-widget*)
  ;; connections
  (qconnect ui:*open-button* "clicked()" 'open-file)
  (qconnect ui:*play-button* "clicked()" 'play)
  (qconnect ui:*position-slider* "sliderMoved(int)"
            (lambda (position) (|setPosition| *media-player* position)))
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
