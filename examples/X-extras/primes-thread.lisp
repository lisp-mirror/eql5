;;;
;;; A simple demo for macro QRUN-IN-GUI-THREAD* / QRUN*
;;;
;;; Calculate primes in threads and update QTreeWidget directly from threads.
;;;
;;; -----------------------------------------------------------------------------
;;;
;;; Note:
;;;
;;; Alternatively you could just load the file "eql/slime/thread-safe.fas", and
;;; forget about QRUN* (that is, every EQL function call would be automatically
;;; thread-safe).
;;;
;;; The advantage of using QRUN* manually is that you can group together several
;;; function calls, which will add only one thread switch instead of several ones
;;; (resulting in better performance).
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(defvar *tree-widget* (qnew "QTreeWidget"
                            "alternatingRowColors" t
                            "size" '(500 300)))

(defvar *start-time*)

(defun new-item (column text)
  ;; QRUN* body runs in GUI/main thread (safe because queued and blocking)
  ;; - queued: asynchroneous call in thread of main event loop
  ;; - blocking: for return value(s)
  (qrun* (let ((item (qnew "QTreeWidgetItem")))
           (x:do-with item
             (|setTextAlignment| 0 |Qt.AlignRight|)
             (|setText| 0 (format nil "~:D" (- (get-internal-real-time) *start-time*)))
             (|setText| column text))
           (x:do-with *tree-widget*
             (|addTopLevelItem| item)
             (|resizeColumnToContents| 0)
             (|resizeColumnToContents| column)
             (|scrollToBottom|)))))
  
(defun primep (x)
  ;; slow/dumb
  (or (= 2 x)
      (and (integerp x)
           (> x 2)
           (not (zerop (mod x 2)))
           (loop :for i :from 3 :to (isqrt x) :by 2 :never (zerop (mod x i))))))

(defun primes (column start number)
  (qrun* (|clear| *tree-widget*))
  (setf *start-time* (get-internal-real-time))
  (do ((i start (1+ i))
       (found 0))
      ((= found number) (new-item column "Done"))
    (when (primep i)
      (incf found)
      (new-item column (princ-to-string i)))))

(defun list-all-threads ()
  (format t "~%Threads:~%~%~{  ~S~%~}~%" (reverse (mp:all-processes))))

(defun run (&optional (number-threads 2))
  (x:do-with *tree-widget*
    (|setColumnCount| (1+ number-threads))
    (|setHeaderLabels| (cons "Time"
                             (loop :for i :from 1 :to number-threads
                                   :collect (format nil "Thread ~D" i)))))
  (let ((column 0)) ; needed because of thread race condition
    (dotimes (n number-threads)
      (mp:process-run-function (format nil "Primes ~D" (1+ n))
                               (lambda () (primes (incf column) #.(expt 10 12) 15)))))
  (x:do-with *tree-widget* |show| |raise|)
  (list-all-threads))

(run)
