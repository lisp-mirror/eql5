;;; copyright (c) Polos Ruetz

(load "../src/lisp/x")
(load "share")
(load "load-modules")

(use-package :x)

(defparameter *skip*
  (list "(preliminary)"
        "(deprecated)"
        "(obsolete)"
        "connect("
        "<Attribute>"
        "<FormatRange>"
        "<WizardButton>"
        "<WritingSystem>"
        "[4][4]"
        "const char * const[]"
        "defaultAction"
        "int *"
        "iterator"
        "macEvent"
        "nativeArguments"
        "setNativeArguments"
        "operator"
        "placeholderText"
        "printerSelectionOption"
        "qreal *"
        "setAsDockMenu"
        "setPrinterSelectionOption"
        "setupUi"
        "singleShot"
        "toAscii"
        "NSDate"
        "NSMenu"
        "NSURL"
        "qintptr"
        "quint32"
        "qwsSet"
        "uchar *"
        "void *"
        "winPage"
        "x11"
        "CFDate"
        "CFbsBitmap"
        "CFURL"
        "CGImageRef"
        "DefaultAction"
        "EditFocus"
        "Engine"
        "FILE"
        "FT_Face"
        "GLfloat *"
        "GLfloat["
        "Handle"
        "HANDLE"
        "HBITMAP"
        "HCURSOR"
        "HDC"
        "HICON"
        "KeyValue"
        "NavigationMode"
        " Margins "
        (format nil "Margins~Cmargins" #\Tab)
        "MSG"
        "PaperSources"
        "PlaceholderText"
        "PointerToMemberFunction"
        "RawHeaderPair"
        "RenderFlags"
        "RSgImage"
        "SearchHit"
        "T "
        (format nil "T~C" #\Tab)
        "Q_PID"
        "QAccessible::State"
        "QPair"
        "QDataStream"
        "QDecoration"
        "QGenericArgument"
        "QGenericMatrix"
        "QHash"
        "QIODevice"
        "QList<Country>"
        "QList<T>"
        "QList<Tab>"
        "QList<QVariant>"
        "QByteArray *"
        "QByteArray & buffer ()"
        "QMap"
        "QMetaClassInfo"
        "QMetaEnum"
        "QMetaMethod"
        "QMetaProperty"
        "QPrinterInfo"
        "QuotationStyle"
        "QSet<"
        "QSymbianEvent"
        "QTextObjectInterface"
        "QWebNetworkRequest"
        "QWSEvent"
        "QXmlStreamReader"
        "WinPage"
        "X11"
        "XEvent"
        "**"
        "&&"
        "QString nativeArguments () const"
        "void setNativeArguments ( const QString & )"
        "viewportAttributesForSize"
        "const QGraphicsObject * toGraphicsObject () const"
        ))

(defparameter *check*      nil)
(defparameter *2-newlines* (format nil "~%~%"))

(defun simplify (str &optional (join t))
  (let ((list (remove-if 'x:empty-string (x:split (string-trim '(#\Space #\Tab) str)))))
    (if join
        (x:join list)
        list)))

(defun one-space (str)
  (with-output-to-string (s)
    (let (ex)
      (x:do-string (ch (string-trim " " str))
        (when (char= #\Tab ch)
          (setf ch #\Space))
        (if (char= #\Space ch)
            (unless (eql #\Space ex)
              (write-char #\Space s))
            (write-char ch s))
        (setf ex ch)))))

(defun space-trim (x)
  (string-trim " " x))

(defun var-name-trim (x)
  (if (find #\= x)
      (let ((xy (x:split x #\=)))
        (format nil "~A =~A"
                (var-name-trim (string-right-trim " " (first xy)))
                (second xy)))
      (if (find (char x (1- (length x))) "&*>")
          x
          (subseq x 0 (position #\Space x :from-end t)))))

(defun tokenize (str)
  (let* ((a (position #\( str))
         (b (position #\) str :from-end t))
         (begin (one-space (subseq str 0 a)))
         (end (one-space (subseq str (1+ b))))
         (args (mapcar 'space-trim (x:split (one-space (subseq str (1+ a) b)) #\,))))
    (format nil "~A ~A~A"
            begin
            (if args (format nil "( ~A )" (x:join (mapcar 'var-name-trim args) " , ")) "()")
            (if (x:empty-string end) "" (format nil " ~A" end)))))

(let (text)
  (defun read-text (class)
    (let ((path (doc-file class)))
      (if (probe-file path)
          (with-open-file (s path :direction :input :external-format :latin-1)
            (setf text (make-string (file-length s)))
            (read-sequence text s))
          (progn
            (incf *not-found*)
            (x:d :not-found path)))))
  (defun words-of (name)
    (x:when-it (search* name text)
      (let ((line (subseq text (+ x:it (length name)) (position #\Newline text :start x:it))))
        (simplify line nil))))
  (defun super-class (class)
    (let ((super (remove "and" (words-of "Inherits:") :test 'string=)))
      (when (and (second super)
                 (not (find #\< (first super)))) ; template
        (format *check* "~A: ~A and ~A~%"
                class
                (first super)
                (second super)))
      (first super)))
  (defun parse (type class s so no-new)
    ;; "bool QPainter::begin ( QPaintDevice * )": multiple inheritance problem
    (let* ((pub (string= "public functions" type))
           (qpainter (and pub (string= "QPainter" class)))
           (qvariant (and pub (string= "QVariant" class))))
      (cond (qpainter
             (dolist (device (list "QImage" "QPicture" "QPixmap" "QPrinter" "QWidget")) 
               (format s "~%   \"new QPainter ( ~A * )\"~
                          ~%   \"bool begin ( ~A * )\""
                       device device)))
            (qvariant
             (format s "~%   \"new QVariant ( const QCursor & )\"")))        
      (let ((static (starts-with "static" type))
            (protected (search "protected" type))
            (p (search* (format nil "~%~A~%~%" type) text)))
        (when p
          (let* ((a (+ 2 (search *2-newlines* text :start2 p)))
                 (b (search *2-newlines* text :start2 a))
                 (in (make-string-input-stream (subseq text a b))))
            (x:while-it (read-line in nil nil)
              (unless (dolist (skip *skip*)
                        (when (search skip x:it)
                          (return t)))
                (when (find #\( x:it)
                  (x:when-it* (search " = QRect( QPoint( 0, 0 ), QSize( -1, -1 ) )" x:it) ; special case
                    (setf x:it (concatenate 'string (subseq x:it 0 x:it*) " = QRect_QWIDGET_GRAB)")))
                  (let* ((fun (tokenize x:it))
                         (new (and (not static)
                                   (or (starts-with (format nil "Q_INVOKABLE ~A (" class) fun)
                                       (starts-with (format nil "~A (" class) fun))))
                         (virtual (starts-with "virtual" fun)))
                    (unless (or (and qpainter (search "QPaintDevice" fun :test 'string=))
                                (and new no-new)
                                (and new protected)
                                (find #\~ fun) ; destructor
                                ;; template problem
                                (and (string= "QVariant" class)
                                     (string= "bool canConvert () const" fun)))
                      (when virtual
                        (format so "~%   \"~A\"" fun))
                      (unless (and virtual protected)
                        (format s "~%   \"~A~A\"" (cond (new "new ") ; constructor
                                                        (protected "protected ")
                                                        (static "static ")
                                                        (t ""))
                                (subseq fun (if (starts-with "Q_INVOKABLE" fun) 12 0)))))))))))))))

(defun parse-classes (classes s so non)
  (dolist (class classes)
    (let* ((no-new (starts-with "//" class))
           (class* (string-left-trim "/" class))
           (file class*))
      (x:when-it (search "::" class*)
        (setf file   (subseq class* 0 x:it)
              class* (subseq class* (+ 2 x:it))))
      (read-text file)
      (format t "~%parsing ~A" class*)
      (let ((super (super-class class)))
        (format s "  ((~S . ~S)" class* super)
        (format so "  ((~S . ~S)" class* super))
      (dolist (type (list "public functions"
                          "protected functions"
                          "reimplemented public functions"
                          "reimplemented protected functions"
                          "static public members"
                          "static protected members"))
        (parse type class* s so no-new)
        (write-char #\.))
      (format s ")~%")
      (format so ")~%")))
  (format s "))~%")
  (format so "))~%"))

(defun start ()
  (with-open-file (*check* "multiple-inheritance.txt" :direction :output :if-exists :supersede)
    (mapc (lambda (names non)
            (let ((pre (if non #\n #\q)))
              (with-open-file (s (format nil "parsed/~C-methods.lisp" pre) :direction :output :if-exists :supersede)
                (with-open-file (so (format nil "parsed/~C-override.lisp" pre) :direction :output :if-exists :supersede)
                  (format so "(defparameter *~C-override* '(~%" pre)
                  (format s "(defparameter *~C-methods* '(~%" pre)
                  (parse-classes (mapcar (lambda (name)
                                           (string-trim "= " (if-it (position #\( name)
                                                                 (subseq name 0 it)
                                                                 name)))
                                         names)
                                 s so non)))))
          (list *q-names* *n-names*)
          (list nil :non)))
  (if (zerop *not-found*)
      (format t "~%OK~%~%")
      (warn (format nil "Text files not found: ~D" *not-found*))))

(start)