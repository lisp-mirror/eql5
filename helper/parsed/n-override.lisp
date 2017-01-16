(defparameter *n-override* '(
  (("QAbstractGraphicsShapeItem" . "QGraphicsItem")
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const")
  (("QAccessible" . NIL))
  (("QAccessibleEditableTextInterface" . NIL)
   "virtual void deleteText ( int , int ) = 0"
   "virtual void insertText ( int , const QString & ) = 0"
   "virtual void replaceText ( int , int , const QString & ) = 0")
  (("QAccessibleEvent" . NIL)
   "virtual QAccessibleInterface * accessibleInterface () const")
  (("QAccessibleInterface" . NIL)
   "virtual QColor backgroundColor () const"
   "virtual QAccessibleInterface * child ( int ) const = 0"
   "virtual QAccessibleInterface * childAt ( int , int ) const = 0"
   "virtual int childCount () const = 0"
   "virtual QAccessibleInterface * focusChild () const"
   "virtual QColor foregroundColor () const"
   "virtual int indexOfChild ( const QAccessibleInterface * ) const = 0"
   "virtual bool isValid () const = 0"
   "virtual QObject * object () const = 0"
   "virtual QAccessibleInterface * parent () const = 0"
   "virtual QRect rect () const = 0"
   "virtual QAccessible::Role role () const = 0"
   "virtual void setText ( QAccessible::Text , const QString & ) = 0"
   "virtual QString text ( QAccessible::Text ) const = 0"
   "virtual QWindow * window () const")
  (("QAccessibleObject" . "QAccessibleInterface")
   "virtual QAccessibleInterface * childAt ( int , int ) const"
   "virtual bool isValid () const"
   "virtual QObject * object () const"
   "virtual QRect rect () const"
   "virtual void setText ( QAccessible::Text , const QString & )")
  (("QAccessibleStateChangeEvent" . "QAccessibleEvent"))
  (("QAccessibleTextCursorEvent" . "QAccessibleEvent"))
  (("QAccessibleTextInsertEvent" . "QAccessibleTextCursorEvent"))
  (("QAccessibleTextInterface" . NIL)
   "virtual void addSelection ( int , int ) = 0"
   "virtual int characterCount () const = 0"
   "virtual QRect characterRect ( int ) const = 0"
   "virtual int cursorPosition () const = 0"
   "virtual int offsetAtPoint ( const QPoint & ) const = 0"
   "virtual void removeSelection ( int ) = 0"
   "virtual void scrollToSubstring ( int , int ) = 0"
   "virtual int selectionCount () const = 0"
   "virtual void setCursorPosition ( int ) = 0"
   "virtual void setSelection ( int , int , int ) = 0"
   "virtual QString text ( int , int ) const = 0")
  (("QAccessibleTextRemoveEvent" . "QAccessibleTextCursorEvent"))
  (("QAccessibleTextSelectionEvent" . "QAccessibleTextCursorEvent"))
  (("QAccessibleTextUpdateEvent" . "QAccessibleTextCursorEvent"))
  (("QAccessibleValueChangeEvent" . "QAccessibleEvent"))
  (("QAccessibleValueInterface" . NIL)
   "virtual QVariant currentValue () const = 0"
   "virtual QVariant maximumValue () const = 0"
   "virtual QVariant minimumStepSize () const = 0"
   "virtual QVariant minimumValue () const = 0"
   "virtual void setCurrentValue ( const QVariant & ) = 0")
  (("QAccessibleWidget" . "QAccessibleObject")
   "virtual QStringList actionNames () const"
   "virtual QColor backgroundColor () const"
   "virtual QAccessibleInterface * child ( int ) const"
   "virtual int childCount () const"
   "virtual void doAction ( const QString & )"
   "virtual QAccessibleInterface * focusChild () const"
   "virtual QColor foregroundColor () const"
   "virtual int indexOfChild ( const QAccessibleInterface * ) const"
   "virtual bool isValid () const"
   "virtual QStringList keyBindingsForAction ( const QString & ) const"
   "virtual QAccessibleInterface * parent () const"
   "virtual QRect rect () const"
   "virtual QAccessible::Role role () const"
   "virtual QString text ( QAccessible::Text ) const"
   "virtual QWindow * window () const")
  (("QActionEvent" . "QEvent"))
  (("QAudioDeviceInfo" . NIL))
  (("QAudioEncoderSettings" . NIL))
  (("QAudioFormat" . NIL))
  (("QAuthenticator" . NIL))
  (("QBackingStore" . NIL))
  (("QBasicTimer" . NIL))
  (("QBitArray" . NIL))
  (("QBitmap" . "QPixmap"))
  (("QBrush" . NIL))
  (("QCameraInfo" . NIL))
  (("QCameraViewfinderSettings" . NIL))
  (("QChildEvent" . "QEvent"))
  (("QCloseEvent" . "QEvent"))
  (("QColor" . NIL))
  (("QConicalGradient" . "QGradient"))
  (("QContextMenuEvent" . "QInputEvent"))
  (("QCryptographicHash" . NIL))
  (("QCursor" . NIL))
  (("QDate" . NIL))
  (("QDateTime" . NIL))
  (("QDesktopServices" . NIL))
  (("QDir" . NIL))
  (("QDirIterator" . NIL))
  (("QDragEnterEvent" . "QDragMoveEvent"))
  (("QDragLeaveEvent" . "QEvent"))
  (("QDragMoveEvent" . "QDropEvent"))
  (("QDropEvent" . "QEvent"))
  (("QDynamicPropertyChangeEvent" . "QEvent"))
  (("QEasingCurve" . NIL))
  (("QElapsedTimer" . NIL))
  (("QEnterEvent" . "QEvent"))
  (("QEvent" . NIL))
  (("QEventLoopLocker" . NIL))
  (("QExposeEvent" . "QEvent"))
  (("QFileIconProvider" . NIL)
   "virtual QIcon icon ( IconType ) const"
   "virtual QIcon icon ( const QFileInfo & ) const"
   "virtual QString type ( const QFileInfo & ) const")
  (("QFileInfo" . NIL))
  (("QFileOpenEvent" . "QEvent"))
  (("QFocusEvent" . "QEvent"))
  (("QFont" . NIL))
  (("QFontDatabase" . NIL))
  (("QFontInfo" . NIL))
  (("QFontMetrics" . NIL))
  (("QFontMetricsF" . NIL))
  (("QGestureEvent" . "QEvent"))
  (("QGradient" . NIL))
  (("QGraphicsAnchorLayout" . "QGraphicsLayout")
   "virtual int count () const"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const"
   "virtual void removeAt ( int )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const")
  (("QGraphicsEllipseItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsGridLayout" . "QGraphicsLayout")
   "virtual int count () const"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const"
   "virtual void removeAt ( int )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const")
  (("QGraphicsItem" . NIL)
   "virtual void advance ( int )"
   "virtual QRectF boundingRect () const = 0"
   "virtual bool collidesWithItem ( const QGraphicsItem * , Qt::ItemSelectionMode = Qt::IntersectsItemShape ) const"
   "virtual bool collidesWithPath ( const QPainterPath & , Qt::ItemSelectionMode = Qt::IntersectsItemShape ) const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 ) = 0"
   "virtual QPainterPath shape () const"
   "virtual int type () const"
   "virtual void contextMenuEvent ( QGraphicsSceneContextMenuEvent * )"
   "virtual void dragEnterEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragLeaveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragMoveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dropEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hoverEnterEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverLeaveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverMoveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QVariant itemChange ( GraphicsItemChange , const QVariant & )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "virtual bool sceneEvent ( QEvent * )"
   "virtual bool sceneEventFilter ( QGraphicsItem * , QEvent * )"
   "virtual void wheelEvent ( QGraphicsSceneWheelEvent * )")
  (("QGraphicsItemGroup" . "QGraphicsItem")
   "virtual QRectF boundingRect () const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual int type () const")
  (("QGraphicsLayout" . "QGraphicsLayoutItem")
   "virtual int count () const = 0"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const = 0"
   "virtual void removeAt ( int ) = 0"
   "virtual void widgetEvent ( QEvent * )"
   "virtual void updateGeometry ()")
  (("QGraphicsLayoutItem" . NIL)
   "virtual void setGeometry ( const QRectF & )"
   "virtual void updateGeometry ()"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const = 0")
  (("QGraphicsLineItem" . "QGraphicsItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsLinearLayout" . "QGraphicsLayout")
   "virtual int count () const"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const"
   "virtual void removeAt ( int )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const")
  (("QGraphicsPathItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsPixmapItem" . "QGraphicsItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsPolygonItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsRectItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsSceneContextMenuEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneDragDropEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneEvent" . "QEvent"))
  (("QGraphicsSceneHelpEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneHoverEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneMouseEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneMoveEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneResizeEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneWheelEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSimpleTextItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QHelpContentItem" . NIL))
  (("QHelpEvent" . "QEvent"))
  (("QHelpSearchQuery" . NIL))
  (("QHideEvent" . "QEvent"))
  (("QHostAddress" . NIL))
  (("QHostInfo" . NIL))
  (("QHoverEvent" . "QInputEvent"))
  (("QHttpPart" . NIL))
  (("QIcon" . NIL))
  (("QIconDragEvent" . "QEvent"))
  (("QImage" . "QPaintDevice"))
  (("QImageEncoderSettings" . NIL))
  (("QInputEvent" . "QEvent"))
  (("QInputMethodEvent" . "QEvent"))
  (("QInputMethodQueryEvent" . "QEvent"))
  (("QItemEditorCreatorBase" . NIL)
   "virtual QWidget * createWidget ( QWidget * ) const = 0"
   "virtual QByteArray valuePropertyName () const = 0")
  (("QItemEditorFactory" . NIL)
   "virtual QWidget * createEditor ( int , QWidget * ) const"
   "virtual QByteArray valuePropertyName ( int ) const")
  (("QItemSelectionRange" . NIL))
  (("QJSValue" . NIL))
  (("QJSValueIterator" . NIL))
  (("QKeyEvent" . "QInputEvent"))
  (("QKeySequence" . NIL))
  (("QLayoutItem" . NIL)
   "virtual QSizePolicy::ControlTypes controlTypes () const"
   "virtual Qt::Orientations expandingDirections () const = 0"
   "virtual QRect geometry () const = 0"
   "virtual bool hasHeightForWidth () const"
   "virtual int heightForWidth ( int ) const"
   "virtual void invalidate ()"
   "virtual bool isEmpty () const = 0"
   "virtual QLayout * layout ()"
   "virtual QSize maximumSize () const = 0"
   "virtual int minimumHeightForWidth ( int ) const"
   "virtual QSize minimumSize () const = 0"
   "virtual void setGeometry ( const QRect & ) = 0"
   "virtual QSize sizeHint () const = 0"
   "virtual QSpacerItem * spacerItem ()"
   "virtual QWidget * widget ()")
  (("QLibraryInfo" . NIL))
  (("QLinearGradient" . "QGradient"))
  (("QListWidgetItem" . NIL)
   "virtual QListWidgetItem * clone () const"
   "virtual QVariant data ( int ) const"
   "virtual void setData ( int , const QVariant & )")
  (("QLocale" . NIL))
  (("QMargins" . NIL))
  (("QMarginsF" . NIL))
  (("QMatrix" . NIL))
  (("QMatrix4x4" . NIL))
  (("QMediaContent" . NIL))
  (("QMediaResource" . NIL))
  (("QMessageAuthenticationCode" . NIL))
  (("QMetaObject" . NIL))
  (("QModelIndex" . NIL))
  (("QMouseEvent" . "QInputEvent"))
  (("QMoveEvent" . "QEvent"))
  (("QNetworkAddressEntry" . NIL))
  (("QNetworkCacheMetaData" . NIL))
  (("QNetworkConfiguration" . NIL))
  (("QNetworkCookie" . NIL))
  (("QNetworkInterface" . NIL))
  (("QNetworkProxy" . NIL))
  (("QNetworkProxyFactory" . NIL)
   "virtual QList<QNetworkProxy> queryProxy ( const QNetworkProxyQuery & = QNetworkProxyQuery() ) = 0")
  (("QNetworkProxyQuery" . NIL))
  (("QNetworkRequest" . NIL))
  (("QOpenGLFramebufferObject" . NIL))
  (("QOpenGLFramebufferObjectFormat" . NIL))
  (("QOpenGLPaintDevice" . "QPaintDevice")
   "virtual void ensureActiveTarget ()"
   "virtual int metric ( QPaintDevice::PaintDeviceMetric ) const")
  (("QOpenGLTexture" . NIL))
  (("QPageLayout" . NIL))
  (("QPageSize" . NIL))
  (("QPagedPaintDevice" . "QPaintDevice")
   "virtual bool newPage () = 0"
   "virtual void setPageSize ( PageSize )"
   "virtual void setPageSizeMM ( const QSizeF & )")
  (("QPaintDevice" . NIL)
   "virtual int metric ( PaintDeviceMetric ) const")
  (("QPaintEvent" . "QEvent"))
  (("QPainter" . NIL))
  (("QPainterPath" . NIL))
  (("QPainterPathStroker" . NIL))
  (("QPalette" . NIL))
  (("QPen" . NIL))
  (("QPersistentModelIndex" . NIL))
  (("QPicture" . "QPaintDevice")
   "virtual void setData ( const char * , uint )")
  (("QPixmap" . "QPaintDevice"))
  (("QPixmapCache" . NIL))
  (("QPrinter" . "QPagedPaintDevice")
   "virtual bool newPage ()")
  (("QPrinterInfo" . NIL))
  (("QProcessEnvironment" . NIL))
  (("QQmlAbstractUrlInterceptor" . NIL)
   "virtual QUrl intercept ( const QUrl & , DataType ) = 0")
  (("QQmlError" . NIL))
  (("QQmlImageProviderBase" . NIL)
   "virtual Flags flags () const = 0"
   "virtual ImageType imageType () const = 0")
  (("QQmlIncubationController" . NIL)
   "virtual void incubatingObjectCountChanged ( int )")
  (("QQmlIncubator" . NIL)
   "virtual void setInitialState ( QObject * )"
   "virtual void statusChanged ( Status )")
  (("QQmlNetworkAccessManagerFactory" . NIL)
   "virtual QNetworkAccessManager * create ( QObject * ) = 0")
  (("QQmlParserStatus" . NIL)
   "virtual void classBegin () = 0"
   "virtual void componentComplete () = 0")
  (("QQmlProperty" . NIL))
  (("QQmlPropertyValueSource" . NIL)
   "virtual void setTarget ( const QQmlProperty & ) = 0")
  (("QQmlScriptString" . NIL))
  (("QQuaternion" . NIL))
  (("QQuickAsyncImageProvider" . "QQuickImageProvider")
   "virtual QQuickImageResponse * requestImageResponse ( const QString & , const QSize & ) = 0")
  (("QQuickImageProvider" . "QQmlImageProviderBase")
   "virtual QImage requestImage ( const QString & , QSize * , const QSize & )"
   "virtual QPixmap requestPixmap ( const QString & , QSize * , const QSize & )"
   "virtual QQuickTextureFactory * requestTexture ( const QString & , QSize * , const QSize & )")
  (("QRadialGradient" . "QGradient"))
  (("QRegExp" . NIL))
  (("QRegion" . NIL))
  (("QRegularExpression" . NIL))
  (("QResizeEvent" . "QEvent"))
  (("QRunnable" . NIL)
   "virtual void run () = 0")
  (("QSGBasicGeometryNode" . "QSGNode"))
  (("QSGClipNode" . "QSGBasicGeometryNode"))
  (("QSGFlatColorMaterial" . "QSGMaterial"))
  (("QSGGeometry" . NIL))
  (("QSGGeometryNode" . "QSGBasicGeometryNode"))
  (("QSGMaterial" . NIL)
   "virtual int compare ( const QSGMaterial * ) const"
   "virtual QSGMaterialShader * createShader () const = 0"
   "virtual QSGMaterialType * type () const = 0")
  (("QSGMaterialShader" . NIL)
   "virtual void activate ()"
   "virtual void deactivate ()"
   "virtual void updateState ( const RenderState & , QSGMaterial * , QSGMaterial * )"
   "virtual void compile ()"
   "virtual const char * fragmentShader () const"
   "virtual void initialize ()"
   "virtual const char * vertexShader () const")
  (("QSGMaterialType" . NIL))
  (("QSGNode" . NIL)
   "virtual bool isSubtreeBlocked () const"
   "virtual void preprocess ()")
  (("QSGOpacityNode" . "QSGNode"))
  (("QSGOpaqueTextureMaterial" . "QSGMaterial"))
  (("QSGSimpleRectNode" . "QSGGeometryNode"))
  (("QSGSimpleTextureNode" . "QSGGeometryNode"))
  (("QSGTextureMaterial" . "QSGOpaqueTextureMaterial"))
  (("QSGTransformNode" . "QSGNode"))
  (("QSGVertexColorMaterial" . "QSGMaterial"))
  (("QScrollEvent" . "QEvent"))
  (("QScrollPrepareEvent" . "QEvent"))
  (("QSemaphore" . NIL))
  (("QShortcutEvent" . "QEvent"))
  (("QShowEvent" . "QEvent"))
  (("QSizePolicy" . NIL))
  (("QSpacerItem" . "QLayoutItem")
   "virtual Qt::Orientations expandingDirections () const"
   "virtual QRect geometry () const"
   "virtual bool isEmpty () const"
   "virtual QSize maximumSize () const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QSpacerItem * spacerItem ()")
  (("QSqlDatabase" . NIL))
  (("QSqlError" . NIL))
  (("QSqlField" . NIL))
  (("QSqlIndex" . "QSqlRecord"))
  (("QSqlQuery" . NIL))
  (("QSqlRecord" . NIL))
  (("QSqlRelation" . NIL))
  (("QSqlResult" . NIL)
   "virtual QVariant handle () const"
   "virtual void bindValue ( int , const QVariant & , QSql::ParamType )"
   "virtual void bindValue ( const QString & , const QVariant & , QSql::ParamType )"
   "virtual QVariant data ( int ) = 0"
   "virtual bool exec ()"
   "virtual bool fetch ( int ) = 0"
   "virtual bool fetchFirst () = 0"
   "virtual bool fetchLast () = 0"
   "virtual bool fetchNext ()"
   "virtual bool fetchPrevious ()"
   "virtual bool isNull ( int ) = 0"
   "virtual QVariant lastInsertId () const"
   "virtual int numRowsAffected () = 0"
   "virtual bool prepare ( const QString & )"
   "virtual QSqlRecord record () const"
   "virtual bool reset ( const QString & ) = 0"
   "virtual bool savePrepare ( const QString & )"
   "virtual void setActive ( bool )"
   "virtual void setAt ( int )"
   "virtual void setForwardOnly ( bool )"
   "virtual void setLastError ( const QSqlError & )"
   "virtual void setQuery ( const QString & )"
   "virtual void setSelect ( bool )"
   "virtual int size () = 0")
  (("QSslCertificate" . NIL))
  (("QSslCipher" . NIL))
  (("QSslConfiguration" . NIL))
  (("QSslError" . NIL))
  (("QSslKey" . NIL))
  (("QStandardItem" . NIL)
   "virtual QStandardItem * clone () const"
   "virtual QVariant data ( int = Qt::UserRole + 1 ) const"
   "virtual void setData ( const QVariant & , int = Qt::UserRole + 1 )"
   "virtual int type () const")
  (("QStandardPaths" . NIL))
  (("QStatusTipEvent" . "QEvent"))
  (("QStorageInfo" . NIL))
  (("QStyleOption" . NIL))
  (("QStyleOptionGraphicsItem" . "QStyleOption"))
  (("QSurface" . NIL)
   "virtual QSurfaceFormat format () const = 0"
   "virtual QSize size () const = 0"
   "virtual SurfaceType surfaceType () const = 0")
  (("QSurfaceFormat" . NIL))
  (("QSvgGenerator" . "QPaintDevice")
   "virtual int metric ( QPaintDevice::PaintDeviceMetric ) const")
  (("QSysInfo" . NIL))
  (("QSystemSemaphore" . NIL))
  (("QTableWidgetItem" . NIL)
   "virtual QTableWidgetItem * clone () const"
   "virtual QVariant data ( int ) const"
   "virtual void setData ( int , const QVariant & )")
  (("QTableWidgetSelectionRange" . NIL))
  (("QTabletEvent" . "QInputEvent"))
  (("QTextBlock" . NIL))
  (("QTextBlockFormat" . "QTextFormat"))
  (("QTextBlockUserData" . NIL))
  (("QTextBoundaryFinder" . NIL))
  (("QTextCharFormat" . "QTextFormat"))
  (("QTextCodec" . NIL)
   "virtual QList<QByteArray> aliases () const"
   "virtual int mibEnum () const = 0"
   "virtual QByteArray name () const = 0"
   "virtual QByteArray convertFromUnicode ( const QChar * , int , ConverterState * ) const = 0"
   "virtual QString convertToUnicode ( const char * , int , ConverterState * ) const = 0")
  (("QTextCursor" . NIL))
  (("QTextDecoder" . NIL))
  (("QTextDocumentFragment" . NIL))
  (("QTextDocumentWriter" . NIL))
  (("QTextEncoder" . NIL))
  (("QTextFormat" . NIL))
  (("QTextFragment" . NIL))
  (("QTextFrameFormat" . "QTextFormat"))
  (("QTextImageFormat" . "QTextCharFormat"))
  (("QTextLayout" . NIL))
  (("QTextLength" . NIL))
  (("QTextLine" . NIL))
  (("QTextListFormat" . "QTextFormat"))
  (("QTextOption" . NIL))
  (("QTextTableCell" . NIL))
  (("QTextTableCellFormat" . "QTextCharFormat"))
  (("QTextTableFormat" . "QTextFrameFormat"))
  (("QTime" . NIL))
  (("QTimeZone" . NIL))
  (("QTimerEvent" . "QEvent"))
  (("QToolTip" . NIL))
  (("QTouchDevice" . NIL))
  (("QTouchEvent" . "QInputEvent"))
  (("QTransform" . NIL))
  (("QTreeWidgetItem" . NIL)
   "virtual QTreeWidgetItem * clone () const"
   "virtual QVariant data ( int , int ) const"
   "virtual void setData ( int , int , const QVariant & )")
  (("QUndoCommand" . NIL)
   "virtual int id () const"
   "virtual bool mergeWith ( const QUndoCommand * )"
   "virtual void redo ()"
   "virtual void undo ()")
  (("QUrl" . NIL))
  (("QUuid" . NIL))
  (("QVariant" . NIL))
  (("QVector2D" . NIL))
  (("QVector3D" . NIL))
  (("QVector4D" . NIL))
  (("QVideoEncoderSettings" . NIL))
  (("QVideoFrame" . NIL))
  (("QVideoSurfaceFormat" . NIL))
  (("QWebDatabase" . NIL))
  (("QWebElement" . NIL))
  (("QWebElementCollection" . NIL))
  (("QWebHistory" . NIL))
  (("QWebHistoryItem" . NIL))
  (("QWebHitTestResult" . NIL))
  (("QWebSecurityOrigin" . NIL))
  (("QWebSettings" . NIL))
  (("QWhatsThis" . NIL))
  (("QWhatsThisClickedEvent" . "QEvent"))
  (("QWheelEvent" . "QInputEvent"))
  (("QWidgetItem" . "QLayoutItem")
   "virtual QSizePolicy::ControlTypes controlTypes () const"
   "virtual Qt::Orientations expandingDirections () const"
   "virtual QRect geometry () const"
   "virtual bool hasHeightForWidth () const"
   "virtual int heightForWidth ( int ) const"
   "virtual bool isEmpty () const"
   "virtual QSize maximumSize () const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QWidget * widget ()")
  (("QWindowStateChangeEvent" . "QEvent"))
))
