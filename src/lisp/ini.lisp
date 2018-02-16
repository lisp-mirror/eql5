;;; copyright (c) Polos Ruetz

(ffi:clines "#include <stdlib.h>")

(in-package :eql)

(defvar *break-on-errors*      nil "Unless NIL, causes a simple (BREAK) on any EQL error.")
(defvar *byte-array-as-string* nil "Indicates to print a byte array as string, not as vector. See e.g. QPROPERTIES.")
(defvar *slime-mode*           nil)
(defvar *qtpl*                 nil "To set in ~/.eclrc only; the same as command line option -qtpl.")

(defmacro alias (s1 s2)
  `(setf (symbol-function ',s1) (function ,s2)))

(defmacro qlet ((&rest pairs) &body body)
  "args: (((variable-1 expression-1) (variable-2 expression-2) ...) &body body)
   Similar to <code>let*</code> (and to local C++ variables).<br><br>Creates temporary Qt objects, deleting them at the end of the <code>qlet</code> body.<br>If <code>expression</code> is a string, it will be substituted with <code>(qnew expression)</code>, optionally including constructor arguments.<br><br>This macro is convenient for e.g. local <code>QPainter</code> objects, in order to guarantee C++ destructors being called after leaving a local scope.
       (qlet ((painter \"QPainter\"))
       &nbsp;&nbsp;...)
       
       (qlet ((reg-exp \"QRegExp(QString)\" \"^\\\\S+$\"))
       &nbsp;&nbsp;...)"
  (let ((vars (mapcar (lambda (x) (if (consp x) (first x) x)) pairs))
        (exps (mapcar (lambda (x)
                        (if (consp x)
                            (let ((exp (rest x)))
                              (if (stringp (first exp))
                                  (apply 'list 'qnew exp)
                                  (first exp)))
                            nil))
                      pairs)))
    `(let* ,(mapcar 'list vars exps)
       (unwind-protect
            (progn
              ,@body)
         ,(if (second vars)
              `(progn . ,(mapcar (lambda (var) (list 'qdelete var))
                                 (nreverse vars)))
              `(qdelete ,(first vars)))))))

(defmacro qinvoke-methods (object &rest functions)
  "args: (object &rest functions)
   alias: qfuns
   A simple syntax for nested <code>qfun</code> calls.
       (qfuns object \"funA\" \"funB\" \"funC\")      ; expands to: (qfun (qfun (qfun object \"funA\") \"funB\") \"funC\")
       (qfuns object (\"funA\" 1) (\"funB\" a b c)) ; expands to: (qfun (qfun object \"funA\" 1) \"funB\" a b c)
       (qfuns \"QApplication\" \"font\" \"family\")
       (qfuns *table-view* \"model\" (\"index\" 0 2) \"data\" \"toString\")
       
       ;; alternatively:
       
       (! (\"funC\" \"funB\" \"funA\" object))
       (! ((\"funB\" a b c) (\"funA\" 1) object))
       (! (\"family\" \"font\" \"QApplication\"))
       (! (\"toString\" \"data\" (\"index\" 0 2) \"model\" *table-view*))
       
       ;; using wrapper functions, the above reads:
       
       (|funC| (|funB| (|funA| object)))
       (|funB| (|funA| object 1) a b c)
       (|family| (|font.QApplication|))
       (|toString| (|data| (|index| (|model| *table-view*) 0 2)))"
  (let (form)
    (dolist (fun functions)
      (setf form (append (list 'qfun (or form object)) (x:ensure-list fun))))
    form))

(defmacro qfuns (object &rest functions) ; alias
  `(qinvoke-methods ,object ,@functions))

(defmacro ! (fun/s &rest args)
  (if args
      (let (call)
        (when (consp (first args))
          (cond ((and (stringp (caar args))
                      (char= #\Q (char (caar args) 0)))
                 (setf call :cast))
                ((eql :qt (caar args))
                 (setf call :qt))))
        (case call
          (:cast
           `(qfun* ,(cadar args) ,(caar args) ,fun/s ,@(rest args)))
          (:qt
           `(qfun+ ,(cadar args) ,fun/s ,@(rest args)))
          (t
           `(qfun ,(first args) ,fun/s ,@(rest args)))))
      `(qfuns ,@(reverse fun/s))))


(defmacro x:do-with (with &body body) ; re-definition from package :X because of EQL:QFUN
  (when (atom with)
    (setf with (list 'qfun with)))
  `(progn
     ,@(mapcar (lambda (line)
                 ;; needed for Qt wrappers (see "all-wrappers.lisp")
                 (if (and (eql 'qfun (first line))
                          (symbolp (third line)))
                     (cons (third line) (cons (second line) (nthcdr 3 line)))
                     line))
               (mapcar (lambda (line)
                         (append with (if (or (atom line)
                                              (eql 'quote (first line)))
                                          (list line)
                                          line)))
                       body))))

(defmacro defvar-ui (main &rest names)
  "args: (main-widget &rest variables)
   This macro simplifies the definition of UI variables:
       (defvar-ui *main*
       &nbsp;&nbsp;*label*
       &nbsp;&nbsp;*line-edit*
       &nbsp;&nbsp;...)
       
       ;; the above will expand to:
       
       (progn
       &nbsp;&nbsp;(defvar *label*     (qfind-child *main* \"label\"))
       &nbsp;&nbsp;(defvar *line-edit* (qfind-child *main* \"line_edit\"))
       &nbsp;&nbsp;...)"
  `(progn
     ,@(mapcar (lambda (name)
                 `(defvar ,name (qfind-child ,main ,(string-downcase (substitute #\_ #\- (string-trim "*" (symbol-name name)))))))
               names)))

(defun %reference-name ()
  (format nil "%~A%" (gensym)))

(defmacro qsingle-shot (milliseconds function)
  ;; check for LAMBDA, #'LAMBDA
  (if (find (first function) '(lambda function))
      ;; hold a reference (will be called later from Qt event loop)
      `(%qsingle-shot ,milliseconds (setf (symbol-function (intern ,(%reference-name))) ; lambda
                                          ,function))
      `(%qsingle-shot ,milliseconds ,function)))                                        ; 'foo

(defmacro qlater (function)
  "args: (function)
   Convenience macro: a <code>qsingle-shot</code> with a <code>0</code> timeout.<br>This will call <code>function</code> as soon as the Qt event loop is idle.
       (qlater 'delayed-ini)"
  `(qsingle-shot 0 ,function))

(defun %ensure-persistent-function (fun)
  (typecase fun
    (symbol   ; 'foo
     fun)
    (function ; lambda
     ;; hold a reference (will be called later from Qt event loop)
     (setf (symbol-function (intern (%reference-name)))
           fun))))

(defun %make-vector ()
  (make-array 0 :adjustable t :fill-pointer t))

(defun %break (&rest args)
  (apply 'break args))

(defun %windows-version ()
  (qfun "QSysInfo" "windowsVersion"))

(let ((eql5-home #.(let ((path (namestring *default-pathname-defaults*))) ; hard-code EQL5 directory
                     (subseq path 0 (- (length path) 4)))))               ; cut "src/"
  (defun set-home (path)
    (setf eql5-home path))
  (defun in-home (&rest files)
    (apply 'concatenate 'string eql5-home files)))

(defun qsignal (name)
  "args: (name)
   Needed in functions which expect a <code>const char*</code> Qt signal (not needed in <code>qconnect</code>)."  
  (concatenate 'string "2" name))

(defun qslot (name)
  "args: (name)
   Needed in functions which expect a <code>const char*</code> Qt slot (not needed in <code>qconnect</code>)."  
  (concatenate 'string "1" name))

(defun qenums (class-name &optional enum-name)
  (%qenums class-name enum-name))

(defun qfind-bound (&optional class-name)
  "args: (&optional class-name)
   Finds all symbols bound to Qt objects, returning both the Qt class names and the respective Lisp variables.<br>Optionally finds the occurrencies of the passed Qt class name only.
       (qfind-bound \"QLineEdit\")"
  (let ((found (qfind-bound* class-name)))
    (when found
      (let ((tab-stop (1+ (apply 'max (mapcar (lambda (x) (length (car x))) found)))))
        (dolist (el found)
          (princ (format nil "~%~A~VT~(~S~)" ; "~VT" doesn't work on all terminals
                         (car el) tab-stop (cdr el))))))))

(defun qfind-bound* (&optional class-name)
  "args: (&optional class-name)
   Like <code>qfind-bound</code>, but returning the results as list of conses."
  (if (and class-name
           (not (qid class-name)))
      (%error-msg "QFIND-BOUND" (list class-name))
      (let (qt-objects)
        (do-all-symbols (s)
          (when (and (not (find (symbol-package s) #.'(list (find-package :si) (find-package :ext))))
                     (boundp s)
                     (ignore-errors (ensure-qt-object (symbol-value s)))
                     (or (not class-name)
                         (string= class-name (qt-object-name (symbol-value s)))))
            (pushnew s qt-objects)))
        (stable-sort (sort (mapcar (lambda (s) (cons (qt-object-name (symbol-value s)) s))
                                   qt-objects)
                           'string< :key 'cdr)
                     'string< :key 'car))))

(defun qproperties (object &optional (depth 1) qml)
  "args: (object &optional (depth 1))
   Prints all current properties of <code>object</code>, searching both all Qt properties and all Qt methods which don't require arguments (marked with '<b>*</b>').<br>Optionally pass a <code>depth</code> indicating how many super-classes to include. Pass <code>T</code> to include all super-classes.
       (qproperties (|font.QApplication|))
       (qproperties (qnew \"QVariant(QString)\" \"42\"))
       (qproperties *tool-button* 2)                 ; depth 2: both QToolButton and QAbstractButton"
  (let ((object* (ensure-qt-object object)))
    (when (qt-object-p object*)
      (labels ((null-qt-object (obj)
                 (qt-object 0 0 (qt-object-id obj)))
               (readable (obj fun ret)
                 (cond ((and *byte-array-as-string*
                             (string= "QByteArray" ret))
                        (x:bytes-to-string obj))
                       ((string= "dynamicPropertyNames" fun)
                        (mapcar 'x:bytes-to-string obj))
                       ((qt-object-p obj)
                        (let ((name (qt-object-name obj)))
                          (cond ((search name "QColor QLocale")
                                 (! "name" obj))
                                ((search name "QDate QTime QDateTime QFont QUrl QKeySequence")
                                 (! "toString" obj))
                                ((search name "QPixmap QImage QPicture QIcon QBitmap QDate QDateTime QTime QTextCursor QVariant QMargins QSqlQuery QWebElement")
                                 (if (and (not (zerop (qt-object-pointer obj)))
                                          (! "isNull" obj))
                                     (null-qt-object obj)
                                     obj))
                                ((search name "QModelIndex")
                                 (if (! "isValid" obj)
                                     obj
                                     (null-qt-object obj)))
                                ((search name "QRegExp")
                                 (if (! "isEmpty" obj)
                                     (null-qt-object obj)
                                     obj))
                                (t
                                 obj))))
                       (t
                        obj))))
        (let ((name (qt-object-name object*))
              documentations functions properties)
          (x:while (and name (not (eql 0 depth)))
            (push (first (qapropos* nil (if qml object* name) nil qml))
                  documentations)
            (setf name (qsuper-class-name name))
            (when (numberp depth)
              (decf depth)))
          (dolist (docu documentations)
            (dolist (type (if qml '("Properties:") '("Properties:" "Methods:")))
              (dolist (fun (rest (find type (rest docu) :key 'first :test 'string=)))
                (when (and (not (x:starts-with "void " fun))
                           (not (x:starts-with "constructor " fun))
                           (not (x:ends-with " static" fun))
                           (or (not (find #\( fun))
                               (search "()" fun))
                           ;; state changing or copying functions
                           (notany (lambda (x) (search x fun))
                                   '(" clone" " copy" " disconnect" " take" " create")))
                  (push fun functions)
                  (when (char= #\P (char type 0)) ; "Properties:"
                    (push (x:string-substitute "" " const" (subseq fun (1+ (position #\Space fun))))
                          properties))))))
          (when functions
            (setf functions (mapcar (lambda (fun)
                                      (setf fun (x:string-substitute "" "const " fun)
                                            fun (x:string-substitute "" " const" fun))
                                      (let* ((p2 (position #\( fun))
                                             (p1 (position #\Space fun :from-end t :end p2)))
                                        (cons (subseq fun (1+ p1) p2) ; function name
                                              (subseq fun 0 p1))))    ; return type
                                    functions))
            (setf functions (sort (remove-duplicates functions :test 'string= :key 'first)
                                  'string< :key 'first))
            (let ((tab-stop (+ 2 (apply 'max (mapcar (lambda (x) (length (first x))) functions)))))
              (dolist (fun-ret functions)
                (let* ((fun (car fun-ret))
                       (ret (cdr fun-ret))
                       (prop-p (find fun properties :test 'string=)))
                  (princ (format nil "~%~A~C~VT~S" ; "~VT" doesn't work on all terminals
                                 fun
                                 (if prop-p #\Space #\*)
                                 tab-stop
                                 (readable (if prop-p (qget object* fun) (! fun object*))
                                           fun
                                           ret))))))
            (terpri)
            (terpri)
            (values)))))))

(defun qproperties* (object)
  "args: (object)
   Similar to <code>qproperties</code>, but listing all properties (including user defined ones) of the passed <code>object</code> instance.<br>This is only useful for e.g. <code>QQuickItem</code> derived classes, which don't have a corresponding C++ class, in order to list all QML properties.
       (qproperties* (qml:find-quick-item \"myItem\"))"
  (qproperties object 1 t))

(defun ignore-io-streams ()
  (setf *standard-output* (make-broadcast-stream)
        *trace-output*    *standard-output*
        *error-output*    *standard-output*
        *terminal-io*     (make-two-way-stream (make-string-input-stream "")
                                               *standard-output*)))

;;; top-level / slime-mode processing Qt events (command line options "-qtpl" and "-slime")

(defvar *slime-hook-file* nil)

(defun load-slime-auxiliary-file ()
  (if (eql :repl-hook *slime-mode*) ; to set in "eql-start-swank.lisp"
      (if (and (find-package :swank)
               (find-symbol "*SLIME-REPL-EVAL-HOOKS*" :swank))
          (load (or *slime-hook-file* (in-home "slime/repl-hook"))) ; Slime mode "REPL hook"
          (qsingle-shot 500 'load-slime-auxiliary-file))            ; we need to wait for Emacs "slime-connect"
      (load (x:check-recompile (in-home "lib/thread-safe")))))      ; Slime mode "thread safe" (default)

#+threads
(defun %read-thread ()
  (si::tpl-prompt)
  (unless (find-package :ecl-readline)
    (princ "> "))
  (let ((form (si::%tpl-read)))
    (qrun-in-gui-thread (lambda () (eval-top-level form)) nil))
  (values))

(defun start-read-thread ()
  #+threads
  (mp:process-run-function :read '%read-thread)
  #-threads
  (error "ECL threads not enabled, can't process Qt events."))

(defun eval-top-level (form)
  ;; needed to avoid unrecoverable BREAK on errors during READ (command line option "-qtpl")
  (when (stringp form)
    (handler-case (setf form (read-from-string form))
      (error (err)
        (princ err)))
    (si::feed-top-level form))
  (finish-output)
  (start-read-thread))

(defun exec-with-simple-restart ()
  (if *slime-mode*
      (progn
        (load-slime-auxiliary-file)
        (loop
          (with-simple-restart (restart-qt-events "Last resort only - prefer \"Return to SLIME's top level\"")
            (qexec))))
      (exec-with-simple-restart-dialog)))

(let (loaded)
  (defun exec-with-simple-restart-dialog ()
    (when *qtpl*
      ;; command line option "-qtpl" only, see "restart-dialog.lisp"
      (unless loaded
        (setf loaded t)
        (load (in-home "lib/restart-dialog")))
      (funcall (find-symbol "EXEC-WITH-SIMPLE-RESTART" :restart-dialog)))))

(defmacro qeval (&rest forms)
  ;; this macro will be redefined in Slime mode (see "../../slime/repl-hook.lisp")
  "args: (&rest forms)
   Slime mode <code>:repl-hook</code> only (not needed in default Slime mode): evaluate forms in GUI thread. Defaults to a simple <code>progn</code> outside of Slime."
  (if (second forms)
      (cons 'progn forms)
      (first forms)))

;;; qt-object

(defstruct (qt-object (:constructor qt-object (pointer unique id &optional finalize)))
  (pointer  0   :type integer)
  (unique   0   :type integer)
  (id       0   :type fixnum)
  (finalize nil :type boolean))

(defun new-qt-object (pointer unique id finalize)
  (let ((obj (qt-object pointer unique id finalize)))
    (when finalize
      (ext:set-finalizer obj 'qdelete))
    obj))

(defmethod print-object ((object qt-object) s)
  (print-unreadable-object (object s :type nil :identity nil)
    (let* ((unique (qt-object-unique object))
           (pointer (qt-object-pointer object))
           (nullp (zerop pointer)))
      (format s "~A~A ~A~A~A"
              (qt-object-name object)
              (if (and (plusp (qt-object-id object))
                       (plusp pointer))
                  (format nil " ~S" (qfun object "objectName"))
                  "")
              (if nullp
                  "NULL"
                  (format nil "0x~X" pointer))
              (if (or (zerop unique) nullp)
                  ""
                  (format nil " [~D]" unique))
              (if (qt-object-finalize object)
                  " GC"
                  "")))))

(defmacro tr (source &optional context (plural-number -1))
  "args: (source &optional context plural-number)
   Macro expanding to <code>qtranslate</code>, which calls <code>QCoreApplication::translate()</code>.<br>Both <code>source</code> and <code>context</code> can be Lisp forms evaluating to constant strings (at compile time).<br>The <code>context</code> argument defaults to the Lisp file name. For the <code>plural-number</code>, see Qt Assistant."
  ;; see compiler-macro in "my_app/tr.lisp"
  (let ((source* (ignore-errors (eval source)))
        (context* (ignore-errors (eval context))))
    `(eql:qtranslate ,(if (stringp context*)
                          context*
                          (if *compile-file-truename* (file-namestring *compile-file-truename*) ""))
                     ,source*
                     ,plural-number)))

(defun qset-null (obj &optional (test t))
  "args: (object)
   Sets the Qt object pointer to <code>0</code>. This function is called automatically after <code>qdel</code>."
   (if test ; after e.g. QDELETE, we don't need to test (faster)
       (let ((obj* (ensure-qt-object obj)))
         (when (qt-object-p obj*)
           (setf (qt-object-pointer obj*) 0)))
       (setf (qt-object-pointer obj) 0)))

(defun qgui (&optional ev)
  "args: (&optional process-events)
   Launches the EQL convenience GUI.<br>If you don't have an interactive environment, you can pass <code>T</code> to run a pseudo Qt event loop. A better option is to start the tool like so:<br><code>eql5 -qgui</code>, in order to run the Qt event loop natively."
  (let (found)
    (when (find-package :gui)
      (let ((gui (find-symbol "*GUI*" :gui)))
        (when gui
          (setf found t)
          (setf gui (symbol-value gui))
          (qfun gui "show")
          (qfun gui "raise"))))
    (unless found
      (in-package :eql-user)
      (load (in-home "lib/gui"))))
  (when ev
    (loop
      (qprocess-events)
      (sleep 0.05))))

(defun qeql (obj1 obj2)
  "args: (object1 object2)
   Returns <code>T</code> for same instances of a Qt class. Comparing <code>QVariant</code> values will work, too.<br>To test for same Qt classes only, do:
       (= (qt-object-id object1) (qt-object-id object2))"
  (let ((obj1* (ensure-qt-object obj1))
        (obj2* (ensure-qt-object obj2)))
    (when (and (qt-object-p obj1*)
               (qt-object-p obj2*))
      (let ((v-id (qid "QVariant")))
        (if (= v-id (qt-object-id obj1*) (qt-object-id obj2*))
            (eql::%qvariant-equal obj1* obj2*)
            (let ((u1 (qt-object-unique obj1*))
                  (u2 (qt-object-unique obj2*)))
              (or (and (not (zerop u1))
                       (= u1 u2))
                  (and (= (qt-object-id obj1*)
                          (qt-object-id obj2*))
                       (= (qt-object-pointer obj1*)
                          (qt-object-pointer obj2*))))))))))

(defun qnull-object (obj)
  "args: (object)
   alias: qnull
   Checks for a <code>0</code> Qt object pointer."
  (let ((obj* (ensure-qt-object obj)))
    (when (qt-object-p obj*)
      (zerop (qt-object-pointer obj*)))))

(defun qdelete (obj &optional later)
  (%qdelete obj later))

(defun %string-or-nil (x)
  (typecase x
    (string
      x)
    (symbol
      (unless (member x '(t nil))
        (symbol-name x)))))

(defun qapropos (&optional name class type offset)
  (let ((name* (%string-or-nil name)))
    (when (and (not name*)
               (not class)
               (not (y-or-n-p "Print documentation of all Qt classes?")))
      (return-from qapropos))
    (let ((main (%qapropos name* class type offset)))
      (dolist (sub1 main)
        (format t "~%~%~A~%" (first sub1))
        (dolist (sub2 (rest sub1))
          (format t "~%  ~A~%~%" (first sub2))
          (dolist (sub3 (rest sub2))
            (let* ((par (position #\( sub3))
                   (x (if par
                          (position #\Space sub3 :end par :from-end t)
                          (position #\Space sub3))))
              (format t "    ~A~A~%" (make-string (max 0 (- 15 x))) sub3)))))))
  (terpri)
  nil)

(defun qapropos* (&optional name class type offset)
  "args: (&optional search-string class-name)
   Similar to <code>qapropos</code>, returning the results as nested list."
  (%qapropos (%string-or-nil name) class type offset))

(defun qnew-instance (name &rest arguments)
  (%qnew-instance name arguments))

(defun qnew-instance* (name &rest arguments)
  "args: (class-name &rest arguments/properties)
   alias: qnew*
   Convenience function for the REPL.<br>Same as <code>qnew</code>, but showing the object immediately (if of type <code>QWidget</code>)."
  (let ((obj (%qnew-instance name arguments)))
    (when (and obj
               (plusp (qt-object-id obj))
               (! "isWidgetType" obj))
      (! "show" obj))
    obj))

(defun qinvoke-method (object function-name &rest arguments)
  (%qinvoke-method object nil function-name arguments))

(defun qinvoke-method* (object cast-class-name function-name &rest arguments)
  "args: (object cast-class-name function-name &rest arguments)
   alias: qfun*
   Similar to <code>qinvoke-method</code>, additionally passing a class name, enforcing a cast to that class.<br>Note that this cast is not type safe (the same as a C cast, so dirty hacks are possible).<br><br>Note: using the (recommended) wrapper functions (see <code>qfun</code>), casts are applied automatically where needed.
       (qfun* graphics-text-item \"QGraphicsItem\" \"setPos\" (list x y)) ; multiple inheritance problem
       (qfun* event \"QKeyEvent\" \"key\")                                ; not needed with QADD-EVENT-FILTER
       
       ;; alternatively:
       
       (! \"setPos\" (\"QGraphicsItem\" graphics-text-item) (list x y))
       (! \"key\" (\"QKeyEvent\" event))
       
       ;; better/recommended:
       
       (|setPos| graphics-text-item (list x y))"
  (%qinvoke-method object cast-class-name function-name arguments))

(defun qinvoke-method+ (object function-name &rest arguments)
  "args: (object function-name &rest arguments)
   alias: qfun+
   Use this variant to call user defined functions (declared <code>Q_INVOKABLE</code>), slots, signals from external C++ classes.<br><br>In order to call ordinary functions, slots, signals from external C++ classes, just use the ordinary <code>qfun</code>.
       (qfun+ *qt-main* \"foo\") ; see Qt_EQL
       
       ;; alternatively:
       
       (! \"foo\" (:qt *qt-main*))"
   (%qinvoke-method object :qt function-name arguments))

(defun qconnect (from signal to &optional slot)
  (%qconnect from signal to slot))

(defun qdisconnect (from &optional signal to slot)
  (%qdisconnect from signal to slot))

(defun qobject-names (&optional type)
  (%qobject-names type))

(defun qui-class (file &optional var)
  (%qui-class file var))

(defun qmessage-box (x)
  "args: (x)
   alias: qmsg
   Convenience function: a simple message box, converting <code>x</code> to a string if necessary.<br>Returns its argument (just like <code>print</code>)."
  #+android
  (! "information" "QMessageBox" nil
     "EQL5"
     (if (stringp x) x (prin1-to-string x)))
  #-android
  (qlet ((msg "QMessageBox"
              "icon" |QMessageBox.Information|
              "text" (if (stringp x) x (prin1-to-string x))))
    (! "setWindowTitle" msg "EQL5")
    (dolist (fun '("show" "raise" "exec")) ; "raise" needed in some situations (e.g. OSX)
      (qfun msg fun)))
  x)

(defun qset-color (widget role color)
  "args: (widget color-role color)
   Convenience function for simple color settings (avoiding <code>QPalette</code> boilerplate).<br>Use <code>QPalette</code> directly for anything more involved.
       (qset-color widget |QPalette.Window| \"white\")"
  (qlet ((pal (qget widget "palette"))) ; QLET: safer than GC for very frequent calls
    (qfun pal "setColor(QPalette::ColorRole,QColor)" role color)
    (qset widget "palette" pal))
  color)

(defun qexec (&optional ms)
  (%qexec ms))

(defun qsleep (seconds)
  "args: (seconds)
   Similar to <code>sleep</code>, but continuing to process Qt events."
  (%qexec (floor (* 1000 seconds)))
  nil)

(defun qfind-children (object &optional object-name class-name)
  (%qfind-children object object-name class-name))

(let (loaded)
  (defun qselect (&optional on-selected)
    "args: (&optional on-selected)
     alias: qsel
     Allows to select (by clicking) any (child) widget.<br>The variable <code>qsel:*q*</code> is set to the latest selected widget.<br><br>Optionally pass a function to be called upon selecting, with the selected widget as argument.
         (qsel (lambda (widget) (qmsg widget)))"
    (unless loaded
      (setf loaded t)
      (load (in-home "lib/qselect")))
    (%qselect on-selected)))

(let (loaded)
  (defun quic (&optional (ui.h "ui.h") (ui.lisp "ui.lisp") (ui-package :ui) &rest properties)
    "args: (&optional (file.h \"ui.h\") (file.lisp \"ui.lisp\") (ui-package :ui))
     Takes C++ code from a file generated by the <code>uic</code> user interface compiler, and generates the corresponding EQL code.<br>See also command line option <code>-quic</code>."
    (unless loaded
      (setf loaded t)
      (load (in-home "lib/quic")))
    (funcall (intern "RUN" :quic) ui.h ui.lisp ui-package properties)))

(defun qrequire (module &optional quiet)
  (%qrequire module quiet))

(defun qload-c++ (library-name &optional unload)
  (%qload-c++ library-name unload))

(defun define-qt-wrappers (qt-library &rest what)
  "args: (qt-library &rest what)
   Defines Lisp methods for all Qt methods/signals/slots of given library.<br>(See example <code>Qt_EQL/trafficlight/</code>).
       (define-qt-wrappers *c++*)        ; generate wrappers (see \"Qt_EQL/\")
       (define-qt-wrappers *c++* :slots) ; Qt slots only (any of :methods :slots :signals)
       
       (my-qt-function *c++* x y) ; instead of: (! \"myQtFunction\" (:qt *c++*) x y)"
  (let ((all-functions (cdar (qapropos* nil (ensure-qt-object qt-library)))))
    (unless what
      (setf what '(:methods :slots :signals)))
    (dolist (functions (loop :for el :in what :collect
                             (concatenate 'string (string-capitalize el) ":")))
      (dolist (fun (rest (find functions all-functions
                               :key 'first :test 'string=)))
        (let* ((p (position #\( fun))
               (qt-name (subseq fun (1+ (position #\Space fun :from-end t :end p)) p))
               (lisp-name (intern (with-output-to-string (s)
                                    (x:do-string (ch qt-name)
                                      (if (upper-case-p ch)
                                          (format s "-~C" ch)
                                          (write-char (char-upcase ch) s)))))))
          ;; no way to avoid EVAL here (excluding non-portable hacks)
          (eval `(defgeneric ,lisp-name (object &rest arguments)))
          (eval `(defmethod ,lisp-name ((object qt-object) &rest arguments)
                   (%qinvoke-method object :qt ,qt-name arguments))))))))

#+linux
(defun %ini-auto-reload (library-name watcher on-file-change)
  (multiple-value-bind (object file-name)
      (qload-c++ library-name)
    (when file-name
      (qfun watcher "addPath" file-name)
      (qconnect watcher "fileChanged(QString)" on-file-change))
    object))

#+linux
(defmacro qauto-reload-c++ (variable library-name)
  "args: (variable library-name)
   <b>Linux only.</b><br><br>Extends <code>qload-c++</code> (see <code>Qt_EQL/</code>).<br><br>Defines a global variable (see return value of <code>qload-c++</code>), which will be updated on every change of the C++ plugin (e.g. after recompiling, the plugin will automatically be reloaded, and the <code>variable</code> will be set to its new value).<br><br>If you want to be notified on every change of the plugin, set <code>*&lt;variable&gt;-reloaded*</code>. It will then be called after reloading, passing both the variable name and the plugin name.<br>See <code>qload-c++</code> for an example how to call plugin functions.
       (qauto-reload-c++ *c++* \"eql_cpp\")
       
       (setf *c++-reloaded* (lambda (var lib) (qapropos nil (symbol-value var)))) ; optional: set a notifier"
  (let* ((name     (string-trim "*" (symbol-name variable)))
         (reloaded (intern (format nil "*~A-RELOADED*" name)))
         (watcher  (intern (format nil "*~A-WATCHER*" name))))
    `(progn
       (defvar ,watcher  (qnew "QFileSystemWatcher"))
       (defvar ,variable (%ini-auto-reload ,library-name ,watcher 
                                           (lambda (name)
                                             (let ((file-name (first (qfun ,watcher "files"))))
                                               (qfun ,watcher "removePath" file-name)
                                               (setf ,variable (qload-c++ ,library-name))
                                               (qfun ,watcher "addPath" file-name))
                                             (when ,reloaded
                                               (funcall ,reloaded ',variable ,library-name)))))
       (defvar ,reloaded nil))))

(defun qrun-in-gui-thread (function &optional (blocking t))
  (%qrun-in-gui-thread function blocking))

#+threads
(defvar *gui-thread* mp:*current-process*)

(defmacro qrun-in-gui-thread* (&body body)
  "args: (&body body)
   alias: qrun*
   Convenience macro for <code>qrun</code>, wrapping <code>body</code> in a closure (passing arguments, return values).
       (qrun* (|setValue| ui:*progress-bar* value))
       
       (let ((item (qrun* (qnew \"QTableWidgetItem\")))) ; return value(s)
       &nbsp;&nbsp;...)"
  #+threads
  (let ((values (gensym)))
    `(if (eql *gui-thread* mp:*current-process*)
         ,(if (second body)
              (cons 'progn body)
              (first body))
         (let (,values)
           (qrun (lambda ()
                   (setf ,values (multiple-value-list ,(if (second body)
                                                           (cons 'progn body)
                                                           (first body))))))
           (values-list ,values))))
  #-threads
  (if (second body)
      (cons 'progn body)
      (first body)))

(defmacro qrun* (&body body) ; alias
  `(qrun-in-gui-thread* ,@body))

(defun qload (file-name)
  "args: (file-name)
   Convenience function for Slime (or when loading EQL files from an ECL thread).<br>Loading files that create many Qt objects can be slow on the Slime REPL (many thread switches).<br>This function reduces all thread switches (GUI related) to a single one."
  (qrun* (load file-name)))

(defun qquit (&optional (exit-status 0) (kill-all-threads t))
  "args: (&optional (exit-status 0) (kill-all-threads t))
   alias: qq
   Terminates EQL. Use this function to quit gracefully, <b>not</b> <code>ext:quit</code>.<br><br>Negative values for <code>exit-status</code> will call <code>abort()</code> instead of normal program exit (e.g. to prevent infinite error message loops in some nasty cases)."
  (declare (ignore kill-all-threads)) ; only here to be equivalent to EXT:QUIT 
  (assert (typep exit-status 'fixnum))
  (qfun (qapp) "aboutToQuit")
  (qfun (qapp) "quit")
  (ffi:c-inline nil nil :void "cl_shutdown();" :one-liner t :side-effects t)
  (if (minusp exit-status)
      (ffi:c-inline nil nil :void "abort();" :one-liner t :side-effects t)
      (ffi:c-inline (exit-status) (:int) :void "exit(#0);" :one-liner t :side-effects t)))

;; simplify using CLOS; see example "X-extras/CLOS-encapsulation.lisp"

(defgeneric the-qt-object (object)
  (:documentation "Return the QT-OBJECT to be used whenever OBJECT is used as argument to any EQL function."))

(defun ensure-qt-object (object &optional quiet)
  "args: (object)
   Returns the <code>qt-object</code> of the given class/struct (see method <code>the-qt-object</code> in example <code>X-extras/CLOS-encapsulation.lisp</code>).<br>This function is used internally whenever a <code>qt-object</code> argument is expected."
  (cond ((null object) ; e.g. passing NIL as parent widget: (qnew "QWidget(QWidget*)" nil)
         nil)
        ((qt-object-p object)
         object)
        ((let ((object* (if quiet
                            (ignore-errors (the-qt-object object))
                            (the-qt-object object))))
           (if (qt-object-p object*)
               object*
               (unless quiet
                 (error "THE-QT-OBJECT returned ~S for class ~A, which is not of required type QT-OBJECT." object* object)))))))

(alias qnew  qnew-instance)
(alias qnew* qnew-instance*)
(alias qdel  qdelete)
(alias qget  qproperty)
(alias qset  qset-property)
(alias qfun  qinvoke-method)
(alias qfun* qinvoke-method*)
(alias qfun+ qinvoke-method+)
(alias qmsg  qmessage-box)
(alias qnull qnull-object)
(alias qrun  qrun-in-gui-thread)
(alias qsel  qselect)
(alias qq    qquit)

;; add property :function-lambda-list to plist of EQL functions (inspired by ext:function-lambda-list)

(dolist (el (list (cons 'define-qt-wrappers   '(qt-library &rest what))
                  (cons 'defvar-ui            '(main-widget &rest variables))
                  (cons 'ensure-qt-object     '(object))
                  (cons 'in-home              '(&rest file-names))
                  (cons 'qadd-event-filter    '(object event function))
                  (cons 'qapropos             '(&optional search-string class-name))
                  (cons 'qapropos*            '(&optional search-string class-name))
                  (cons 'qauto-reload-c++     '(variable library-name))
                  (cons 'qconnect             '(caller signal receiver/function &optional slot))
                  (cons 'qcopy                '(object))
                  (cons 'qdelete              '(object))
                  (cons 'qdel                 '(object))
                  (cons 'qdisconnect          '(caller &optional signal receiver/function slot))
                  (cons 'qenums               '(class-name &optional enum-name))
                  (cons 'qeql                 '(object1 object2))
                  (cons 'qescape              '(string))
                  (cons 'qexec                '(&optional milliseconds))
                  (cons 'qfind-bound          '(&optional class-name))
                  (cons 'qfind-bound*         '(&optional class-name))
                  (cons 'qfind-child          '(object object-name))
                  (cons 'qfind-children       '(object &optional object-name class-name))
                  (cons 'qfrom-utf8           '(byte-array))
                  (cons 'qfun                 '(object function-name &rest arguments))
                  (cons 'qfun*                '(object cast-class-name function-name &rest arguments))
                  (cons 'qfun+                '(object function-name &rest arguments))
                  (cons 'qfuns                '(object &rest functions))
                  (cons 'qget                 '(object name))
                  (cons 'qgui                 '(&optional process-events))
                  (cons 'qid                  '(class-name))
                  (cons 'qinvoke-method       '(object function-name &rest arguments))
                  (cons 'qinvoke-method*      '(object cast-class-name function-name &rest arguments))
                  (cons 'qinvoke-method+      '(object function-name &rest arguments))
                  (cons 'qinvoke-methods      '(object &rest functions))
                  (cons 'qlater               '(function))
                  (cons 'qload                '(file-name))
                  (cons 'qload-c++            '(library-name &optional unload))
                  (cons 'qload-ui             '(file-name))
                  (cons 'qlocal8bit           '(string))
                  (cons 'qmessage-box         '(x))
                  (cons 'qmsg                 '(x))
                  (cons 'qnew                 '(class-name &rest arguments/properties))
                  (cons 'qnew-instance        '(class-name &rest arguments/properties))
                  (cons 'qnew*                '(class-name &rest arguments/properties))
                  (cons 'qnew-instance*       '(class-name &rest arguments/properties))
                  (cons 'qnull                '(object))
                  (cons 'qnull-object         '(object))
                  (cons 'qobject-names        '(&optional type))
                  (cons 'qoverride            '(object name function))
                  (cons 'qproperties          '(object &optional (depth 1)))
                  (cons 'qproperties*         '(object))
                  (cons 'qproperty            '(object name))
                  (cons 'qquit                '(&optional (exit-status 0) (kill-all-threads t)))
                  (cons 'qremove-event-filter '(handle))
                  (cons 'qrequire             '(module &optional quiet))
                  (cons 'qrgb                 '(red green blue &optional (alpha 255)))
                  (cons 'qrun                 '(function))
                  (cons 'qrun-in-gui-thread   '(function))
                  (cons 'qrun*                '(&body body))
                  (cons 'qrun-in-gui-thread*  '(&body body))
                  (cons 'qset-null            '(object))
                  (cons 'qset                 '(object name value))
                  (cons 'qset-color           '(widget color-role color))
                  (cons 'qset-property        '(object name value))
                  (cons 'qsignal              '(name))
                  (cons 'qsingle-shot         '(milliseconds function))
                  (cons 'qsleep               '(seconds))
                  (cons 'qslot                '(name))
                  (cons 'qstatic-meta-object  '(class-name))
                  (cons 'qsuper-class-name    '(class-name))
                  (cons 'qt-object-id         '(object))
                  (cons 'qt-object-name       '(object))
                  (cons 'qt-object-p          '(object))
                  (cons 'qt-object-pointer    '(object))
                  (cons 'qt-object-unique     '(object))
                  (cons 'qt-object-?          '(object))
                  (cons 'quic                 '(&optional (file.h "ui.h") (file.lisp "ui.lisp") (ui-package :ui)))
                  (cons 'qui-class            '(file-name &optional object-name))
                  (cons 'qui-names            '(file-name))
                  (cons 'qutf8                '(string))
                  (cons 'qvariant-from-value  '(value type-name))
                  (cons 'qvariant-value       '(object))
                  (cons 'tr                   '(source &optional context plural-number))))
  (setf (get (car el) :function-lambda-list) (cdr el)))

;;; undocumented convenience hacks

(defun qt-object-to-string (object)
  "String representation of a QT-OBJECT."
  (when (qt-object-p object)
    (format nil "(QT-OBJECT ~D ~D ~D)"
            (qt-object-pointer object)
            (qt-object-unique object)
            (qt-object-id object))))

(defun qt-object-from-string (string)
  "Restores a QT-OBJECT from its string representation."
  (let ((exp (read-from-string string)))
    (when (eql 'qt-object (first exp))
      (apply (first exp) (rest exp)))))

;;; for android logging (EQL5-Android only, see "../eql.cpp")

(defun qlog (arg1 &rest args)
  ;; (qlog 12)
  ;; (qlog 1 "plus" 2 "gives" 6/2)
  ;; (qlog "x ~A y ~A" x y)
  (%qlog (if (and (stringp arg1)
                  (find #\~ arg1))
             (apply 'format nil arg1 args)
             (x:join (mapcar 'princ-to-string (cons arg1 args))))))

;;; The following are modified/simplified functions taken from "src/lsp/top.lsp" (see ECL sources)

(in-package :si)

(defun feed-top-level (form)
  (catch *quit-tag*
    (let ((*debugger-hook* nil)
          (*tpl-level* -1))
      (%tpl form))))

(defun %read-lines ()
  ;; allow multi-line expressions (command line option "-qtpl")
  (let (lines)
    (loop
      (let ((line (read-line)))
        (setf lines (if lines (format nil "~A~%~A" lines line) line))
        ;; test for balanced parenthesis; if yes, we have a READ-able expression
        ;; (see READ-FROM-STRING in EVAL-TOP-LEVEL)
        (multiple-value-bind (_ x)
            (ignore-errors
              (read-from-string (format nil "(~A)" (let ((lines* (copy-seq lines)))
                                                     (x:while-it (position #\\ lines*)
                                                       (setf lines* (replace lines* "  " :start1 x:it)))
                                                     (remove-if-not (lambda (ch)
                                                                      (find ch '(#\Space #\Newline #\( #\) #\" #\;)))
                                                                    lines*)))))
          (when (numberp x)
            (return (if (find (string-upcase lines) '("NIL" "()") :test 'string=) ; avoid strange BREAK on NIL values
                        "'()"
                        lines))))))))

(defun %tpl-read (&aux (*read-suppress* nil))
  (finish-output)
  (loop
    (case (peek-char nil *standard-input* nil :EOF)
      ((#\))
       (warn "Ignoring an unmatched right parenthesis.")
       (read-char))
      ((#\space #\tab)
       (read-char))
      ((#\newline #\return)
       (read-char)
       ;; avoid repeating prompt on successive empty lines:
       (let ((command (tpl-make-command :newline "")))
         (when command (return command))))
      (:EOF
       (terpri)
       (return (tpl-make-command :EOF "")))
      (#\:
       (let ((exp (read-preserving-whitespace)))
         (return (cond ((find exp '(:qq :exit))
                        "(eql:qquit)")
                       ((find exp '(:qa :abort))
                        "(eql:qquit -1)")
                       (t
                        tpl-make-command exp (read-line))))))
      (#\?
       (read-char)
       (case (peek-char nil *standard-input* nil :EOF)
         ((#\space #\tab #\newline #\return :EOF)
          (return (tpl-make-command :HELP (read-line))))
         (t
          (unread-char #\?)
          (return (read-preserving-whitespace)))))
      ;; We use READ-PRESERVING-WHITESPACE because with READ, if an
      ;; error happens within the reader, and we perform a ":C" or
      ;; (CONTINUE), the reader will wait for an inexistent #\Newline.
      (t
       (return (%read-lines))))))

(defun %break-where ()
  (when (> *tpl-level* 0)
    (tpl-print-current)))

(defun %tpl (form &key ((:commands *tpl-commands*) tpl-commands)
                       ((:prompt-hook *tpl-prompt-hook*) *tpl-prompt-hook*)
                       (broken-at nil)
                       (quiet nil))
  #-ecl-min
  (declare (c::policy-debug-ihs-frame))
  (let* ((*ihs-base* *ihs-top*)
         (*ihs-top* (if broken-at (ihs-search t broken-at) (ihs-top)))
         (*ihs-current* (if broken-at (ihs-prev *ihs-top*) *ihs-top*))
         (*frs-base* (or (sch-frs-base *frs-top* *ihs-base*) (1+ (frs-top))))
         (*frs-top* (frs-top))
         (*quit-tags* (cons *quit-tag* *quit-tags*))
         (*quit-tag* *quit-tags*)       ; any unique new value
         (*tpl-level* (1+ *tpl-level*))
         (break-level *break-level*)
         values -)
    (set-break-env)
    (set-current-ihs)
    (flet ((rep ()
             ;; We let warnings pass by this way "warn" does the
             ;; work.  It is conventional not to trap anything
             ;; that is not a SERIOUS-CONDITION. Otherwise we
             ;; would be interferring the behavior of code that relies
             ;; on conditions for communication (for instance our compiler)
             ;; and which expect nothing to happen by default.
             (handler-bind 
                 ((serious-condition
                   (lambda (condition)
                     (cond ((< break-level 1)
                            ;; Toplevel should enter the debugger on any condition.
                            )
                           (*allow-recursive-debug*
                            ;; We are told to let the debugger handle this.
                            )
                           (t
                            (format t "~&Debugger received error of type: ~A~%~A~%~
                                         Error flushed.~%"
                                    (type-of condition) condition)
                            (clear-input)
                            (return-from rep t) ;; go back into the debugger loop.
                            )
                           )
                     )))
               
               (with-grabbed-console
                   (unless quiet
                     (%break-where)
                     (setf quiet t))
                 (if form
                     (setq - form
                           form nil)
                     (setq - (locally (declare (notinline tpl-read))
                               (tpl-prompt)
                               (tpl-read))))
                 (setq values (multiple-value-list
                               (eval-with-env - *break-env*))
                       /// // // / / values *** ** ** * * (car /) +++ ++ ++ + + -)
                 (tpl-print values)))))
      (when
          (catch *quit-tag*
            (if (zerop break-level)
                (with-simple-restart 
                    (restart-toplevel "Go back to Top-Level REPL.")
                  (rep))
                (with-simple-restart
                    (restart-debugger "Go back to debugger level ~D." break-level)
                  (rep)))
            nil)
        (setf quiet nil)))))
