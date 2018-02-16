;;;
;;; SIMPLE AND SAFE SLIME MODE
;;; ==========================
;;;
;;; Loading this file before loading EQL code guarantees running EQL functions in the GUI thread.
;;;
;;; This means that we don't need a Slime REPL-hook, making it safe to evaluate any EQL code in
;;; Slime, both on the REPL and using 'eval-region'.
;;;
;;; The only drawback is a little more consing for every EQL function call, but allowing to safely
;;; call GUI functions from any ECL thread.
;;;
;;; Note also that wrapping functions in QRUN* is basically the same as a direct call, if called
;;; from the ECL main thread (GUI thread), so it will add almost no overhead.
;;; Since most EQL function calls are driven by the Qt event loop anyway, you won't even notice
;;; the presence of macro QRUN* (performance wise).
;;;

(in-package :eql)

(setf *slime-mode* :thread-safe)

(defmacro wrap-in-qrun* (names &rest arguments)
  (let* ((fun (if (atom names) names (first names)))
         (alias (unless (atom names) (second names)))
         (orig (intern (format nil "%~A-ORIG%" (string-left-trim "%" (symbol-name fun))))))
   `(progn
      (defvar ,orig (symbol-function ',fun)) ; hold a reference to original
      (setf (symbol-function ',orig) ,orig)
      (defun ,fun (,@arguments)              ; re-define function
        (qrun* ,(if arguments
                    `(,orig ,@(remove '&optional (mapcar (lambda (x) (if (atom x) x (first x)))
                                                         arguments)))
                    `(,orig))))
      ,(when alias
        `(setf (symbol-function ',alias) #',fun)))))

(wrap-in-qrun*
  %qnew-instance name arguments)

(wrap-in-qrun*
  %qinvoke-method object cast function arguments)

(wrap-in-qrun*
  (qproperty qget) object name)

(wrap-in-qrun*
  (qset-property qset) object name value)

(wrap-in-qrun*
  %qconnect caller signal receiver slot)

(wrap-in-qrun*
  %qdisconnect caller signal receiver slot)

(wrap-in-qrun*
  qoverride object name function)

(wrap-in-qrun*
  qadd-event-filter object event function)

(wrap-in-qrun*
  %qapropos search class type no-offset)

(wrap-in-qrun*
  qcall-default)

(wrap-in-qrun*
  qclear-event-filters)

(wrap-in-qrun*
  qcopy object)

(wrap-in-qrun*
  %qdelete object later)

(wrap-in-qrun*
  %qexec milliseconds)

(wrap-in-qrun*
  qexit)

(wrap-in-qrun*
  qgui &optional process-events)

(wrap-in-qrun*
  %qload-c++ library-name unload)

(wrap-in-qrun*
  qload-ui file-name)

(wrap-in-qrun*
  (qmessage-box qmsg) x)

(wrap-in-qrun*
  qprocess-events)

(wrap-in-qrun*
  qproperties object &optional (depth 1))

(wrap-in-qrun*
  (qquit qq) &optional (exit-status 0) (kill-all-threads t))

(wrap-in-qrun*
  qremove-event-filter handle)

(wrap-in-qrun*
  %qrequire name quiet)

(wrap-in-qrun*
  (qselect qsel) &optional on-selected)

(wrap-in-qrun*
  qset-null object &optional (test t))

(wrap-in-qrun*
  %qsingle-shot milliseconds function)

