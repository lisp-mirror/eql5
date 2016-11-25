;;; copyright (c) Polos Ruetz

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(defpackage :local-client
  (:use :common-lisp :eql)
  (:export
   #:*function*
   #:*server-name*
   #:ini
   #:request))

(provide :local-client)

(in-package :local-client)

(defvar *function*    nil)
(defvar *socket*      (qnew "QLocalSocket"))
(defvar *server-name* "EQL:local-server")

(defun ini (&optional fun)
  (setf *function* fun)
  (qconnect *socket* "readyRead()" 'read-data))

(let (size bytes-read type data)
  (defun reset-data ()
    (setf size nil
          data nil))
  (defun read-data ()
    (when *function*
      (let ((all (! "readAll" *socket*)))
        ;; data may arrive splitted in more blocks
        (if size
            (when (< bytes-read size)
              (push all data)
              (incf bytes-read (length all)))
            (let* ((spc (char-code #\Space))
                   (head (x:bytes-to-string (subseq all 0 (1+ (position spc all :start (1+ (position spc all)))))))
                   end)
              (multiple-value-setq (size end)
                (read-from-string head))
              (multiple-value-setq (type end)
                (read-from-string head nil nil :start end))
              (push (subseq all end) data)
              (setf bytes-read (length (first data)))))
        (when (= size bytes-read)
          (funcall *function* type (qfrom-utf8 (apply 'concatenate 'vector (nreverse data))))
          (reset-data))))))

(defun request (str)
  (reset-data)
  (x:do-with *socket*
    ("abort")
    ("connectToServer" *server-name*)
    ("waitForConnected"))
  (when (! "isWritable" *socket*)
    (let ((utf8 (qutf8 str)))
      (! "write(QByteArray)" *socket* (x:string-to-bytes (format nil "~D ~A" (length utf8) utf8))))
    t))
