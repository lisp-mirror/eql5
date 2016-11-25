;;; THIS FILE IS GENERATED (see 'eql -quic')

(defpackage :ui
  (:use :common-lisp :eql)
  (:export
   ;; all DEFVARs except layouts, spacers
   #:*central-widget*
   #:*dock-widget*
   #:*dock-widget-contents*
   #:*main*
   #:*menu-bar*
   #:*status-bar*
   #:*tree-widget*
   #:*web-view*
   #:ini
   #:retranslate-ui))

(in-package :ui)

(defvar *main*)                 ; QMainWindow (main widget)
(defvar *central-widget*)       ; QWidget
(defvar *dock-widget*)          ; QDockWidget
(defvar *dock-widget-contents*) ; QWidget
(defvar *menu-bar*)             ; QMenuBar
(defvar *status-bar*)           ; QStatusBar
(defvar *tree-widget*)          ; QTreeWidget
(defvar *vertical-layout-1*)    ; QVBoxLayout
(defvar *vertical-layout-2*)    ; QVBoxLayout
(defvar *web-view*)             ; QWebView

(defun ini ()
  (qlet ()
    (let (--qtreewidgetitem)
      (setf *main* (qnew "QMainWindow"))
      (qfun *main* "setObjectName" "main")
      (qfun *main* "resize" 800 600)
      (setf *central-widget* (qnew "QWidget(QWidget*)" *main*))
      (qfun *central-widget* "setObjectName" "central_widget")
      (setf *vertical-layout-1* (qnew "QVBoxLayout(QWidget*)" *central-widget*))
      (qfun *vertical-layout-1* "setObjectName" "vertical_Layout_1")
      (qfun *vertical-layout-1* "setContentsMargins" -1 4 -1 4)
      (setf *web-view* (qnew "QWebView(QWidget*)" *central-widget*))
      (qfun *web-view* "setObjectName" "web_view")
      (qfun *vertical-layout-1* "addWidget" *web-view*)
      (qfun *main* "setCentralWidget" *central-widget*)
      (setf *menu-bar* (qnew "QMenuBar(QWidget*)" *main*))
      (qfun *menu-bar* "setObjectName" "menu_bar")
      (qfun *menu-bar* "setGeometry" 0 0 800 22)
      (qfun *main* "setMenuBar" *menu-bar*)
      (setf *status-bar* (qnew "QStatusBar(QWidget*)" *main*))
      (qfun *status-bar* "setObjectName" "status_bar")
      (qfun *main* "setStatusBar" *status-bar*)
      (setf *dock-widget* (qnew "QDockWidget(QWidget*)" *main*))
      (qfun *dock-widget* "setObjectName" "dock_widget")
      (qfun *dock-widget* "setAllowedAreas" (logior |Qt.LeftDockWidgetArea| |Qt.RightDockWidgetArea|))
      (setf *dock-widget-contents* (qnew "QWidget"))
      (qfun *dock-widget-contents* "setObjectName" "dock_widget_contents")
      (setf *vertical-layout-2* (qnew "QVBoxLayout(QWidget*)" *dock-widget-contents*))
      (qfun *vertical-layout-2* "setContentsMargins" 4 4 4 4)
      (qfun *vertical-layout-2* "setObjectName" "vertical_layout_2")
      (setf *tree-widget* (qnew "QTreeWidget(QWidget*)" *dock-widget-contents*))
      (setf --qtreewidgetitem (qnew "QTreeWidgetItem"))
      (qfun --qtreewidgetitem "setText" 0 "1")
      (qfun *tree-widget* "setHeaderItem" --qtreewidgetitem)
      (qfun *tree-widget* "setObjectName" "tree_widget")
      (qfun (qfun *tree-widget* "header") "setVisible" nil)
      (qfun *vertical-layout-2* "addWidget" *tree-widget*)
      (qfun *dock-widget* "setWidget" *dock-widget-contents*)
      (qfun *main* "addDockWidget" 1 *dock-widget*)
      (retranslate-ui)
      (qfun *main* "show"))))

(defun retranslate-ui ()
  (let ()
    (qfun *main* "setWindowTitle" (tr "Web Element DOM Traversal"))
    (qfun *dock-widget* "setWindowTitle" (tr "Document Structure"))))

(ini)
