;;; THIS FILE IS GENERATED (see 'eql5 -quic')

(defpackage :ui
  (:use :common-lisp :eql)
  (:export
   ;; all DEFVARs except layouts, spacers
   #:*action-exit*
   #:*action-settings*
   #:*action-start-camera*
   #:*action-stop-camera*
   #:*capture-widget*
   #:*central-widget*
   #:*exposure-compensation*
   #:*label*
   #:*last-image-preview-label*
   #:*lock-button*
   #:*main*
   #:*menu-bar*
   #:*menu-devices*
   #:*menu-file*
   #:*mute-button*
   #:*pause-button*
   #:*preview-page*
   #:*record-button*
   #:*stacked-widget*
   #:*status-bar*
   #:*stop-button*
   #:*tab*
   #:*tab-2*
   #:*take-image-button*
   #:*viewfinder*
   #:*viewfinder-page*
   #:ini
   #:retranslate-ui
   #:show))

(in-package :ui)

(defvar *main*)                     ; QMainWindow (main widget)
(defvar *action-exit*)              ; QAction
(defvar *action-settings*)          ; QAction
(defvar *action-start-camera*)      ; QAction
(defvar *action-stop-camera*)       ; QAction
(defvar *capture-widget*)           ; QTabWidget
(defvar *central-widget*)           ; QWidget
(defvar *exposure-compensation*)    ; QSlider
(defvar *grid-layout*)              ; QGridLayout
(defvar *grid-layout-2*)            ; QGridLayout
(defvar *grid-layout-3*)            ; QGridLayout
(defvar *grid-layout-4*)            ; QGridLayout
(defvar *grid-layout-5*)            ; QGridLayout
(defvar *label*)                    ; QLabel
(defvar *last-image-preview-label*) ; QLabel
(defvar *lock-button*)              ; QPushButton
(defvar *menu-bar*)                 ; QMenuBar
(defvar *menu-devices*)             ; QMenu
(defvar *menu-file*)                ; QMenu
(defvar *mute-button*)              ; QPushButton
(defvar *pause-button*)             ; QPushButton
(defvar *preview-page*)             ; QWidget
(defvar *record-button*)            ; QPushButton
(defvar *stacked-widget*)           ; QStackedWidget
(defvar *status-bar*)               ; QStatusBar
(defvar *stop-button*)              ; QPushButton
(defvar *tab*)                      ; QWidget
(defvar *tab-2*)                    ; QWidget
(defvar *take-image-button*)        ; QPushButton
(defvar *verticalspacer*)           ; QSpacerItem
(defvar *verticalspacer-2*)         ; QSpacerItem
(defvar *viewfinder*)               ; QCameraViewfinder
(defvar *viewfinder-page*)          ; QWidget

(defun ini (&optional show)
  (qlet (sizepolicy palette brush brush1 sizepolicy1)
    (let ()
      (setf *main* (qnew "QMainWindow"))
      (qfun *main* "setObjectName" "main")
      (qfun *main* "resize" 668 422)
      (setf *action-exit* (qnew "QAction(QObject*)" *main*))
      (qfun *action-exit* "setObjectName" "action_exit")
      (setf *action-start-camera* (qnew "QAction(QObject*)" *main*))
      (qfun *action-start-camera* "setObjectName" "action_start_camera")
      (setf *action-stop-camera* (qnew "QAction(QObject*)" *main*))
      (qfun *action-stop-camera* "setObjectName" "action_stop_camera")
      (setf *action-settings* (qnew "QAction(QObject*)" *main*))
      (qfun *action-settings* "setObjectName" "action_settings")
      (setf *central-widget* (qnew "QWidget(QWidget*)" *main*))
      (qfun *central-widget* "setObjectName" "central_widget")
      (setf *grid-layout-3* (qnew "QGridLayout(QWidget*)" *central-widget*))
      (qfun *grid-layout-3* "setObjectName" "grid_layout_3")
      (setf *stacked-widget* (qnew "QStackedWidget(QWidget*)" *central-widget*))
      (qfun *stacked-widget* "setObjectName" "stacked_widget")
      (setf sizepolicy (qnew "QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)" |QSizePolicy.Preferred| |QSizePolicy.Preferred|))
      (qfun sizepolicy "setHorizontalStretch" 1)
      (qfun sizepolicy "setVerticalStretch" 0)
      (qfun sizepolicy "setHeightForWidth" (qfun (qfun *stacked-widget* "sizePolicy") "hasHeightForWidth"))
      (qfun *stacked-widget* "setSizePolicy" sizepolicy)
      (setf palette (qnew "QPalette"))
      (setf brush (qnew "QBrush(QColor)" (qfun "QColor" "fromRgb" 255 255 255 255)))
      (qfun brush "setStyle" |Qt.SolidPattern|)
      (qfun palette "setBrush" |QPalette.Active| |QPalette.Base| brush)
      (setf brush1 (qnew "QBrush(QColor)" (qfun "QColor" "fromRgb" 145 145 145 255)))
      (qfun brush1 "setStyle" |Qt.SolidPattern|)
      (qfun palette "setBrush" |QPalette.Active| |QPalette.Window| brush1)
      (qfun palette "setBrush" |QPalette.Inactive| |QPalette.Base| brush)
      (qfun palette "setBrush" |QPalette.Inactive| |QPalette.Window| brush1)
      (qfun palette "setBrush" |QPalette.Disabled| |QPalette.Base| brush1)
      (qfun palette "setBrush" |QPalette.Disabled| |QPalette.Window| brush1)
      (qfun *stacked-widget* "setPalette" palette)
      (setf *viewfinder-page* (qnew "QWidget"))
      (qfun *viewfinder-page* "setObjectName" "viewfinder_page")
      (setf *grid-layout-5* (qnew "QGridLayout(QWidget*)" *viewfinder-page*))
      (qfun *grid-layout-5* "setObjectName" "grid_layout_5")
      (setf *viewfinder* (qnew "QCameraViewfinder(QWidget*)" *viewfinder-page*))
      (qfun *viewfinder* "setObjectName" "viewfinder")
      (qfun *grid-layout-5* "addWidget" *viewfinder* 0 0 1 1)
      (qfun *stacked-widget* "addWidget" *viewfinder-page*)
      (setf *preview-page* (qnew "QWidget"))
      (qfun *preview-page* "setObjectName" "preview_page")
      (setf *grid-layout-4* (qnew "QGridLayout(QWidget*)" *preview-page*))
      (qfun *grid-layout-4* "setObjectName" "grid_layout_4")
      (setf *last-image-preview-label* (qnew "QLabel(QWidget*)" *preview-page*))
      (qfun *last-image-preview-label* "setObjectName" "last_image_preview_label")
      (setf sizepolicy1 (qnew "QSizePolicy(QSizePolicy::Policy,QSizePolicy::Policy)" |QSizePolicy.Preferred| |QSizePolicy.MinimumExpanding|))
      (qfun sizepolicy1 "setHorizontalStretch" 0)
      (qfun sizepolicy1 "setVerticalStretch" 0)
      (qfun sizepolicy1 "setHeightForWidth" (qfun (qfun *last-image-preview-label* "sizePolicy") "hasHeightForWidth"))
      (qfun *last-image-preview-label* "setSizePolicy" sizepolicy1)
      (qfun *last-image-preview-label* "setFrameShape" |QFrame.Box|)
      (qfun *grid-layout-4* "addWidget" *last-image-preview-label* 0 0 1 1)
      (qfun *stacked-widget* "addWidget" *preview-page*)
      (qfun *grid-layout-3* "addWidget" *stacked-widget* 0 0 3 1)
      (setf *lock-button* (qnew "QPushButton(QWidget*)" *central-widget*))
      (qfun *lock-button* "setObjectName" "lock_button")
      (qfun *grid-layout-3* "addWidget" *lock-button* 1 1 1 2)
      (setf *capture-widget* (qnew "QTabWidget(QWidget*)" *central-widget*))
      (qfun *capture-widget* "setObjectName" "capture_widget")
      (setf *tab-2* (qnew "QWidget"))
      (qfun *tab-2* "setObjectName" "tab_2")
      (setf *grid-layout* (qnew "QGridLayout(QWidget*)" *tab-2*))
      (qfun *grid-layout* "setObjectName" "grid_layout")
      (setf *take-image-button* (qnew "QPushButton(QWidget*)" *tab-2*))
      (qfun *take-image-button* "setObjectName" "take_image_button")
      (qfun *take-image-button* "setEnabled" nil)
      (qfun *grid-layout* "addWidget" *take-image-button* 0 0 1 1)
      (setf *verticalspacer-2* (qnew "QSpacerItem(int,int,QSizePolicy::Policy,QSizePolicy::Policy)" 20 161 |QSizePolicy.Minimum| |QSizePolicy.Expanding|))
      (qfun *grid-layout* "addItem" *verticalspacer-2* 1 0 1 1)
      (setf *label* (qnew "QLabel(QWidget*)" *tab-2*))
      (qfun *label* "setObjectName" "label")
      (qfun *grid-layout* "addWidget" *label* 2 0 1 1)
      (setf *exposure-compensation* (qnew "QSlider(QWidget*)" *tab-2*))
      (qfun *exposure-compensation* "setObjectName" "exposure_compensation")
      (qfun *exposure-compensation* "setMinimum" -4)
      (qfun *exposure-compensation* "setMaximum" 4)
      (qfun *exposure-compensation* "setPageStep" 2)
      (qfun *exposure-compensation* "setOrientation" |Qt.Horizontal|)
      (qfun *exposure-compensation* "setTickPosition" |QSlider.TicksAbove|)
      (qfun *grid-layout* "addWidget" *exposure-compensation* 3 0 1 1)
      (qfun *capture-widget* "addTab" *tab-2* "")
      (setf *tab* (qnew "QWidget"))
      (qfun *tab* "setObjectName" "tab")
      (setf *grid-layout-2* (qnew "QGridLayout(QWidget*)" *tab*))
      (qfun *grid-layout-2* "setObjectName" "grid_layout_2")
      (setf *record-button* (qnew "QPushButton(QWidget*)" *tab*))
      (qfun *record-button* "setObjectName" "record_button")
      (qfun *grid-layout-2* "addWidget" *record-button* 0 0 1 1)
      (setf *pause-button* (qnew "QPushButton(QWidget*)" *tab*))
      (qfun *pause-button* "setObjectName" "pause_button")
      (qfun *grid-layout-2* "addWidget" *pause-button* 1 0 1 1)
      (setf *stop-button* (qnew "QPushButton(QWidget*)" *tab*))
      (qfun *stop-button* "setObjectName" "stop_button")
      (qfun *grid-layout-2* "addWidget" *stop-button* 2 0 1 1)
      (setf *verticalspacer* (qnew "QSpacerItem(int,int,QSizePolicy::Policy,QSizePolicy::Policy)" 20 76 |QSizePolicy.Minimum| |QSizePolicy.Expanding|))
      (qfun *grid-layout-2* "addItem" *verticalspacer* 3 0 1 1)
      (setf *mute-button* (qnew "QPushButton(QWidget*)" *tab*))
      (qfun *mute-button* "setObjectName" "mute_button")
      (qfun *mute-button* "setCheckable" t)
      (qfun *grid-layout-2* "addWidget" *mute-button* 4 0 1 1)
      (qfun *capture-widget* "addTab" *tab* "")
      (qfun *grid-layout-3* "addWidget" *capture-widget* 2 1 1 2)
      (qfun *main* "setCentralWidget" *central-widget*)
      (setf *menu-bar* (qnew "QMenuBar(QWidget*)" *main*))
      (qfun *menu-bar* "setObjectName" "menu_bar")
      (qfun *menu-bar* "setGeometry" 0 0 668 25)
      (setf *menu-file* (qnew "QMenu(QWidget*)" *menu-bar*))
      (qfun *menu-file* "setObjectName" "menu_file")
      (setf *menu-devices* (qnew "QMenu(QWidget*)" *menu-bar*))
      (qfun *menu-devices* "setObjectName" "menu_devices")
      (qfun *main* "setMenuBar" *menu-bar*)
      (setf *status-bar* (qnew "QStatusBar(QWidget*)" *main*))
      (qfun *status-bar* "setObjectName" "status_bar")
      (qfun *main* "setStatusBar" *status-bar*)
      (qfun *menu-bar* "addAction(QAction*)" (qfun *menu-file* "menuAction"))
      (qfun *menu-bar* "addAction(QAction*)" (qfun *menu-devices* "menuAction"))
      (qfun *menu-file* "addAction(QAction*)" *action-start-camera*)
      (qfun *menu-file* "addAction(QAction*)" *action-stop-camera*)
      (qfun *menu-file* "addSeparator")
      (qfun *menu-file* "addAction(QAction*)" *action-settings*)
      (qfun *menu-file* "addSeparator")
      (qfun *menu-file* "addAction(QAction*)" *action-exit*)
      ;; (qconnect *record-button* "clicked()" *main* "record()")
      ;; (qconnect *stop-button* "clicked()" *main* "stop()")
      ;; (qconnect *pause-button* "clicked()" *main* "pause()")
      ;; (qconnect *action-exit* "triggered()" *main* "close()")
      ;; (qconnect *take-image-button* "clicked()" *main* "takeImage()")
      ;; (qconnect *lock-button* "clicked()" *main* "toggleLock()")
      ;; (qconnect *mute-button* "toggled(bool)" *main* "setMuted(bool)")
      ;; (qconnect *exposure-compensation* "valueChanged(int)" *main* "setExposureCompensation(int)")
      ;; (qconnect *action-settings* "triggered()" *main* "configureCaptureSettings()")
      ;; (qconnect *action-stop-camera* "triggered()" *main* "stopCamera()")
      (qfun *stacked-widget* "setCurrentIndex" 0)
      (qfun *capture-widget* "setCurrentIndex" 0)
      (retranslate-ui)
      (when show
        (show)))))

(defun show ()
  (qfun *main* "show"))

(defun retranslate-ui ()
  (let ()
    (qfun *main* "setWindowTitle" (tr "Camera"))
    (qfun *action-exit* "setText" (tr "Exit"))
    (qfun *action-start-camera* "setText" (tr "Start Camera"))
    (qfun *action-stop-camera* "setText" (tr "Stop Camera"))
    (qfun *action-settings* "setText" (tr "Settings"))
    (qfun *last-image-preview-label* "setText" "")
    (qfun *lock-button* "setText" (tr "Focus"))
    (qfun *take-image-button* "setText" (tr "Capture Photo"))
    (qfun *label* "setText" (tr "Exposure Compensation:"))
    (qfun *capture-widget* "setTabText" (qfun *capture-widget* "indexOf" *tab-2*) (tr "Image"))
    (qfun *record-button* "setText" (tr "Record"))
    (qfun *pause-button* "setText" (tr "Pause"))
    (qfun *stop-button* "setText" (tr "Stop"))
    (qfun *mute-button* "setText" (tr "Mute"))
    (qfun *capture-widget* "setTabText" (qfun *capture-widget* "indexOf" *tab*) (tr "Video"))
    (qfun *menu-file* "setTitle" (tr "File"))
    (qfun *menu-devices* "setTitle" (tr "Devices"))))
