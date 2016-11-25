#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(unless (eql:qrequire :network)
  (error "EQL module :network could not be found/loaded")
  (eql:qq))

(defpackage :download
  (:use :common-lisp :eql)
  (:export
   #:ini
   #:download))

(in-package :download)

(defvar *manager* (qnew "QNetworkAccessManager"))
(defvar *ini*     t)

(defun download (name)
  (when *ini*
    (setf *ini* nil)
    (qconnect *manager* "finished(QNetworkReply*)" 'download-finished))
  (qlet ((url "QUrl(QString)" name)
         (request "QNetworkRequest(QUrl)" url))
    (|get| *manager* request)))

(defun download-finished (reply)
  (|deleteLater| reply) ; QNetworkReply*: heap result, delete manually
  (let ((error (|error| reply)))
    (if (= |QNetworkReply.NoError| error)
        (let ((data (|readAll| reply)))
          (save-data data)
          (|information.QMessageBox| nil "EQL"
                                     (format nil (tr "Downloaded ~:D bytes, see \"download.data\".") (length data))))
        (show-error error))))

(defun save-data (data)
  (with-open-file (s "download.data" :direction :output :if-exists :supersede
                     :element-type '(signed-byte 8))
    (write-sequence data s)))

(defun show-error (error)
  (let ((msg (x:when-it (find error (cdadr (qenums "QNetworkReply" "NetworkError")) :key 'cdr)
               (format nil (tr "Download error: <span style='color:red; font-weight:bold;'>~A</span>")
                       (car x:it)))))
    (|critical.QMessageBox| nil "EQL" (or msg (tr "Unknown download error.")))))

(download "http://planet.lisp.org/")
