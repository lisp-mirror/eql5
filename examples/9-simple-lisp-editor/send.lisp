;;;
;;; Send EQL code to "local-server": a trivial one-way use of EQL from any CL
;;;
;;;
;;; Run: (after building the executable in "send/")
;;;
;;;   eql local-server.lisp
;;;   ecl -load send.lisp / clisp -i send.lisp / sbcl --load send.lisp
;;;
;;;
;;; Examples: (note #!)
;;;
;;;   #q (qmsg (package-name *package*))
;;;
;;;   #q (qmsg #!(package-name *package*))
;;;
;;;   (let ((a 1)
;;;         (b 2))
;;;     #q (qmsg (list #!a #!b)))
;;;
;;;   (defun msg (x)
;;;     #q (qmsg #!x))
;;;
;;;   #q (load "../2-clock.lisp")
;;;   #q (! "showMaximized" clock:*clock*)

(set-dispatch-macro-character #\# #\q (lambda (stream c n) (%read-q stream)))

(defmacro while-it (exp &body body)
  `(do ((it))
     ((not (setf it ,exp)))
     ,@body))

(defun %read-q (in)
  (let ((string-q (with-output-to-string (out)
                    (let ((ex #\Space)
                          parens in-string)
                      (loop
                        (let ((ch (read-char in)))
                          (write-char ch out)
                          (unless (char= #\\ ex)
                            (if (char=  #\" ch)
                                (setf in-string (not in-string))
                                (unless in-string
                                  (case ch
                                    (#\( (if parens (incf parens) (setf parens 1)))
                                    (#\) (decf parens)))
                                  (when (and parens (zerop parens))
                                    (return)))))
                          (setf ex ch))))))
        list-q)
    (while-it (search "#!" string-q)
      (multiple-value-bind (exp end)
          (read-from-string (subseq string-q (+ it 2)))
        (unless (zerop it)
          (push (subseq string-q 0 it) list-q))
        (push (list 'prin1-to-string exp) list-q)
        (setf string-q (subseq string-q (+ it 2 end)))))
    (push string-q list-q)
    `(send-q (list ,@(reverse list-q)))))

(defun send-q (data)
  (#+ecl                 ext:run-program
   #+clisp                   run-program
   #+sbcl             sb-ext:run-program
   #+darwin                  "./send/send.app/Contents/MacOS/send"
   #+(and unix (not darwin)) "./send/send"
   #+win32                   "send/send.exe"
   #+clisp                   :arguments
   (list (etypecase data
           (string
             data)
           (list
             (format nil "~{~A~^ ~}" (mapcar (lambda (x) (string-trim " " x)) data)))))
   #+ecl :error #+ecl nil))

