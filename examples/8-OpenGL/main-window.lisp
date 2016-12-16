;;; This is a port of the Qt OpenGL Example "Grabber"

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(require :gl-widget (eql:in-home "examples/8-OpenGL/gl-widget"))

(defpackage :main-window
  (:use :common-lisp :eql :gl-widget)
  (:export
   #:start))

(in-package :main-window)

(defvar *me*                (qnew "QMainWindow"))
(defvar *pixmap-label*      (qnew "QLabel"))
(defvar *pixmap-label-area* (qnew "QScrollArea"
                                  "sizePolicy" (qnew "QSizePolicy(...)" |QSizePolicy.Ignored| |QSizePolicy.Ignored|)
                                  "minimumSize" '(50 50)))

(defun ini ()
  (ini-gl-widget)
  (let ((widget-area    (qnew "QScrollArea"
                              "widgetResizable" t
                              "horizontalScrollBarPolicy" |Qt.ScrollBarAlwaysOff|
                              "verticalScrollBarPolicy"   |Qt.ScrollBarAlwaysOff|
                              "sizePolicy" (qnew "QSizePolicy(...)" |QSizePolicy.Ignored| |QSizePolicy.Ignored|)
                              "minimumSize" '(50 50)))
        (central-widget (qnew "QWidget"))
        (central-layout (qnew "QGridLayout"))
        (x-slider (create-slider '*x-rotation-changed* 'set-x-rotation))
        (y-slider (create-slider '*y-rotation-changed* 'set-y-rotation))
        (z-slider (create-slider '*z-rotation-changed* 'set-z-rotation)))
    (|setCentralWidget| *me* central-widget)
    (|setWidget| widget-area *gl-widget*)
    (|setWidget| *pixmap-label-area* *pixmap-label*)
    (create-menus)
    (x:do-with (|addWidget| central-layout)
      (widget-area         0 0)
      (*pixmap-label-area* 0 1)
      (x-slider            1 0 1 2)
      (y-slider            2 0 1 2)
      (z-slider            3 0 1 2))
    (|setLayout| central-widget central-layout)
    (|setValue| x-slider (* 15  16))
    (|setValue| y-slider (* 345 16))
    (|setValue| z-slider 0)
    (x:do-with *me*
      (|setWindowTitle| (tr "Grabber"))
      (|resize| (list 400 300)))))

(defun grab-frame-buffer ()
  (set-pixmap (|fromImage.QPixmap| (|grabFramebuffer| *gl-widget*))))

(let (empty)
  (defun clear-pixmap ()
    (set-pixmap (or empty (setf empty (qnew "QPixmap"))))))

(defun about ()
  (|about.QMessageBox|
    *me*
    (tr "About Grabber")
    (tr "The <b>Grabber</b> example demonstrates two approaches for rendering OpenGL into a Qt pixmap.")))

(defun add-action (menu text shortcut function)
  (let ((action (|addAction| menu text)))
    (when shortcut
      (|setShortcut| action (qnew "QKeySequence(QString)" shortcut)))
    (qconnect action "triggered()" function)))

(defun create-menus ()
  (let* ((menu-bar (|menuBar| *me*))
         (file-menu (|addMenu| menu-bar (tr "&File")))
         (help-menu (|addMenu| menu-bar (tr "&Help"))))
    ;; file menu
    (add-action file-menu (tr "&Grab Frame Buffer") "Ctrl+G" 'grab-frame-buffer)
    (add-action file-menu (tr "&Clear Pixmap")      "Ctrl+L" 'clear-pixmap)
    (|addSeparator| file-menu)
    (add-action file-menu (tr "E&xit")              "Ctrl+Q" (lambda () (|close| *me*)))
    ;; help menu
    (add-action help-menu (tr "&About")    nil 'about)
    (add-action help-menu (tr "About &Qt") nil (lambda () (|aboutQt| (qapp))))))

(defun create-slider (changed setter)
  (let ((slider (qnew "QSlider(Qt::Orientation)" |Qt.Horizontal|
                      "minimum"      0
                      "maximum"      (* 360 16)
                      "singleStep"   (* 1   16)
                      "pageStep"     (* 15  16)
                      "tickInterval" (* 15  16)
                      "tickPosition" |QSlider.TicksRight|)))
    (qconnect slider "valueChanged(int)" setter)
    (setf (symbol-value changed) (lambda (x) (|setValue| slider x)))
    slider))

(defun set-pixmap (pixmap)
  (|setPixmap| *pixmap-label* pixmap)
  (let* ((size (|size| pixmap))
         (width (first size)))
    (when (equal (list (1- width) (second size))
                 (|maximumViewportSize| *pixmap-label-area*))
      (setf (first size) (1- width)))
    (|resize| *pixmap-label* size)))

(defun start ()
  (ini)
  (x:do-with *me* |show| |raise|))
