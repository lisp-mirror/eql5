;;; copyright (c) Polos Ruetz

(load "../src/lisp/x")
(load "share")
(load "load-modules")

(defvar *skip*
  (list "(preliminary)"
        "(deprecated)"
        "(obsolete)"
        "(volatile "
        "connect("
        "const * const *"
        "<Attribute>"
        "<FormatRange>"
        "<WizardButton>"
        "<WritingSystem>"
        "[4][4]"
        "const char * const[]"
        "defaultAction"
        "float *"
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
        "setItemRoleNames"
        "setPrinterSelectionOption"
        "setupUi"
        "singleShot"
        "toAscii"
        "versionFunctions"
        "NSDate"
        "NSMenu"
        "NSURL"
        "qintptr"
        "quintptr"
        "quint8 *"
        "qwsSet"
        "sockaddr"
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
        "ExecutionEngine"
        "QIconEngine"
        "QPaintEngine"
        "QPrintEngine"
        "QSharedPointer"
        "FILE"
        "FT_Face"
        "GLfloat *"
        "GLfloat["
        "GLint *"
        "GLuint *"
        "GUID"
        "Handle"
        "HANDLE"
        "HBITMAP"
        "HCURSOR"
        "HDC"
        "HICON"
        "KeyValue"
        "NavigationMode"
        " Margins "
        "Margins	margins"
        "MSG"
        "OffsetData"
        "PaperSources"
        "PlaceholderText"
        "PointerToMemberFunction"
        "RawHeaderPair"
        "RenderFlags"
        "RSgImage"
        "SearchHit"
        "T "
        "T	"
        "Q_PID"
        "Q_IPV6ADDR"        
        "QAbstractOpenGLFunctions"
        "QAccessible::State"
        "QPair"
        "QDataStream"
        "QDecoration"
        "QGenericArgument"
        "QGenericMatrix"
        "QGraphicsTransform *"
        "QIODevice"
        "QList<Country>"
        "QList<T>"
        "QList<Tab>"
        "QList<QVariant>"
        "QByteArray *"
        "QByteArray & buffer ()"
        "QMatrix2x2"
        "QMatrix2x3"
        "QMatrix2x4"
        "QMatrix3x2"
        "QMatrix3x3"
        "QMatrix3x4"
        "QMatrix4x2"
        "QMatrix4x3"
        "QMatrix4x4 *"
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
        "QVariantMap"
        "QVector2D *"
        "QVector3D *"
        "QVector4D *"
        "QWebChannel"
        "QWebEngineContextMenuData"
        "QWebEngineHistory"
        "QWebHistory"
        "QWebEngineScriptCollection &	"
        "QWebNetworkRequest"
        "QWSEvent"
        "QXmlStreamReader"
        "WinPage"
        "X11"
        "XEvent"
        "**"
        "&&"
        "nativeArguments("
        "setNativeArguments("
        "viewportAttributesForSize"
        "const QGraphicsObject *"
        "swap(QDns"
        "swap(QHttp"
        "swap(QNetwork"
        "swap(QStorage"
        "::Attribute"
        "::AttributeSet"
        "::ColoredPoint2D"
        "::Point2D"
        "::Renderer"
        "::TexturePoint2D"
        "Attribute *"
        "AttributeSet "
        "ColoredPoint2D *"
        "Point2D *"
        "Renderer *"
        "TexturePoint2D *"
        ;; exclude what won't compile with Qt 5.5.1:
        "QAudio::Role"            ; 5.6
        "textureFactoryForImage(" ; 5.6
        "	moveMedia("       ; 5.7
        ))

(defvar *check*         nil)
(defvar *2-newlines*    (format nil "~%~%"))
(defvar *var-name-trim* "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZY1234567890_")

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
          (if (find-if (lambda (ch) (find ch "&*>")) x)
              (string-right-trim *var-name-trim* x)
              (subseq x 0 (position #\Space x :from-end t))))))

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
  (defun super-names (class &optional (word "Inherits:"))
    (x:when-it (search* word text)
      (let* ((line (subseq text (+ x:it (length word)) (position #\Newline text :start x:it)))
             (names (simplify line nil)))
        (unless names
          (fresh-line)
          (error "No super class found for: ~S" class))
        names)))
  (defun super-class (class)
    (let ((super (remove "and" (super-names class) :test 'string=)))
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
             (dolist (device (list "QImage" "QPdfWriter" "QPicture" "QPixmap" "QPrinter" "QWidget")) 
               (format s "~%   \"new QPainter ( ~A * )\"~
                          ~%   \"bool begin ( ~A * )\""
                       device device)))
            (qvariant
             (format s "~%   \"new QVariant ( const QCursor & )\"")))        
      (let ((static (x:starts-with "static" type))
            (protected (search "protected" type))
            (p (search* (format nil "~%~A~%~%" type) text)))
        (when p
          (let* ((a (+ 2 (search *2-newlines* text :start2 p)))
                 (b (search *2-newlines* text :start2 a))
                 (in (make-string-input-stream (subseq text a b))))
            (x:while-it (read-line in nil nil)
              (unless (or (dolist (skip *skip*)
                            (when (search skip x:it)
                              (return t)))
                          (and (search "QHash<" x:it)
                               (not (search "QHash<int, QByteArray>" x:it))) ; needed in QAbstractItemModel
                          (and (search "Functor" x:it)
                               (not (search "FunctorOrLambda" x:it))))       ; needed for QWebEngine
                (when (search "QByteArray const" x:it)
                  (setf x:it (x:string-substitute "const QByteArray" "QByteArray const" x:it)))
                (when (search "QHash<int, QByteArray>" x:it)
                  (setf x:it (x:string-substitute "QHashIntQByteArray" "QHash<int, QByteArray>" x:it)))
                (when (find #\( x:it)
                  ;; special default values
                  (x:when-it* (search " = QRect( QPoint( 0, 0 ), QSize( -1, -1 ) )" x:it)
                    (setf x:it (x:cc (subseq x:it 0 x:it*) " = QRect_DEFAULT)")))
                  (x:when-it* (search " = QMarginsF( 0, 0, 0, 0 )" x:it)
                    (setf x:it (x:cc (subseq x:it 0 x:it*) " = QMarginsF_DEFAULT)")))
                  (x:when-it* (search " = QPageLayout( QPageSize( QPageSize::A4 ), QPageLayout::Portrait, QMarginsF() )" x:it)
                    (setf x:it (x:cc (subseq x:it 0 x:it*) " = QPageLayout_DEFAULT)")))
                  (let* ((fun (tokenize x:it))
                         (new (and (not static)
                                   (x:starts-with (format nil "~A (" class) fun)))
                         (virtual (x:starts-with "virtual" fun)))
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
                                fun)))))))))))))

(defun parse-classes (classes s so non)
  (dolist (class classes)
    (let* ((no-new (x:starts-with "//" class))
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
                                           (string-trim "= " (x:if-it (position #\( name)
                                                                      (subseq name 0 x:it)
                                                                      name)))
                                         names)
                                 s so non)))))
          (list *q-names* *n-names*)
          (list nil :non)))
  (if (zerop *not-found*)
      (format t "~%OK~%~%")
      (warn (format nil "Text files not found: ~D" *not-found*))))

(start)
