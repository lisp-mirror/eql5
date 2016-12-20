;;; "Examples" Browser
;;;
;;; (depends on small plugin, see "lib/")
;;;
;;; Run EQL examples "downloading"/starting them from an EQL WebKit browser.
;;;
;;; Here we use the local example files, but you could put them on a server and point
;;; the QUrl to a network location (in function RUN, see below).
;;;
;;; Once downloaded, the application files are cached locally (to be run offline).

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :webkit)
(qrequire :network)

(defpackage :browser
  (:use :common-lisp :eql)
  (:export
    #:*web-view*
    #:ini))

(in-package :browser)

(defvar *web-view*        (qnew "QWebView" "windowTitle" "EQL WebKit"))
(defvar *network-manager* (qnew "QNetworkAccessManager"))
(defvar *webkit-bridge*   (qload-c++ "lib/webkit_bridge"))
(defvar *files-left*)
(defvar *ini-file*)

(defun frame ()
  (|mainFrame| (|page| *web-view*)))

(defun ini ()
  (qconnect (frame) "javaScriptWindowObjectCleared()"
            (lambda ()
              (|addToJavaScriptWindowObject| (frame) "Lisp" *webkit-bridge*)))
  (qconnect *network-manager* "finished(QNetworkReply*)" 'download-finished)
  (|setUrl| *web-view* (|fromUserInput.QUrl| (namestring (probe-file "examples-browser.htm"))))
  (|showMaximized| *web-view*))

;;; download

(defun download (url id name)
  (qlet ((request "QNetworkRequest(QUrl)" url)
         (qid "QVariant(QString)" id)
         (qname "QVariant(QString)" name))
    (let ((reply (|get| *network-manager* request)))
      ;; dynamic properties
      (|setProperty| reply "id" qid)
      (|setProperty| reply "cache-name" qname))))

(defun download-finished (reply)
  (|deleteLater| reply) ; QNetworkReply*: heap result, delete manually
  (let ((error (|error| reply)))
    (if (= |QNetworkReply.NoError| error)
        (save-data reply)
        (show-download-error error))))

(defun cache-file (name)
  (format nil "cache/~A" name))

(defun save-data (reply)
  (let ((file (cache-file (|toString| (|property| reply "cache-name"))))) ; dynamic property
    (ensure-directories-exist file)
    (with-open-file (s file :direction :output :if-exists :supersede
                       :element-type '(signed-byte 8))
      (write-sequence (|readAll| reply) s)))
  (when (zerop (decf *files-left*))
    (load* (|toString| (|property| reply "id")) ; dynamic property
           *ini-file*)))

(let (top-level-widgets)
  (defun load* (id file)
    (load file)
    (let ((latest (first (sort (|topLevelWidgets.QApplication|) '> :key 'qt-object-unique))))
      (push (cons id latest)
            top-level-widgets)
      (x:do-with latest |show| |raise|)))
  (defun load/show (id file)
    (let ((widget (cdr (find id top-level-widgets :test 'string= :key 'car))))
      (if widget
          (progn
            (if (|isMinimized| widget)
                (|showNormal| widget)
                (|show| widget))
            (|raise| widget))
          (load* id file)))))

(defun show-download-error (error)
  (let ((msg (x:when-it (find error (cdadr (qenums "QNetworkReply" "NetworkError")) :key 'cdr)
               (format nil (tr "Download error: <span style='color:red; font-weight:bold;'>~A</span>")
                       (car x:it)))))
    (|critical.QMessageBox| nil "EQL" (or msg (tr "Unknown download error.")))))

;;; These functions can be called from JavaScript (see "README-GLUE-CODE.txt")

(defun run (id file-names)
  "Qt: bool run(QString, QStringList)"
  (let ((ini-file (cache-file (first file-names))))
    (if (probe-file ini-file)
        (load/show id ini-file)
        (progn
          (setf *files-left* (length file-names)
                *ini-file*   ini-file)
          ;; QNetworkAccessManager does it all for us (asynchroneous, parallel download)
          (dolist (name file-names)
            (download (|fromUserInput.QUrl| (in-home "examples/" name)) ; change this to a network location
                      id
                      name))))))

(defun clear-cache ()
  "Qt: void clearCache()"
  (let ((fs 0)
        (ds 0))
    ;; delete files
    (dolist (file (directory "cache/**/*.*"))
      (when (ignore-errors (delete-file file))
        (incf fs)))
    ;; delete empty directories
    (dolist (dir (butlast (sort (directory "cache/**/") '>
                                :key (lambda (dir) (count #\/ (namestring dir))))))
      (when (ignore-errors (delete-file dir))
        (incf ds)))
    (|setPlainText| (|findFirstElement| (frame) "#message")
       (format nil "deleted: ~D file~:P, ~D director~:@P" fs ds))))

(ini)
