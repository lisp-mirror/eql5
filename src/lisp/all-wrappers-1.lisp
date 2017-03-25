(defpackage :eql
  (:export
   #:|abbreviation|
   #:|abortHostLookup.QHostInfo|
   #:|abort|
   #:|about.QMessageBox|
   #:|aboutQt.QMessageBox|
   #:|aboutQt|
   #:|aboutToActivate|
   #:|aboutToBeDestroyed|
   #:|aboutToClose|
   #:|aboutToCompose|
   #:|aboutToHide|
   #:|aboutToQuit|
   #:|aboutToResize|
   #:|aboutToShow|
   #:|absoluteDir|
   #:|absoluteFilePath|
   #:|absolutePath|
   #:|acceleration|
   #:|accept(QGesture*)|
   #:|accept(Qt::GestureType)|
   #:|acceptDrops|
   #:|acceptError|
   #:|acceptHoverEvents|
   #:|acceptMode|
   #:|acceptProposedAction|
   #:|acceptRichText|
   #:|acceptTouchEvents|
   #:|acceptedMouseButtons|
   #:|accepted|
   #:|accept|
   #:|accessibleDescription|
   #:|accessibleInterface.QAccessible|
   #:|accessibleInterface|
   #:|accessibleName|
   #:|accessibleRoot|
   #:|accessibleText|
   #:|acquire|
   #:|actionAt|
   #:|actionChanged|
   #:|actionGeometry|
   #:|actionGroup|
   #:|actionInterface|
   #:|actionNames|
   #:|actionText|
   #:|actionTriggered|
   #:|actions|
   #:|action|
   #:|activateCurrentItem|
   #:|activateNextSubWindow|
   #:|activatePreviousSubWindow|
   #:|activateWindow|
   #:|activated(QModelIndex)|
   #:|activated(QString)|
   #:|activated(int)|
   #:|activatedAmbiguously|
   #:|activated|
   #:|activate|
   #:|activationOrder|
   #:|activeAction|
   #:|activeChanged|
   #:|activeConfiguration|
   #:|activeFocusChanged|
   #:|activeFocusItemChanged|
   #:|activeFocusItem|
   #:|activeFocusOnTabChanged|
   #:|activeFocusOnTab|
   #:|activeGestures|
   #:|activeModalWidget.QApplication|
   #:|activePanel|
   #:|activePopupWidget.QApplication|
   #:|activeStackChanged|
   #:|activeStack|
   #:|activeSubWindow|
   #:|activeWindow.QApplication|
   #:|activeWindow|
   #:|active|
   #:|actualLocationChanged|
   #:|actualLocation|
   #:|actualSize(QSize...)|
   #:|actualSize(QWindow*...)|
   #:|actualSize|
   #:|addAccessWhitelistEntry|
   #:|addAction(QAction*)|
   #:|addAction(QAction*...)|
   #:|addAction(QIcon...)|
   #:|addAction(QString)|
   #:|addAction(QString...)|
   #:|addActions|
   #:|addAction|
   #:|addAnchors|
   #:|addAnchor|
   #:|addAnimation|
   #:|addApplicationFont.QFontDatabase|
   #:|addApplicationFontFromData.QFontDatabase|
   #:|addBindValue|
   #:|addButton(QAbstractButton*...)|
   #:|addButton(QString...)|
   #:|addButton|
   #:|addChildLayoutItem|
   #:|addChildren|
   #:|addChild|
   #:|addClass|
   #:|addControllingSignal|
   #:|addCornerAnchors|
   #:|addCubicBezierSegment|
   #:|addCustomFilter|
   #:|addDatabase(QSqlDriver*).QSqlDatabase|
   #:|addDatabase(QSqlDriver*...).QSqlDatabase|
   #:|addDatabase(QString).QSqlDatabase|
   #:|addDatabase(QString...).QSqlDatabase|
   #:|addDatabase.QSqlDatabase|
   #:|addData|
   #:|addDays|
   #:|addDefaultAnimation|
   #:|addDockWidget|
   #:|addEllipse|
   #:|addFile|
   #:|addHistoryEntry|
   #:|addImageProvider|
   #:|addImportPath|
   #:|addItem(QIcon...)|
   #:|addItem(QListWidgetItem*)|
   #:|addItem(QString)|
   #:|addItem(QString...)|
   #:|addItems|
   #:|addItem|
   #:|addLayout|
   #:|addLibraryPath.QCoreApplication|
   #:|addLine|
   #:|addLocalScheme.QWebSecurityOrigin|
   #:|addMSecs|
   #:|addMapping|
   #:|addMedia(QList<QMediaContent>)|
   #:|addMedia(QMediaContent)|
   #:|addMedia|
   #:|addMenu(QMenu*)|
   #:|addMenu(QString)|
   #:|addMenu|
   #:|addMonths|
   #:|addPage|
   #:|addPaths|
   #:|addPath|
   #:|addPause|
   #:|addPendingConnection|
   #:|addPermanentWidget|
   #:|addPixmap|
   #:|addPluginPath|
   #:|addPolygon|
   #:|addPropertyWatch|
   #:|addRect|
   #:|addRegion|
   #:|addResource|
   #:|addRoundedRect|
   #:|addRow(QLayout*)|
   #:|addRow(QString,QLayout*)|
   #:|addRow(QString,QWidget*)|
   #:|addRow(QString...)|
   #:|addRow(QWidget*)|
   #:|addRow(QWidget*,QLayout*)|
   #:|addRow(QWidget*,QWidget*)|
   #:|addRow(QWidget*...)|
   #:|addRow|
   #:|addScrollBarWidget|
   #:|addSearchPath.QDir|
   #:|addSecs|
   #:|addSection|
   #:|addSelection|
   #:|addSeparator|
   #:|addShaderFromSourceCode(QOpenGLShader::ShaderType,QByteArray)|
   #:|addShaderFromSourceCode(QOpenGLShader::ShaderType,QString)|
   #:|addShaderFromSourceCode(QOpenGLShader::ShaderType,const char*)|
   #:|addShaderFromSourceCode|
   #:|addShaderFromSourceFile|
   #:|addShader|
   #:|addSimpleText|
   #:|addSpacerItem|
   #:|addSpacing|
   #:|addStack|
   #:|addState|
   #:|addStretch|
   #:|addStrut|
   #:|addSubWindow|
   #:|addTCBSegment|
   #:|addTab|
   #:|addText|
   #:|addToGroup|
   #:|addToJavaScriptWindowObject|
   #:|addToolBar(QString)|
   #:|addToolBar(QToolBar*)|
   #:|addToolBarBreak|
   #:|addToolBar|
   #:|addTopLevelItems|
   #:|addTopLevelItem|
   #:|addTransition(QAbstractState*)|
   #:|addTransition(QAbstractTransition*)|
   #:|addTransition|
   #:|addWidget|
   #:|addYears|
   #:|added|
   #:|addressEntries|
   #:|addresses|
   #:|add|
   #:|adjoint|
   #:|adjustSize|
   #:|adjusted|
   #:|advance|
   #:|afterAnimating|
   #:|afterRendering|
   #:|afterSynchronizing|
   #:|alert.QApplication|
   #:|alert|
   #:|algorithm|
   #:|aliases|
   #:|alignedRect.QStyle|
   #:|alignment|
   #:|allAddresses.QNetworkInterface|
   #:|allColumnsShowFocus|
   #:|allCookies|
   #:|allFormats|
   #:|allGray|
   #:|allInterfaces.QNetworkInterface|
   #:|allKeys|
   #:|allOrigins.QWebSecurityOrigin|
   #:|allSelectors|
   #:|allWidgets.QApplication|
   #:|allWindows.QGuiApplication|
   #:|allocateStorage|
   #:|allocate|
   #:|allowedAreasChanged|
   #:|allowedAreas|
   #:|allowedNextProtocols|
   #:|allowsErrorInteraction|
   #:|allowsInteraction|
   #:|alphaBufferSize|
   #:|alphaF|
   #:|alpha|
   #:|alternateBase|
   #:|alternateText|
   #:|alternatingRowColors|
   #:|amText|
   #:|amplitude|
   #:|anchorAt|
   #:|anchorClicked|
   #:|anchorHref|
   #:|anchorNames|
   #:|anchor|
   #:|angleAtPercent|
   #:|angleBetween|
   #:|angleChanged|
   #:|angleDelta|
   #:|angle|
   #:|animateClick|
   #:|animated|
   #:|animatingChanged|
   #:|animationAt|
   #:|animationCount|
   #:|animations|
   #:|answerRect|
   #:|antennaConnectedChanged|
   #:|antialiasingChanged|
   #:|antialiasing|
   #:|apertureChanged|
   #:|apertureRangeChanged|
   #:|aperture|
   #:|appendChildNode|
   #:|appendColumns|
   #:|appendColumn|
   #:|appendHtml|
   #:|appendInside(QString)|
   #:|appendInside(QWebElement)|
   #:|appendInside|
   #:|appendOutside(QString)|
   #:|appendOutside(QWebElement)|
   #:|appendOutside|
   #:|appendPlainText|
   #:|appendRow(QList<QStandardItem*>)|
   #:|appendRow(QStandardItem*)|
   #:|appendRows|
   #:|appendRow|
   #:|appendUndoItem|
   #:|append|
   #:|applicationCacheQuotaExceeded|
   #:|applicationDirPath.QCoreApplication|
   #:|applicationDisplayName.QGuiApplication|
   #:|applicationFilePath.QCoreApplication|
   #:|applicationFontFamilies.QFontDatabase|
   #:|applicationName.QCoreApplication|
   #:|applicationNameChanged|
   #:|applicationName|
   #:|applicationPid.QCoreApplication|
   #:|applicationProxy.QNetworkProxy|
   #:|applicationState.QGuiApplication|
   #:|applicationStateChanged|
   #:|applicationVersion.QCoreApplication|
   #:|applicationVersionChanged|
   #:|arcMoveTo|
   #:|arcTo|
   #:|areSharing.QOpenGLContext|
   #:|arguments.QCoreApplication|
   #:|arguments|
   #:|arrowType|
   #:|ascent|
   #:|aspectRatioMode|
   #:|assignProperty|
   #:|associatedGraphicsWidgets|
   #:|associatedWidgets|
   #:|atBlockEnd|
   #:|atBlockStart|
   #:|atEnd|
   #:|atStart|
   #:|attachment|
   #:|attributeCount|
   #:|attributeLocation(QByteArray)|
   #:|attributeLocation(QString)|
   #:|attributeLocation(const char*)|
   #:|attributeLocation|
   #:|attributeNS|
   #:|attributeNames|
   #:|attribute|
   #:|at|
   #:|audioAvailableChanged|
   #:|audioBitRate|
   #:|audioCodecDescription|
   #:|audioCodec|
   #:|audioInputChanged|
   #:|audioInputDescription|
   #:|audioInputs|
   #:|audioInput|
   #:|audioRoleChanged|
   #:|audioSettings|
   #:|authenticationMethod|
   #:|authenticationRequired|
   #:|authority|
   #:|autoClose|
   #:|autoDefault|
   #:|autoDelete|
   #:|autoExclusive|
   #:|autoExpandDelay|
   #:|autoFillBackground|
   #:|autoFormatting|
   #:|autoHide|
   #:|autoRaise|
   #:|autoRepeatDelay|
   #:|autoRepeatInterval|
   #:|autoRepeat|
   #:|autoReset|
   #:|autoSaveFilter|
   #:|autoScrollMargin|
   #:|autoSipEnabled|
   #:|availabilityChanged(QMultimedia::AvailabilityStatus)|
   #:|availabilityChanged(bool)|
   #:|availabilityChanged|
   #:|availability|
   #:|availableAudioInputsChanged|
   #:|availableCameras.QCameraInfo|
   #:|availableCodecs.QTextCodec|
   #:|availableDevices.QAudioDeviceInfo|
   #:|availableGeometry(QPoint)|
   #:|availableGeometry(const QWidget*)|
   #:|availableGeometry(int)|
   #:|availableGeometryChanged|
   #:|availableGeometry|
   #:|availableMetaData|
   #:|availableMibs.QTextCodec|
   #:|availablePrinterNames.QPrinterInfo|
   #:|availableRedoSteps|
   #:|availableSizes|
   #:|availableSize|
   #:|availableTimeZoneIds(QLocale::Country).QTimeZone|
   #:|availableTimeZoneIds(int).QTimeZone|
   #:|availableTimeZoneIds.QTimeZone|
   #:|availableUndoSteps|
   #:|availableVirtualGeometry|
   #:|availableVirtualSize|
   #:|available|
   #:|averageCharWidth|
   #:|axisChanged|
   #:|axis|
   #:|backgroundBrush|
   #:|backgroundColor|
   #:|backgroundMode|
   #:|backgroundRole|
   #:|backgroundVisible|
   #:|background|
   #:|backingStore|
   #:|backspace|
   #:|backwardAvailable|
   #:|backwardHistoryCount|
   #:|backward|
   #:|back|
   #:|bandChanged|
   #:|band|
   #:|baseName|
   #:|baseSize|
   #:|baseStyle|
   #:|baseUrlChanged|
   #:|baseUrl|
   #:|baselineOffsetChanged|
   #:|baselineOffset|
   #:|base|
   #:|batchSize|
   #:|bcp47Name|
   #:|bearerTypeFamily|
   #:|bearerTypeName|
   #:|bearerType|
   #:|beep.QApplication|
   #:|beforeDelete|
   #:|beforeInsert|
   #:|beforeRendering|
   #:|beforeSynchronizing|
   #:|beforeUpdate|
   #:|before|
   #:|begin(QImage*)|
   #:|begin(QPdfWriter*)|
   #:|begin(QPicture*)|
   #:|begin(QPixmap*)|
   #:|begin(QPrinter*)|
   #:|begin(QWidget*)|
   #:|beginCreate|
   #:|beginEditBlock|
   #:|beginGroup|
   #:|beginInsertColumns|
   #:|beginInsertRows|
   #:|beginLayout|
   #:|beginMacro|
   #:|beginMoveColumns|
   #:|beginMoveRows|
   #:|beginNativePainting|
   #:|beginPaint|
   #:|beginReadArray|
   #:|beginRemoveColumns|
   #:|beginRemoveRows|
   #:|beginResetModel|
   #:|beginTransaction|
   #:|beginWriteArray|
   #:|begin|
   #:|bind(QHostAddress)|
   #:|bind(QHostAddress...)|
   #:|bind(ushort)|
   #:|bind(ushort...)|
   #:|bindAttributeLocation(QByteArray...)|
   #:|bindAttributeLocation(QString...)|
   #:|bindAttributeLocation(const char*...)|
   #:|bindAttributeLocation|
   #:|bindDefault.QOpenGLFramebufferObject|
   #:|bindValue(QString...)|
   #:|bindValue(int...)|
   #:|bindValueType(QString)|
   #:|bindValueType(int)|
   #:|bindValueType|
   #:|bindValue|
   #:|bindingSyntax|
   #:|bind|
   #:|bitPlaneCount|
   #:|bitRate|
   #:|bitmap|
   #:|blackF|
   #:|black|
   #:|blitFramebuffer(QOpenGLFramebufferObject*,QOpenGLFramebufferObject*...).QOpenGLFramebufferObject|
   #:|blitFramebuffer(QOpenGLFramebufferObject*,QRect...).QOpenGLFramebufferObject|
   #:|blitFramebuffer.QOpenGLFramebufferObject|
   #:|blockBoundingGeometry|
   #:|blockBoundingRect|
   #:|blockCharFormat|
   #:|blockCountChanged|
   #:|blockCount|
   #:|blockFormatIndex|
   #:|blockFormat|
   #:|blockList|
   #:|blockNumber|
   #:|blockSignals|
   #:|block|
   #:|blueBufferSize|
   #:|blueF|
   #:|blue|
   #:|blurHintsChanged|
   #:|blurHints|
   #:|blurRadiusChanged|
   #:|blurRadius|
   #:|bold|
   #:|boolProperty|
   #:|booleanLiteral|
   #:|borderBrush|
   #:|borderColor|
   #:|borderStyle|
   #:|border|
   #:|bottomChanged|
   #:|bottomMargin|
   #:|bottomPadding|
   #:|bottomRight|
   #:|bottomRow|
   #:|bottom|
   #:|boundTextureId.QOpenGLTexture|
   #:|boundValue(QString)|
   #:|boundValue(int)|
   #:|boundValueCount|
   #:|boundValueName|
   #:|boundValues|
   #:|boundValue|
   #:|boundaryReasons|
   #:|boundary|
   #:|boundingRect(QChar)|
   #:|boundingRect(QRect...)|
   #:|boundingRect(QRectF,QString...)|
   #:|boundingRect(QRectF,int...)|
   #:|boundingRect(QRectF...)|
   #:|boundingRect(QString)|
   #:|boundingRectFor|
   #:|boundingRect|
   #:|boundingRegionGranularity|
   #:|boundingRegion|
   #:|boundsOnElement|
   #:|brightText|
   #:|brightnessChanged|
   #:|brightness|
   #:|broadcast|
   #:|brushOrigin|
   #:|brushProperty|
   #:|brush|
   #:|bspTreeDepth|
   #:|buddy|
   #:|bufferFormatChanged|
   #:|bufferFormat|
   #:|bufferSize|
   #:|bufferStatusChanged|
   #:|bufferStatus|
   #:|buffer|
   #:|buildAbi.QSysInfo|
   #:|buildCpuArchitecture.QSysInfo|
   #:|bundleName|
   #:|buttonClicked(QAbstractButton*)|
   #:|buttonClicked(int)|
   #:|buttonClicked|
   #:|buttonDownPos|
   #:|buttonDownScenePos|
   #:|buttonDownScreenPos|
   #:|buttonPressed(QAbstractButton*)|
   #:|buttonPressed(int)|
   #:|buttonPressed|
   #:|buttonReleased(QAbstractButton*)|
   #:|buttonReleased(int)|
   #:|buttonReleased|
   #:|buttonRole|
   #:|buttonSymbols|
   #:|buttonText|
   #:|buttonToggled(QAbstractButton*...)|
   #:|buttonToggled(int...)|
   #:|buttonToggled|
   #:|buttons|
   #:|button|
   #:|byteCount|
   #:|byteOrder|
   #:|bytesAvailable|
   #:|bytesForDuration|
   #:|bytesForFrames|
   #:|bytesFree|
   #:|bytesPerFrame|
   #:|bytesPerLine|
   #:|bytesReceived|
   #:|bytesToWrite|
   #:|bytesTotal|
   #:|bytesWritten|
   #:|c.QLocale|
   #:|caCertificates|
   #:|cacheDirectory|
   #:|cacheEnabled|
   #:|cacheKey|
   #:|cacheLimit.QPixmapCache|
   #:|cacheMode|
   #:|cacheSize|
   #:|cache|
   #:|caching|
   #:|calendarPopup|
   #:|calendarWidget|
   #:|callAsConstructor|
   #:|callWithInstance|
   #:|call|
   #:|canConvert|
   #:|canDropMimeData|
   #:|canEncode(QChar)|
   #:|canEncode(QString)|
   #:|canEncode|
   #:|canFetchMore|
   #:|canPaste|
   #:|canReadLine|
   #:|canRedoChanged|
   #:|canRedo|
   #:|canUndoChanged|
   #:|canUndo|
   #:|cancelButtonText|
   #:|cancelCapture|
   #:|cancelDelayedEvent|
   #:|cancelIndexing|
   #:|cancelQuery|
   #:|cancelSearching|
   #:|cancelSearch|
   #:|canceledGestures|
   #:|canceled|
   #:|cancel|
   #:|canonicalFilePath|
   #:|canonicalPath|
   #:|canonicalRequest|
   #:|canonicalResource|
   #:|canonicalUrl|
   #:|capStyle|
   #:|capabilities|
   #:|capitalization|
   #:|captureCount|
   #:|captureDestinationChanged|
   #:|captureDestination|
   #:|captureModeChanged|
   #:|captureMode|
   #:|capturedTexts|
   #:|capture|
   #:|cap|
   #:|cascadeSubWindows|
   #:|cascadingSectionResizes|
   #:|caseSensitivity|
   #:|category|
   #:|cdUp|
   #:|cd|
   #:|cellActivated|
   #:|cellAt(QTextCursor)|
   #:|cellAt(int)|
   #:|cellAt|
   #:|cellChanged|
   #:|cellClicked|
   #:|cellDoubleClicked|
   #:|cellEntered|
   #:|cellPadding|
   #:|cellPressed|
   #:|cellRect|
   #:|cellSpacing|
   #:|cellWidget|
   #:|centerButtons|
   #:|centerCursor|
   #:|centerOn(QPointF)|
   #:|centerOn(const QGraphicsItem*)|
   #:|centerOnScroll|
   #:|centerOn|
   #:|centerPoint|
   #:|centerRadius|
   #:|center|
   #:|centralWidget|
   #:|certificate|
   #:|changeBrightness|
   #:|changeContrast|
   #:|changeCurrentOnDrag|
   #:|changeFlags|
   #:|changeGamma|
   #:|changeOverrideCursor.QGuiApplication|
   #:|changePersistentIndexList|
   #:|changePersistentIndex|
   #:|changePosition|
   #:|changeSize|
   #:|changed|
   #:|channelCount|
   #:|charFormatIndex|
   #:|charFormat|
   #:|characterAt|
   #:|characterCount|
   #:|characterRect|
   #:|checkBox|
   #:|checkConnectArgs.QMetaObject|
   #:|checkOverflow(double)|
   #:|checkOverflow(int)|
   #:|checkOverflow|
   #:|checkState|
   #:|checkedAction|
   #:|checkedButton|
   #:|checkedId|
   #:|childAtIndex|
   #:|childAt|
   #:|childCount|
   #:|childFrames|
   #:|childGroups|
   #:|childIndicatorPolicy|
   #:|childItems|
   #:|childKeys|
   #:|childModeChanged|
   #:|childMode|
   #:|childPosition|
   #:|childrenBoundingRect|
   #:|childrenChanged|
   #:|childrenCollapsible|
   #:|childrenRectChanged|
   #:|childrenRect|
   #:|childrenRegion|
   #:|children|
   #:|child|
   #:|ciphers|
   #:|classBegin|
   #:|classInfoCount|
   #:|classInfoOffset|
   #:|className|
   #:|classes|
   #:|cleanChanged|
   #:|cleanIcon|
   #:|cleanIndex|
   #:|cleanPath.QDir|
   #:|cleanText|
   #:|cleanupPage|
   #:|cleanupSceneGraph|
   #:|clear.QPixmapCache|
   #:|clearAccessCache|
   #:|clearAdditionalFormats|
   #:|clearBackground|
   #:|clearBeforeRendering|
   #:|clearBit|
   #:|clearColor|
   #:|clearColumnWidthConstraints|
   #:|clearComponentCache|
   #:|clearContents|
   #:|clearCurrentIndex|
   #:|clearEditText|
   #:|clearError|
   #:|clearFocus|
   #:|clearForeground|
   #:|clearHistory|
   #:|clearIconDatabase.QWebSettings|
   #:|clearLayout|
   #:|clearMapping|
   #:|clearMask|
   #:|clearMaximumDateTime|
   #:|clearMaximumDate|
   #:|clearMaximumTime|
   #:|clearMemoryCaches.QWebSettings|
   #:|clearMessage|
   #:|clearMinimumDateTime|
   #:|clearMinimumDate|
   #:|clearMinimumTime|
   #:|clearMode|
   #:|clearPropertyFlags|
   #:|clearProperty|
   #:|clearSelection|
   #:|clearSpans|
   #:|clearUndoRedoStacks|
   #:|clearValues|
   #:|clear|
   #:|clickedButton|
   #:|clicked|
   #:|click|
   #:|clipBoundingRect|
   #:|clipChanged|
   #:|clipPath|
   #:|clipRect|
   #:|clipRegion|
   #:|clipboard.QGuiApplication|
   #:|clip|
   #:|clockType.QElapsedTimer|
   #:|cloneDatabase.QSqlDatabase|
   #:|clone|
   #:|closeActiveSubWindow|
   #:|closeAllSubWindows|
   #:|closeAllWindows|
   #:|closeEditor|
   #:|closePersistentEditor|
   #:|closeReadChannel|
   #:|closeSubpath|
   #:|closeWriteChannel|
   #:|closestAcceptableSize.QLayout|
   #:|closestLegalPosition|
   #:|close|
   #:|closingDown.QCoreApplication|
   #:|closing|
   #:|codecForHtml.QTextCodec|
   #:|codecForLocale.QTextCodec|
   #:|codecForMib.QTextCodec|
   #:|codecForName(QByteArray).QTextCodec|
   #:|codecForName(const char*).QTextCodec|
   #:|codecForName.QTextCodec|
   #:|codecForUtfText.QTextCodec|
   #:|codec|
   #:|collapseAll|
   #:|collapseExtendedSearch|
   #:|collapseItem|
   #:|collapsed|
   #:|collapse|
   #:|collateCopies|
   #:|collectGarbage|
   #:|collectionFile|
   #:|collidesWithItem|
   #:|collidesWithPath|
   #:|collidingItems|
   #:|colorChanged|
   #:|colorCount|
   #:|colorData|
   #:|colorFilter|
   #:|colorMode|
   #:|colorNames.QColor|
   #:|colorProperty|
   #:|colorSelected|
   #:|colorSpec.QApplication|
   #:|colorTable|
   #:|color|
   #:|columnAlignment|
   #:|columnAt|
   #:|columnCountChanged|
   #:|columnCount|
   #:|columnIntersectsSelection|
   #:|columnMaximumWidth|
   #:|columnMinimumWidth|
   #:|columnMoved|
   #:|columnNumber|
   #:|columnPreferredWidth|
   #:|columnResized|
   #:|columnSpacing|
   #:|columnSpan|
   #:|columnStretchFactor|
   #:|columnStretch|
   #:|columnViewportPosition|
   #:|columnWidthConstraints|
   #:|columnWidths|
   #:|columnWidth|
   #:|columnsAboutToBeInserted|
   #:|columnsAboutToBeMoved|
   #:|columnsAboutToBeRemoved|
   #:|columnsInserted|
   #:|columnsMoved|
   #:|columnsRemoved|
   #:|columns|
   #:|column|
   #:|combinedLayoutSpacing|
   #:|combinedTransform|
   #:|comboBoxItems|
   #:|command|
   #:|comment|
   #:|commitDataRequest|
   #:|commitData|
   #:|commitString|
   #:|commitTransaction|
   #:|commit|
   #:|commonAncestorItem|
   #:|compare|
   #:|comparisonFunction|
   #:|comparisonMode|
   #:|compileSourceCode(QByteArray)|
   #:|compileSourceCode(QString)|
   #:|compileSourceCode(const char*)|
   #:|compileSourceCode|
   #:|compileSourceFile|
   #:|completeBaseName|
   #:|completeChanged|
   #:|completeCreate|
   #:|completeSuffix|
   #:|completer|
   #:|complete|
   #:|completionColumn|
   #:|completionCount|
   #:|completionModel|
   #:|completionMode|
   #:|completionPrefix|
   #:|completionRole|
   #:|componentComplete|
   #:|compositionMode|
   #:|configuration|
   #:|conjugated|
   #:|connectNotifySignal(QObject*,const char*)|
   #:|connectNotifySignal(QObject*,int)|
   #:|connectNotifySignal|
   #:|connectOptions|
   #:|connectPath|
   #:|connectSlotsByName.QMetaObject|
   #:|connectToHost(QHostAddress...)|
   #:|connectToHost(QString...)|
   #:|connectToHostEncrypted|
   #:|connectToHost|
   #:|connectToServer(QLocalSocket::OpenMode)|
   #:|connectToServer(QString)|
   #:|connectToServer|
   #:|connected|
   #:|connectionNames.QSqlDatabase|
   #:|connectionName|
   #:|constructorCount|
   #:|containerDescription|
   #:|containerFormat|
   #:|contains(QPainterPath)|
   #:|contains(QPoint)|
   #:|contains(QPointF)|
   #:|contains(QRect)|
   #:|contains(QRectF)|
   #:|contains.QSqlDatabase|
   #:|contains|
   #:|contentItemAt|
   #:|contentItem|
   #:|contentOffset|
   #:|contentOrientationChanged|
   #:|contentOrientation|
   #:|contentPosRange|
   #:|contentPos|
   #:|contentsBoundingRect|
   #:|contentsChanged|
   #:|contentsChange|
   #:|contentsCreated|
   #:|contentsCreationStarted|
   #:|contentsMargins|
   #:|contentsRect|
   #:|contentsScaleChanged|
   #:|contentsScale|
   #:|contentsSizeChanged|
   #:|contentsSize|
   #:|contextForObject.QQmlEngine|
   #:|contextMenuPolicy|
   #:|contextMenu|
   #:|contextObject|
   #:|contextProperty|
   #:|context|
   #:|continueExecute|
   #:|contrastChanged|
   #:|contrast|
   #:|controlPointRect|
   #:|controlTypes|
   #:|controlType|
   #:|convertFromImage|
   #:|convertToFormat(QImage::Format,QVector<QRgb>)|
   #:|convertToFormat(QImage::Format,Qt::ImageConversionFlags)|
   #:|convertToFormat|
   #:|convertToNormalizedSourceRect|
   #:|convertTo|
   #:|convert|
   #:|cookieJar|
   #:|cookiesForUrl|
   #:|coordinateMode|
   #:|copy.QFile|
   #:|copyAvailable|
   #:|copyCollectionFile|
   #:|copyCount|
   #:|copy|
   #:|cornerWidget|
   #:|corner|
   #:|correctionMode|
   #:|countryToString.QLocale|
   #:|country|
   #:|count|
   #:|create(QQmlContext*)|
   #:|create(QQmlIncubator&)|
   #:|createAction.QWhatsThis|
   #:|createAlphaMask|
   #:|createContents|
   #:|createEditor|
   #:|createFramebufferObject|
   #:|createHeuristicMask|
   #:|createIndex|
   #:|createItemGroup|
   #:|createLine|
   #:|createList(QTextListFormat)|
   #:|createList(QTextListFormat::Style)|
   #:|createList|
   #:|createMaskFromColor|
   #:|createPopupMenu|
   #:|createProxyForChildWidget|
   #:|createRedoAction|
   #:|createResult|
   #:|createSeparatedList|
   #:|createShader|
   #:|createStandardContextMenu|
   #:|createStroke|
   #:|createTextureFromId|
   #:|createTextureFromImage|
   #:|createTextureView|
   #:|createTexture|
   #:|createUndoAction|
   #:|createUuid.QUuid|
   #:|createUuidV3(QUuid,QByteArray).QUuid|
   #:|createUuidV3(QUuid,QString).QUuid|
   #:|createUuidV3.QUuid|
   #:|createUuidV5(QUuid,QByteArray).QUuid|
   #:|createUuidV5(QUuid,QString).QUuid|
   #:|createUuidV5.QUuid|
   #:|createWidget|
   #:|createWindowContainer.QWidget|
   #:|createdWidgets|
   #:|created|
   #:|create|
   #:|creationContext|
   #:|creator|
   #:|critical.QMessageBox|
   #:|crossProduct.QVector3D|
   #:|cssMediaType|
   #:|cubicTo|
   #:|currencySymbol|
   #:|current.QDir|
   #:|currentAnimationChanged|
   #:|currentAnimation|
   #:|currentBlockState|
   #:|currentBlockUserData|
   #:|currentBlock|
   #:|currentCellChanged|
   #:|currentChanged|
   #:|currentCharFormatChanged|
   #:|currentCharFormat|
   #:|currentColorChanged|
   #:|currentColorGroup|
   #:|currentColor|
   #:|currentColumnChanged|
   #:|currentColumn|
   #:|currentCompletion|
   #:|currentContext.QOpenGLContext|
   #:|currentCpuArchitecture.QSysInfo|
   #:|currentData|
   #:|currentDate.QDate|
   #:|currentDateTime.QDateTime|
   #:|currentDateTimeUtc.QDateTime|
   #:|currentFilterChanged|
   #:|currentFilter|
   #:|currentFontChanged|
   #:|currentFont|
   #:|currentFrameNumber|
   #:|currentFrame|
   #:|currentIdChanged|
   #:|currentId|
   #:|currentImage|
   #:|currentIndexChanged(QString)|
   #:|currentIndexChanged(int)|
   #:|currentIndexChanged|
   #:|currentIndex|
   #:|currentItemChanged|
   #:|currentItem|
   #:|currentList|
   #:|currentLoopChanged|
   #:|currentLoopTime|
   #:|currentLoop|
   #:|currentMSecsSinceEpoch.QDateTime|
   #:|currentMediaChanged|
   #:|currentMedia|
   #:|currentMessage|
   #:|currentNetworkConfiguration|
   #:|currentPageChanged|
   #:|currentPage|
   #:|currentPath.QDir|
   #:|currentPixmap|
   #:|currentPosition|
   #:|currentRowChanged|
   #:|currentRow|
   #:|currentSectionIndex|
   #:|currentSection|
   #:|currentSubWindow|
   #:|currentTable|
   #:|currentTextChanged|
   #:|currentText|
   #:|currentTime.QTime|
   #:|currentTime|
   #:|currentUrlChanged|
   #:|currentValue|
   #:|currentWidget|
   #:|cursorBackward|
   #:|cursorFlashTime.QApplication|
   #:|cursorFlashTimeChanged|
   #:|cursorFlashTime|
   #:|cursorForPosition|
   #:|cursorForward|
   #:|cursorMoveStyle|
   #:|cursorName|
   #:|cursorPositionAt|
   #:|cursorPositionChanged|
   #:|cursorPosition|
   #:|cursorRectangleChanged|
   #:|cursorRectangle|
   #:|cursorRect|
   #:|cursorToX|
   #:|cursorWidth|
   #:|cursorWordBackward|
   #:|cursorWordForward|
   #:|cursor|
   #:|curveShape|
   #:|curveThreshold|
   #:|customButtonClicked|
   #:|customColor.QColorDialog|
   #:|customContextMenuRequested|
   #:|customCount.QColorDialog|
   #:|customFilters|
   #:|customFocusPoint|
   #:|customValue|
   #:|cut|
   #:|cyanF|
   #:|cyan|
   #:|darker|
   #:|dark|
   #:|dashOffset|
   #:|dashPattern|
   #:|dataChanged|
   #:|dataSize|
   #:|database.QSqlDatabase|
   #:|databaseName|
   #:|databaseQuotaExceeded|
   #:|databaseQuota|
   #:|databaseText|
   #:|databaseUsage|
   #:|databases|
   #:|database|
   #:|data|
   #:|dateChanged|
   #:|dateEditAcceptDelay|
   #:|dateFormat|
   #:|dateTextFormat|
   #:|dateTimeChanged|
   #:|dateTimeFormat|
   #:|dateTime|
   #:|date|
   #:|dayName|
   #:|dayOfWeek|
   #:|dayOfYear|
   #:|daylightTimeOffset|
   #:|daysInMonth|
   #:|daysInYear|
   #:|daysTo|
   #:|day|
   #:|dbmsType|
   #:|deactivate|
   #:|decimalPoint|
   #:|decimalsChanged|
   #:|decimals|
   #:|decodeName(QByteArray).QFile|
   #:|decodeName(const char*).QFile|
   #:|decodeName.QFile|
   #:|defaultAlignment|
   #:|defaultAnimations|
   #:|defaultAudioInput|
   #:|defaultButton|
   #:|defaultCamera.QCameraInfo|
   #:|defaultConfiguration.QSslConfiguration|
   #:|defaultCursorMoveStyle|
   #:|defaultDepth.QPixmap|
   #:|defaultDropAction|
   #:|defaultDuplexMode|
   #:|defaultFactory.QItemEditorFactory|
   #:|defaultFamily|
   #:|defaultFont|
   #:|defaultFormat.QSettings|
   #:|defaultFormat.QSurfaceFormat|
   #:|defaultFramebufferObject|
   #:|defaultInnerTessellationLevels|
   #:|defaultInputDevice.QAudioDeviceInfo|
   #:|defaultOuterTessellationLevels|
   #:|defaultOutputDevice.QAudioDeviceInfo|
   #:|defaultPageSize|
   #:|defaultPrinterName.QPrinterInfo|
   #:|defaultSectionSize|
   #:|defaultSize|
   #:|defaultStateChanged|
   #:|defaultState|
   #:|defaultStyleSheet|
   #:|defaultSuffix|
   #:|defaultTextColor|
   #:|defaultTextEncoding|
   #:|defaultTextOption|
   #:|defaultValue|
   #:|defaultWidget|
   #:|definitionSize.QPageSize|
   #:|definitionSize|
   #:|definitionUnits.QPageSize|
   #:|definitionUnits|
   #:|deleteAccessibleInterface.QAccessible|
   #:|deleteChar|
   #:|deleteCookie|
   #:|deleteLater|
   #:|deletePreviousChar|
   #:|deleteProperty|
   #:|deleteResource|
   #:|deleteText|
   #:|delta|
   #:|del|
   #:|denoisingLevel|
   #:|depthBufferSize|
   #:|depthStencilMode|
   #:|depth|
   #:|descent|
   #:|description|
   #:|deselect|
   #:|desktop.QApplication|
   #:|desktopSettingsAware.QGuiApplication|
   #:|destroyEditor|
   #:|destroyFramebufferObject|
   #:|destroyItemGroup|
   #:|destroyed|
   #:|destroy|
   #:|detach|
   #:|detailedText|
   #:|determinant|
   #:|deviceName|
   #:|devicePixelRatio|
   #:|deviceRect|
   #:|deviceTransform|
   #:|devices.QTouchDevice|
   #:|device|
   #:|digest|
   #:|digitCount|
   #:|digitalZoomChanged|
   #:|digitalZoom|
   #:|dirName|
   #:|directionChanged|
   #:|direction|
   #:|directories|
   #:|directoryChanged|
   #:|directoryEntered|
   #:|directoryLoaded|
   #:|directoryUrlEntered|
   #:|directoryUrl|
   #:|directory|
   #:|dirtyRegionOffset|))

(in-package :eql)

(pushnew :qt-wrapper-functions *features*)

(defun %auto-cast (object)
  (when (find (qt-object-id (ensure-qt-object object))
              '#.(list (qid "QGraphicsSvgItem")
                       (qid "QGraphicsTextItem")
                       (qid "QGraphicsVideoItem")
                       (qid "QGraphicsWidget")))
    "QGraphicsItem"))
