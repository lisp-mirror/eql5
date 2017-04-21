;;; convert all *.htm* files of current directory to text files (8 bit encoded)
;;; and move original html files in a folder named "html/"

(qrequire :webkit)

(defvar *web-view*  (qnew "QWebView"))
(defvar *web-frame* (|mainFrame| (|page| *web-view*)))

(defvar *file*)
(defvar *files*)
(defvar *num-files*)

(defun read-html ()
  (with-open-file (s *file* :direction :input)
    (let ((str (make-string (file-length s))))
      (read-sequence str s)
      (|setHtml| *web-frame* str))))

(defun write-text ()
  (let ((name (pathname-name *file*)))
    (with-open-file (s (format nil "~A.txt" name) :direction :output :if-exists :supersede)
      (write-sequence (x:string-to-bytes (qlocal8bit (|toPlainText| *web-frame*)))
                      s))
    (let ((file-name (file-namestring (probe-file *file*))))
      (rename-file file-name (x:cc "html/" file-name)))))

(defun html-loaded (ok)
  (if ok
      (progn
        (write-text)
        (qlater 'next-file)) ; QLATER: avoid stack overflow (many files)
      (qmsg (format nil "Error converting file: ~S" *file*))))

(defun next-file (&optional ini)
  (when ini
    (setf *files* (directory "./*.htm*")
          *num-files* (length *files*)))
  (setf *file* (first *files*)
        *files* (rest *files*))
  (print *file*)
  (if *file*
      (read-html)
      (progn
        (qmsg (format nil "<h3>html to text</h3><p>converted: ~D.</p>" *num-files*))
        (qq))))

(progn
  (ensure-directories-exist "./html/")
  (|setCodecForLocale.QTextCodec| (|codecForName.QTextCodec| "ISO 8859-1")) ; for OSX
  (qconnect *web-frame* "loadFinished(bool)" 'html-loaded)
  (next-file 'ini))

