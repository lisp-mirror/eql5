;;; copyright (c) Polos Ruetz

(defpackage :eql
  (:use :common-lisp)
  (:export
   #:*break-on-errors*
   #:*byte-array-as-string*
   #:*slime-mode*
   #:*qtpl*
   #:!
   #:define-qt-wrappers
   #:defvar-ui
   #:ensure-qt-object
   #:in-home
   #:make-qimage
   #:new-qt-object
   #:qadd-event-filter
   #:qapp
   #:qapropos
   #:qapropos*
   #+linux
   #:qauto-reload-c++
   #:qcall-default
   #:qclear-event-filters
   #:qconnect
   #:qcopy
   #:qdel
   #:qdelete
   #:qdisconnect
   #:qenums
   #:qeql
   #:qescape
   #:qeval
   #:qexec
   #:qexit
   #:qfind-bound
   #:qfind-bound*
   #:qfind-child
   #:qfind-children
   #:qfrom-utf8
   #:qfun
   #:qfun*
   #:qfun+
   #:qfuns
   #:qget
   #:qgui
   #:qid
   #:qinvoke-method
   #:qinvoke-method*
   #:qinvoke-method+
   #:qinvoke-methods
   #:qlater
   #:qlet
   #:qload
   #:qload-c++
   #:qload-ui
   #:qlocal8bit
   #:qlog
   #:qmessage-box
   #:qmsg
   #:qnew
   #:qnew-instance
   #:qnew*
   #:qnew-instance*
   #:qnull
   #:qnull-object
   #:qobject-names
   #:qok
   #:qoverride
   #:qprocess-events
   #:qproperties
   #:qproperties*
   #:qproperty
   #:qq
   #:qquit
   #:qremove-event-filter
   #:qrequire
   #:qrgb
   #:qrun
   #:qrun-on-ui-thread
   #:qrun*
   #:qrun-on-ui-thread*
   #:qsel
   #:qselect
   #:qsender
   #:qset
   #:qset-color
   #:qset-null
   #:qset-property
   #:qsignal
   #:qsingle-shot
   #:qsleep
   #:qslot
   #:qstatic-meta-object
   #:qsuper-class-name
   #:qt-object
   #:qt-object-id
   #:qt-object-name
   #:qt-object-p
   #:qt-object-pointer
   #:qt-object-unique
   #:qt-object-?
   #:qtranslate
   #:quic
   #:qui-class
   #:qui-names
   #:qutf8
   #:qversion
   #:qvariant-from-value
   #:qvariant-value
   #:the-qt-object
   #:tr))

(defpackage :eql-user
  (:use :common-lisp :eql))

(pushnew :eql  *features*)
(pushnew :eql5 *features*)
