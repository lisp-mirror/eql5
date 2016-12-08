;;; This is a port of Qt example "webkit/domtraversal/"

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :webkit)

(in-package :eql-user)

(load "ui/ui-dom") ; generated: "eql5 -quic dom.ui"

(defun ini (&optional url)
  (ui:ini t)
  (qconnect ui:*web-view* "loadFinished(bool)" 'load-finished)
  (when url
    (set-url url)))

(defun set-url (string)
  (qlet ((url "QUrl(QString)" string))
    (|setUrl| ui:*web-view* url)))

(defun load-finished (ok)
  (|clear| ui:*tree-widget*)
  (examine-child-elements (|documentElement| (|mainFrame| (|page| ui:*web-view*)))
                          (|invisibleRootItem| ui:*tree-widget*)))

(defun examine-child-elements (parent-element parent-item)
  (let ((element (|firstChild| parent-element)))
    (x:while (not (|isNull| element))
      (let ((item (qnew "QTreeWidgetItem")))
        (|setText| item 0 (|tagName| element))
        (|addChild| parent-item item)
        (examine-child-elements element item)
        (setf element (|nextSibling| element))))))

(defun ensure-url (string)
  (if (or (x:starts-with "http" string)
          (x:starts-with "file" string))
      string
      (x:cc "file://" string)))

(ini (ensure-url (or (third (|arguments.QCoreApplication|))
                     (namestring (probe-file "../../../doc/index.html")))))
