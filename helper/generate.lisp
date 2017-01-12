;;; copyright (c) 2010-2014 Polos Ruetz

(load "../src/lisp/x")
(load "load-modules")
(load "parsed/q-methods")
(load "parsed/n-methods")
(load "parsed/q-override")
(load "parsed/n-override")
(load "no-static-meta-object")

(use-package :x)

(defconstant +message-generated+            "// THIS FILE IS GENERATED (see helper/)")
(defconstant +max-arguments+                50)
(defconstant +var-names+                    (loop for i from 1 to +max-arguments+ collect (format nil "x~D" i)))
(defconstant +special-typedefs-and-classes+ '("QAbstractTextDocumentLayout::PaintContext"
                                              "QCoreApplication::EventFilter"
                                              "QEasingCurve::EasingFunction"
                                              "QNetworkCacheMetaData::AttributesMap"
                                              "QNetworkCacheMetaData::RawHeaderList"
                                              "QPainterPath::Element"
                                              "QPixmapCache::Key"
                                              "QWebPluginFactory::MimeType"
                                              "QWebPluginFactory::Plugin"))

(defparameter *max-constructor-args*      0)
(defparameter *max-method-args*           0)
(defparameter *missing-types*             0)
(defparameter *argument-types*            (make-hash-table :test 'equal))
(defparameter *override-signatures*       (make-hash-table :test 'equal))
(defparameter *override-id*               0)
(defparameter *override-functions*        nil)
(defparameter *override-arguments*        nil)
(defparameter *override-return-arguments* nil)
(defparameter *override-signature-ids*    nil)
(defparameter *module-streams*            nil)
(defparameter *all-modules*               (cons :gui *modules*))

(defun trim (s)
  (string-trim " " s))

(defun trim* (name)
  (string-left-trim "/" name))

(let ((classes (make-hash-table :test 'equal)))
  (defun add-class-modules ()
    (flet ((classes (module type)
             (symbol-value (intern (format nil "*~A-~A-NAMES*" module type)))))
      (dolist (module *modules*)
        (dolist (type '(:q :n))
          (dolist (class (classes module type))
            (setf (gethash (trim* class) classes)
                  module))))))
  (defun class-module (class)
    (if-it (gethash class classes)
        it
        :gui)))

(defun open-module-streams ()
  (flet ((open* (module file &optional skip)
           (unless (and skip (eql :gui module))
             (open (format nil "../src/gen/~(~A~)~A"
                           (if (eql :gui module)
                               "_main_"
                               (format nil "~A/_" module))
                           file)
                   :direction :output :if-exists :supersede))))
    (dolist (module *all-modules*)
      (push (cons module (list (cons :q-classes (open* module "q_classes.h"))
                               (cons :n-classes (open* module "n_classes.h"))
                               (cons :q-methods (open* module "q_methods.h"))
                               (cons :n-methods (open* module "n_methods.h"))
                               (cons :ini (open* module "ini.cpp" t))))
            *module-streams*))))

(defun close-module-streams ()
  (dolist (module *module-streams*)
    (dolist (file (rest module))
      (when-it (cdr file)
        (close it)))))

(defun assoc* (x alist)
  (cdr (assoc x alist)))

(defun module-stream (module file &optional type)
  (assoc* (intern (format nil "~A~A~A" (if type type "") (if type "-" "") file) :keyword)
          (assoc* module *module-streams*)))

(defun no-spaces (s)
  (cond ((string= "static QList<const QTouchDevice *>" s)
         "staticQList<const QTouchDevice*>")
        (t
         (remove #\Space s))))

(defun find* (x list &optional (key 'identity))
  (find x list :test 'string= :key key))

(defun split-args (args)
  (let ((s (copy-seq args))
        (sep #\@)
        skip)
    (dotimes (i (length s))
      (let ((ch (char s i)))
        (case ch
          (#\< (setf skip t))
          (#\> (setf skip nil))
          (#\, (unless skip
                 (setf (char s i) sep))))))
    (mapcar 'split-arg (split s sep))))

(defun add-to-types (type)
  (unless (empty-string type)
    (let ((enum (find #\: type)))
      (when (or (and (qt-class-p type)
                     (not enum))
                (starts-with "GL" type)
                (not (or (string= "void" type)
                         enum
                         (upper-case-p (char type 0))
                         (search "QHash" type))))
        (setf (gethash type *argument-types*) t)))))

(defun split-arg (arg)
  (let* ((s (no-spaces arg))
         (const (starts-with "const" s))
         (default (when-it (position #\= s)
                    (prog1
                        (subseq s (1+ it))
                      (setf s (subseq s 0 it)))))
         (ref (ends-with "&" s))
         (ptr (ends-with "*" s))
         (type (subseq s (if const 5 0) (when (or ref ptr)
                                          (1- (length s))))))
    (when (starts-with "unsigned" type)
      (setf type (format nil "u~A" (subseq type 8))))
    (let ((arg* (list type)))
      (add-to-types type)
      (cond (ref (push :ref arg*))
            (ptr (push :ptr arg*)))
      (when const
        (push :const arg*))
      (when default
        (push :default arg*)
        (push default arg*))
      (nreverse arg*))))

(defun split-fun (fun class)
  (macrolet ((cut-p (x str)
               `(when (starts-with ,x ,str)
                  (setf ,str (subseq ,str (length ,x)))))
             (append-if (cond val)
               `(when ,cond
                  (setf fun-list (append fun-list (list ,val))))))
    (let* ((fun* fun)
           (pure (when (ends-with " = 0" fun)
                   (setf fun* (trim (subseq fun 0 (- (length fun) 4))))))
           (p2 (position #\( fun*))
           (p3 (when p2
                 (position #\) fun* :from-end t)))
           (p1 (position #\Space fun* :from-end t :end (if p2 (- p2 2) (length fun*))))
           (name (trim (subseq fun* p1 p2)))
           (ret (no-spaces (subseq fun* 0 p1)))
           (new       (cut-p "new" ret))
           (protected (cut-p "protected" ret))
           (static    (cut-p "static" ret))
           (virtual   (cut-p "virtual" ret))
           (ret-const (starts-with "const" ret))
           (ret-ptr (ends-with "*" ret))
           (ret-ref (ends-with "&" ret))
           (args (when p2
                   (trim (subseq fun* (1+ p2) p3))))
           (type (subseq ret (if ret-const 5 0) (when (or ret-ptr ret-ref)
                                                  (1- (length ret))))))
      (add-to-types type)
      (let ((ret-list (list type)))
        (when ret-ptr
          (push :ptr ret-list))
        (when ret-const
          (push (if ret-ref :ref :const) ret-list))
        (let ((fun-list (list (nreverse ret-list) name (split-args args))))
          (append-if (not p2) :value)
          (append-if (ends-with "const" fun*) :const)
          (append-if new :constructor)
          (append-if protected :protected)
          (append-if static :static)
          (append-if pure (cons :pure class))
          (append-if virtual :virtual)
          fun-list)))))

(defun split-class (class)
  (let* ((p1 (position #\( class))
         (no-new (starts-with "//" class))
         (class* (list (string-trim " /" (subseq class 0 p1))
                       (when p1
                         (split-args (trim (subseq class (1+ p1) (position #\) class :from-end t))))))))
    (if no-new
        (append class* (list :no-new))
        class*)))

(defun args-to-simple-c (args)
  (when args
    (if (consp args)
        (mapcar 'arg-to-simple-c args)
        (list (arg-to-simple-c args))))) 

(defun add-var-names (args &optional enum-class)
  (format nil "~{~A~^, ~}"
          (mapcar (lambda (arg name)
                    (format nil "~A ~A~A"
                            (arg-to-c arg enum-class)
                            name
                            (default-to-c arg enum-class)))
                  args
                  +var-names+)))

(defun n-var-names (n)
  (butlast +var-names+ (- +max-arguments+ n)))

(defun class-name* (x)
  (caaar x))

(defun l2q-name (name)
  (concatenate 'string "Q" (subseq name 1)))

(defun sub-class-name (x)
  (let ((sub (copy-seq (class-name* x))))
    (setf (char sub 0) #\L)
    sub))

(defun super-class (x)
  (cdar x))

(defun arg-type (arg)
  (first arg))

(defun return-arg (fun)
  (if (string= "qint64" (first (first fun)))
      '("qlonglong")
      (first fun)))

(defun function-name (fun)
  (second fun))

(defun function-args (fun)
  (third fun))

(defun signature (fun)
  (format nil "~A(~{~A~^,~})"
          (function-name fun)
          (args-to-simple-c (function-args fun))))

(defun qt-class-p (class)
  (and (char= #\Q (char class 0))
       (not (position #\: class))
       (not (find class '("QueryType" "QtOwnership") :test 'string=))))

(defun void-p (arg)
  (string= "void" (first arg)))

(defun arg-to-c (arg &optional enum-class return)
  (let ((argc (if (find* (first arg) '("WId"))
                  (first arg)
                  (let* ((type (add-namespace (first arg) enum-class))
                         (enum-as-int (and return
                                           (find #\: type)
                                           (not (find #\< type)))))
                    (unless (and enum-as-int
                                 (find* type +special-typedefs-and-classes+))
                      (concatenate 'string
                                   (if (and (const-p arg)
                                            (or (not return)
                                                (not (string= "int" (first arg)))))
                                       "const "
                                       "")
                                   (if enum-as-int "int" type)
                                   (cond ((and (not return)
                                               (reference-p arg))
                                          "&")
                                         ((pointer-p arg)
                                          "*")
                                         (t ""))))))))
    (when (and return
               (search "QList" argc)
               (search "::" argc))
      )
      ;; TODO
    argc))

(defun arg-to-c-null-value (arg)
  (let ((type (arg-type arg)))
    (cond ((string= "bool" type)
           "false")
          ((or (pointer-p arg)
               (find* type '("int" "qlonglong" "double" "qreal")))
           "0")
          ((or (void-p arg)
               (qt-class-p type))
           nil)
          ((upper-case-p (char type 0))
           (format nil "(~A)0" type))
          (t
           (error (format nil "No C null value defined for ~S" arg))))))

(defun arg-to-simple-c (arg)
  (concatenate 'string
               (if (and (const-p arg)
                        (pointer-p arg)
                        (string= "char" (first arg)))
                   "const "
                   "")
               (first arg)
               (if (pointer-p arg) "*" "")))

(defun default-to-c (arg &optional enum-class)
  (if-it (default-value arg)
      (format nil " = ~A" (add-namespace it enum-class))
      ""))

(defun add-namespace (name class)
  (unless (empty-string name)
    (if (and class
             (string/= "Handle" name)
             (not (starts-with "GL" name)))
        (let ((1st (char name 0))
              (templ (position #\< name)))
          (when templ
            (setf 1st (char name (incf templ))))
          (if (and (not (qt-class-p (if templ
                                        (subseq name templ (1- (length name)))
                                        name)))
                   (not (find #\: name))
                   (upper-case-p 1st))
              (if templ
                  (format nil "~A~A::~A"
                          (subseq name 0 templ)
                          class
                          (subseq name templ))
                  (if-it (position #\( name)
                      (let* ((names (split (subseq name (1+ it) (1- (length name)))
                                           #\|)))
                        (join (mapcar (lambda (name) (format nil "~A::~A" class name))
                                      names)
                              #\|))
                      (format nil "~A::~A" class name)))
              name))
        name)))

(defun constructor-p (x)
  (find :constructor x))

(defun new-p (x)
  (not (find :no-new (caar x))))

(defun pointer-p (x)
  (find :ptr (rest x)))

(defun reference-p (x)
  (find :ref x))

(defun value-p (x)
  (find :value x))

(defun const-p (x)
  (find :const (rest x)))

(defun protected-p (x)
  (find :protected x))

(defun static-p (x)
  (find :static x))

(let (pure-virtuals)
  (defun pure-virtual-p (fun class super)
    (when (or (not super)
              (string= "QObject" super)
              (string= class super))
      (when-it (find :pure fun :key (lambda (x) (when (consp x) (car x))))
        (let* ((fun* (function-name fun))
               (class* (cdr it))
               (fun-class (cons fun* class*)))
          (cond ((find fun-class pure-virtuals :test 'equal))
                ((push fun-class pure-virtuals))
                (when (or (string= class class*)
                          (and (string= super class*)
                               (find (cons fun* super) pure-virtuals :test 'equal)))
                  (push (cons fun* class) pure-virtuals))))))))

(defun find-function (class fun-name q)
  (when-it (find class (if q *q-methods* *n-methods*) :test 'string= :key 'caaar)
    (find (format nil " ~A " fun-name) (rest it) :test 'search)))

(defun virtual-p (x)
  (find :virtual x))

(defun default-value (x)
  (let (ret)
    (dolist (v x)
      (cond (ret (return v))
            ((eql :default v) (setf ret t))))))

(defun sort-names (names)
  (sort (remove-duplicates names :test 'string=)
        'string<
        :key (lambda (str) (trim* str))))

(defun ini ()
  (add-class-modules)
  (mapc (lambda (objects names split-class)
          (mapc (lambda (obj name)
                  (when split-class
                    (setf (caar obj) (split-class name)))
                  (let ((class (if split-class (caaar obj) (caar obj))))
                    (setf (rest obj) (mapcar (lambda (fun)
                                               (split-fun fun class))
                                             (rest obj)))))
                objects
                names))
        (list *q-methods* *n-methods* *q-override* *n-override*)
        (list *q-names* *n-names* *q-names* *n-names*)
        (list t t nil nil)))

(defun super-classes (obj)
  (let ((all (list (caar obj)))
        (curr obj))
    (loop
      (if-it (cdar curr)
          (progn
            (push it all)
            (setf curr (find* (cdar curr) *q-override* 'caar)))
          (return (nreverse all))))))

(defun module-include (module)
  (format nil "#include <Qt~A>"
          (case module
            (:multimedia "MultimediaWidgets")
            (:webkit "WebKitWidgets")
            (t (string-capitalize (string module))))))

(defmacro change-file-stream (module file &optional type)
  `(setf s (module-stream ,module ,file ,type)))

(defun classes.h (type)
  (format t "~&-> ~(~A~)_classes.h~%" type)
  (let (s)
    (dolist (module *all-modules*)
      (let ((gui (eql :gui module)))
        (change-file-stream module :classes type)
        (format s "~A~%~%#ifndef ~A~A_CLASSES_H~
                   ~%#define ~A~A_CLASSES_H~
                   ~%~A~
                   ~%#include \"../~Aecl_fun.h\"~
                   ~%#include \"~A_lobjects.h\"~
                   ~%#include <QtWidgets>~
                   ~%#include <QtPrintSupport>~
                   ~%~
                   ~%QT_BEGIN_NAMESPACE~%"
                +message-generated+
                (if gui "MAIN_" "")
                type
                (if gui "MAIN_" "")
                type
                (if gui "" (format nil "~%#include \"_ini.h\""))
                (if gui "" "../")
                (if gui "" "../"))))
    (format s "~%typedef QList<int> NumList;~%")
    (mapc (lambda (method override)
            (when (new-p method)
              (let ((virtual (consp (rest override)))
                    (class (class-name* method))
                    (sub-class (sub-class-name method)))
                (change-file-stream (class-module class) :classes type)
                (format s "~%class ~A : public ~A {~A~
                           ~%    friend class ~A~D;~
                           ~%public:"
                        sub-class
                        class
                        (if (eql :q type) (format nil "~%    Q_OBJECT") "")
                        type
                        (1+ (position class (if (eql :q type) *q-names* *n-names*)
                                      :test 'string=
                                      :key (lambda (x) (trim* x))))) 
                (dolist (fun (rest method))
                  (when (constructor-p fun)
                    (let* ((args (function-args fun))
                           (len (length args)))
                      (when (<= len +max-arguments+)
                        (format s "~%    ~A(uint u~A~A) : ~aunique(u) {}"
                                sub-class
                                (if args ", " "")
                                (add-var-names args)
                                (if args (format nil "~A(~{~A~^, ~}), " class (n-var-names len)) ""))))))
                (format s "~%~%    static NumList overrideIds;~
                           ~%    uint unique;~%")
                (let ((1st t)
                      (sig-ids (list (sub-class-name method)))
                      fun-names virtuals)
                  (dolist (super (super-classes override))
                    (dolist (fun (rest (find* super (if (eql :q type) *q-override* *n-override*) 'caar)))
                      (when (virtual-p fun)
                        (setf virtuals t)
                        (let ((fun-name (function-name fun)))
                          (unless (or
                                   ;; exclude reimplemented virtual, now private functions
                                   (and (string= "setModel" fun-name)
                                        (find* class '("QListWidget"
                                                       "QTableWidget"
                                                       "QTreeWidget")))
                                   (and (find* class '("QAbstractListModel"
                                                       "QAbstractTableModel"
                                                       "QHelpIndexModel"
                                                       "QSqlQueryModel"
                                                       "QSqlRelationalTableModel"
                                                       "QSqlTableModel"))
                                        (find* fun-name '("columnCount"
                                                          "hasChildren"
                                                          "parent")))
                                   (and (string= "QFontDialog" class)
                                        (find* fun-name '("eventFilter")))
                                   (and (string= "QHelpSearchResultWidget" class)
                                        (find* fun-name '("changeEvent")))
                                   (and (string= "QHelpSearchQueryWidget" class)
                                        (find* fun-name '("changeEvent"
                                                          "focusInEvent")))
                                   (and (string= "QStringListModel" class)
                                        (find* fun-name '("columnCount"
                                                          "hasChildren"
                                                          "parent")))
                                   ;; exclude some very low-level ones
                                   (find* fun-name '("event"
                                                     "metaObject")))
                            (let* ((ret (return-arg fun))
                                   (void (void-p ret))
                                   (args (function-args fun))
                                   (sig (signature fun))
                                   (arg-names (args-to-simple-c (function-args fun)))
                                   (ret-name (arg-to-simple-c ret))
                                   (sig-id (let ((id (gethash sig *override-signatures*)))
                                             (unless id
                                               (setf id (setf (gethash sig *override-signatures*)
                                                              (incf *override-id*)))
                                               (push sig *override-functions*)
                                               (push arg-names *override-arguments*)
                                               (push (if (void-p ret) 0 ret-name) *override-return-arguments*))
                                             id))
                                   (call (format nil "callOverrideFun(fun, ~D, ~A, id)"
                                                 sig-id
                                                 (if (function-args fun) "args" "0")))
                                   (pure-virtual (or (pure-virtual-p fun class super)
                                                     ;; avoid calling pure virtual methods from inherited classes
                                                     (and (string= "QAnimationGroup" class)
                                                          (find* fun-name '("duration"
                                                                            "updateCurrentTime")))
                                                     (and (string= "QAbstractProxyModel" class)
                                                          (find* fun-name '("columnCount"
                                                                            "data"
                                                                            "index"
                                                                            "parent"
                                                                            "rowCount")))
                                                     (and (string= "QAbstractListModel" class)
                                                          (find* fun-name '("data"
                                                                            "rowCount")))
                                                     (and (string= "QAbstractTableModel" class)
                                                          (find* fun-name '("data"
                                                                            "rowCount")))
                                                     (and (string= "QAbstractGraphicsShapeItem" class)
                                                          (find* fun-name '("boundingRect"
                                                                            "paint")))
                                                     (and (string= "QGraphicsObject" class)
                                                          (find* fun-name '("boundingRect"
                                                                            "paint")))
                                                     (and (string= "QGraphicsLayout" class)
                                                          (find* fun-name '("sizeHint"))))))
                              (when 1st
                                (push sig-id sig-ids))
                              (unless (find* fun-name fun-names)
                                (push fun-name fun-names)
                                (format s "~%    ~A ~A(~A)~A { quint64 id = LObjects::override_id(unique, ~D); void* fun = LObjects::overrideFun(id); ~Aif(fun && (LObjects::calling != id)) { ~A~A; }~A~A~A~A~A}"
                                        (arg-to-c ret)
                                        fun-name
                                        (add-var-names args)
                                        (if (const-p fun) " const" "")
                                        sig-id
                                        (if void
                                            ""
                                            (format nil "~A ret~A; "
                                                    (arg-to-c ret)
                                                    (x:if-it (arg-to-c-null-value ret)
                                                          (format nil " = ~A" x:it)
                                                          "")))
                                        (if args (format nil "const void* args[] = { ~{&~A~^, ~} }; " (n-var-names (length args))) "")
                                        (if void call (format nil "ret = ~A" (from-qvariant ret call)))
                                        (if pure-virtual "" " if(!fun || LObjects::call_default || (LObjects::calling == id)) {")
                                        (if (or void pure-virtual) "" " ret =")
                                        (if pure-virtual
                                            ""
                                            (format nil " ~A::~A(~{~A~^, ~}); "
                                                    class
                                                    fun-name
                                                    (n-var-names (length args))))
                                        (if pure-virtual "" "}")
                                        (if void "" " return ret; "))))))))
                    (when 1st
                      (setf 1st nil)
                      (push (nreverse sig-ids) *override-signature-ids*)))
                  (when virtuals
                    (terpri s))
                  (format s "};~%" s)))))
          (if (eql :q type) *q-methods* *n-methods*)
          (if (eql :q type) *q-override* *n-override*))
    (dolist (module *all-modules*)
      (change-file-stream module :classes type)
      (format s "~%QT_END_NAMESPACE~%~%#endif~%")))
  (when (eql :n type)
    (setf *override-functions*        (nreverse *override-functions*)
          *override-arguments*        (nreverse *override-arguments*)
          *override-return-arguments* (nreverse *override-return-arguments*)
          *override-signature-ids*    (nreverse *override-signature-ids*))))

(defun methods.h (type)
  (format t "-> ~(~A~)_methods.h~%" type)
  (let (s)
    (dolist (module *all-modules*)
      (let ((gui (eql :gui module)))
        (change-file-stream module :methods type)
        (format s "~A~%~%#ifndef ~A~A_METHODS_H~
                   ~%#define ~A~A_METHODS_H~
                   ~%~
                   ~%#include \"_~A~(~A~)_classes.h\"~A~
                   ~%#include <QtWidgets>~
                   ~%#include <QtPrintSupport>~A~
                   ~%~
                   ~%QT_BEGIN_NAMESPACE~%"
                +message-generated+
                (if gui "MAIN_" "")
                type
                (if gui "MAIN_" "")
                type
                (if gui "main_" "")
                type
                (if gui "" (format nil "~%#include \"../_main_~(~A~)_methods.h\"" type))
                (if gui 
                    (format nil "~%#include \"../extras.h\"~
                                 ~%#include \"../eql_global.h\"")
                    (format nil "~%~A" (module-include module))))))
    (let* ((n 0)
           (methods (if (eql :q type) *q-methods* *n-methods*))
           (classes (mapcar (lambda (obj)
                              (with-output-to-string (s)
                                (let ((class (class-name* obj))
                                      (super (super-class obj))
                                      (sub-class (sub-class-name obj)))
                                  (format s "~%class ~A~D : public ~A { // ~A~
                                             ~%    Q_OBJECT~
                                             ~%public:~%"
                                          type
                                          (incf n)
                                          (if super
                                              (format nil "~A~D"
                                                      type
                                                      (1+ (if-it (position super methods :test 'string= :key 'class-name*)
                                                              it
                                                              (error (format t "~%Class missing: ~S~%~%" super)))))
                                              "QObject")
                                          class)
                                  (dolist (fun (rest obj))
                                    (unless (and (not (new-p obj))
                                                 (protected-p fun))
                                      (let* ((fun-args (function-args fun))
                                             (len-fun-args (length fun-args)))
                                        (when (<= len-fun-args +max-arguments+)
                                          (if (constructor-p fun)
                                              (progn
                                                (setf *max-constructor-args* (max len-fun-args *max-constructor-args*))
                                                (format s "    Q_INVOKABLE void* C(uint u~A~A) { return new ~A(u~A~A); }~%"
                                                        (if fun-args ", " "")
                                                        (add-var-names fun-args class)
                                                        sub-class
                                                        (if fun-args ", " "")
                                                        (format nil "~{~A~^, ~}" (n-var-names len-fun-args))))
                                              (let ((c-ret-arg (arg-to-c (return-arg fun) class :return))
                                                    (c-args (add-var-names fun-args class)))
                                                (when (and c-ret-arg
                                                           (every (lambda (x)
                                                                    (not (search x c-args)))
                                                                  +special-typedefs-and-classes+))
                                                  (format s "    Q_INVOKABLE ~A ~A~A(~A~A~A)~A { ~A~A~A~A; }~%"
                                                          c-ret-arg
                                                          (if (static-p fun) "S" "M")
                                                          (function-name fun)
                                                          (if (static-p fun) "" (format nil "~A* o" class))
                                                          (if (and fun-args (not (static-p fun))) ", " "")
                                                          c-args
                                                          (if (const-p fun) " const" "")
                                                          (if (void-p (return-arg fun)) "" "return ")
                                                          (if (static-p fun)
                                                              (format nil "~A::" class)
                                                              (if (protected-p fun)
                                                                  (format nil "((~A*)o)->" sub-class)
                                                                  "o->"))
                                                          (function-name fun)
                                                          (if (value-p fun)
                                                              ""
                                                              (format nil "(~{~A~^, ~})" (n-var-names len-fun-args))))
                                                  (setf *max-method-args* (max len-fun-args *max-method-args*)))))))))
                                  (add-extras type class s))
                                (format s "};~%")))
                            methods)))
      ;; class hierarchy
      (let ((1st t)
            done)
        (loop
          (let (hit)
            (dolist (class classes)
              (flet ((class-done ()
                       (char= #\! (char class 0)))
                     (set-class-done ()
                       (setf (char class 0) #\!))
                     (write-class (module)
                       (if (eql :gui module)
                           (progn
                             (write-string (subseq class 0 6) s)
                             (write-string " EQL_EXPORT" s)
                             (write-string (subseq class 6) s))
                           (write-string class s))))
                (unless (class-done)
                  (let* ((name (read-from-string (subseq class 7 12)))
                         (pub (search "public" class))
                         (inherits (read-from-string (subseq class (+ 7 pub) (+ 12 pub))))
                         (p1 (+ 3 (position #\/ class)))
                         (p2 (position #\Newline class :start p1))
                         (module (class-module (subseq class p1 p2))))
                    (change-file-stream module :methods type)
                    (if 1st
                        (when (search " public QObject" class)
                          (push name done)
                          (write-class module)
                          (set-class-done))
                        (when (find inherits done)
                          (push name done)
                          (write-class module)
                          (set-class-done)
                          (setf hit t)))))))
            (unless (or 1st hit)
              (return)))
          (setf 1st nil))))
    (dolist (module *all-modules*)
      (change-file-stream module :methods type)
      (format s "~%QT_END_NAMESPACE~%~%#endif~%"))))

(defun add-extras (type class s)
  (if (eql :q type)
      nil
      (cond ((string= "QImage" class)
             (format s "    // see src/extras.cpp~
                      ~%    Q_INVOKABLE QImage MchangeBrightness(QImage* o, int x1) { return QImage_changeBrightness(*o, x1); }~
                      ~%    Q_INVOKABLE QImage MchangeContrast(QImage* o, int x1) { return QImage_changeContrast(*o, x1); }~
                      ~%    Q_INVOKABLE QImage MchangeGamma(QImage* o, int x1) { return QImage_changeGamma(*o, x1); }~%")))))

(defun from-qvariant (arg x)
  (let* ((type (arg-type arg))
         (1st (char type 0))
         (q (char= #\Q 1st)))
    (cond ((pointer-p arg)
           (format nil "(~A)~A.value<void*>()" (arg-to-c arg) x))
          ((or (search "::" type)
               (and (not q)
                    (upper-case-p 1st)))
           (format nil "(~A)~A.toInt()" type x))
          (q
           (format nil "~A.value<~A~A>()" x type (if (ends-with ">" type) " " "")))
          (t
           (format nil "~A.to~A()" x (cond ((string= "qreal" type)
                                            "Real")
                                           ((string= "qlonglong" type)
                                            "LongLong")
                                           (t
                                            (string-capitalize type))))))))

(defun lobjects.cpp ()
  (format t "-> lobjects.cpp~%")
  (with-open-file (s "../src/gen/_lobjects.cpp" :direction :output :if-exists :supersede)
    (format s "~A~
               ~%~
               ~%#include \"_lobjects.h\"~
               ~%#include \"_main_q_classes.h\"~
               ~%#include \"_main_n_classes.h\"~
               ~%#include \"_main_q_methods.h\"~
               ~%#include \"_main_n_methods.h\"~
               ~%#include \"../dyn_object.h\"~
               ~%#include \"../eql.h\"~
               ~%~
               ~%int LObjects::T_QAudioDeviceInfo = -1;~
               ~%int LObjects::T_QList_QAudioDeviceInfo = -1;~
               ~%int LObjects::T_QAudioEncoderSettings = -1;~
               ~%int LObjects::T_QAudioFormat = -1;~
               ~%int LObjects::T_QCameraInfo = -1;~
               ~%int LObjects::T_QList_QCameraInfo = -1;~
               ~%int LObjects::T_QCameraViewfinderSettings = -1;~
               ~%int LObjects::T_QList_QCameraViewfinderSettings = -1;~
               ~%int LObjects::T_QHelpSearchQuery = -1;~
               ~%int LObjects::T_QList_QHelpSearchQuery = -1;~
               ~%int LObjects::T_QHostAddress = -1;~
               ~%int LObjects::T_QHostInfo = -1;~
               ~%int LObjects::T_QHttpPart = -1;~
               ~%int LObjects::T_QImageEncoderSettings = -1;~
               ~%int LObjects::T_QMediaContent = -1;~
               ~%int LObjects::T_QList_QMediaContent = -1;~
               ~%int LObjects::T_QNetworkAddressEntry = -1;~
               ~%int LObjects::T_QList_QNetworkAddressEntry = -1;~
               ~%int LObjects::T_QNetworkCacheMetaData = -1;~
               ~%int LObjects::T_QNetworkConfiguration = -1;~
               ~%int LObjects::T_QNetworkCookie = -1;~
               ~%int LObjects::T_QList_QNetworkCookie = -1;~
               ~%int LObjects::T_QList_QNetworkConfiguration = -1;~
               ~%int LObjects::T_QNetworkInterface = -1;~
               ~%int LObjects::T_QList_QNetworkInterface = -1;~
               ~%int LObjects::T_QNetworkProxy = -1;~
               ~%int LObjects::T_QList_QNetworkProxy = -1;~
               ~%int LObjects::T_QNetworkRequest = -1;~
               ~%int LObjects::T_QSqlDatabase = -1;~
               ~%int LObjects::T_QSqlError = -1;~
               ~%int LObjects::T_QSqlField = -1;~
               ~%int LObjects::T_QSqlIndex = -1;~
               ~%int LObjects::T_QSqlQuery = -1;~
               ~%int LObjects::T_QSqlRecord = -1;~
               ~%int LObjects::T_QSqlRelation = -1;~
               ~%int LObjects::T_QSslCertificate = -1;~
               ~%int LObjects::T_QSslCipher = -1;~
               ~%int LObjects::T_QSslConfiguration = -1;~
               ~%int LObjects::T_QSslKey = -1;~
               ~%int LObjects::T_QVideoEncoderSettings = -1;~
               ~%int LObjects::T_QVideoSurfaceFormat = -1;~
               ~%int LObjects::T_QWebElement = -1;~
               ~%int LObjects::T_QList_QWebElement = -1;~
               ~%int LObjects::T_QWebElementCollection = -1;~
               ~%int LObjects::T_QWebHitTestResult = -1;~
               ~%~
               ~%EQL* LObjects::eql = 0;~
               ~%DynObject* LObjects::dynObject = 0;~
               ~%QObject** LObjects::Q = 0;~
               ~%QObject** LObjects::N = 0;~
               ~%bool LObjects::call_default = false;~
               ~%quint64 LObjects::calling = 0;~
               ~%QList<quint64> LObjects::callingList;~
               ~%uint LObjects::i_unique = 0;~
               ~%const char*** LObjects::override_arg_types = 0;~
               ~%QList<QByteArray> LObjects::qNames;~
               ~%QList<QByteArray> LObjects::nNames;~
               ~%QMap<QByteArray, int> LObjects::q_names;~
               ~%QMap<QByteArray, int> LObjects::n_names;~
               ~%QHash<QByteArray, uint> LObjects::override_function_ids;~
               ~%QHash<quint64, void*> LObjects::override_lisp_functions;~%"
            +message-generated+)
    (dolist (module *modules*)
      (format s "~%StaticMetaObject LObjects::staticMetaObject_~(~A~) = 0;" module)
      (format (module-stream module :ini) "~A~%~%#include \"_q_methods.h\"~
                                           ~%#include \"_n_methods.h\"~
                                           ~%#include \"_ini2.h\"~
                                           ~%~
                                           ~%QT_BEGIN_NAMESPACE~%~%"
              +message-generated+))
    (dolist (module *modules*)
      (format s "~%DeleteNObject LObjects::deleteNObject_~(~A~) = 0;" module))
    (dolist (module *modules*)
      (format s "~%Override LObjects::override_~(~A~) = 0;" module))
    (dolist (module (list :help :multimedia :network :sql :webkit))
      (format s "~%ToMetaArg LObjects::toMetaArg_~(~A~) = 0;~
                 ~%To_lisp_arg LObjects::to_lisp_arg_~(~A~) = 0;"
              module module))
    (format s "~%~%")
    (dolist (ids *override-signature-ids*)
      (let* ((class (first ids))
             (module (class-module (l2q-name class))))
        (format (if (eql :gui module)
                    s
                    (module-stream module :ini))
                "NumList ~A::overrideIds = NumList()~{ << ~A~};~%"
                class (rest ids))))
    (dolist (module *modules*)
      (format (module-stream module :ini) "~%void ini() {~
                                           ~%    static bool _ = false; if(_) return; _ = true;~
                                           ~%    ini2();"))
    (let ((len-q (length *q-methods*))
          (len-n (length *n-methods*)))
      (format s "~%void LObjects::ini(EQL* e) {~
                 ~%    static bool ok = false;~
                 ~%    if(!ok) {~
                 ~%        ok = true;~
                 ~%        eql = e;~
                 ~%        dynObject = new DynObject;~
                 ~%        Q = new QObject* [~D]; for(int i = 0; i < ~D; ++i) { Q[i] = 0; }~
                 ~%        N = new QObject* [~D]; for(int i = 0; i < ~D; ++i) { N[i] = 0; }"
              len-q len-q
              len-n len-n)
      (mapc (lambda (class methods)
              (let ((n 0))
                (dolist (obj methods)
                  (incf n)
                  (let* ((name (class-name* obj))
                         (module (class-module name))
                         (gui (eql :gui module)))
                    (format (if gui s (module-stream module :ini))
                            "~%    ~A~A[~D] = new ~A~D;"
                            (if gui "    " "LObjects::")
                            class
                            (1- n)
                            class
                            n)))))
            (list "Q" "N")
            (list *q-methods* *n-methods*))
      (dolist (module *modules*)
        (format (module-stream module :ini) " }~%"))
      (mapc (lambda (methods type)
              (let ((i 0))
                (dolist (obj methods)
                  (format s "~%        ~A_names[~S] = ~D;" type (class-name* obj) (incf i)))))
            (list *q-methods* *n-methods*)
            (list "q" "n"))
      (let ((i 0))
        (dolist (fun *override-functions*)
          (incf i)
          (format s "~%        override_function_ids[~S] = ~D;" fun i)))
      (format s "~%        override_arg_types = new const char** [~D];" (length *override-arguments*))
      (let ((i -1))
        (mapc (lambda (args ret)
                (incf i)
                (format s "~%        { static const char* s[] = { ~S, ~A }; override_arg_types[~D] = s; }"
                        ret
                        (if args (format nil "~{~S, ~}0" args) "0")
                        i))
              *override-arguments*
              *override-return-arguments*))
      (let ((max (length *override-functions*)))
        (format s "~%        qNames = q_names.keys();~
                   ~%        nNames = n_names.keys(); }}~
                   ~%~
                   ~%quint64 LObjects::override_id(uint unique, int id) {~
                   ~%    return (~D * (quint64)unique + id); }~
                   ~%~
                   ~%void* LObjects::overrideFun(quint64 id) {~
                   ~%    return override_lisp_functions.value(id, 0); }~
                   ~%~
                   ~%void LObjects::setOverrideFun(quint64 id, void* fun) {~
                   ~%    override_lisp_functions[id] = fun; }~
                   ~%~
                   ~%const QMetaObject* LObjects::staticMetaObject(const QByteArray& name, int n) {~
                   ~%    if(!n) {~
                   ~%        n = LObjects::q_names.value(name, 0);~
                   ~%        if(!n) {~
                   ~%            n = -LObjects::n_names.value(name, 0); }}~
                   ~%    const QMetaObject* m = 0;~
                   ~%    switch(n) {"
                (1- len-n)
                (1- len-q)
                max)))
    (dolist (module *modules*)
      (format (module-stream module :ini) "~%const QMetaObject* staticMetaObject(int n) {~
                                           ~%    const QMetaObject* m = 0;~
                                           ~%    switch(n) {"))
    (let ((i (1- (- (length *n-methods*)))))
      (dolist (obj (reverse *n-methods*))
        (incf i)
        (let* ((class (class-name* obj))
               (module (class-module class)))
          (unless (find* class *no-static-meta-object*)
            (format (if (eql :gui module)
                        s
                        (module-stream module :ini))
                    "~%        case ~D: m = &~A::staticMetaObject; break;" i class)))))
    (let ((i 0))
      (dolist (obj *q-methods*)
        (incf i)
        (let* ((class (class-name* obj))
               (module (class-module class)))
          (format (if (eql :gui module)
                      s
                      (module-stream module :ini))
                  "~%        case ~D: m = &~A::staticMetaObject; break;" i class))))
    (dolist (module *modules*)
      (let ((i 0))
        (dolist (name *q-names*)
          (incf i)
          (when (eql module (class-module (trim* name)))
            (format s "~%        case ~D:" i)))
        (when (plusp i)
          (format s "~%            if(staticMetaObject_~(~A~)) {~
                     ~%                m = staticMetaObject_~(~A~)(n); }~
                     ~%            break;"
                  module module))))
    (dolist (module *all-modules*)
      (let ((gui (eql :gui module)))
        (format (if gui s (module-stream module :ini))
                " }~
                 ~%    return m; }~
                 ~%~
                 ~%void ~AdeleteNObject(int n, void* p, int gc) {~
                 ~%    switch(n) {"
                (if gui "LObjects::" ""))))
    (let ((i 0))
      (dolist (obj *n-methods*)
        (incf i)
        (when (new-p obj)
          (let* ((class (class-name* obj))
                 (module (class-module class)))
            (format (if (eql :gui module)
                        s
                        (module-stream module :ini))
                    "~%        case ~D: if(gc) ~A; else delete (~A*)p; break;"
                    i
                    (if (find* (class-name* obj) '("QAccessibleWidget"    ; virtual protected destructors
                                                   "QAccessibleInterface"
                                                   "QTextCodec"))
                        "/* nothing */"
                        (format nil "delete (~A*)p" (class-name* obj)))
                    (sub-class-name obj))))))
    (dolist (module *modules*)
      (let ((i 0))
        (dolist (name *n-names*)
          (incf i)
          (when (eql module (class-module (trim* name)))
            (format s "~%        case ~D:" i)))
        (when (plusp i)
          (format s "~%            if(deleteNObject_~(~A~)) {~
                     ~%                deleteNObject_~(~A~)(n, p, gc); }~
                     ~%            break;"
                  module module))))
    (format s " }}~
               ~%~
               ~%const char* LObjects::nObjectSuperClass(const QByteArray& name) {~
               ~%    const char* s = 0;~
               ~%    switch(LObjects::n_names.value(name)) {")
    (let ((i 0))
      (dolist (obj *n-methods*)
        (incf i)
        (when-it (super-class obj)
          (format s "~%        case ~D: s = ~S; break;" i it))))
    (dolist (module *all-modules*)
      (let ((gui (eql :gui module)))
        (format (if gui s (module-stream module :ini))
                " }~A~
                 ~%~
                 ~%~AList~A ~AoverrideFunctions(const QByteArray& name) {~
                 ~%    NumList~A ids~A;~
                 ~%    int n = ~Aq_names.value(name, -1);~
                 ~%    if(n != -1) {~
                 ~%        switch(n) {"
                (if gui (format nil "~%    return s; }") "}")
                (if gui "Str" "Num")
                (if gui "" "*")
                (if gui "LObjects::" "")
                (if gui "" "*")
                (if gui "" " = 0")
                (if gui "" "LObjects::"))))
    (let ((i 0))
      (dolist (obj *q-methods*)
        (incf i)
        (when (find* (sub-class-name obj) *override-signature-ids* 'first)
          (let* ((class (class-name* obj))
                 (module (class-module class))
                 (gui (eql :gui module)))
            (format (if gui s (module-stream module :ini))
                    "~%            case ~D: ids = ~A~A::overrideIds; break;"
                    i
                    (if gui "" "&")
                    (sub-class-name obj))))))
    (dolist (module *modules*)
      (let ((i 0))
        (dolist (name *q-names*)
          (incf i)
          (when (eql module (class-module (trim* name)))
            (format s "~%            case ~D:" i)))
        (when (plusp i)
          (format s "~%                if(override_~(~A~)) {~
                     ~%                    NumList* _ids = override_~(~A~)(name);~
                     ~%                    if(_ids) {~
                     ~%                        ids = *_ids; }}~
                     ~%                break;"
                  module module))))
    (dolist (module *all-modules*)
      (format (if (eql :gui module)
                  s
                  (module-stream module :ini))
              " }}~
               ~%    else {~
               ~%        n = ~An_names.value(name);~
               ~%        switch(n) {"
              (if (eql :gui module) "" "LObjects::")))
    (let ((i 0))
      (dolist (obj *n-methods*)
        (incf i)
        (when (find* (sub-class-name obj) *override-signature-ids* 'first)
          (let* ((module (class-module (class-name* obj)))
                 (gui (eql :gui module)))
            (format (if gui s (module-stream module :ini))
                    "~%            case ~D: ids = ~A~A::overrideIds; break;"
                    i
                    (if gui "" "&")
                    (sub-class-name obj))))))
    (dolist (module *modules*)
      (let ((i 0))
        (dolist (name *n-names*)
          (incf i)
          (when (eql module (class-module (trim* name)))
            (format s "~%            case ~D:" i)))
        (when (plusp i)
          (format s "~%                if(override_~(~A~)) {~
                     ~%                    NumList* _ids = override_~(~A~)(name);~
                     ~%                    if(_ids) {~
                     ~%                        ids = *_ids; }}~
                     ~%                break;"
                  module module))))
    (format s " }}~
               ~%    StrList funs;~
               ~%    Q_FOREACH(int id, ids) {~
               ~%        const char* ret = override_arg_types[id - 1][0];~
               ~%        funs << QString(\"%1 %2\")~
               ~%                .arg(ret ? ret : \"void\")~
               ~%                .arg(QString(override_function_ids.key(id))).toLatin1(); }~
               ~%    return funs; }~%")
    (dolist (module *modules*)
      (format (module-stream module :ini) " }}~%    return ids; }~%~%QT_END_NAMESPACE~%"))))

(defun missing-types ()
  (let ((skip (list "bool"
                    "char"
                    "double"
                    "float"
                    "int"
                    "long"
                    "qint32"
                    "qint64"
                    "quint8"
                    "quint16"
                    "quint32"
                    "quint64"
                    "qlonglong"
                    "qreal"
                    "qulonglong"
                    "short"
                    "ushort"
                    "uchar"
                    "uint"
                    "ulong"
                    "GLint"
                    "GLuint"
                    "GLenum"
                    "GLfloat"
                    "QByteArray"
                    "QChar"
                    "QFileInfoList"
                    "QGradientStop"
                    "QLine"
                    "QLineF"
                    "QList<QAction*>"
                    "QList<QByteArray>"
                    "QList<QDockWidget*>"
                    "QList<QGesture*>"
                    "QList<QGraphicsItem*>"
                    "QList<QGraphicsTransform*>"
                    "QList<QGraphicsView*>"
                    "QList<QGraphicsWidget*>"
                    "QList<QItemSelectionRange>"
                    "QList<QKeySequence>"
                    "QList<QListWidgetItem*>"
                    "QList<QMdiSubWindow*>"
                    "QList<QNetworkAddressEntry>"
                    "QList<QNetworkConfiguration>"
                    "QList<QNetworkCookie>"
                    "QList<QNetworkInterface>"
                    "QList<QNetworkProxy>"
                    "QList<QPolygonF>"
                    "QList<QSize>"
                    "QList<QStandardItem*>"
                    "QList<QStorageInfo>"
                    "QList<QTableWidgetItem*>"
                    "QList<QTableWidgetSelectionRange>"
                    "QList<QTextBlock>"
                    "QList<QTextFrame*>"
                    "QList<QTreeWidgetItem*>"
                    "QList<QUndoStack*>"
                    "QList<QUrl>"
                    "QList<QWebElement>"
                    "QList<QWidget*>"
                    "QList<int>"
                    "QList<qreal>"
                    "QModelIndexList"
                    "QObjectList"
                    "QPoint"
                    "QPointF"
                    "QPolygon"
                    "QPolygonF"
                    "QRect"
                    "QRectF"
                    "QRgb"
                    "QSize"
                    "QSizeF"
                    "QString"
                    "QStringList"
                    "QTextInlineObject"
                    "QGradientStops"
                    "QVariantList"
                    "QVector<QLine>"
                    "QVector<QLineF>"
                    "QVector<QPoint>"
                    "QVector<QPointF>"
                    "QVector<QRect>"
                    "QVector<QRectF>"
                    "QVector<QRgb>"
                    "QVector<QTextFormat>"
                    "QVector<QTextLength>"
                    "QVector<float>"
                    "QVector<int>"
                    "QVector<qreal>"
                    "QWidgetList")))
    (with-open-file (s "missing-types.txt" :direction :output :if-exists :supersede)
      (let ((all-classes (append *q-names* *n-names*)))
        (flet ((classes (module type)
                 (symbol-value (intern (format nil "*~A-~A-NAMES*" module type)))))
          (dolist (module *modules*)
            (dolist (type '(:q :n))
              (setf all-classes (append all-classes (classes module type))))))
        (map-into all-classes 'trim* all-classes)
        (dolist (arg (sort (loop for arg being the hash-keys in *argument-types* collect arg) 'string<))
          (unless (or (find* arg skip)
                      (find* arg all-classes)
                      (search "Abstract" arg)
                      (search "Base" arg))
            (incf *missing-types*)
            (write-line arg s)))))))

(progn
  (ini)
  (open-module-streams)
  (classes.h :q)
  (classes.h :n)
  (methods.h :q)
  (methods.h :n)
  (lobjects.cpp)
  (close-module-streams)
  (missing-types)
  (dolist (var '(*max-constructor-args*
                 *max-method-args*
                 *missing-types*))
    (format t "~&~S ~D~%" var (symbol-value var))))
