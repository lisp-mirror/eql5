;;; This is a port of Qt example "webkit/domtraversal/"

(qrequire :webkit)

(in-package :eql-user)

(require :ui (in-src "examples/M-modules/webkit/ui/ui-dom")) ; generated: "eql5 -quic dom.ui"

(defun ini (&optional url)
  (ui:ini t)
  (qconnect ui:*web-view* "loadFinished(bool)" 'load-finished)
  (when url
    (set-url url)))

(defun set-url (string)
  (|setUrl| ui:*web-view* (|fromUserInput.QUrl| string)))

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

(ini (or (third (|arguments.QCoreApplication|))
         (namestring (probe-file "../../../doc/index.html"))))
