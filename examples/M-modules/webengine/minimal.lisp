;;; minimal WebEngine (requires Qt >= 5.6)

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :webengine)

(defvar *view* (qnew "QWebEngineView"))

(x:do-with *view*
  (|setUrl| (qnew "QUrl(QString)" "http://planet.lisp.org/"))
  (|resize| '(800 600))
  (|show|))
