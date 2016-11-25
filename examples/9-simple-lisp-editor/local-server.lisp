;;; copyright (c) Polos Ruetz

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(unless (eql:qrequire :network)
  (error "[EQL] module :network required")
  (eql:qq))

(require :input-hook   (probe-file "input-hook.lisp"))
(require :top-level    (probe-file "top-level.lisp"))
(require :query-dialog (probe-file "query-dialog.lisp"))
(require :debug-dialog (probe-file "debug-dialog.lisp"))
(require :settings     (probe-file "settings.lisp"))

(defpackage :local-server
  (:use :common-lisp :eql)
  (:export
   #:+
   #:++
   #:+++
   #:*
   #:**
   #:***
   #:/
   #://
   #:///
   #:*function*
   #:*prompt*
   #:ini
   #:clear
   #:output
   #:send-to-client))

(provide :local-server)

(in-package :local-server)

(defvar *function*               'feed-top-level)
(defvar *server*                 (qnew "QLocalServer"))
(defvar *client*                 nil)
(defvar *prompt*                 t)
(defvar *standard-output-buffer* (make-string-output-stream))
(defvar *trace-output-buffer*    (make-string-output-stream))
(defvar *error-output-buffer*    (make-string-output-stream))
(defvar *terminal-out-buffer*    (make-string-output-stream))
(defvar *gui-debug-io*           nil)
(defvar *sharp-q*                nil) ; see "CL_EQL/"
(defvar *silent*                 (find "-silent" (! "arguments" "QApplication") :test 'string=))

;; REPL variables
(defvar +   nil)
(defvar ++  nil)
(defvar +++ nil)
(defvar *   nil)
(defvar **  nil)
(defvar *** nil)
(defvar /   nil)
(defvar //  nil)
(defvar /// nil)

(defun ini (&optional (name "EQL:local-server"))
  (! "removeServer" "QLocalServer" name)
  (if (! "listen" *server* name)
      (progn
        (ini-streams)
        (set-debugger-hook)
        (setf si::*tpl-print-current-hook* 'send-file-position)
        (qset (qapp) "quitOnLastWindowClosed" nil)
        (qconnect *server* "newConnection()" 'new-client-connection)
        (multiple-value-bind (eql-version qt-version)
            (qversion)
          (format t "~%EQL local-server (EQL ~A, ECL ~A, Qt ~A)~@
                       Use local-client to send input.~%"
                  eql-version (lisp-implementation-version) qt-version))
        (ini-system-tray)
        t)
      (progn
        (! "critical" "QMessageBox" nil (tr "EQL local-server")
              (format nil (tr "Unable to start the server: ~A.") (! "errorString" *server*)))
        nil)))

(defun ini-streams ()
  (if *silent*
      (setf *standard-output* *standard-output-buffer*
            *trace-output*    *trace-output-buffer*
            *error-output*    *error-output-buffer*)
      (setf *standard-output* (make-broadcast-stream *standard-output*
                                                     *standard-output-buffer*)
            *trace-output*    (make-broadcast-stream *trace-output*
                                                     *trace-output-buffer*)
            *error-output*    (make-broadcast-stream *error-output*
                                                     *error-output-buffer*)))
  (setf *terminal-io*  (make-two-way-stream (two-way-stream-input-stream *terminal-io*)
                                            (if *silent*
                                                *terminal-out-buffer*
                                                (make-broadcast-stream (two-way-stream-output-stream *terminal-io*)
                                                                       *terminal-out-buffer*)))
        *query-io*     (make-two-way-stream (input-hook:new 'handle-query-io)
                                            (two-way-stream-output-stream *terminal-io*))
        *gui-debug-io* (make-two-way-stream (input-hook:new 'handle-debug-io)
                                            (two-way-stream-output-stream *terminal-io*))))

(defun file-data (file)
  "To use together with '#.' reader macro, for embedding data in compiled files."
  (with-open-file (s file :direction :input :element-type '(signed-byte 8))
    (let ((data (make-array (file-length s) :element-type '(signed-byte 8))))
      (read-sequence data s)
      data)))

(defun ini-system-tray ()
  (let* ((tray (qnew "QSystemTrayIcon(QIcon)"
                     (qnew "QIcon(QPixmap)"
                           (x:let-it (qnew "QPixmap")
                             (! "loadFromData" x:it
                                ;; embed data
                                #.(file-data (in-home "examples/9-simple-lisp-editor/data/local_server.png"))
                                "PNG")))))
         (menu (qnew "QMenu"))
         (quit (qnew "QAction(QObject*)" menu
                     "text" (tr "Quit EQL server"))))
    (! "addAction(QAction*)" menu quit)
    (qconnect quit "triggered()" (lambda () (qdel tray) (qquit)))
    (x:do-with tray
      ("setContextMenu" menu)
      ("show"))))

(let (size bytes-read data)
  (defun reset (&optional data-only)
    (unless data-only
      (when (and *client* (not (qnull *client*)))
        (qdisconnect *client*)
        (qdel *client*)))
    (setf size nil
          data nil))
  (defun new-client-connection ()
    (reset)
    (setf *client* (! "nextPendingConnection" *server*))
    (qconnect *client* "readyRead()" 'read-from-client)
    (qconnect *client* "disconnected()" (lambda () (qdel *client* :later))))
  (defun read-from-client ()
    (when *function*
      (restart-all-timers) ; see (stop-all-timers)
      (let ((all (! "readAll" *client*)))
        ;; data may arrive splitted in more blocks
        (if size
            (when (< bytes-read size)
              (push all data)
              (incf bytes-read (length all)))
            (let ((head (x:bytes-to-string (subseq all 0 (1+ (position (char-code #\Space) all)))))
                  end)
              (multiple-value-setq (size end)
                (read-from-string head))
              (let ((data* (subseq all end)))
                (setf bytes-read (length data*))
                (if (and (= #.(char-code #\#) (svref data* 0))
                         (= #.(char-code #\q) (svref data* 1)))
                    (setf *sharp-q* t
                          *print-pretty* nil ; for "CL_EQL/" return values
                          eql:*break-on-errors* t
                          data* (subseq data* 2))
                    (setf *sharp-q* nil))
                (push data* data))))
        (when (= size bytes-read)
          (funcall *function* (qfrom-utf8 (apply 'concatenate 'vector (nreverse data))))
          (reset :data-only))))))

(defun current-package-name ()
  (if (eql (find-package :cl-user) *package*)
      "CL-USER"
      (car (sort (list* (package-name *package*) (package-nicknames *package*))
                 (lambda (x y) (< (length x) (length y)))))))

(let ((n 0))
  (defun feed-top-level (str)
    (unless (x:empty-string str)
      (if *prompt*
          (let ((pkg (if (zerop n) "EQL-USER" (current-package-name)))
                (counter (princ-to-string (incf n))))
            (format t "~%~A [~A] ~A~%~A"
                    pkg
                    counter
                    (make-string (- 50 (length counter) (length pkg)) :initial-element #\-)
                    str))
          (format t "~%~A~%~%~A" #.(make-string 50 :initial-element #\_) str))
      (setf si::*read-string* str)
      (start-top-level))))

(defun send-output (type var)
  (let ((str (get-output-stream-string var)))
    (unless (x:empty-string str)
      (when (eql :output type)
        ;; cut prompt
        (x:when-it (position #\> str)
          (setf str (subseq str (1+ x:it)))))
      (send-to-client type str))))

(defun start-top-level ()
  (if *sharp-q*
      (clear)
      (send-output :expression *standard-output-buffer*))
  (setf *debug-io* *gui-debug-io*)
  (clear-gui-debug-buffers)
  (si::%top-level)
  (unless *sharp-q*
    (send-output :error  *error-output-buffer*)
    (send-output :trace  *trace-output-buffer*)
    (send-output :output *standard-output-buffer*))
  (send-to-client :values (format nil "~{#||#~S~}" si::*latest-values*))) ; "#||#": used as separator

(defun clear-gui-debug-buffers ()
  (get-output-stream-string *error-output-buffer*)
  (get-output-stream-string *terminal-out-buffer*))

(defun clear ()
  "To use from a client to clear the output buffer. See also function OUTPUT."
  (get-output-stream-string *standard-output-buffer*))

(defun output ()
  "To use from a client to get the current buffer string immediately (e.g. inside a loop). See also function CLEAR."
  (send-to-client :output (get-output-stream-string *standard-output-buffer*)))

(defun send-file-position (file pos)
  (send-to-client :file-position (format nil "(~S . ~D)" file pos)))

(defun send-to-client (type &optional (str ""))
  (flet ((pause ()
           (qprocess-events)
           (sleep 0.05)))
    (when (and *client*
               (not (qnull *client*)))
      (x:while (not (zerop (! "bytesToWrite" *client*)))
        (pause))
      (if (! "isWritable" *client*)
          (let ((utf8 (qutf8 str)))
            (! "write(QByteArray)" *client* (x:string-to-bytes (format nil "~D ~S ~A" (length utf8) type utf8)))
            (pause))
          (! "critical" "QMessageBox" nil "EQL" (tr "Could not write to client."))))))

(defun handle-query-io ()
  (let ((txt (query-dialog:get-text (get-output-stream-string *terminal-out-buffer*))))
    (unless *sharp-q*
      (send-to-client :activate-editor))
    (send-to-client :values txt)
    (format nil "~A~%" txt)))

(defun handle-debug-io ()
  (stop-all-timers) ; see (restart-all-timers)
  (let ((cmd (debug-dialog:command (list (cons (get-output-stream-string *error-output-buffer*) "red")
                                         (cons (get-output-stream-string *terminal-out-buffer*) "black"))
                                   eql::*code-font*)))
    (unless *sharp-q*
      (send-to-client :activate-editor))
    (send-to-client :values "")
    (format nil "~A~%" (if (x:empty-string cmd) ":r1" cmd))))

(defun set-debugger-hook ()
  (setf *debugger-hook* (lambda (cond x)
                          ;; allow terminal input after console interrupts
                          (when (eql 'si:interactive-interrupt (type-of cond))
                            (setf *debug-io* *terminal-io*)))))

(let (timers)
  (defun stop-all-timers ()
    "Stop all timers (which need to have a parent) on errors, in order to avoid recursive debug loops. The timers will be restarted on next command from client."
    (setf timers nil)
    (dolist (w (cons (qapp) (! "allWidgets" "QApplication")))
      (dolist (o (! "children" w))
        (when (and (= #.(qid "QTimer") (qt-object-id o))
                   (! "isActive" o))
          (! "stop" o)
          (push o timers)))))
  (defun restart-all-timers ()
    (dolist (timer timers)
      (! "start" timer))
    (setf timers nil)))

;;; extensions

(defun widget-selected (widget)
  (send-to-client :widget-selected (princ-to-string widget)))

;;; see '?' in "CL_EQL/"

(defvar *eval-socket* nil)

(defun %ini-remote-eval ()
  (unless *eval-socket*
    (setf *eval-socket* (qnew "QLocalSocket")))
  (when (= |QLocalSocket.UnconnectedState| (! "state" *eval-socket*))
    (x:do-with *eval-socket*
      ("connectToServer" "EQL:eval-server")
      ("waitForConnected"))))

(defun %remote-eval (exp)
  (%ini-remote-eval)
  (when (! "isWritable" *eval-socket*)
    (let ((utf8 (qutf8 (prin1-to-string exp))))
      (x:do-with *eval-socket*
        ("write(QByteArray)" (x:string-to-bytes (format nil "~D ~A" (length utf8) utf8)))
        ("waitForBytesWritten")
        ("waitForReadyRead")))
    ;; data may arrive splitted in more blocks
    (let* ((block-1 (! "readAll" *eval-socket*))
           (pos-space (position (char-code #\Space) block-1)))
      (when pos-space
        (let ((head (x:bytes-to-string (subseq block-1 0 (1+ pos-space))))
               data bytes-read)
          (multiple-value-bind (size end)
              (read-from-string head)
            (push (subseq block-1 end) data)
            (setf bytes-read (length (first data)))
            (x:while (< bytes-read size)
              (qprocess-events)
              (! "waitForReadyRead" *eval-socket*)
              (let ((block (! "readAll" *eval-socket*)))
                (incf bytes-read (length block))
                (push block data)))
            (unless (zerop size)
              (values (read-from-string (qfrom-utf8 (apply 'concatenate 'vector (nreverse data))))))))))))
  
#|
(defun %log (str)
  (with-open-file (out "/tmp/log.txt" :direction :output :if-does-not-exist :create :if-exists :append)
    (format out "### ~A~%" (subseq str 0 (min (length str) 80)))))
|#

(ini)
