// THIS FILE IS GENERATED (see helper/)

#include "_lobjects.h"
#include "_main_q_classes.h"
#include "_main_n_classes.h"
#include "_main_q_methods.h"
#include "_main_n_methods.h"
#include "../dyn_object.h"
#include "../eql.h"

int LObjects::T_QAudioDeviceInfo = -1;
int LObjects::T_QList_QAudioDeviceInfo = -1;
int LObjects::T_QAudioEncoderSettings = -1;
int LObjects::T_QAudioFormat = -1;
int LObjects::T_QCameraInfo = -1;
int LObjects::T_QList_QCameraInfo = -1;
int LObjects::T_QCameraViewfinderSettings = -1;
int LObjects::T_QList_QCameraViewfinderSettings = -1;
int LObjects::T_QHelpSearchQuery = -1;
int LObjects::T_QList_QHelpSearchQuery = -1;
int LObjects::T_QHostAddress = -1;
int LObjects::T_QHostInfo = -1;
int LObjects::T_QHttpPart = -1;
int LObjects::T_QImageEncoderSettings = -1;
int LObjects::T_QMediaContent = -1;
int LObjects::T_QList_QMediaContent = -1;
int LObjects::T_QNetworkAddressEntry = -1;
int LObjects::T_QList_QNetworkAddressEntry = -1;
int LObjects::T_QNetworkCacheMetaData = -1;
int LObjects::T_QNetworkConfiguration = -1;
int LObjects::T_QNetworkCookie = -1;
int LObjects::T_QList_QNetworkCookie = -1;
int LObjects::T_QList_QNetworkConfiguration = -1;
int LObjects::T_QNetworkInterface = -1;
int LObjects::T_QList_QNetworkInterface = -1;
int LObjects::T_QNetworkProxy = -1;
int LObjects::T_QList_QNetworkProxy = -1;
int LObjects::T_QNetworkRequest = -1;
int LObjects::T_QSqlDatabase = -1;
int LObjects::T_QSqlError = -1;
int LObjects::T_QSqlField = -1;
int LObjects::T_QSqlIndex = -1;
int LObjects::T_QSqlQuery = -1;
int LObjects::T_QSqlRecord = -1;
int LObjects::T_QSqlRelation = -1;
int LObjects::T_QSslCertificate = -1;
int LObjects::T_QSslCipher = -1;
int LObjects::T_QSslConfiguration = -1;
int LObjects::T_QSslKey = -1;
int LObjects::T_QVideoEncoderSettings = -1;
int LObjects::T_QVideoSurfaceFormat = -1;
int LObjects::T_QWebElement = -1;
int LObjects::T_QList_QWebElement = -1;
int LObjects::T_QWebElementCollection = -1;
int LObjects::T_QWebHitTestResult = -1;

EQL* LObjects::eql = 0;
DynObject* LObjects::dynObject = 0;
QObject** LObjects::Q = 0;
QObject** LObjects::N = 0;
bool LObjects::call_default = false;
quint64 LObjects::calling = 0;
QList<quint64> LObjects::callingList;
uint LObjects::i_unique = 0;
const char*** LObjects::override_arg_types = 0;
QList<QByteArray> LObjects::qNames;
QList<QByteArray> LObjects::nNames;
QMap<QByteArray, int> LObjects::q_names;
QMap<QByteArray, int> LObjects::n_names;
QHash<QByteArray, uint> LObjects::override_function_ids;
QHash<quint64, void*> LObjects::override_lisp_functions;

StaticMetaObject LObjects::staticMetaObject_help = 0;
StaticMetaObject LObjects::staticMetaObject_multimedia = 0;
StaticMetaObject LObjects::staticMetaObject_network = 0;
StaticMetaObject LObjects::staticMetaObject_sql = 0;
StaticMetaObject LObjects::staticMetaObject_svg = 0;
StaticMetaObject LObjects::staticMetaObject_webkit = 0;
DeleteNObject LObjects::deleteNObject_help = 0;
DeleteNObject LObjects::deleteNObject_multimedia = 0;
DeleteNObject LObjects::deleteNObject_network = 0;
DeleteNObject LObjects::deleteNObject_sql = 0;
DeleteNObject LObjects::deleteNObject_svg = 0;
DeleteNObject LObjects::deleteNObject_webkit = 0;
Override LObjects::override_help = 0;
Override LObjects::override_multimedia = 0;
Override LObjects::override_network = 0;
Override LObjects::override_sql = 0;
Override LObjects::override_svg = 0;
Override LObjects::override_webkit = 0;
ToMetaArg LObjects::toMetaArg_help = 0;
To_lisp_arg LObjects::to_lisp_arg_help = 0;
ToMetaArg LObjects::toMetaArg_multimedia = 0;
To_lisp_arg LObjects::to_lisp_arg_multimedia = 0;
ToMetaArg LObjects::toMetaArg_network = 0;
To_lisp_arg LObjects::to_lisp_arg_network = 0;
ToMetaArg LObjects::toMetaArg_sql = 0;
To_lisp_arg LObjects::to_lisp_arg_sql = 0;
ToMetaArg LObjects::toMetaArg_webkit = 0;
To_lisp_arg LObjects::to_lisp_arg_webkit = 0;

NumList LAbstractAnimation::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LAbstractButton::overrideIds = NumList() << 9 << 10 << 11 << 12 << 13 << 14 << 15 << 16 << 17 << 18 << 19 << 20 << 8;
NumList LAbstractItemDelegate::overrideIds = NumList() << 46 << 47 << 48 << 49 << 50 << 51 << 52 << 53 << 54;
NumList LAbstractItemModel::overrideIds = NumList() << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 64 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 73 << 74 << 75 << 76 << 77 << 78 << 79 << 80 << 81 << 82 << 83;
NumList LAbstractItemView::overrideIds = NumList() << 84 << 85 << 86 << 87 << 88 << 89 << 90 << 91 << 92 << 93 << 94 << 95 << 96 << 97 << 98 << 99 << 100 << 101 << 102 << 23 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 38 << 17 << 18 << 19 << 40 << 8 << 103 << 104;
NumList LAbstractListModel::overrideIds = NumList() << 60 << 62 << 65 << 79;
NumList LAbstractPrintDialog::overrideIds = NumList() << 107;
NumList LAbstractProxyModel::overrideIds = NumList() << 109 << 110 << 111 << 112 << 113 << 55 << 56 << 57 << 59 << 60 << 61 << 62 << 63 << 64 << 69 << 70 << 114 << 77 << 78 << 79 << 80 << 81 << 115 << 82 << 83;
NumList LAbstractScrollArea::overrideIds = NumList() << 105 << 106 << 103 << 104 << 24 << 25 << 28 << 29 << 30 << 31 << 32 << 15 << 38 << 17 << 18 << 19 << 20 << 40 << 43;
NumList LAbstractSlider::overrideIds = NumList() << 116 << 12 << 15 << 8 << 43;
NumList LAbstractSpinBox::overrideIds = NumList() << 142 << 143 << 144 << 145 << 23 << 24 << 25 << 12 << 27 << 28 << 13 << 14 << 35 << 15 << 16 << 17 << 18 << 19 << 20 << 40 << 41 << 8 << 43;
NumList LAbstractState::overrideIds = NumList() << 146 << 147;
NumList LAbstractTextDocumentLayout::overrideIds = NumList() << 148 << 149 << 150 << 151 << 152 << 153 << 154 << 155 << 156 << 157;
NumList LAbstractTransition::overrideIds = NumList() << 158 << 159;
NumList LAction::overrideIds = NumList();
NumList LActionGroup::overrideIds = NumList();
NumList LAnimationGroup::overrideIds = NumList();
NumList LApplication::overrideIds = NumList() << 160;
NumList LBoxLayout::overrideIds = NumList() << 162 << 163 << 164 << 21 << 22 << 165 << 166 << 167 << 168 << 169 << 170 << 25 << 171;
NumList LBuffer::overrideIds = NumList() << 126 << 129 << 130 << 137 << 138 << 140 << 141 << 134 << 136;
NumList LButtonGroup::overrideIds = NumList();
NumList LCalendarWidget::overrideIds = NumList() << 177 << 24 << 25 << 5 << 15 << 18 << 40;
NumList LCheckBox::overrideIds = NumList() << 24 << 25 << 9 << 10 << 17 << 11 << 20;
NumList LColorDialog::overrideIds = NumList() << 108 << 12 << 184;
NumList LColumnView::overrideIds = NumList() << 185 << 84 << 86 << 186 << 87 << 187 << 88 << 25 << 91 << 188 << 93 << 94 << 95 << 40 << 189 << 106 << 98 << 100 << 102;
NumList LComboBox::overrideIds = NumList() << 190 << 191 << 23 << 24 << 25 << 12 << 28 << 13 << 14 << 35 << 36 << 15 << 16 << 18 << 19 << 20 << 40 << 41 << 43;
NumList LCommandLinkButton::overrideIds = NumList() << 22 << 24 << 20 << 25;
NumList LCommonStyle::overrideIds = NumList() << 192 << 193 << 194 << 195 << 196 << 197 << 198 << 199 << 200 << 201 << 202 << 203 << 204 << 205 << 206 << 207 << 208;
NumList LCompleter::overrideIds = NumList() << 215 << 216 << 5;
NumList LCoreApplication::overrideIds = NumList() << 160;
NumList LDataWidgetMapper::overrideIds = NumList();
NumList LDateEdit::overrideIds = NumList();
NumList LDateTimeEdit::overrideIds = NumList() << 217 << 218 << 219 << 25 << 143 << 142 << 13 << 34 << 15 << 18 << 20 << 145 << 144 << 43;
NumList LDesktopWidget::overrideIds = NumList() << 40;
NumList LDial::overrideIds = NumList() << 24 << 25 << 17 << 18 << 19 << 20 << 40 << 116;
NumList LDialog::overrideIds = NumList() << 24 << 108 << 25 << 27 << 28 << 5 << 15 << 40 << 41;
NumList LDialogButtonBox::overrideIds = NumList() << 12;
NumList LDirModel::overrideIds = NumList() << 58 << 59 << 60 << 62 << 63 << 64 << 65 << 69 << 70 << 73 << 76 << 77 << 80 << 83;
NumList LDockWidget::overrideIds = NumList() << 12 << 27 << 20;
NumList LDoubleSpinBox::overrideIds = NumList() << 220 << 221 << 142 << 144;
NumList LDoubleValidator::overrideIds = NumList() << 222 << 144;
NumList LDrag::overrideIds = NumList();
NumList LErrorMessage::overrideIds = NumList() << 12 << 184;
NumList LEventLoop::overrideIds = NumList();
NumList LEventTransition::overrideIds = NumList() << 158 << 159;
NumList LFile::overrideIds = NumList() << 223 << 137 << 224 << 225 << 226 << 141;
NumList LFileDialog::overrideIds = NumList() << 108 << 227 << 12 << 184;
NumList LFileSelector::overrideIds = NumList();
NumList LFileSystemModel::overrideIds = NumList() << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 64 << 65 << 69 << 70 << 73 << 76 << 77 << 80 << 83 << 8;
NumList LFileSystemWatcher::overrideIds = NumList();
NumList LFinalState::overrideIds = NumList() << 146 << 147;
NumList LFocusFrame::overrideIds = NumList() << 5 << 20;
NumList LFontComboBox::overrideIds = NumList() << 25;
NumList LFontDialog::overrideIds = NumList() << 108 << 12 << 184;
NumList LFormLayout::overrideIds = NumList() << 162 << 163 << 164 << 21 << 22 << 165 << 166 << 169 << 170 << 25 << 171;
NumList LFrame::overrideIds = NumList() << 25 << 12 << 20;
NumList LGesture::overrideIds = NumList();
NumList LGraphicsAnchor::overrideIds = NumList();
NumList LGraphicsBlurEffect::overrideIds = NumList() << 228 << 229;
NumList LGraphicsColorizeEffect::overrideIds = NumList() << 229;
NumList LGraphicsDropShadowEffect::overrideIds = NumList() << 228 << 229;
NumList LGraphicsEffect::overrideIds = NumList() << 228 << 229 << 230;
NumList LGraphicsOpacityEffect::overrideIds = NumList() << 229;
NumList LGraphicsProxyWidget::overrideIds = NumList() << 231 << 232 << 233 << 234 << 235 << 236 << 237 << 238 << 5 << 13 << 34 << 14 << 239 << 35 << 240 << 241 << 242 << 36 << 23 << 243 << 15 << 16 << 244 << 245 << 246 << 247 << 248 << 41 << 249 << 250 << 251;
NumList LGraphicsRotation::overrideIds = NumList();
NumList LGraphicsScale::overrideIds = NumList();
NumList LGraphicsScene::overrideIds = NumList() << 23 << 234 << 235 << 236 << 237 << 264 << 265 << 238 << 13 << 14 << 266 << 36 << 15 << 16 << 244 << 245 << 246 << 247 << 251 << 5;
NumList LGraphicsTextItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233 << 234 << 235 << 236 << 237 << 238 << 13 << 14 << 240 << 241 << 242 << 36 << 23 << 15 << 16 << 244 << 245 << 246 << 247 << 262;
NumList LGraphicsView::overrideIds = NumList() << 264 << 265 << 23 << 25 << 28 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 16 << 38 << 17 << 18 << 19 << 20 << 40 << 106 << 41 << 103 << 43;
NumList LGraphicsWidget::overrideIds = NumList() << 252 << 12 << 27 << 34 << 253 << 239 << 35 << 254 << 255 << 256 << 248 << 41 << 257 << 250 << 258 << 259 << 260 << 231 << 232 << 261 << 233 << 13 << 14 << 241 << 242 << 243 << 262 << 249 << 263;
NumList LGridLayout::overrideIds = NumList() << 163 << 164 << 21 << 22 << 165 << 166 << 167 << 168 << 169 << 170 << 25 << 171 << 162;
NumList LGroupBox::overrideIds = NumList() << 24 << 12 << 6 << 13 << 17 << 18 << 19 << 20 << 40;
NumList LGuiApplication::overrideIds = NumList() << 160;
NumList LHBoxLayout::overrideIds = NumList();
NumList LHeaderView::overrideIds = NumList() << 270 << 271 << 139 << 87 << 108 << 25 << 188 << 93 << 38 << 17 << 18 << 19 << 20 << 98 << 100 << 103;
NumList LHistoryState::overrideIds = NumList() << 146 << 147;
NumList LIODevice::overrideIds = NumList() << 126 << 127 << 128 << 129 << 130 << 131 << 137 << 138 << 139 << 140 << 141 << 132 << 133 << 134 << 135 << 136;
NumList LIdentityProxyModel::overrideIds = NumList() << 58 << 60 << 64 << 65 << 66 << 67 << 109 << 110 << 111 << 112 << 68 << 73 << 74 << 75 << 76 << 113 << 79;
NumList LInputDialog::overrideIds = NumList() << 184 << 24 << 108 << 25;
NumList LIntValidator::overrideIds = NumList() << 278 << 142 << 144;
NumList LItemDelegate::overrideIds = NumList() << 279 << 280 << 281 << 282 << 46 << 50 << 51 << 52 << 53 << 54 << 48 << 5;
NumList LItemSelectionModel::overrideIds = NumList();
NumList LKeyEventTransition::overrideIds = NumList() << 158 << 159;
NumList LLCDNumber::overrideIds = NumList() << 25 << 20;
NumList LLabel::overrideIds = NumList() << 22 << 24 << 25 << 12 << 28 << 13 << 34 << 14 << 15 << 17 << 18 << 19 << 20;
NumList LLibrary::overrideIds = NumList();
NumList LLineEdit::overrideIds = NumList() << 23 << 24 << 25 << 12 << 28 << 29 << 30 << 31 << 32 << 13 << 14 << 36 << 15 << 38 << 17 << 18 << 19 << 20;
NumList LListView::overrideIds = NumList() << 84 << 86 << 91 << 188 << 274 << 30 << 31 << 32 << 93 << 94 << 17 << 19 << 95 << 20 << 40 << 275 << 189 << 96 << 276 << 98 << 99 << 8 << 277 << 100 << 101 << 104 << 102;
NumList LListWidget::overrideIds = NumList() << 283 << 284 << 70 << 83 << 32;
NumList LMainWindow::overrideIds = NumList() << 287 << 28;
NumList LMdiArea::overrideIds = NumList() << 24 << 25 << 6 << 5 << 20 << 40 << 106 << 41 << 8 << 103;
NumList LMdiSubWindow::overrideIds = NumList() << 24 << 25 << 12 << 6 << 27 << 28 << 5 << 13 << 14 << 35 << 15 << 37 << 38 << 17 << 18 << 19 << 39 << 20 << 40 << 41 << 8;
NumList LMenu::overrideIds = NumList() << 25 << 26 << 12 << 33 << 34 << 35 << 15 << 37 << 17 << 18 << 19 << 20 << 8 << 43;
NumList LMenuBar::overrideIds = NumList() << 22 << 24 << 25 << 26 << 12 << 5 << 13 << 14 << 15 << 37 << 17 << 18 << 19 << 20 << 40 << 8;
NumList LMessageBox::overrideIds = NumList() << 108 << 12 << 27 << 15 << 40 << 41;
NumList LMimeData::overrideIds = NumList() << 288 << 289 << 290;
NumList LMouseEventTransition::overrideIds = NumList() << 158 << 159;
NumList LMovie::overrideIds = NumList();
NumList LObject::overrideIds = NumList() << 5 << 6 << 7 << 8;
NumList LObjectCleanupHandler::overrideIds = NumList();
NumList LOpenGLContext::overrideIds = NumList();
NumList LOpenGLShader::overrideIds = NumList();
NumList LOpenGLShaderProgram::overrideIds = NumList() << 302;
NumList LOpenGLWidget::overrideIds = NumList() << 303 << 304 << 305 << 20 << 40;
NumList LOpenGLWindow::overrideIds = NumList() << 303 << 304 << 306 << 307 << 305 << 20 << 40;
NumList LPageSetupDialog::overrideIds = NumList() << 184 << 107 << 108;
NumList LPaintDeviceWindow::overrideIds = NumList() << 20;
NumList LPanGesture::overrideIds = NumList();
NumList LParallelAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LPauseAnimation::overrideIds = NumList() << 1 << 2;
NumList LPdfWriter::overrideIds = NumList() << 313;
NumList LPinchGesture::overrideIds = NumList();
NumList LPlainTextDocumentLayout::overrideIds = NumList() << 148 << 149 << 150 << 151 << 152 << 153 << 154;
NumList LPlainTextEdit::overrideIds = NumList() << 314 << 315 << 316 << 317 << 23 << 12 << 28 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 16 << 38 << 17 << 18 << 19 << 20 << 40 << 106 << 41 << 43;
NumList LPluginLoader::overrideIds = NumList();
NumList LPrintDialog::overrideIds = NumList() << 184 << 107 << 108;
NumList LPrintPreviewDialog::overrideIds = NumList() << 184 << 108;
NumList LPrintPreviewWidget::overrideIds = NumList() << 108;
NumList LProcess::overrideIds = NumList() << 318 << 126 << 127 << 128 << 129 << 130 << 131 << 137 << 132 << 133 << 134 << 136;
NumList LProgressBar::overrideIds = NumList() << 319 << 24 << 25 << 20;
NumList LProgressDialog::overrideIds = NumList() << 25 << 12 << 27 << 40 << 41;
NumList LPropertyAnimation::overrideIds = NumList() << 320 << 4;
NumList LProxyStyle::overrideIds = NumList() << 192 << 193 << 209 << 210 << 194 << 195 << 196 << 211 << 212 << 197 << 198 << 201 << 199 << 200 << 202 << 213 << 214 << 203 << 204 << 205 << 206 << 207 << 208;
NumList LPushButton::overrideIds = NumList() << 24 << 25 << 13 << 14 << 10 << 15 << 20;
NumList LRadioButton::overrideIds = NumList() << 24 << 25 << 10 << 17 << 20;
NumList LRegExpValidator::overrideIds = NumList() << 144;
NumList LRubberBand::overrideIds = NumList() << 12 << 39 << 20 << 40 << 41;
NumList LScrollArea::overrideIds = NumList() << 34 << 25 << 5 << 40 << 106 << 104;
NumList LScrollBar::overrideIds = NumList() << 25 << 28 << 35 << 17 << 18 << 19 << 20 << 116 << 43;
NumList LSequentialAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LSettings::overrideIds = NumList();
NumList LShortcut::overrideIds = NumList();
NumList LSignalMapper::overrideIds = NumList();
NumList LSignalTransition::overrideIds = NumList() << 158 << 159;
NumList LSizeGrip::overrideIds = NumList() << 108 << 25 << 5 << 35 << 17 << 18 << 19 << 39 << 20 << 41;
NumList LSlider::overrideIds = NumList() << 24 << 25 << 17 << 18 << 19 << 20;
NumList LSortFilterProxyModel::overrideIds = NumList() << 322 << 323 << 324 << 55 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 64 << 65 << 66 << 67 << 109 << 110 << 111 << 112 << 68 << 69 << 70 << 73 << 74 << 75 << 76 << 77 << 78 << 113 << 79 << 80 << 81 << 83;
NumList LSpinBox::overrideIds = NumList() << 325 << 221 << 142 << 144;
NumList LSplashScreen::overrideIds = NumList() << 326 << 18;
NumList LSplitter::overrideIds = NumList() << 24 << 25 << 12 << 6 << 40;
NumList LSplitterHandle::overrideIds = NumList() << 25 << 17 << 18 << 19 << 20 << 40;
NumList LStackedLayout::overrideIds = NumList() << 162 << 163 << 21 << 22 << 166 << 169 << 170 << 25 << 171;
NumList LStackedWidget::overrideIds = NumList();
NumList LStandardItemModel::overrideIds = NumList() << 58 << 59 << 60 << 62 << 63 << 64 << 65 << 66 << 67 << 69 << 70 << 73 << 74 << 75 << 76 << 77 << 78 << 79 << 80 << 83;
NumList LState::overrideIds = NumList() << 146 << 147;
NumList LStateMachine::overrideIds = NumList() << 5 << 146 << 147;
NumList LStatusBar::overrideIds = NumList() << 20 << 40 << 41;
NumList LStringListModel::overrideIds = NumList() << 59 << 62 << 67 << 75 << 76 << 77 << 79 << 80 << 83;
NumList LStyleHints::overrideIds = NumList();
NumList LStyledItemDelegate::overrideIds = NumList() << 364 << 365 << 46 << 50 << 51 << 52 << 53 << 54 << 48 << 5;
NumList LSwipeGesture::overrideIds = NumList();
NumList LSyntaxHighlighter::overrideIds = NumList() << 366;
NumList LSystemTrayIcon::overrideIds = NumList();
NumList LTabBar::overrideIds = NumList() << 367 << 368 << 369 << 370 << 371 << 24 << 25 << 12 << 35 << 15 << 17 << 18 << 19 << 20 << 40 << 41 << 8 << 43;
NumList LTabWidget::overrideIds = NumList() << 368 << 370 << 21 << 22 << 24 << 25 << 12 << 15 << 20 << 40 << 41;
NumList LTableView::overrideIds = NumList() << 84 << 87 << 187 << 88 << 188 << 93 << 94 << 95 << 20 << 96 << 276 << 98 << 89 << 90 << 8 << 277 << 100 << 101 << 104;
NumList LTableWidget::overrideIds = NumList() << 372 << 373 << 70 << 83 << 32;
NumList LTapAndHoldGesture::overrideIds = NumList();
NumList LTapGesture::overrideIds = NumList();
NumList LTextBlockGroup::overrideIds = NumList() << 374 << 375 << 376;
NumList LTextBrowser::overrideIds = NumList() << 314 << 34 << 14 << 15 << 17 << 18 << 19 << 20;
NumList LTextDocument::overrideIds = NumList() << 219 << 377 << 314;
NumList LTextEdit::overrideIds = NumList() << 314 << 315 << 316 << 317 << 23 << 12 << 28 << 29 << 30 << 31 << 32 << 13 << 34 << 14 << 36 << 15 << 16 << 38 << 17 << 18 << 19 << 20 << 40 << 106 << 41 << 43;
NumList LTextFrame::overrideIds = NumList();
NumList LTextList::overrideIds = NumList();
NumList LTextObject::overrideIds = NumList();
NumList LTextTable::overrideIds = NumList();
NumList LTimeEdit::overrideIds = NumList();
NumList LTimeLine::overrideIds = NumList() << 378 << 8;
NumList LTimer::overrideIds = NumList() << 8;
NumList LToolBar::overrideIds = NumList() << 26 << 12 << 20;
NumList LToolBox::overrideIds = NumList() << 379 << 380 << 12 << 41;
NumList LToolButton::overrideIds = NumList() << 24 << 25 << 26 << 12 << 33 << 10 << 37 << 18 << 19 << 11 << 20 << 8;
NumList LTranslator::overrideIds = NumList() << 175 << 381;
NumList LTreeView::overrideIds = NumList() << 272 << 273 << 274 << 84 << 85 << 139 << 86 << 186 << 87 << 187 << 88 << 91 << 188 << 31 << 93 << 94 << 15 << 38 << 17 << 18 << 19 << 95 << 20 << 275 << 189 << 106 << 96 << 276 << 98 << 89 << 8 << 277 << 100 << 103 << 104 << 102;
NumList LTreeWidget::overrideIds = NumList() << 382 << 383 << 70 << 83 << 88 << 32;
NumList LUndoGroup::overrideIds = NumList();
NumList LUndoStack::overrideIds = NumList();
NumList LUndoView::overrideIds = NumList();
NumList LVBoxLayout::overrideIds = NumList();
NumList LValidator::overrideIds = NumList() << 142 << 144;
NumList LVariantAnimation::overrideIds = NumList() << 321 << 320 << 1 << 2 << 4;
NumList LWidget::overrideIds = NumList() << 21 << 22 << 23 << 24 << 25 << 26 << 12 << 27 << 28 << 29 << 30 << 31 << 32 << 33 << 13 << 34 << 14 << 35 << 36 << 15 << 16 << 37 << 38 << 17 << 18 << 19 << 39 << 20 << 40 << 41 << 42 << 43 << 44 << 45;
NumList LWidgetAction::overrideIds = NumList() << 416 << 417 << 5;
NumList LWindow::overrideIds = NumList() << 308 << 309 << 13 << 14 << 35 << 15 << 16 << 38 << 17 << 18 << 19 << 39 << 40 << 41 << 42 << 310 << 43 << 311 << 141 << 312;
NumList LWizard::overrideIds = NumList() << 418 << 419 << 420 << 421 << 108 << 25 << 184 << 20 << 40;
NumList LWizardPage::overrideIds = NumList() << 422 << 423 << 424 << 418 << 425;
NumList LAbstractGraphicsShapeItem::overrideIds = NumList() << 268 << 269;
NumList LAccessible::overrideIds = NumList();
NumList LAccessibleEditableTextInterface::overrideIds = NumList() << 430 << 431 << 432;
NumList LAccessibleEvent::overrideIds = NumList() << 433;
NumList LAccessibleInterface::overrideIds = NumList() << 434 << 435 << 436 << 437 << 438 << 439 << 440 << 441 << 442 << 443 << 444 << 445 << 446 << 447 << 448;
NumList LAccessibleStateChangeEvent::overrideIds = NumList();
NumList LAccessibleTextCursorEvent::overrideIds = NumList();
NumList LAccessibleTextInsertEvent::overrideIds = NumList();
NumList LAccessibleTextInterface::overrideIds = NumList() << 449 << 450 << 451 << 452 << 453 << 454 << 455 << 456 << 457 << 458 << 459;
NumList LAccessibleTextRemoveEvent::overrideIds = NumList();
NumList LAccessibleTextSelectionEvent::overrideIds = NumList();
NumList LAccessibleTextUpdateEvent::overrideIds = NumList();
NumList LAccessibleValueChangeEvent::overrideIds = NumList();
NumList LAccessibleValueInterface::overrideIds = NumList() << 460 << 461 << 462 << 463 << 464;
NumList LAccessibleWidget::overrideIds = NumList() << 465 << 434 << 435 << 437 << 466 << 438 << 439 << 440 << 441 << 467 << 443 << 444 << 445 << 447 << 448;
NumList LActionEvent::overrideIds = NumList();
NumList LBackingStore::overrideIds = NumList();
NumList LBasicTimer::overrideIds = NumList();
NumList LBitArray::overrideIds = NumList();
NumList LBitmap::overrideIds = NumList();
NumList LBrush::overrideIds = NumList();
NumList LChildEvent::overrideIds = NumList();
NumList LCloseEvent::overrideIds = NumList();
NumList LColor::overrideIds = NumList();
NumList LConicalGradient::overrideIds = NumList();
NumList LContextMenuEvent::overrideIds = NumList();
NumList LCryptographicHash::overrideIds = NumList();
NumList LCursor::overrideIds = NumList();
NumList LDate::overrideIds = NumList();
NumList LDateTime::overrideIds = NumList();
NumList LDir::overrideIds = NumList();
NumList LDirIterator::overrideIds = NumList();
NumList LDragEnterEvent::overrideIds = NumList();
NumList LDragLeaveEvent::overrideIds = NumList();
NumList LDragMoveEvent::overrideIds = NumList();
NumList LDropEvent::overrideIds = NumList();
NumList LDynamicPropertyChangeEvent::overrideIds = NumList();
NumList LEasingCurve::overrideIds = NumList();
NumList LElapsedTimer::overrideIds = NumList();
NumList LEnterEvent::overrideIds = NumList();
NumList LEvent::overrideIds = NumList();
NumList LEventLoopLocker::overrideIds = NumList();
NumList LExposeEvent::overrideIds = NumList();
NumList LFileIconProvider::overrideIds = NumList() << 468 << 469 << 470;
NumList LFileInfo::overrideIds = NumList();
NumList LFileOpenEvent::overrideIds = NumList();
NumList LFocusEvent::overrideIds = NumList();
NumList LFont::overrideIds = NumList();
NumList LFontDatabase::overrideIds = NumList();
NumList LFontInfo::overrideIds = NumList();
NumList LFontMetrics::overrideIds = NumList();
NumList LFontMetricsF::overrideIds = NumList();
NumList LGestureEvent::overrideIds = NumList();
NumList LGradient::overrideIds = NumList();
NumList LGraphicsAnchorLayout::overrideIds = NumList() << 163 << 165 << 166 << 471 << 232 << 249;
NumList LGraphicsEllipseItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233;
NumList LGraphicsGridLayout::overrideIds = NumList() << 163 << 165 << 166 << 471 << 232 << 249;
NumList LGraphicsItem::overrideIds = NumList() << 426 << 260 << 427 << 428 << 267 << 268 << 269 << 231 << 261 << 233 << 234 << 235 << 236 << 237 << 238 << 13 << 14 << 240 << 241 << 242 << 36 << 23 << 243 << 15 << 16 << 244 << 245 << 246 << 247 << 262 << 429 << 251;
NumList LGraphicsItemGroup::overrideIds = NumList() << 260 << 268 << 269 << 231 << 233;
NumList LGraphicsLayout::overrideIds = NumList() << 163 << 165 << 166 << 471 << 472 << 263;
NumList LGraphicsLayoutItem::overrideIds = NumList() << 232 << 263 << 249;
NumList LGraphicsLineItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233;
NumList LGraphicsLinearLayout::overrideIds = NumList() << 163 << 165 << 166 << 471 << 232 << 249;
NumList LGraphicsPathItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233;
NumList LGraphicsPixmapItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233;
NumList LGraphicsPolygonItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233;
NumList LGraphicsRectItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233;
NumList LGraphicsSceneContextMenuEvent::overrideIds = NumList();
NumList LGraphicsSceneDragDropEvent::overrideIds = NumList();
NumList LGraphicsSceneEvent::overrideIds = NumList();
NumList LGraphicsSceneHelpEvent::overrideIds = NumList();
NumList LGraphicsSceneHoverEvent::overrideIds = NumList();
NumList LGraphicsSceneMouseEvent::overrideIds = NumList();
NumList LGraphicsSceneMoveEvent::overrideIds = NumList();
NumList LGraphicsSceneResizeEvent::overrideIds = NumList();
NumList LGraphicsSceneWheelEvent::overrideIds = NumList();
NumList LGraphicsSimpleTextItem::overrideIds = NumList() << 260 << 267 << 268 << 269 << 231 << 261 << 233;
NumList LHelpEvent::overrideIds = NumList();
NumList LHideEvent::overrideIds = NumList();
NumList LHoverEvent::overrideIds = NumList();
NumList LIcon::overrideIds = NumList();
NumList LIconDragEvent::overrideIds = NumList();
NumList LImage::overrideIds = NumList();
NumList LInputEvent::overrideIds = NumList();
NumList LInputMethodEvent::overrideIds = NumList();
NumList LInputMethodQueryEvent::overrideIds = NumList();
NumList LItemEditorCreatorBase::overrideIds = NumList() << 416 << 473;
NumList LItemEditorFactory::overrideIds = NumList() << 474 << 475;
NumList LItemSelectionRange::overrideIds = NumList();
NumList LKeyEvent::overrideIds = NumList();
NumList LKeySequence::overrideIds = NumList();
NumList LLayoutItem::overrideIds = NumList() << 173 << 164 << 174 << 21 << 22 << 165 << 175 << 176 << 167 << 168 << 169 << 170 << 25 << 476 << 477;
NumList LLibraryInfo::overrideIds = NumList();
NumList LLinearGradient::overrideIds = NumList();
NumList LListWidgetItem::overrideIds = NumList() << 478 << 479 << 480;
NumList LLocale::overrideIds = NumList();
NumList LMargins::overrideIds = NumList();
NumList LMarginsF::overrideIds = NumList();
NumList LMatrix::overrideIds = NumList();
NumList LMatrix4x4::overrideIds = NumList();
NumList LMessageAuthenticationCode::overrideIds = NumList();
NumList LMetaObject::overrideIds = NumList();
NumList LModelIndex::overrideIds = NumList();
NumList LMouseEvent::overrideIds = NumList();
NumList LMoveEvent::overrideIds = NumList();
NumList LOpenGLFramebufferObject::overrideIds = NumList();
NumList LOpenGLFramebufferObjectFormat::overrideIds = NumList();
NumList LOpenGLPaintDevice::overrideIds = NumList() << 482 << 483;
NumList LOpenGLTexture::overrideIds = NumList();
NumList LPageLayout::overrideIds = NumList();
NumList LPageSize::overrideIds = NumList();
NumList LPaintEvent::overrideIds = NumList();
NumList LPainter::overrideIds = NumList();
NumList LPainterPath::overrideIds = NumList();
NumList LPainterPathStroker::overrideIds = NumList();
NumList LPalette::overrideIds = NumList();
NumList LPen::overrideIds = NumList();
NumList LPersistentModelIndex::overrideIds = NumList();
NumList LPicture::overrideIds = NumList() << 484;
NumList LPixmap::overrideIds = NumList();
NumList LPixmapCache::overrideIds = NumList();
NumList LPrinter::overrideIds = NumList() << 313;
NumList LPrinterInfo::overrideIds = NumList();
NumList LProcessEnvironment::overrideIds = NumList();
NumList LQuaternion::overrideIds = NumList();
NumList LRadialGradient::overrideIds = NumList();
NumList LRegExp::overrideIds = NumList();
NumList LRegion::overrideIds = NumList();
NumList LRegularExpression::overrideIds = NumList();
NumList LResizeEvent::overrideIds = NumList();
NumList LRunnable::overrideIds = NumList() << 487;
NumList LScrollEvent::overrideIds = NumList();
NumList LScrollPrepareEvent::overrideIds = NumList();
NumList LSemaphore::overrideIds = NumList();
NumList LShortcutEvent::overrideIds = NumList();
NumList LShowEvent::overrideIds = NumList();
NumList LSizePolicy::overrideIds = NumList();
NumList LSpacerItem::overrideIds = NumList() << 164 << 174 << 175 << 167 << 169 << 170 << 25 << 476;
NumList LStandardItem::overrideIds = NumList() << 478 << 479 << 507 << 233;
NumList LStatusTipEvent::overrideIds = NumList();
NumList LStorageInfo::overrideIds = NumList();
NumList LStyleOption::overrideIds = NumList();
NumList LStyleOptionGraphicsItem::overrideIds = NumList();
NumList LSurfaceFormat::overrideIds = NumList();
NumList LSystemSemaphore::overrideIds = NumList();
NumList LTableWidgetItem::overrideIds = NumList() << 478 << 479 << 480;
NumList LTableWidgetSelectionRange::overrideIds = NumList();
NumList LTabletEvent::overrideIds = NumList();
NumList LTextBlock::overrideIds = NumList();
NumList LTextBlockFormat::overrideIds = NumList();
NumList LTextBlockUserData::overrideIds = NumList();
NumList LTextBoundaryFinder::overrideIds = NumList();
NumList LTextCharFormat::overrideIds = NumList();
NumList LTextCodec::overrideIds = NumList() << 508 << 509 << 510 << 511 << 512;
NumList LTextCursor::overrideIds = NumList();
NumList LTextDecoder::overrideIds = NumList();
NumList LTextDocumentFragment::overrideIds = NumList();
NumList LTextDocumentWriter::overrideIds = NumList();
NumList LTextEncoder::overrideIds = NumList();
NumList LTextFormat::overrideIds = NumList();
NumList LTextFragment::overrideIds = NumList();
NumList LTextFrameFormat::overrideIds = NumList();
NumList LTextImageFormat::overrideIds = NumList();
NumList LTextLayout::overrideIds = NumList();
NumList LTextLength::overrideIds = NumList();
NumList LTextLine::overrideIds = NumList();
NumList LTextListFormat::overrideIds = NumList();
NumList LTextOption::overrideIds = NumList();
NumList LTextTableCell::overrideIds = NumList();
NumList LTextTableCellFormat::overrideIds = NumList();
NumList LTextTableFormat::overrideIds = NumList();
NumList LTime::overrideIds = NumList();
NumList LTimeZone::overrideIds = NumList();
NumList LTimerEvent::overrideIds = NumList();
NumList LToolTip::overrideIds = NumList();
NumList LTouchDevice::overrideIds = NumList();
NumList LTouchEvent::overrideIds = NumList();
NumList LTransform::overrideIds = NumList();
NumList LTreeWidgetItem::overrideIds = NumList() << 478 << 513 << 514;
NumList LUndoCommand::overrideIds = NumList() << 515 << 516 << 517 << 518;
NumList LUrl::overrideIds = NumList();
NumList LUuid::overrideIds = NumList();
NumList LVariant::overrideIds = NumList();
NumList LVector2D::overrideIds = NumList();
NumList LVector3D::overrideIds = NumList();
NumList LVector4D::overrideIds = NumList();
NumList LWhatsThis::overrideIds = NumList();
NumList LWhatsThisClickedEvent::overrideIds = NumList();
NumList LWheelEvent::overrideIds = NumList();
NumList LWidgetItem::overrideIds = NumList() << 173 << 164 << 174 << 21 << 22 << 175 << 167 << 169 << 170 << 25 << 477;
NumList LWindowStateChangeEvent::overrideIds = NumList();

void LObjects::ini(EQL* e) {
    static bool ok = false;
    if(!ok) {
        ok = true;
        eql = e;
        dynObject = new DynObject;
        Q = new QObject* [250]; for(int i = 0; i < 250; ++i) { Q[i] = 0; }
        N = new QObject* [246]; for(int i = 0; i < 246; ++i) { N[i] = 0; }
        Q[0] = new Q1;
        Q[1] = new Q2;
        Q[2] = new Q3;
        Q[3] = new Q4;
        Q[4] = new Q5;
        Q[5] = new Q6;
        Q[7] = new Q8;
        Q[8] = new Q9;
        Q[9] = new Q10;
        Q[10] = new Q11;
        Q[12] = new Q13;
        Q[13] = new Q14;
        Q[14] = new Q15;
        Q[15] = new Q16;
        Q[16] = new Q17;
        Q[18] = new Q19;
        Q[19] = new Q20;
        Q[20] = new Q21;
        Q[21] = new Q22;
        Q[24] = new Q25;
        Q[25] = new Q26;
        Q[26] = new Q27;
        Q[27] = new Q28;
        Q[34] = new Q35;
        Q[35] = new Q36;
        Q[36] = new Q37;
        Q[37] = new Q38;
        Q[38] = new Q39;
        Q[39] = new Q40;
        Q[40] = new Q41;
        Q[41] = new Q42;
        Q[42] = new Q43;
        Q[43] = new Q44;
        Q[44] = new Q45;
        Q[45] = new Q46;
        Q[46] = new Q47;
        Q[47] = new Q48;
        Q[48] = new Q49;
        Q[49] = new Q50;
        Q[50] = new Q51;
        Q[51] = new Q52;
        Q[52] = new Q53;
        Q[53] = new Q54;
        Q[54] = new Q55;
        Q[55] = new Q56;
        Q[56] = new Q57;
        Q[57] = new Q58;
        Q[58] = new Q59;
        Q[59] = new Q60;
        Q[60] = new Q61;
        Q[61] = new Q62;
        Q[62] = new Q63;
        Q[63] = new Q64;
        Q[64] = new Q65;
        Q[65] = new Q66;
        Q[66] = new Q67;
        Q[67] = new Q68;
        Q[68] = new Q69;
        Q[69] = new Q70;
        Q[70] = new Q71;
        Q[71] = new Q72;
        Q[72] = new Q73;
        Q[73] = new Q74;
        Q[74] = new Q75;
        Q[75] = new Q76;
        Q[76] = new Q77;
        Q[77] = new Q78;
        Q[78] = new Q79;
        Q[79] = new Q80;
        Q[80] = new Q81;
        Q[81] = new Q82;
        Q[83] = new Q84;
        Q[84] = new Q85;
        Q[86] = new Q87;
        Q[88] = new Q89;
        Q[89] = new Q90;
        Q[90] = new Q91;
        Q[91] = new Q92;
        Q[92] = new Q93;
        Q[93] = new Q94;
        Q[102] = new Q103;
        Q[104] = new Q105;
        Q[105] = new Q106;
        Q[106] = new Q107;
        Q[107] = new Q108;
        Q[108] = new Q109;
        Q[109] = new Q110;
        Q[110] = new Q111;
        Q[111] = new Q112;
        Q[112] = new Q113;
        Q[113] = new Q114;
        Q[114] = new Q115;
        Q[115] = new Q116;
        Q[116] = new Q117;
        Q[117] = new Q118;
        Q[118] = new Q119;
        Q[121] = new Q122;
        Q[122] = new Q123;
        Q[123] = new Q124;
        Q[129] = new Q130;
        Q[130] = new Q131;
        Q[131] = new Q132;
        Q[132] = new Q133;
        Q[133] = new Q134;
        Q[134] = new Q135;
        Q[139] = new Q140;
        Q[140] = new Q141;
        Q[141] = new Q142;
        Q[142] = new Q143;
        Q[143] = new Q144;
        Q[144] = new Q145;
        Q[145] = new Q146;
        Q[146] = new Q147;
        Q[147] = new Q148;
        Q[148] = new Q149;
        Q[149] = new Q150;
        Q[150] = new Q151;
        Q[151] = new Q152;
        Q[152] = new Q153;
        Q[153] = new Q154;
        Q[154] = new Q155;
        Q[155] = new Q156;
        Q[156] = new Q157;
        Q[157] = new Q158;
        Q[158] = new Q159;
        Q[159] = new Q160;
        Q[160] = new Q161;
        Q[161] = new Q162;
        Q[162] = new Q163;
        Q[163] = new Q164;
        Q[164] = new Q165;
        Q[165] = new Q166;
        Q[167] = new Q168;
        Q[168] = new Q169;
        Q[169] = new Q170;
        Q[170] = new Q171;
        Q[171] = new Q172;
        Q[172] = new Q173;
        Q[173] = new Q174;
        Q[174] = new Q175;
        Q[175] = new Q176;
        Q[176] = new Q177;
        Q[177] = new Q178;
        Q[178] = new Q179;
        Q[179] = new Q180;
        Q[180] = new Q181;
        Q[181] = new Q182;
        Q[182] = new Q183;
        Q[183] = new Q184;
        Q[184] = new Q185;
        Q[190] = new Q191;
        Q[191] = new Q192;
        Q[192] = new Q193;
        Q[193] = new Q194;
        Q[194] = new Q195;
        Q[195] = new Q196;
        Q[196] = new Q197;
        Q[197] = new Q198;
        Q[198] = new Q199;
        Q[199] = new Q200;
        Q[202] = new Q203;
        Q[203] = new Q204;
        Q[204] = new Q205;
        Q[205] = new Q206;
        Q[206] = new Q207;
        Q[207] = new Q208;
        Q[208] = new Q209;
        Q[209] = new Q210;
        Q[210] = new Q211;
        Q[213] = new Q214;
        Q[214] = new Q215;
        Q[215] = new Q216;
        Q[216] = new Q217;
        Q[217] = new Q218;
        Q[218] = new Q219;
        Q[219] = new Q220;
        Q[220] = new Q221;
        Q[221] = new Q222;
        Q[222] = new Q223;
        Q[223] = new Q224;
        Q[224] = new Q225;
        Q[225] = new Q226;
        Q[226] = new Q227;
        Q[227] = new Q228;
        Q[228] = new Q229;
        Q[229] = new Q230;
        Q[231] = new Q232;
        Q[232] = new Q233;
        Q[233] = new Q234;
        Q[234] = new Q235;
        Q[235] = new Q236;
        Q[236] = new Q237;
        Q[245] = new Q246;
        Q[246] = new Q247;
        Q[247] = new Q248;
        Q[248] = new Q249;
        Q[249] = new Q250;
        N[0] = new N1;
        N[1] = new N2;
        N[2] = new N3;
        N[3] = new N4;
        N[4] = new N5;
        N[5] = new N6;
        N[6] = new N7;
        N[7] = new N8;
        N[8] = new N9;
        N[9] = new N10;
        N[10] = new N11;
        N[11] = new N12;
        N[12] = new N13;
        N[13] = new N14;
        N[14] = new N15;
        N[15] = new N16;
        N[16] = new N17;
        N[21] = new N22;
        N[22] = new N23;
        N[23] = new N24;
        N[24] = new N25;
        N[25] = new N26;
        N[28] = new N29;
        N[29] = new N30;
        N[30] = new N31;
        N[31] = new N32;
        N[32] = new N33;
        N[33] = new N34;
        N[34] = new N35;
        N[35] = new N36;
        N[36] = new N37;
        N[37] = new N38;
        N[38] = new N39;
        N[39] = new N40;
        N[40] = new N41;
        N[41] = new N42;
        N[42] = new N43;
        N[43] = new N44;
        N[44] = new N45;
        N[45] = new N46;
        N[46] = new N47;
        N[47] = new N48;
        N[48] = new N49;
        N[49] = new N50;
        N[50] = new N51;
        N[51] = new N52;
        N[52] = new N53;
        N[53] = new N54;
        N[54] = new N55;
        N[55] = new N56;
        N[56] = new N57;
        N[57] = new N58;
        N[58] = new N59;
        N[59] = new N60;
        N[60] = new N61;
        N[61] = new N62;
        N[62] = new N63;
        N[63] = new N64;
        N[64] = new N65;
        N[65] = new N66;
        N[66] = new N67;
        N[67] = new N68;
        N[68] = new N69;
        N[69] = new N70;
        N[70] = new N71;
        N[71] = new N72;
        N[72] = new N73;
        N[73] = new N74;
        N[74] = new N75;
        N[75] = new N76;
        N[76] = new N77;
        N[77] = new N78;
        N[78] = new N79;
        N[79] = new N80;
        N[80] = new N81;
        N[81] = new N82;
        N[82] = new N83;
        N[83] = new N84;
        N[84] = new N85;
        N[86] = new N87;
        N[88] = new N89;
        N[91] = new N92;
        N[93] = new N94;
        N[94] = new N95;
        N[95] = new N96;
        N[97] = new N98;
        N[98] = new N99;
        N[99] = new N100;
        N[100] = new N101;
        N[101] = new N102;
        N[102] = new N103;
        N[103] = new N104;
        N[104] = new N105;
        N[105] = new N106;
        N[106] = new N107;
        N[107] = new N108;
        N[108] = new N109;
        N[109] = new N110;
        N[110] = new N111;
        N[111] = new N112;
        N[112] = new N113;
        N[113] = new N114;
        N[116] = new N117;
        N[117] = new N118;
        N[118] = new N119;
        N[119] = new N120;
        N[120] = new N121;
        N[130] = new N131;
        N[131] = new N132;
        N[132] = new N133;
        N[133] = new N134;
        N[134] = new N135;
        N[135] = new N136;
        N[136] = new N137;
        N[137] = new N138;
        N[138] = new N139;
        N[139] = new N140;
        N[140] = new N141;
        N[141] = new N142;
        N[142] = new N143;
        N[143] = new N144;
        N[144] = new N145;
        N[145] = new N146;
        N[146] = new N147;
        N[147] = new N148;
        N[148] = new N149;
        N[149] = new N150;
        N[150] = new N151;
        N[151] = new N152;
        N[152] = new N153;
        N[153] = new N154;
        N[154] = new N155;
        N[155] = new N156;
        N[156] = new N157;
        N[157] = new N158;
        N[158] = new N159;
        N[159] = new N160;
        N[160] = new N161;
        N[161] = new N162;
        N[162] = new N163;
        N[163] = new N164;
        N[164] = new N165;
        N[178] = new N179;
        N[179] = new N180;
        N[180] = new N181;
        N[181] = new N182;
        N[182] = new N183;
        N[183] = new N184;
        N[184] = new N185;
        N[185] = new N186;
        N[187] = new N188;
        N[188] = new N189;
        N[189] = new N190;
        N[190] = new N191;
        N[191] = new N192;
        N[192] = new N193;
        N[193] = new N194;
        N[194] = new N195;
        N[195] = new N196;
        N[196] = new N197;
        N[197] = new N198;
        N[198] = new N199;
        N[199] = new N200;
        N[200] = new N201;
        N[201] = new N202;
        N[202] = new N203;
        N[203] = new N204;
        N[204] = new N205;
        N[205] = new N206;
        N[206] = new N207;
        N[207] = new N208;
        N[208] = new N209;
        N[209] = new N210;
        N[210] = new N211;
        N[211] = new N212;
        N[212] = new N213;
        N[213] = new N214;
        N[214] = new N215;
        N[215] = new N216;
        N[216] = new N217;
        N[217] = new N218;
        N[218] = new N219;
        N[219] = new N220;
        N[220] = new N221;
        N[221] = new N222;
        N[222] = new N223;
        N[223] = new N224;
        N[224] = new N225;
        N[225] = new N226;
        N[226] = new N227;
        N[227] = new N228;
        N[228] = new N229;
        N[229] = new N230;
        N[241] = new N242;
        N[242] = new N243;
        N[243] = new N244;
        N[244] = new N245;
        N[245] = new N246;
        q_names["QAbstractAnimation"] = 1;
        q_names["QAbstractButton"] = 2;
        q_names["QAbstractItemDelegate"] = 3;
        q_names["QAbstractItemModel"] = 4;
        q_names["QAbstractItemView"] = 5;
        q_names["QAbstractListModel"] = 6;
        q_names["QAbstractNetworkCache"] = 7;
        q_names["QAbstractPrintDialog"] = 8;
        q_names["QAbstractProxyModel"] = 9;
        q_names["QAbstractScrollArea"] = 10;
        q_names["QAbstractSlider"] = 11;
        q_names["QAbstractSocket"] = 12;
        q_names["QAbstractSpinBox"] = 13;
        q_names["QAbstractState"] = 14;
        q_names["QAbstractTableModel"] = 15;
        q_names["QAbstractTextDocumentLayout"] = 16;
        q_names["QAbstractTransition"] = 17;
        q_names["QAbstractVideoSurface"] = 18;
        q_names["QAction"] = 19;
        q_names["QActionGroup"] = 20;
        q_names["QAnimationGroup"] = 21;
        q_names["QApplication"] = 22;
        q_names["QAudioOutput"] = 23;
        q_names["QAudioRecorder"] = 24;
        q_names["QBoxLayout"] = 25;
        q_names["QBuffer"] = 26;
        q_names["QButtonGroup"] = 27;
        q_names["QCalendarWidget"] = 28;
        q_names["QCamera"] = 29;
        q_names["QCameraExposure"] = 30;
        q_names["QCameraFocus"] = 31;
        q_names["QCameraImageCapture"] = 32;
        q_names["QCameraImageProcessing"] = 33;
        q_names["QCameraViewfinder"] = 34;
        q_names["QCheckBox"] = 35;
        q_names["QClipboard"] = 36;
        q_names["QColorDialog"] = 37;
        q_names["QColumnView"] = 38;
        q_names["QComboBox"] = 39;
        q_names["QCommandLinkButton"] = 40;
        q_names["QCommonStyle"] = 41;
        q_names["QCompleter"] = 42;
        q_names["QCoreApplication"] = 43;
        q_names["QDataWidgetMapper"] = 44;
        q_names["QDateEdit"] = 45;
        q_names["QDateTimeEdit"] = 46;
        q_names["QDesktopWidget"] = 47;
        q_names["QDial"] = 48;
        q_names["QDialog"] = 49;
        q_names["QDialogButtonBox"] = 50;
        q_names["QDirModel"] = 51;
        q_names["QDockWidget"] = 52;
        q_names["QDoubleSpinBox"] = 53;
        q_names["QDoubleValidator"] = 54;
        q_names["QDrag"] = 55;
        q_names["QErrorMessage"] = 56;
        q_names["QEventLoop"] = 57;
        q_names["QEventTransition"] = 58;
        q_names["QFile"] = 59;
        q_names["QFileDevice"] = 60;
        q_names["QFileDialog"] = 61;
        q_names["QFileSelector"] = 62;
        q_names["QFileSystemModel"] = 63;
        q_names["QFileSystemWatcher"] = 64;
        q_names["QFinalState"] = 65;
        q_names["QFocusFrame"] = 66;
        q_names["QFontComboBox"] = 67;
        q_names["QFontDialog"] = 68;
        q_names["QFormLayout"] = 69;
        q_names["QFrame"] = 70;
        q_names["QGesture"] = 71;
        q_names["QGraphicsAnchor"] = 72;
        q_names["QGraphicsBlurEffect"] = 73;
        q_names["QGraphicsColorizeEffect"] = 74;
        q_names["QGraphicsDropShadowEffect"] = 75;
        q_names["QGraphicsEffect"] = 76;
        q_names["QGraphicsObject"] = 77;
        q_names["QGraphicsOpacityEffect"] = 78;
        q_names["QGraphicsProxyWidget"] = 79;
        q_names["QGraphicsRotation"] = 80;
        q_names["QGraphicsScale"] = 81;
        q_names["QGraphicsScene"] = 82;
        q_names["QGraphicsSvgItem"] = 83;
        q_names["QGraphicsTextItem"] = 84;
        q_names["QGraphicsTransform"] = 85;
        q_names["QGraphicsVideoItem"] = 86;
        q_names["QGraphicsView"] = 87;
        q_names["QGraphicsWebView"] = 88;
        q_names["QGraphicsWidget"] = 89;
        q_names["QGridLayout"] = 90;
        q_names["QGroupBox"] = 91;
        q_names["QGuiApplication"] = 92;
        q_names["QHBoxLayout"] = 93;
        q_names["QHeaderView"] = 94;
        q_names["QHelpContentModel"] = 95;
        q_names["QHelpContentWidget"] = 96;
        q_names["QHelpEngineCore"] = 97;
        q_names["QHelpIndexModel"] = 98;
        q_names["QHelpIndexWidget"] = 99;
        q_names["QHelpSearchEngine"] = 100;
        q_names["QHelpSearchQueryWidget"] = 101;
        q_names["QHelpSearchResultWidget"] = 102;
        q_names["QHistoryState"] = 103;
        q_names["QHttpMultiPart"] = 104;
        q_names["QIODevice"] = 105;
        q_names["QIdentityProxyModel"] = 106;
        q_names["QInputDialog"] = 107;
        q_names["QInputMethod"] = 108;
        q_names["QIntValidator"] = 109;
        q_names["QItemDelegate"] = 110;
        q_names["QItemSelectionModel"] = 111;
        q_names["QKeyEventTransition"] = 112;
        q_names["QLCDNumber"] = 113;
        q_names["QLabel"] = 114;
        q_names["QLayout"] = 115;
        q_names["QLibrary"] = 116;
        q_names["QLineEdit"] = 117;
        q_names["QListView"] = 118;
        q_names["QListWidget"] = 119;
        q_names["QLocalServer"] = 120;
        q_names["QLocalSocket"] = 121;
        q_names["QMainWindow"] = 122;
        q_names["QMdiArea"] = 123;
        q_names["QMdiSubWindow"] = 124;
        q_names["QMediaObject"] = 125;
        q_names["QMediaPlayer"] = 126;
        q_names["QMediaPlaylist"] = 127;
        q_names["QMediaRecorder"] = 128;
        q_names["QMediaService"] = 129;
        q_names["QMenu"] = 130;
        q_names["QMenuBar"] = 131;
        q_names["QMessageBox"] = 132;
        q_names["QMimeData"] = 133;
        q_names["QMouseEventTransition"] = 134;
        q_names["QMovie"] = 135;
        q_names["QNetworkAccessManager"] = 136;
        q_names["QNetworkCookieJar"] = 137;
        q_names["QNetworkDiskCache"] = 138;
        q_names["QNetworkReply"] = 139;
        q_names["QObject"] = 140;
        q_names["QObjectCleanupHandler"] = 141;
        q_names["QOpenGLContext"] = 142;
        q_names["QOpenGLShader"] = 143;
        q_names["QOpenGLShaderProgram"] = 144;
        q_names["QOpenGLWidget"] = 145;
        q_names["QOpenGLWindow"] = 146;
        q_names["QPageSetupDialog"] = 147;
        q_names["QPaintDeviceWindow"] = 148;
        q_names["QPanGesture"] = 149;
        q_names["QParallelAnimationGroup"] = 150;
        q_names["QPauseAnimation"] = 151;
        q_names["QPdfWriter"] = 152;
        q_names["QPinchGesture"] = 153;
        q_names["QPlainTextDocumentLayout"] = 154;
        q_names["QPlainTextEdit"] = 155;
        q_names["QPluginLoader"] = 156;
        q_names["QPrintDialog"] = 157;
        q_names["QPrintPreviewDialog"] = 158;
        q_names["QPrintPreviewWidget"] = 159;
        q_names["QProcess"] = 160;
        q_names["QProgressBar"] = 161;
        q_names["QProgressDialog"] = 162;
        q_names["QPropertyAnimation"] = 163;
        q_names["QProxyStyle"] = 164;
        q_names["QPushButton"] = 165;
        q_names["QRadioButton"] = 166;
        q_names["QRadioTuner"] = 167;
        q_names["QRegExpValidator"] = 168;
        q_names["QRubberBand"] = 169;
        q_names["QScreen"] = 170;
        q_names["QScrollArea"] = 171;
        q_names["QScrollBar"] = 172;
        q_names["QSequentialAnimationGroup"] = 173;
        q_names["QSessionManager"] = 174;
        q_names["QSettings"] = 175;
        q_names["QShortcut"] = 176;
        q_names["QSignalMapper"] = 177;
        q_names["QSignalTransition"] = 178;
        q_names["QSizeGrip"] = 179;
        q_names["QSlider"] = 180;
        q_names["QSortFilterProxyModel"] = 181;
        q_names["QSpinBox"] = 182;
        q_names["QSplashScreen"] = 183;
        q_names["QSplitter"] = 184;
        q_names["QSplitterHandle"] = 185;
        q_names["QSqlDriver"] = 186;
        q_names["QSqlQueryModel"] = 187;
        q_names["QSqlRelationalDelegate"] = 188;
        q_names["QSqlRelationalTableModel"] = 189;
        q_names["QSqlTableModel"] = 190;
        q_names["QStackedLayout"] = 191;
        q_names["QStackedWidget"] = 192;
        q_names["QStandardItemModel"] = 193;
        q_names["QState"] = 194;
        q_names["QStateMachine"] = 195;
        q_names["QStatusBar"] = 196;
        q_names["QStringListModel"] = 197;
        q_names["QStyle"] = 198;
        q_names["QStyleHints"] = 199;
        q_names["QStyledItemDelegate"] = 200;
        q_names["QSvgRenderer"] = 201;
        q_names["QSvgWidget"] = 202;
        q_names["QSwipeGesture"] = 203;
        q_names["QSyntaxHighlighter"] = 204;
        q_names["QSystemTrayIcon"] = 205;
        q_names["QTabBar"] = 206;
        q_names["QTabWidget"] = 207;
        q_names["QTableView"] = 208;
        q_names["QTableWidget"] = 209;
        q_names["QTapAndHoldGesture"] = 210;
        q_names["QTapGesture"] = 211;
        q_names["QTcpServer"] = 212;
        q_names["QTcpSocket"] = 213;
        q_names["QTextBlockGroup"] = 214;
        q_names["QTextBrowser"] = 215;
        q_names["QTextDocument"] = 216;
        q_names["QTextEdit"] = 217;
        q_names["QTextFrame"] = 218;
        q_names["QTextList"] = 219;
        q_names["QTextObject"] = 220;
        q_names["QTextTable"] = 221;
        q_names["QTimeEdit"] = 222;
        q_names["QTimeLine"] = 223;
        q_names["QTimer"] = 224;
        q_names["QToolBar"] = 225;
        q_names["QToolBox"] = 226;
        q_names["QToolButton"] = 227;
        q_names["QTranslator"] = 228;
        q_names["QTreeView"] = 229;
        q_names["QTreeWidget"] = 230;
        q_names["QUdpSocket"] = 231;
        q_names["QUndoGroup"] = 232;
        q_names["QUndoStack"] = 233;
        q_names["QUndoView"] = 234;
        q_names["QVBoxLayout"] = 235;
        q_names["QValidator"] = 236;
        q_names["QVariantAnimation"] = 237;
        q_names["QVideoWidget"] = 238;
        q_names["QVideoWidgetControl"] = 239;
        q_names["QWebFrame"] = 240;
        q_names["QWebHistoryInterface"] = 241;
        q_names["QWebInspector"] = 242;
        q_names["QWebPage"] = 243;
        q_names["QWebPluginFactory"] = 244;
        q_names["QWebView"] = 245;
        q_names["QWidget"] = 246;
        q_names["QWidgetAction"] = 247;
        q_names["QWindow"] = 248;
        q_names["QWizard"] = 249;
        q_names["QWizardPage"] = 250;
        n_names["QAbstractGraphicsShapeItem"] = 1;
        n_names["QAccessible"] = 2;
        n_names["QAccessibleEditableTextInterface"] = 3;
        n_names["QAccessibleEvent"] = 4;
        n_names["QAccessibleInterface"] = 5;
        n_names["QAccessibleObject"] = 6;
        n_names["QAccessibleStateChangeEvent"] = 7;
        n_names["QAccessibleTextCursorEvent"] = 8;
        n_names["QAccessibleTextInsertEvent"] = 9;
        n_names["QAccessibleTextInterface"] = 10;
        n_names["QAccessibleTextRemoveEvent"] = 11;
        n_names["QAccessibleTextSelectionEvent"] = 12;
        n_names["QAccessibleTextUpdateEvent"] = 13;
        n_names["QAccessibleValueChangeEvent"] = 14;
        n_names["QAccessibleValueInterface"] = 15;
        n_names["QAccessibleWidget"] = 16;
        n_names["QActionEvent"] = 17;
        n_names["QAudioDeviceInfo"] = 18;
        n_names["QAudioEncoderSettings"] = 19;
        n_names["QAudioFormat"] = 20;
        n_names["QAuthenticator"] = 21;
        n_names["QBackingStore"] = 22;
        n_names["QBasicTimer"] = 23;
        n_names["QBitArray"] = 24;
        n_names["QBitmap"] = 25;
        n_names["QBrush"] = 26;
        n_names["QCameraInfo"] = 27;
        n_names["QCameraViewfinderSettings"] = 28;
        n_names["QChildEvent"] = 29;
        n_names["QCloseEvent"] = 30;
        n_names["QColor"] = 31;
        n_names["QConicalGradient"] = 32;
        n_names["QContextMenuEvent"] = 33;
        n_names["QCryptographicHash"] = 34;
        n_names["QCursor"] = 35;
        n_names["QDate"] = 36;
        n_names["QDateTime"] = 37;
        n_names["QDesktopServices"] = 38;
        n_names["QDir"] = 39;
        n_names["QDirIterator"] = 40;
        n_names["QDragEnterEvent"] = 41;
        n_names["QDragLeaveEvent"] = 42;
        n_names["QDragMoveEvent"] = 43;
        n_names["QDropEvent"] = 44;
        n_names["QDynamicPropertyChangeEvent"] = 45;
        n_names["QEasingCurve"] = 46;
        n_names["QElapsedTimer"] = 47;
        n_names["QEnterEvent"] = 48;
        n_names["QEvent"] = 49;
        n_names["QEventLoopLocker"] = 50;
        n_names["QExposeEvent"] = 51;
        n_names["QFileIconProvider"] = 52;
        n_names["QFileInfo"] = 53;
        n_names["QFileOpenEvent"] = 54;
        n_names["QFocusEvent"] = 55;
        n_names["QFont"] = 56;
        n_names["QFontDatabase"] = 57;
        n_names["QFontInfo"] = 58;
        n_names["QFontMetrics"] = 59;
        n_names["QFontMetricsF"] = 60;
        n_names["QGestureEvent"] = 61;
        n_names["QGradient"] = 62;
        n_names["QGraphicsAnchorLayout"] = 63;
        n_names["QGraphicsEllipseItem"] = 64;
        n_names["QGraphicsGridLayout"] = 65;
        n_names["QGraphicsItem"] = 66;
        n_names["QGraphicsItemGroup"] = 67;
        n_names["QGraphicsLayout"] = 68;
        n_names["QGraphicsLayoutItem"] = 69;
        n_names["QGraphicsLineItem"] = 70;
        n_names["QGraphicsLinearLayout"] = 71;
        n_names["QGraphicsPathItem"] = 72;
        n_names["QGraphicsPixmapItem"] = 73;
        n_names["QGraphicsPolygonItem"] = 74;
        n_names["QGraphicsRectItem"] = 75;
        n_names["QGraphicsSceneContextMenuEvent"] = 76;
        n_names["QGraphicsSceneDragDropEvent"] = 77;
        n_names["QGraphicsSceneEvent"] = 78;
        n_names["QGraphicsSceneHelpEvent"] = 79;
        n_names["QGraphicsSceneHoverEvent"] = 80;
        n_names["QGraphicsSceneMouseEvent"] = 81;
        n_names["QGraphicsSceneMoveEvent"] = 82;
        n_names["QGraphicsSceneResizeEvent"] = 83;
        n_names["QGraphicsSceneWheelEvent"] = 84;
        n_names["QGraphicsSimpleTextItem"] = 85;
        n_names["QHelpContentItem"] = 86;
        n_names["QHelpEvent"] = 87;
        n_names["QHelpSearchQuery"] = 88;
        n_names["QHideEvent"] = 89;
        n_names["QHostAddress"] = 90;
        n_names["QHostInfo"] = 91;
        n_names["QHoverEvent"] = 92;
        n_names["QHttpPart"] = 93;
        n_names["QIcon"] = 94;
        n_names["QIconDragEvent"] = 95;
        n_names["QImage"] = 96;
        n_names["QImageEncoderSettings"] = 97;
        n_names["QInputEvent"] = 98;
        n_names["QInputMethodEvent"] = 99;
        n_names["QInputMethodQueryEvent"] = 100;
        n_names["QItemEditorCreatorBase"] = 101;
        n_names["QItemEditorFactory"] = 102;
        n_names["QItemSelectionRange"] = 103;
        n_names["QKeyEvent"] = 104;
        n_names["QKeySequence"] = 105;
        n_names["QLayoutItem"] = 106;
        n_names["QLibraryInfo"] = 107;
        n_names["QLinearGradient"] = 108;
        n_names["QListWidgetItem"] = 109;
        n_names["QLocale"] = 110;
        n_names["QMargins"] = 111;
        n_names["QMarginsF"] = 112;
        n_names["QMatrix"] = 113;
        n_names["QMatrix4x4"] = 114;
        n_names["QMediaContent"] = 115;
        n_names["QMediaResource"] = 116;
        n_names["QMessageAuthenticationCode"] = 117;
        n_names["QMetaObject"] = 118;
        n_names["QModelIndex"] = 119;
        n_names["QMouseEvent"] = 120;
        n_names["QMoveEvent"] = 121;
        n_names["QNetworkAddressEntry"] = 122;
        n_names["QNetworkCacheMetaData"] = 123;
        n_names["QNetworkConfiguration"] = 124;
        n_names["QNetworkCookie"] = 125;
        n_names["QNetworkInterface"] = 126;
        n_names["QNetworkProxy"] = 127;
        n_names["QNetworkProxyFactory"] = 128;
        n_names["QNetworkProxyQuery"] = 129;
        n_names["QNetworkRequest"] = 130;
        n_names["QOpenGLFramebufferObject"] = 131;
        n_names["QOpenGLFramebufferObjectFormat"] = 132;
        n_names["QOpenGLPaintDevice"] = 133;
        n_names["QOpenGLTexture"] = 134;
        n_names["QPageLayout"] = 135;
        n_names["QPageSize"] = 136;
        n_names["QPagedPaintDevice"] = 137;
        n_names["QPaintDevice"] = 138;
        n_names["QPaintEvent"] = 139;
        n_names["QPainter"] = 140;
        n_names["QPainterPath"] = 141;
        n_names["QPainterPathStroker"] = 142;
        n_names["QPalette"] = 143;
        n_names["QPen"] = 144;
        n_names["QPersistentModelIndex"] = 145;
        n_names["QPicture"] = 146;
        n_names["QPixmap"] = 147;
        n_names["QPixmapCache"] = 148;
        n_names["QPrinter"] = 149;
        n_names["QPrinterInfo"] = 150;
        n_names["QProcessEnvironment"] = 151;
        n_names["QQuaternion"] = 152;
        n_names["QRadialGradient"] = 153;
        n_names["QRegExp"] = 154;
        n_names["QRegion"] = 155;
        n_names["QRegularExpression"] = 156;
        n_names["QResizeEvent"] = 157;
        n_names["QRunnable"] = 158;
        n_names["QScrollEvent"] = 159;
        n_names["QScrollPrepareEvent"] = 160;
        n_names["QSemaphore"] = 161;
        n_names["QShortcutEvent"] = 162;
        n_names["QShowEvent"] = 163;
        n_names["QSizePolicy"] = 164;
        n_names["QSpacerItem"] = 165;
        n_names["QSqlDatabase"] = 166;
        n_names["QSqlError"] = 167;
        n_names["QSqlField"] = 168;
        n_names["QSqlIndex"] = 169;
        n_names["QSqlQuery"] = 170;
        n_names["QSqlRecord"] = 171;
        n_names["QSqlRelation"] = 172;
        n_names["QSqlResult"] = 173;
        n_names["QSslCertificate"] = 174;
        n_names["QSslCipher"] = 175;
        n_names["QSslConfiguration"] = 176;
        n_names["QSslError"] = 177;
        n_names["QSslKey"] = 178;
        n_names["QStandardItem"] = 179;
        n_names["QStandardPaths"] = 180;
        n_names["QStatusTipEvent"] = 181;
        n_names["QStorageInfo"] = 182;
        n_names["QStyleOption"] = 183;
        n_names["QStyleOptionGraphicsItem"] = 184;
        n_names["QSurface"] = 185;
        n_names["QSurfaceFormat"] = 186;
        n_names["QSvgGenerator"] = 187;
        n_names["QSysInfo"] = 188;
        n_names["QSystemSemaphore"] = 189;
        n_names["QTableWidgetItem"] = 190;
        n_names["QTableWidgetSelectionRange"] = 191;
        n_names["QTabletEvent"] = 192;
        n_names["QTextBlock"] = 193;
        n_names["QTextBlockFormat"] = 194;
        n_names["QTextBlockUserData"] = 195;
        n_names["QTextBoundaryFinder"] = 196;
        n_names["QTextCharFormat"] = 197;
        n_names["QTextCodec"] = 198;
        n_names["QTextCursor"] = 199;
        n_names["QTextDecoder"] = 200;
        n_names["QTextDocumentFragment"] = 201;
        n_names["QTextDocumentWriter"] = 202;
        n_names["QTextEncoder"] = 203;
        n_names["QTextFormat"] = 204;
        n_names["QTextFragment"] = 205;
        n_names["QTextFrameFormat"] = 206;
        n_names["QTextImageFormat"] = 207;
        n_names["QTextLayout"] = 208;
        n_names["QTextLength"] = 209;
        n_names["QTextLine"] = 210;
        n_names["QTextListFormat"] = 211;
        n_names["QTextOption"] = 212;
        n_names["QTextTableCell"] = 213;
        n_names["QTextTableCellFormat"] = 214;
        n_names["QTextTableFormat"] = 215;
        n_names["QTime"] = 216;
        n_names["QTimeZone"] = 217;
        n_names["QTimerEvent"] = 218;
        n_names["QToolTip"] = 219;
        n_names["QTouchDevice"] = 220;
        n_names["QTouchEvent"] = 221;
        n_names["QTransform"] = 222;
        n_names["QTreeWidgetItem"] = 223;
        n_names["QUndoCommand"] = 224;
        n_names["QUrl"] = 225;
        n_names["QUuid"] = 226;
        n_names["QVariant"] = 227;
        n_names["QVector2D"] = 228;
        n_names["QVector3D"] = 229;
        n_names["QVector4D"] = 230;
        n_names["QVideoEncoderSettings"] = 231;
        n_names["QVideoFrame"] = 232;
        n_names["QVideoSurfaceFormat"] = 233;
        n_names["QWebDatabase"] = 234;
        n_names["QWebElement"] = 235;
        n_names["QWebElementCollection"] = 236;
        n_names["QWebHistory"] = 237;
        n_names["QWebHistoryItem"] = 238;
        n_names["QWebHitTestResult"] = 239;
        n_names["QWebSecurityOrigin"] = 240;
        n_names["QWebSettings"] = 241;
        n_names["QWhatsThis"] = 242;
        n_names["QWhatsThisClickedEvent"] = 243;
        n_names["QWheelEvent"] = 244;
        n_names["QWidgetItem"] = 245;
        n_names["QWindowStateChangeEvent"] = 246;
        override_function_ids["duration()"] = 1;
        override_function_ids["updateCurrentTime(int)"] = 2;
        override_function_ids["updateDirection(QAbstractAnimation::Direction)"] = 3;
        override_function_ids["updateState(QAbstractAnimation::State,QAbstractAnimation::State)"] = 4;
        override_function_ids["eventFilter(QObject*,QEvent*)"] = 5;
        override_function_ids["childEvent(QChildEvent*)"] = 6;
        override_function_ids["customEvent(QEvent*)"] = 7;
        override_function_ids["timerEvent(QTimerEvent*)"] = 8;
        override_function_ids["checkStateSet()"] = 9;
        override_function_ids["hitButton(QPoint)"] = 10;
        override_function_ids["nextCheckState()"] = 11;
        override_function_ids["changeEvent(QEvent*)"] = 12;
        override_function_ids["focusInEvent(QFocusEvent*)"] = 13;
        override_function_ids["focusOutEvent(QFocusEvent*)"] = 14;
        override_function_ids["keyPressEvent(QKeyEvent*)"] = 15;
        override_function_ids["keyReleaseEvent(QKeyEvent*)"] = 16;
        override_function_ids["mouseMoveEvent(QMouseEvent*)"] = 17;
        override_function_ids["mousePressEvent(QMouseEvent*)"] = 18;
        override_function_ids["mouseReleaseEvent(QMouseEvent*)"] = 19;
        override_function_ids["paintEvent(QPaintEvent*)"] = 20;
        override_function_ids["hasHeightForWidth()"] = 21;
        override_function_ids["heightForWidth(int)"] = 22;
        override_function_ids["inputMethodQuery(Qt::InputMethodQuery)"] = 23;
        override_function_ids["minimumSizeHint()"] = 24;
        override_function_ids["sizeHint()"] = 25;
        override_function_ids["actionEvent(QActionEvent*)"] = 26;
        override_function_ids["closeEvent(QCloseEvent*)"] = 27;
        override_function_ids["contextMenuEvent(QContextMenuEvent*)"] = 28;
        override_function_ids["dragEnterEvent(QDragEnterEvent*)"] = 29;
        override_function_ids["dragLeaveEvent(QDragLeaveEvent*)"] = 30;
        override_function_ids["dragMoveEvent(QDragMoveEvent*)"] = 31;
        override_function_ids["dropEvent(QDropEvent*)"] = 32;
        override_function_ids["enterEvent(QEvent*)"] = 33;
        override_function_ids["focusNextPrevChild(bool)"] = 34;
        override_function_ids["hideEvent(QHideEvent*)"] = 35;
        override_function_ids["inputMethodEvent(QInputMethodEvent*)"] = 36;
        override_function_ids["leaveEvent(QEvent*)"] = 37;
        override_function_ids["mouseDoubleClickEvent(QMouseEvent*)"] = 38;
        override_function_ids["moveEvent(QMoveEvent*)"] = 39;
        override_function_ids["resizeEvent(QResizeEvent*)"] = 40;
        override_function_ids["showEvent(QShowEvent*)"] = 41;
        override_function_ids["tabletEvent(QTabletEvent*)"] = 42;
        override_function_ids["wheelEvent(QWheelEvent*)"] = 43;
        override_function_ids["initPainter(QPainter*)"] = 44;
        override_function_ids["metric(PaintDeviceMetric)"] = 45;
        override_function_ids["createEditor(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 46;
        override_function_ids["destroyEditor(QWidget*,QModelIndex)"] = 47;
        override_function_ids["editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem,QModelIndex)"] = 48;
        override_function_ids["helpEvent(QHelpEvent*,QAbstractItemView*,QStyleOptionViewItem,QModelIndex)"] = 49;
        override_function_ids["paint(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 50;
        override_function_ids["setEditorData(QWidget*,QModelIndex)"] = 51;
        override_function_ids["setModelData(QWidget*,QAbstractItemModel*,QModelIndex)"] = 52;
        override_function_ids["sizeHint(QStyleOptionViewItem,QModelIndex)"] = 53;
        override_function_ids["updateEditorGeometry(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 54;
        override_function_ids["buddy(QModelIndex)"] = 55;
        override_function_ids["canDropMimeData(QMimeData*,Qt::DropAction,int,int,QModelIndex)"] = 56;
        override_function_ids["canFetchMore(QModelIndex)"] = 57;
        override_function_ids["columnCount(QModelIndex)"] = 58;
        override_function_ids["data(QModelIndex,int)"] = 59;
        override_function_ids["dropMimeData(QMimeData*,Qt::DropAction,int,int,QModelIndex)"] = 60;
        override_function_ids["fetchMore(QModelIndex)"] = 61;
        override_function_ids["flags(QModelIndex)"] = 62;
        override_function_ids["hasChildren(QModelIndex)"] = 63;
        override_function_ids["headerData(int,Qt::Orientation,int)"] = 64;
        override_function_ids["index(int,int,QModelIndex)"] = 65;
        override_function_ids["insertColumns(int,int,QModelIndex)"] = 66;
        override_function_ids["insertRows(int,int,QModelIndex)"] = 67;
        override_function_ids["match(QModelIndex,int,QVariant,int,Qt::MatchFlags)"] = 68;
        override_function_ids["mimeData(QModelIndexList)"] = 69;
        override_function_ids["mimeTypes()"] = 70;
        override_function_ids["moveColumns(QModelIndex,int,int,QModelIndex,int)"] = 71;
        override_function_ids["moveRows(QModelIndex,int,int,QModelIndex,int)"] = 72;
        override_function_ids["parent(QModelIndex)"] = 73;
        override_function_ids["removeColumns(int,int,QModelIndex)"] = 74;
        override_function_ids["removeRows(int,int,QModelIndex)"] = 75;
        override_function_ids["rowCount(QModelIndex)"] = 76;
        override_function_ids["setData(QModelIndex,QVariant,int)"] = 77;
        override_function_ids["setHeaderData(int,Qt::Orientation,QVariant,int)"] = 78;
        override_function_ids["sibling(int,int,QModelIndex)"] = 79;
        override_function_ids["sort(int,Qt::SortOrder)"] = 80;
        override_function_ids["span(QModelIndex)"] = 81;
        override_function_ids["supportedDragActions()"] = 82;
        override_function_ids["supportedDropActions()"] = 83;
        override_function_ids["indexAt(QPoint)"] = 84;
        override_function_ids["keyboardSearch(QString)"] = 85;
        override_function_ids["scrollTo(QModelIndex,ScrollHint)"] = 86;
        override_function_ids["setModel(QAbstractItemModel*)"] = 87;
        override_function_ids["setSelectionModel(QItemSelectionModel*)"] = 88;
        override_function_ids["sizeHintForColumn(int)"] = 89;
        override_function_ids["sizeHintForRow(int)"] = 90;
        override_function_ids["visualRect(QModelIndex)"] = 91;
        override_function_ids["edit(QModelIndex,EditTrigger,QEvent*)"] = 92;
        override_function_ids["horizontalOffset()"] = 93;
        override_function_ids["isIndexHidden(QModelIndex)"] = 94;
        override_function_ids["moveCursor(CursorAction,Qt::KeyboardModifiers)"] = 95;
        override_function_ids["selectedIndexes()"] = 96;
        override_function_ids["selectionCommand(QModelIndex,QEvent*)"] = 97;
        override_function_ids["setSelection(QRect,QItemSelectionModel::SelectionFlags)"] = 98;
        override_function_ids["startDrag(Qt::DropActions)"] = 99;
        override_function_ids["verticalOffset()"] = 100;
        override_function_ids["viewOptions()"] = 101;
        override_function_ids["visualRegionForSelection(QItemSelection)"] = 102;
        override_function_ids["viewportEvent(QEvent*)"] = 103;
        override_function_ids["viewportSizeHint()"] = 104;
        override_function_ids["setupViewport(QWidget*)"] = 105;
        override_function_ids["scrollContentsBy(int,int)"] = 106;
        override_function_ids["exec()"] = 107;
        override_function_ids["setVisible(bool)"] = 108;
        override_function_ids["mapFromSource(QModelIndex)"] = 109;
        override_function_ids["mapSelectionFromSource(QItemSelection)"] = 110;
        override_function_ids["mapSelectionToSource(QItemSelection)"] = 111;
        override_function_ids["mapToSource(QModelIndex)"] = 112;
        override_function_ids["setSourceModel(QAbstractItemModel*)"] = 113;
        override_function_ids["revert()"] = 114;
        override_function_ids["submit()"] = 115;
        override_function_ids["sliderChange(SliderChange)"] = 116;
        override_function_ids["connectToHost(QString,quint16,OpenMode,NetworkLayerProtocol)"] = 117;
        override_function_ids["connectToHost(QHostAddress,quint16,OpenMode)"] = 118;
        override_function_ids["disconnectFromHost()"] = 119;
        override_function_ids["resume()"] = 120;
        override_function_ids["setReadBufferSize(qint64)"] = 121;
        override_function_ids["setSocketOption(QAbstractSocket::SocketOption,QVariant)"] = 122;
        override_function_ids["socketOption(QAbstractSocket::SocketOption)"] = 123;
        override_function_ids["waitForConnected(int)"] = 124;
        override_function_ids["waitForDisconnected(int)"] = 125;
        override_function_ids["atEnd()"] = 126;
        override_function_ids["bytesAvailable()"] = 127;
        override_function_ids["bytesToWrite()"] = 128;
        override_function_ids["canReadLine()"] = 129;
        override_function_ids["close()"] = 130;
        override_function_ids["isSequential()"] = 131;
        override_function_ids["waitForBytesWritten(int)"] = 132;
        override_function_ids["waitForReadyRead(int)"] = 133;
        override_function_ids["readData(char*,qint64)"] = 134;
        override_function_ids["readLineData(char*,qint64)"] = 135;
        override_function_ids["writeData(const char*,qint64)"] = 136;
        override_function_ids["open(OpenMode)"] = 137;
        override_function_ids["pos()"] = 138;
        override_function_ids["reset()"] = 139;
        override_function_ids["seek(qint64)"] = 140;
        override_function_ids["size()"] = 141;
        override_function_ids["fixup(QString)"] = 142;
        override_function_ids["stepBy(int)"] = 143;
        override_function_ids["validate(QString,int)"] = 144;
        override_function_ids["stepEnabled()"] = 145;
        override_function_ids["onEntry(QEvent*)"] = 146;
        override_function_ids["onExit(QEvent*)"] = 147;
        override_function_ids["blockBoundingRect(QTextBlock)"] = 148;
        override_function_ids["documentSize()"] = 149;
        override_function_ids["draw(QPainter*,PaintContext)"] = 150;
        override_function_ids["frameBoundingRect(QTextFrame*)"] = 151;
        override_function_ids["hitTest(QPointF,Qt::HitTestAccuracy)"] = 152;
        override_function_ids["pageCount()"] = 153;
        override_function_ids["documentChanged(int,int,int)"] = 154;
        override_function_ids["drawInlineObject(QPainter*,QRectF,QTextInlineObject,int,QTextFormat)"] = 155;
        override_function_ids["positionInlineObject(QTextInlineObject,int,QTextFormat)"] = 156;
        override_function_ids["resizeInlineObject(QTextInlineObject,int,QTextFormat)"] = 157;
        override_function_ids["eventTest(QEvent*)"] = 158;
        override_function_ids["onTransition(QEvent*)"] = 159;
        override_function_ids["notify(QObject*,QEvent*)"] = 160;
        override_function_ids["mediaObject()"] = 161;
        override_function_ids["addItem(QLayoutItem*)"] = 162;
        override_function_ids["count()"] = 163;
        override_function_ids["expandingDirections()"] = 164;
        override_function_ids["invalidate()"] = 165;
        override_function_ids["itemAt(int)"] = 166;
        override_function_ids["maximumSize()"] = 167;
        override_function_ids["minimumHeightForWidth(int)"] = 168;
        override_function_ids["minimumSize()"] = 169;
        override_function_ids["setGeometry(QRect)"] = 170;
        override_function_ids["takeAt(int)"] = 171;
        override_function_ids["indexOf(QWidget*)"] = 172;
        override_function_ids["controlTypes()"] = 173;
        override_function_ids["geometry()"] = 174;
        override_function_ids["isEmpty()"] = 175;
        override_function_ids["layout()"] = 176;
        override_function_ids["paintCell(QPainter*,QRect,QDate)"] = 177;
        override_function_ids["availability()"] = 178;
        override_function_ids["bind(QObject*)"] = 179;
        override_function_ids["isAvailable()"] = 180;
        override_function_ids["service()"] = 181;
        override_function_ids["unbind(QObject*)"] = 182;
        override_function_ids["setMediaObject(QMediaObject*)"] = 183;
        override_function_ids["done(int)"] = 184;
        override_function_ids["createColumn(QModelIndex)"] = 185;
        override_function_ids["selectAll()"] = 186;
        override_function_ids["setRootIndex(QModelIndex)"] = 187;
        override_function_ids["currentChanged(QModelIndex,QModelIndex)"] = 188;
        override_function_ids["rowsInserted(QModelIndex,int,int)"] = 189;
        override_function_ids["hidePopup()"] = 190;
        override_function_ids["showPopup()"] = 191;
        override_function_ids["drawComplexControl(ComplexControl,QStyleOptionComplex*,QPainter*,QWidget*)"] = 192;
        override_function_ids["drawControl(ControlElement,QStyleOption*,QPainter*,QWidget*)"] = 193;
        override_function_ids["drawPrimitive(PrimitiveElement,QStyleOption*,QPainter*,QWidget*)"] = 194;
        override_function_ids["generatedIconPixmap(QIcon::Mode,QPixmap,QStyleOption*)"] = 195;
        override_function_ids["hitTestComplexControl(ComplexControl,QStyleOptionComplex*,QPoint,QWidget*)"] = 196;
        override_function_ids["layoutSpacing(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,QStyleOption*,QWidget*)"] = 197;
        override_function_ids["pixelMetric(PixelMetric,QStyleOption*,QWidget*)"] = 198;
        override_function_ids["polish(QPalette)"] = 199;
        override_function_ids["polish(QApplication*)"] = 200;
        override_function_ids["polish(QWidget*)"] = 201;
        override_function_ids["sizeFromContents(ContentsType,QStyleOption*,QSize,QWidget*)"] = 202;
        override_function_ids["standardPixmap(StandardPixmap,QStyleOption*,QWidget*)"] = 203;
        override_function_ids["styleHint(StyleHint,QStyleOption*,QWidget*,QStyleHintReturn*)"] = 204;
        override_function_ids["subControlRect(ComplexControl,QStyleOptionComplex*,SubControl,QWidget*)"] = 205;
        override_function_ids["subElementRect(SubElement,QStyleOption*,QWidget*)"] = 206;
        override_function_ids["unpolish(QWidget*)"] = 207;
        override_function_ids["unpolish(QApplication*)"] = 208;
        override_function_ids["drawItemPixmap(QPainter*,QRect,int,QPixmap)"] = 209;
        override_function_ids["drawItemText(QPainter*,QRect,int,QPalette,bool,QString,QPalette::ColorRole)"] = 210;
        override_function_ids["itemPixmapRect(QRect,int,QPixmap)"] = 211;
        override_function_ids["itemTextRect(QFontMetrics,QRect,int,bool,QString)"] = 212;
        override_function_ids["standardIcon(StandardPixmap,QStyleOption*,QWidget*)"] = 213;
        override_function_ids["standardPalette()"] = 214;
        override_function_ids["pathFromIndex(QModelIndex)"] = 215;
        override_function_ids["splitPath(QString)"] = 216;
        override_function_ids["dateTimeFromText(QString)"] = 217;
        override_function_ids["textFromDateTime(QDateTime)"] = 218;
        override_function_ids["clear()"] = 219;
        override_function_ids["textFromValue(double)"] = 220;
        override_function_ids["valueFromText(QString)"] = 221;
        override_function_ids["setRange(double,double,int)"] = 222;
        override_function_ids["fileName()"] = 223;
        override_function_ids["permissions()"] = 224;
        override_function_ids["resize(qint64)"] = 225;
        override_function_ids["setPermissions(Permissions)"] = 226;
        override_function_ids["accept()"] = 227;
        override_function_ids["boundingRectFor(QRectF)"] = 228;
        override_function_ids["draw(QPainter*)"] = 229;
        override_function_ids["sourceChanged(ChangeFlags)"] = 230;
        override_function_ids["paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 231;
        override_function_ids["setGeometry(QRectF)"] = 232;
        override_function_ids["type()"] = 233;
        override_function_ids["contextMenuEvent(QGraphicsSceneContextMenuEvent*)"] = 234;
        override_function_ids["dragEnterEvent(QGraphicsSceneDragDropEvent*)"] = 235;
        override_function_ids["dragLeaveEvent(QGraphicsSceneDragDropEvent*)"] = 236;
        override_function_ids["dragMoveEvent(QGraphicsSceneDragDropEvent*)"] = 237;
        override_function_ids["dropEvent(QGraphicsSceneDragDropEvent*)"] = 238;
        override_function_ids["grabMouseEvent(QEvent*)"] = 239;
        override_function_ids["hoverEnterEvent(QGraphicsSceneHoverEvent*)"] = 240;
        override_function_ids["hoverLeaveEvent(QGraphicsSceneHoverEvent*)"] = 241;
        override_function_ids["hoverMoveEvent(QGraphicsSceneHoverEvent*)"] = 242;
        override_function_ids["itemChange(GraphicsItemChange,QVariant)"] = 243;
        override_function_ids["mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)"] = 244;
        override_function_ids["mouseMoveEvent(QGraphicsSceneMouseEvent*)"] = 245;
        override_function_ids["mousePressEvent(QGraphicsSceneMouseEvent*)"] = 246;
        override_function_ids["mouseReleaseEvent(QGraphicsSceneMouseEvent*)"] = 247;
        override_function_ids["resizeEvent(QGraphicsSceneResizeEvent*)"] = 248;
        override_function_ids["sizeHint(Qt::SizeHint,QSizeF)"] = 249;
        override_function_ids["ungrabMouseEvent(QEvent*)"] = 250;
        override_function_ids["wheelEvent(QGraphicsSceneWheelEvent*)"] = 251;
        override_function_ids["paintWindowFrame(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 252;
        override_function_ids["grabKeyboardEvent(QEvent*)"] = 253;
        override_function_ids["initStyleOption(QStyleOption*)"] = 254;
        override_function_ids["moveEvent(QGraphicsSceneMoveEvent*)"] = 255;
        override_function_ids["polishEvent()"] = 256;
        override_function_ids["ungrabKeyboardEvent(QEvent*)"] = 257;
        override_function_ids["windowFrameEvent(QEvent*)"] = 258;
        override_function_ids["windowFrameSectionAt(QPointF)"] = 259;
        override_function_ids["boundingRect()"] = 260;
        override_function_ids["shape()"] = 261;
        override_function_ids["sceneEvent(QEvent*)"] = 262;
        override_function_ids["updateGeometry()"] = 263;
        override_function_ids["drawBackground(QPainter*,QRectF)"] = 264;
        override_function_ids["drawForeground(QPainter*,QRectF)"] = 265;
        override_function_ids["helpEvent(QGraphicsSceneHelpEvent*)"] = 266;
        override_function_ids["contains(QPointF)"] = 267;
        override_function_ids["isObscuredBy(QGraphicsItem*)"] = 268;
        override_function_ids["opaqueArea()"] = 269;
        override_function_ids["paintSection(QPainter*,QRect,int)"] = 270;
        override_function_ids["sectionSizeFromContents(int)"] = 271;
        override_function_ids["drawBranches(QPainter*,QRect,QModelIndex)"] = 272;
        override_function_ids["drawRow(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 273;
        override_function_ids["dataChanged(QModelIndex,QModelIndex,QVector<int>)"] = 274;
        override_function_ids["rowsAboutToBeRemoved(QModelIndex,int,int)"] = 275;
        override_function_ids["selectionChanged(QItemSelection,QItemSelection)"] = 276;
        override_function_ids["updateGeometries()"] = 277;
        override_function_ids["setRange(int,int)"] = 278;
        override_function_ids["drawCheck(QPainter*,QStyleOptionViewItem,QRect,Qt::CheckState)"] = 279;
        override_function_ids["drawDecoration(QPainter*,QStyleOptionViewItem,QRect,QPixmap)"] = 280;
        override_function_ids["drawDisplay(QPainter*,QStyleOptionViewItem,QRect,QString)"] = 281;
        override_function_ids["drawFocus(QPainter*,QStyleOptionViewItem,QRect)"] = 282;
        override_function_ids["dropMimeData(int,QMimeData*,Qt::DropAction)"] = 283;
        override_function_ids["mimeData(QList<QListWidgetItem*>)"] = 284;
        override_function_ids["hasPendingConnections()"] = 285;
        override_function_ids["nextPendingConnection()"] = 286;
        override_function_ids["createPopupMenu()"] = 287;
        override_function_ids["formats()"] = 288;
        override_function_ids["hasFormat(QString)"] = 289;
        override_function_ids["retrieveData(QString,QVariant::Type)"] = 290;
        override_function_ids["cookiesForUrl(QUrl)"] = 291;
        override_function_ids["deleteCookie(QNetworkCookie)"] = 292;
        override_function_ids["insertCookie(QNetworkCookie)"] = 293;
        override_function_ids["setCookiesFromUrl(QList<QNetworkCookie>,QUrl)"] = 294;
        override_function_ids["updateCookie(QNetworkCookie)"] = 295;
        override_function_ids["validateCookie(QNetworkCookie,QUrl)"] = 296;
        override_function_ids["expire()"] = 297;
        override_function_ids["cacheSize()"] = 298;
        override_function_ids["metaData(QUrl)"] = 299;
        override_function_ids["remove(QUrl)"] = 300;
        override_function_ids["updateMetaData(QNetworkCacheMetaData)"] = 301;
        override_function_ids["link()"] = 302;
        override_function_ids["initializeGL()"] = 303;
        override_function_ids["paintGL()"] = 304;
        override_function_ids["resizeGL(int,int)"] = 305;
        override_function_ids["paintOverGL()"] = 306;
        override_function_ids["paintUnderGL()"] = 307;
        override_function_ids["focusObject()"] = 308;
        override_function_ids["exposeEvent(QExposeEvent*)"] = 309;
        override_function_ids["touchEvent(QTouchEvent*)"] = 310;
        override_function_ids["format()"] = 311;
        override_function_ids["surfaceType()"] = 312;
        override_function_ids["newPage()"] = 313;
        override_function_ids["loadResource(int,QUrl)"] = 314;
        override_function_ids["canInsertFromMimeData(QMimeData*)"] = 315;
        override_function_ids["createMimeDataFromSelection()"] = 316;
        override_function_ids["insertFromMimeData(QMimeData*)"] = 317;
        override_function_ids["setupChildProcess()"] = 318;
        override_function_ids["text()"] = 319;
        override_function_ids["updateCurrentValue(QVariant)"] = 320;
        override_function_ids["interpolated(QVariant,QVariant,qreal)"] = 321;
        override_function_ids["filterAcceptsColumn(int,QModelIndex)"] = 322;
        override_function_ids["filterAcceptsRow(int,QModelIndex)"] = 323;
        override_function_ids["lessThan(QModelIndex,QModelIndex)"] = 324;
        override_function_ids["textFromValue(int)"] = 325;
        override_function_ids["drawContents(QPainter*)"] = 326;
        override_function_ids["beginTransaction()"] = 327;
        override_function_ids["commitTransaction()"] = 328;
        override_function_ids["createResult()"] = 329;
        override_function_ids["escapeIdentifier(QString,IdentifierType)"] = 330;
        override_function_ids["formatValue(QSqlField,bool)"] = 331;
        override_function_ids["handle()"] = 332;
        override_function_ids["hasFeature(DriverFeature)"] = 333;
        override_function_ids["isIdentifierEscaped(QString,IdentifierType)"] = 334;
        override_function_ids["isOpen()"] = 335;
        override_function_ids["open(QString,QString,QString,QString,int,QString)"] = 336;
        override_function_ids["primaryIndex(QString)"] = 337;
        override_function_ids["record(QString)"] = 338;
        override_function_ids["rollbackTransaction()"] = 339;
        override_function_ids["sqlStatement(StatementType,QString,QSqlRecord,bool)"] = 340;
        override_function_ids["stripDelimiters(QString,IdentifierType)"] = 341;
        override_function_ids["subscribeToNotification(QString)"] = 342;
        override_function_ids["subscribedToNotifications()"] = 343;
        override_function_ids["tables(QSql::TableType)"] = 344;
        override_function_ids["unsubscribeFromNotification(QString)"] = 345;
        override_function_ids["setLastError(QSqlError)"] = 346;
        override_function_ids["setOpen(bool)"] = 347;
        override_function_ids["setOpenError(bool)"] = 348;
        override_function_ids["indexInQuery(QModelIndex)"] = 349;
        override_function_ids["queryChange()"] = 350;
        override_function_ids["relationModel(int)"] = 351;
        override_function_ids["setRelation(int,QSqlRelation)"] = 352;
        override_function_ids["select()"] = 353;
        override_function_ids["setTable(QString)"] = 354;
        override_function_ids["insertRowIntoTable(QSqlRecord)"] = 355;
        override_function_ids["orderByClause()"] = 356;
        override_function_ids["selectStatement()"] = 357;
        override_function_ids["updateRowInTable(int,QSqlRecord)"] = 358;
        override_function_ids["revertRow(int)"] = 359;
        override_function_ids["setEditStrategy(EditStrategy)"] = 360;
        override_function_ids["setFilter(QString)"] = 361;
        override_function_ids["setSort(int,Qt::SortOrder)"] = 362;
        override_function_ids["deleteRowFromTable(int)"] = 363;
        override_function_ids["displayText(QVariant,QLocale)"] = 364;
        override_function_ids["initStyleOption(QStyleOptionViewItem*,QModelIndex)"] = 365;
        override_function_ids["highlightBlock(QString)"] = 366;
        override_function_ids["minimumTabSizeHint(int)"] = 367;
        override_function_ids["tabInserted(int)"] = 368;
        override_function_ids["tabLayoutChange()"] = 369;
        override_function_ids["tabRemoved(int)"] = 370;
        override_function_ids["tabSizeHint(int)"] = 371;
        override_function_ids["dropMimeData(int,int,QMimeData*,Qt::DropAction)"] = 372;
        override_function_ids["mimeData(QList<QTableWidgetItem*>)"] = 373;
        override_function_ids["blockFormatChanged(QTextBlock)"] = 374;
        override_function_ids["blockInserted(QTextBlock)"] = 375;
        override_function_ids["blockRemoved(QTextBlock)"] = 376;
        override_function_ids["createObject(QTextFormat)"] = 377;
        override_function_ids["valueForTime(int)"] = 378;
        override_function_ids["itemInserted(int)"] = 379;
        override_function_ids["itemRemoved(int)"] = 380;
        override_function_ids["translate(const char*,const char*,const char*,int)"] = 381;
        override_function_ids["dropMimeData(QTreeWidgetItem*,int,QMimeData*,Qt::DropAction)"] = 382;
        override_function_ids["mimeData(QList<QTreeWidgetItem*>)"] = 383;
        override_function_ids["aspectRatioMode()"] = 384;
        override_function_ids["brightness()"] = 385;
        override_function_ids["contrast()"] = 386;
        override_function_ids["hue()"] = 387;
        override_function_ids["isFullScreen()"] = 388;
        override_function_ids["saturation()"] = 389;
        override_function_ids["setAspectRatioMode(Qt::AspectRatioMode)"] = 390;
        override_function_ids["setBrightness(int)"] = 391;
        override_function_ids["setContrast(int)"] = 392;
        override_function_ids["setFullScreen(bool)"] = 393;
        override_function_ids["setHue(int)"] = 394;
        override_function_ids["setSaturation(int)"] = 395;
        override_function_ids["videoWidget()"] = 396;
        override_function_ids["addHistoryEntry(QString)"] = 397;
        override_function_ids["historyContains(QString)"] = 398;
        override_function_ids["extension(Extension,ExtensionOption*,ExtensionReturn*)"] = 399;
        override_function_ids["shouldInterruptJavaScript()"] = 400;
        override_function_ids["supportsExtension(Extension)"] = 401;
        override_function_ids["triggerAction(WebAction,bool)"] = 402;
        override_function_ids["acceptNavigationRequest(QWebFrame*,QNetworkRequest,NavigationType)"] = 403;
        override_function_ids["chooseFile(QWebFrame*,QString)"] = 404;
        override_function_ids["createPlugin(QString,QUrl,QStringList,QStringList)"] = 405;
        override_function_ids["createWindow(WebWindowType)"] = 406;
        override_function_ids["javaScriptAlert(QWebFrame*,QString)"] = 407;
        override_function_ids["javaScriptConfirm(QWebFrame*,QString)"] = 408;
        override_function_ids["javaScriptConsoleMessage(QString,int,QString)"] = 409;
        override_function_ids["javaScriptPrompt(QWebFrame*,QString,QString,QString*)"] = 410;
        override_function_ids["userAgentForUrl(QUrl)"] = 411;
        override_function_ids["create(QString,QUrl,QStringList,QStringList)"] = 412;
        override_function_ids["plugins()"] = 413;
        override_function_ids["refreshPlugins()"] = 414;
        override_function_ids["createWindow(QWebPage::WebWindowType)"] = 415;
        override_function_ids["createWidget(QWidget*)"] = 416;
        override_function_ids["deleteWidget(QWidget*)"] = 417;
        override_function_ids["nextId()"] = 418;
        override_function_ids["validateCurrentPage()"] = 419;
        override_function_ids["cleanupPage(int)"] = 420;
        override_function_ids["initializePage(int)"] = 421;
        override_function_ids["cleanupPage()"] = 422;
        override_function_ids["initializePage()"] = 423;
        override_function_ids["isComplete()"] = 424;
        override_function_ids["validatePage()"] = 425;
        override_function_ids["advance(int)"] = 426;
        override_function_ids["collidesWithItem(QGraphicsItem*,Qt::ItemSelectionMode)"] = 427;
        override_function_ids["collidesWithPath(QPainterPath,Qt::ItemSelectionMode)"] = 428;
        override_function_ids["sceneEventFilter(QGraphicsItem*,QEvent*)"] = 429;
        override_function_ids["deleteText(int,int)"] = 430;
        override_function_ids["insertText(int,QString)"] = 431;
        override_function_ids["replaceText(int,int,QString)"] = 432;
        override_function_ids["accessibleInterface()"] = 433;
        override_function_ids["backgroundColor()"] = 434;
        override_function_ids["child(int)"] = 435;
        override_function_ids["childAt(int,int)"] = 436;
        override_function_ids["childCount()"] = 437;
        override_function_ids["focusChild()"] = 438;
        override_function_ids["foregroundColor()"] = 439;
        override_function_ids["indexOfChild(QAccessibleInterface*)"] = 440;
        override_function_ids["isValid()"] = 441;
        override_function_ids["object()"] = 442;
        override_function_ids["parent()"] = 443;
        override_function_ids["rect()"] = 444;
        override_function_ids["role()"] = 445;
        override_function_ids["setText(QAccessible::Text,QString)"] = 446;
        override_function_ids["text(QAccessible::Text)"] = 447;
        override_function_ids["window()"] = 448;
        override_function_ids["addSelection(int,int)"] = 449;
        override_function_ids["characterCount()"] = 450;
        override_function_ids["characterRect(int)"] = 451;
        override_function_ids["cursorPosition()"] = 452;
        override_function_ids["offsetAtPoint(QPoint)"] = 453;
        override_function_ids["removeSelection(int)"] = 454;
        override_function_ids["scrollToSubstring(int,int)"] = 455;
        override_function_ids["selectionCount()"] = 456;
        override_function_ids["setCursorPosition(int)"] = 457;
        override_function_ids["setSelection(int,int,int)"] = 458;
        override_function_ids["text(int,int)"] = 459;
        override_function_ids["currentValue()"] = 460;
        override_function_ids["maximumValue()"] = 461;
        override_function_ids["minimumStepSize()"] = 462;
        override_function_ids["minimumValue()"] = 463;
        override_function_ids["setCurrentValue(QVariant)"] = 464;
        override_function_ids["actionNames()"] = 465;
        override_function_ids["doAction(QString)"] = 466;
        override_function_ids["keyBindingsForAction(QString)"] = 467;
        override_function_ids["icon(IconType)"] = 468;
        override_function_ids["icon(QFileInfo)"] = 469;
        override_function_ids["type(QFileInfo)"] = 470;
        override_function_ids["removeAt(int)"] = 471;
        override_function_ids["widgetEvent(QEvent*)"] = 472;
        override_function_ids["valuePropertyName()"] = 473;
        override_function_ids["createEditor(int,QWidget*)"] = 474;
        override_function_ids["valuePropertyName(int)"] = 475;
        override_function_ids["spacerItem()"] = 476;
        override_function_ids["widget()"] = 477;
        override_function_ids["clone()"] = 478;
        override_function_ids["data(int)"] = 479;
        override_function_ids["setData(int,QVariant)"] = 480;
        override_function_ids["queryProxy(QNetworkProxyQuery)"] = 481;
        override_function_ids["ensureActiveTarget()"] = 482;
        override_function_ids["metric(QPaintDevice::PaintDeviceMetric)"] = 483;
        override_function_ids["setData(const char*,uint)"] = 484;
        override_function_ids["setPageSize(PageSize)"] = 485;
        override_function_ids["setPageSizeMM(QSizeF)"] = 486;
        override_function_ids["run()"] = 487;
        override_function_ids["bindValue(int,QVariant,QSql::ParamType)"] = 488;
        override_function_ids["bindValue(QString,QVariant,QSql::ParamType)"] = 489;
        override_function_ids["fetch(int)"] = 490;
        override_function_ids["fetchFirst()"] = 491;
        override_function_ids["fetchLast()"] = 492;
        override_function_ids["fetchNext()"] = 493;
        override_function_ids["fetchPrevious()"] = 494;
        override_function_ids["isNull(int)"] = 495;
        override_function_ids["lastInsertId()"] = 496;
        override_function_ids["numRowsAffected()"] = 497;
        override_function_ids["prepare(QString)"] = 498;
        override_function_ids["record()"] = 499;
        override_function_ids["reset(QString)"] = 500;
        override_function_ids["savePrepare(QString)"] = 501;
        override_function_ids["setActive(bool)"] = 502;
        override_function_ids["setAt(int)"] = 503;
        override_function_ids["setForwardOnly(bool)"] = 504;
        override_function_ids["setQuery(QString)"] = 505;
        override_function_ids["setSelect(bool)"] = 506;
        override_function_ids["setData(QVariant,int)"] = 507;
        override_function_ids["aliases()"] = 508;
        override_function_ids["mibEnum()"] = 509;
        override_function_ids["name()"] = 510;
        override_function_ids["convertFromUnicode(QChar*,int,ConverterState*)"] = 511;
        override_function_ids["convertToUnicode(const char*,int,ConverterState*)"] = 512;
        override_function_ids["data(int,int)"] = 513;
        override_function_ids["setData(int,int,QVariant)"] = 514;
        override_function_ids["id()"] = 515;
        override_function_ids["mergeWith(QUndoCommand*)"] = 516;
        override_function_ids["redo()"] = 517;
        override_function_ids["undo()"] = 518;
        override_arg_types = new const char** [518];
        { static const char* s[] = { "int", 0 }; override_arg_types[0] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[1] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::Direction", 0 }; override_arg_types[2] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::State", "QAbstractAnimation::State", 0 }; override_arg_types[3] = s; }
        { static const char* s[] = { "bool", "QObject*", "QEvent*", 0 }; override_arg_types[4] = s; }
        { static const char* s[] = { 0, "QChildEvent*", 0 }; override_arg_types[5] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[6] = s; }
        { static const char* s[] = { 0, "QTimerEvent*", 0 }; override_arg_types[7] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[8] = s; }
        { static const char* s[] = { "bool", "QPoint", 0 }; override_arg_types[9] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[10] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[11] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[12] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[13] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[14] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[15] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[16] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[17] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[18] = s; }
        { static const char* s[] = { 0, "QPaintEvent*", 0 }; override_arg_types[19] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[20] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[21] = s; }
        { static const char* s[] = { "QVariant", "Qt::InputMethodQuery", 0 }; override_arg_types[22] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[23] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[24] = s; }
        { static const char* s[] = { 0, "QActionEvent*", 0 }; override_arg_types[25] = s; }
        { static const char* s[] = { 0, "QCloseEvent*", 0 }; override_arg_types[26] = s; }
        { static const char* s[] = { 0, "QContextMenuEvent*", 0 }; override_arg_types[27] = s; }
        { static const char* s[] = { 0, "QDragEnterEvent*", 0 }; override_arg_types[28] = s; }
        { static const char* s[] = { 0, "QDragLeaveEvent*", 0 }; override_arg_types[29] = s; }
        { static const char* s[] = { 0, "QDragMoveEvent*", 0 }; override_arg_types[30] = s; }
        { static const char* s[] = { 0, "QDropEvent*", 0 }; override_arg_types[31] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[32] = s; }
        { static const char* s[] = { "bool", "bool", 0 }; override_arg_types[33] = s; }
        { static const char* s[] = { 0, "QHideEvent*", 0 }; override_arg_types[34] = s; }
        { static const char* s[] = { 0, "QInputMethodEvent*", 0 }; override_arg_types[35] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[36] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[37] = s; }
        { static const char* s[] = { 0, "QMoveEvent*", 0 }; override_arg_types[38] = s; }
        { static const char* s[] = { 0, "QResizeEvent*", 0 }; override_arg_types[39] = s; }
        { static const char* s[] = { 0, "QShowEvent*", 0 }; override_arg_types[40] = s; }
        { static const char* s[] = { 0, "QTabletEvent*", 0 }; override_arg_types[41] = s; }
        { static const char* s[] = { 0, "QWheelEvent*", 0 }; override_arg_types[42] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[43] = s; }
        { static const char* s[] = { "int", "PaintDeviceMetric", 0 }; override_arg_types[44] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[45] = s; }
        { static const char* s[] = { 0, "QWidget*", "QModelIndex", 0 }; override_arg_types[46] = s; }
        { static const char* s[] = { "bool", "QEvent*", "QAbstractItemModel*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[47] = s; }
        { static const char* s[] = { "bool", "QHelpEvent*", "QAbstractItemView*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[48] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[49] = s; }
        { static const char* s[] = { 0, "QWidget*", "QModelIndex", 0 }; override_arg_types[50] = s; }
        { static const char* s[] = { 0, "QWidget*", "QAbstractItemModel*", "QModelIndex", 0 }; override_arg_types[51] = s; }
        { static const char* s[] = { "QSize", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[52] = s; }
        { static const char* s[] = { 0, "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[53] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[54] = s; }
        { static const char* s[] = { "bool", "QMimeData*", "Qt::DropAction", "int", "int", "QModelIndex", 0 }; override_arg_types[55] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[56] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[57] = s; }
        { static const char* s[] = { "QVariant", "QModelIndex", "int", 0 }; override_arg_types[58] = s; }
        { static const char* s[] = { "bool", "QMimeData*", "Qt::DropAction", "int", "int", "QModelIndex", 0 }; override_arg_types[59] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[60] = s; }
        { static const char* s[] = { "Qt::ItemFlags", "QModelIndex", 0 }; override_arg_types[61] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[62] = s; }
        { static const char* s[] = { "QVariant", "int", "Qt::Orientation", "int", 0 }; override_arg_types[63] = s; }
        { static const char* s[] = { "QModelIndex", "int", "int", "QModelIndex", 0 }; override_arg_types[64] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[65] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[66] = s; }
        { static const char* s[] = { "QModelIndexList", "QModelIndex", "int", "QVariant", "int", "Qt::MatchFlags", 0 }; override_arg_types[67] = s; }
        { static const char* s[] = { "QMimeData*", "QModelIndexList", 0 }; override_arg_types[68] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[69] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "int", "int", "QModelIndex", "int", 0 }; override_arg_types[70] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "int", "int", "QModelIndex", "int", 0 }; override_arg_types[71] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[72] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[73] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[74] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[75] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QVariant", "int", 0 }; override_arg_types[76] = s; }
        { static const char* s[] = { "bool", "int", "Qt::Orientation", "QVariant", "int", 0 }; override_arg_types[77] = s; }
        { static const char* s[] = { "QModelIndex", "int", "int", "QModelIndex", 0 }; override_arg_types[78] = s; }
        { static const char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[79] = s; }
        { static const char* s[] = { "QSize", "QModelIndex", 0 }; override_arg_types[80] = s; }
        { static const char* s[] = { "Qt::DropActions", 0 }; override_arg_types[81] = s; }
        { static const char* s[] = { "Qt::DropActions", 0 }; override_arg_types[82] = s; }
        { static const char* s[] = { "QModelIndex", "QPoint", 0 }; override_arg_types[83] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[84] = s; }
        { static const char* s[] = { 0, "QModelIndex", "ScrollHint", 0 }; override_arg_types[85] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[86] = s; }
        { static const char* s[] = { 0, "QItemSelectionModel*", 0 }; override_arg_types[87] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[88] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[89] = s; }
        { static const char* s[] = { "QRect", "QModelIndex", 0 }; override_arg_types[90] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "EditTrigger", "QEvent*", 0 }; override_arg_types[91] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[92] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[93] = s; }
        { static const char* s[] = { "QModelIndex", "CursorAction", "Qt::KeyboardModifiers", 0 }; override_arg_types[94] = s; }
        { static const char* s[] = { "QModelIndexList", 0 }; override_arg_types[95] = s; }
        { static const char* s[] = { "QItemSelectionModel::SelectionFlags", "QModelIndex", "QEvent*", 0 }; override_arg_types[96] = s; }
        { static const char* s[] = { 0, "QRect", "QItemSelectionModel::SelectionFlags", 0 }; override_arg_types[97] = s; }
        { static const char* s[] = { 0, "Qt::DropActions", 0 }; override_arg_types[98] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[99] = s; }
        { static const char* s[] = { "QStyleOptionViewItem", 0 }; override_arg_types[100] = s; }
        { static const char* s[] = { "QRegion", "QItemSelection", 0 }; override_arg_types[101] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[102] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[103] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[104] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[105] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[106] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[107] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[108] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[109] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[110] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[111] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[112] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[113] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[114] = s; }
        { static const char* s[] = { 0, "SliderChange", 0 }; override_arg_types[115] = s; }
        { static const char* s[] = { 0, "QString", "quint16", "OpenMode", "NetworkLayerProtocol", 0 }; override_arg_types[116] = s; }
        { static const char* s[] = { 0, "QHostAddress", "quint16", "OpenMode", 0 }; override_arg_types[117] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[118] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[119] = s; }
        { static const char* s[] = { 0, "qint64", 0 }; override_arg_types[120] = s; }
        { static const char* s[] = { 0, "QAbstractSocket::SocketOption", "QVariant", 0 }; override_arg_types[121] = s; }
        { static const char* s[] = { "QVariant", "QAbstractSocket::SocketOption", 0 }; override_arg_types[122] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[123] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[124] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[125] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[126] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[127] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[128] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[129] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[130] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[131] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[132] = s; }
        { static const char* s[] = { "qlonglong", "char*", "qint64", 0 }; override_arg_types[133] = s; }
        { static const char* s[] = { "qlonglong", "char*", "qint64", 0 }; override_arg_types[134] = s; }
        { static const char* s[] = { "qlonglong", "const char*", "qint64", 0 }; override_arg_types[135] = s; }
        { static const char* s[] = { "bool", "OpenMode", 0 }; override_arg_types[136] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[137] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[138] = s; }
        { static const char* s[] = { "bool", "qint64", 0 }; override_arg_types[139] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[140] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[141] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[142] = s; }
        { static const char* s[] = { "QValidator::State", "QString", "int", 0 }; override_arg_types[143] = s; }
        { static const char* s[] = { "StepEnabled", 0 }; override_arg_types[144] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[145] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[146] = s; }
        { static const char* s[] = { "QRectF", "QTextBlock", 0 }; override_arg_types[147] = s; }
        { static const char* s[] = { "QSizeF", 0 }; override_arg_types[148] = s; }
        { static const char* s[] = { 0, "QPainter*", "PaintContext", 0 }; override_arg_types[149] = s; }
        { static const char* s[] = { "QRectF", "QTextFrame*", 0 }; override_arg_types[150] = s; }
        { static const char* s[] = { "int", "QPointF", "Qt::HitTestAccuracy", 0 }; override_arg_types[151] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[152] = s; }
        { static const char* s[] = { 0, "int", "int", "int", 0 }; override_arg_types[153] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[154] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[155] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[156] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[157] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[158] = s; }
        { static const char* s[] = { "bool", "QObject*", "QEvent*", 0 }; override_arg_types[159] = s; }
        { static const char* s[] = { "QMediaObject*", 0 }; override_arg_types[160] = s; }
        { static const char* s[] = { 0, "QLayoutItem*", 0 }; override_arg_types[161] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[162] = s; }
        { static const char* s[] = { "Qt::Orientations", 0 }; override_arg_types[163] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[164] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[165] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[166] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[167] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[168] = s; }
        { static const char* s[] = { 0, "QRect", 0 }; override_arg_types[169] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[170] = s; }
        { static const char* s[] = { "int", "QWidget*", 0 }; override_arg_types[171] = s; }
        { static const char* s[] = { "QSizePolicy::ControlTypes", 0 }; override_arg_types[172] = s; }
        { static const char* s[] = { "QRect", 0 }; override_arg_types[173] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[174] = s; }
        { static const char* s[] = { "QLayout*", 0 }; override_arg_types[175] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QDate", 0 }; override_arg_types[176] = s; }
        { static const char* s[] = { "QMultimedia::AvailabilityStatus", 0 }; override_arg_types[177] = s; }
        { static const char* s[] = { "bool", "QObject*", 0 }; override_arg_types[178] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[179] = s; }
        { static const char* s[] = { "QMediaService*", 0 }; override_arg_types[180] = s; }
        { static const char* s[] = { 0, "QObject*", 0 }; override_arg_types[181] = s; }
        { static const char* s[] = { "bool", "QMediaObject*", 0 }; override_arg_types[182] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[183] = s; }
        { static const char* s[] = { "QAbstractItemView*", "QModelIndex", 0 }; override_arg_types[184] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[185] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[186] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[187] = s; }
        { static const char* s[] = { 0, "QModelIndex", "int", "int", 0 }; override_arg_types[188] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[189] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[190] = s; }
        { static const char* s[] = { 0, "ComplexControl", "QStyleOptionComplex*", "QPainter*", "QWidget*", 0 }; override_arg_types[191] = s; }
        { static const char* s[] = { 0, "ControlElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[192] = s; }
        { static const char* s[] = { 0, "PrimitiveElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[193] = s; }
        { static const char* s[] = { "QPixmap", "QIcon::Mode", "QPixmap", "QStyleOption*", 0 }; override_arg_types[194] = s; }
        { static const char* s[] = { "SubControl", "ComplexControl", "QStyleOptionComplex*", "QPoint", "QWidget*", 0 }; override_arg_types[195] = s; }
        { static const char* s[] = { "int", "QSizePolicy::ControlType", "QSizePolicy::ControlType", "Qt::Orientation", "QStyleOption*", "QWidget*", 0 }; override_arg_types[196] = s; }
        { static const char* s[] = { "int", "PixelMetric", "QStyleOption*", "QWidget*", 0 }; override_arg_types[197] = s; }
        { static const char* s[] = { 0, "QPalette", 0 }; override_arg_types[198] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[199] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[200] = s; }
        { static const char* s[] = { "QSize", "ContentsType", "QStyleOption*", "QSize", "QWidget*", 0 }; override_arg_types[201] = s; }
        { static const char* s[] = { "QPixmap", "StandardPixmap", "QStyleOption*", "QWidget*", 0 }; override_arg_types[202] = s; }
        { static const char* s[] = { "int", "StyleHint", "QStyleOption*", "QWidget*", "QStyleHintReturn*", 0 }; override_arg_types[203] = s; }
        { static const char* s[] = { "QRect", "ComplexControl", "QStyleOptionComplex*", "SubControl", "QWidget*", 0 }; override_arg_types[204] = s; }
        { static const char* s[] = { "QRect", "SubElement", "QStyleOption*", "QWidget*", 0 }; override_arg_types[205] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[206] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[207] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPixmap", 0 }; override_arg_types[208] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPalette", "bool", "QString", "QPalette::ColorRole", 0 }; override_arg_types[209] = s; }
        { static const char* s[] = { "QRect", "QRect", "int", "QPixmap", 0 }; override_arg_types[210] = s; }
        { static const char* s[] = { "QRect", "QFontMetrics", "QRect", "int", "bool", "QString", 0 }; override_arg_types[211] = s; }
        { static const char* s[] = { "QIcon", "StandardPixmap", "QStyleOption*", "QWidget*", 0 }; override_arg_types[212] = s; }
        { static const char* s[] = { "QPalette", 0 }; override_arg_types[213] = s; }
        { static const char* s[] = { "QString", "QModelIndex", 0 }; override_arg_types[214] = s; }
        { static const char* s[] = { "QStringList", "QString", 0 }; override_arg_types[215] = s; }
        { static const char* s[] = { "QDateTime", "QString", 0 }; override_arg_types[216] = s; }
        { static const char* s[] = { "QString", "QDateTime", 0 }; override_arg_types[217] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[218] = s; }
        { static const char* s[] = { "QString", "double", 0 }; override_arg_types[219] = s; }
        { static const char* s[] = { "double", "QString", 0 }; override_arg_types[220] = s; }
        { static const char* s[] = { 0, "double", "double", "int", 0 }; override_arg_types[221] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[222] = s; }
        { static const char* s[] = { "Permissions", 0 }; override_arg_types[223] = s; }
        { static const char* s[] = { "bool", "qint64", 0 }; override_arg_types[224] = s; }
        { static const char* s[] = { "bool", "Permissions", 0 }; override_arg_types[225] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[226] = s; }
        { static const char* s[] = { "QRectF", "QRectF", 0 }; override_arg_types[227] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[228] = s; }
        { static const char* s[] = { 0, "ChangeFlags", 0 }; override_arg_types[229] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[230] = s; }
        { static const char* s[] = { 0, "QRectF", 0 }; override_arg_types[231] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[232] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneContextMenuEvent*", 0 }; override_arg_types[233] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[234] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[235] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[236] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[237] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[238] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[239] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[240] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[241] = s; }
        { static const char* s[] = { "QVariant", "GraphicsItemChange", "QVariant", 0 }; override_arg_types[242] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[243] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[244] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[245] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[246] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneResizeEvent*", 0 }; override_arg_types[247] = s; }
        { static const char* s[] = { "QSizeF", "Qt::SizeHint", "QSizeF", 0 }; override_arg_types[248] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[249] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneWheelEvent*", 0 }; override_arg_types[250] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[251] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[252] = s; }
        { static const char* s[] = { 0, "QStyleOption*", 0 }; override_arg_types[253] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMoveEvent*", 0 }; override_arg_types[254] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[255] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[256] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[257] = s; }
        { static const char* s[] = { "Qt::WindowFrameSection", "QPointF", 0 }; override_arg_types[258] = s; }
        { static const char* s[] = { "QRectF", 0 }; override_arg_types[259] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[260] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[261] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[262] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[263] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[264] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHelpEvent*", 0 }; override_arg_types[265] = s; }
        { static const char* s[] = { "bool", "QPointF", 0 }; override_arg_types[266] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", 0 }; override_arg_types[267] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[268] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", 0 }; override_arg_types[269] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[270] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QModelIndex", 0 }; override_arg_types[271] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[272] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", "QVector<int>", 0 }; override_arg_types[273] = s; }
        { static const char* s[] = { 0, "QModelIndex", "int", "int", 0 }; override_arg_types[274] = s; }
        { static const char* s[] = { 0, "QItemSelection", "QItemSelection", 0 }; override_arg_types[275] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[276] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[277] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "Qt::CheckState", 0 }; override_arg_types[278] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QPixmap", 0 }; override_arg_types[279] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QString", 0 }; override_arg_types[280] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", 0 }; override_arg_types[281] = s; }
        { static const char* s[] = { "bool", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[282] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QListWidgetItem*>", 0 }; override_arg_types[283] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[284] = s; }
        { static const char* s[] = { "QLocalSocket*", 0 }; override_arg_types[285] = s; }
        { static const char* s[] = { "QMenu*", 0 }; override_arg_types[286] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[287] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[288] = s; }
        { static const char* s[] = { "QVariant", "QString", "QVariant::Type", 0 }; override_arg_types[289] = s; }
        { static const char* s[] = { "QList<QNetworkCookie>", "QUrl", 0 }; override_arg_types[290] = s; }
        { static const char* s[] = { "bool", "QNetworkCookie", 0 }; override_arg_types[291] = s; }
        { static const char* s[] = { "bool", "QNetworkCookie", 0 }; override_arg_types[292] = s; }
        { static const char* s[] = { "bool", "QList<QNetworkCookie>", "QUrl", 0 }; override_arg_types[293] = s; }
        { static const char* s[] = { "bool", "QNetworkCookie", 0 }; override_arg_types[294] = s; }
        { static const char* s[] = { "bool", "QNetworkCookie", "QUrl", 0 }; override_arg_types[295] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[296] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[297] = s; }
        { static const char* s[] = { "QNetworkCacheMetaData", "QUrl", 0 }; override_arg_types[298] = s; }
        { static const char* s[] = { "bool", "QUrl", 0 }; override_arg_types[299] = s; }
        { static const char* s[] = { 0, "QNetworkCacheMetaData", 0 }; override_arg_types[300] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[301] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[302] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[303] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[304] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[305] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[306] = s; }
        { static const char* s[] = { "QObject*", 0 }; override_arg_types[307] = s; }
        { static const char* s[] = { 0, "QExposeEvent*", 0 }; override_arg_types[308] = s; }
        { static const char* s[] = { 0, "QTouchEvent*", 0 }; override_arg_types[309] = s; }
        { static const char* s[] = { "QSurfaceFormat", 0 }; override_arg_types[310] = s; }
        { static const char* s[] = { "SurfaceType", 0 }; override_arg_types[311] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[312] = s; }
        { static const char* s[] = { "QVariant", "int", "QUrl", 0 }; override_arg_types[313] = s; }
        { static const char* s[] = { "bool", "QMimeData*", 0 }; override_arg_types[314] = s; }
        { static const char* s[] = { "QMimeData*", 0 }; override_arg_types[315] = s; }
        { static const char* s[] = { 0, "QMimeData*", 0 }; override_arg_types[316] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[317] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[318] = s; }
        { static const char* s[] = { 0, "QVariant", 0 }; override_arg_types[319] = s; }
        { static const char* s[] = { "QVariant", "QVariant", "QVariant", "qreal", 0 }; override_arg_types[320] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[321] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[322] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QModelIndex", 0 }; override_arg_types[323] = s; }
        { static const char* s[] = { "QString", "int", 0 }; override_arg_types[324] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[325] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[326] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[327] = s; }
        { static const char* s[] = { "QSqlResult*", 0 }; override_arg_types[328] = s; }
        { static const char* s[] = { "QString", "QString", "IdentifierType", 0 }; override_arg_types[329] = s; }
        { static const char* s[] = { "QString", "QSqlField", "bool", 0 }; override_arg_types[330] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[331] = s; }
        { static const char* s[] = { "bool", "DriverFeature", 0 }; override_arg_types[332] = s; }
        { static const char* s[] = { "bool", "QString", "IdentifierType", 0 }; override_arg_types[333] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[334] = s; }
        { static const char* s[] = { "bool", "QString", "QString", "QString", "QString", "int", "QString", 0 }; override_arg_types[335] = s; }
        { static const char* s[] = { "QSqlIndex", "QString", 0 }; override_arg_types[336] = s; }
        { static const char* s[] = { "QSqlRecord", "QString", 0 }; override_arg_types[337] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[338] = s; }
        { static const char* s[] = { "QString", "StatementType", "QString", "QSqlRecord", "bool", 0 }; override_arg_types[339] = s; }
        { static const char* s[] = { "QString", "QString", "IdentifierType", 0 }; override_arg_types[340] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[341] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[342] = s; }
        { static const char* s[] = { "QStringList", "QSql::TableType", 0 }; override_arg_types[343] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[344] = s; }
        { static const char* s[] = { 0, "QSqlError", 0 }; override_arg_types[345] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[346] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[347] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[348] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[349] = s; }
        { static const char* s[] = { "QSqlTableModel*", "int", 0 }; override_arg_types[350] = s; }
        { static const char* s[] = { 0, "int", "QSqlRelation", 0 }; override_arg_types[351] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[352] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[353] = s; }
        { static const char* s[] = { "bool", "QSqlRecord", 0 }; override_arg_types[354] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[355] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[356] = s; }
        { static const char* s[] = { "bool", "int", "QSqlRecord", 0 }; override_arg_types[357] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[358] = s; }
        { static const char* s[] = { 0, "EditStrategy", 0 }; override_arg_types[359] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[360] = s; }
        { static const char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[361] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[362] = s; }
        { static const char* s[] = { "QString", "QVariant", "QLocale", 0 }; override_arg_types[363] = s; }
        { static const char* s[] = { 0, "QStyleOptionViewItem*", "QModelIndex", 0 }; override_arg_types[364] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[365] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[366] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[367] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[368] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[369] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[370] = s; }
        { static const char* s[] = { "bool", "int", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[371] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTableWidgetItem*>", 0 }; override_arg_types[372] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[373] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[374] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[375] = s; }
        { static const char* s[] = { "QTextObject*", "QTextFormat", 0 }; override_arg_types[376] = s; }
        { static const char* s[] = { "qreal", "int", 0 }; override_arg_types[377] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[378] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[379] = s; }
        { static const char* s[] = { "QString", "const char*", "const char*", "const char*", "int", 0 }; override_arg_types[380] = s; }
        { static const char* s[] = { "bool", "QTreeWidgetItem*", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[381] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTreeWidgetItem*>", 0 }; override_arg_types[382] = s; }
        { static const char* s[] = { "Qt::AspectRatioMode", 0 }; override_arg_types[383] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[384] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[385] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[386] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[387] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[388] = s; }
        { static const char* s[] = { 0, "Qt::AspectRatioMode", 0 }; override_arg_types[389] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[390] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[391] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[392] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[393] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[394] = s; }
        { static const char* s[] = { "QWidget*", 0 }; override_arg_types[395] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[396] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[397] = s; }
        { static const char* s[] = { "bool", "Extension", "ExtensionOption*", "ExtensionReturn*", 0 }; override_arg_types[398] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[399] = s; }
        { static const char* s[] = { "bool", "Extension", 0 }; override_arg_types[400] = s; }
        { static const char* s[] = { 0, "WebAction", "bool", 0 }; override_arg_types[401] = s; }
        { static const char* s[] = { "bool", "QWebFrame*", "QNetworkRequest", "NavigationType", 0 }; override_arg_types[402] = s; }
        { static const char* s[] = { "QString", "QWebFrame*", "QString", 0 }; override_arg_types[403] = s; }
        { static const char* s[] = { "QObject*", "QString", "QUrl", "QStringList", "QStringList", 0 }; override_arg_types[404] = s; }
        { static const char* s[] = { "QWebPage*", "WebWindowType", 0 }; override_arg_types[405] = s; }
        { static const char* s[] = { 0, "QWebFrame*", "QString", 0 }; override_arg_types[406] = s; }
        { static const char* s[] = { "bool", "QWebFrame*", "QString", 0 }; override_arg_types[407] = s; }
        { static const char* s[] = { 0, "QString", "int", "QString", 0 }; override_arg_types[408] = s; }
        { static const char* s[] = { "bool", "QWebFrame*", "QString", "QString", "QString*", 0 }; override_arg_types[409] = s; }
        { static const char* s[] = { "QString", "QUrl", 0 }; override_arg_types[410] = s; }
        { static const char* s[] = { "QObject*", "QString", "QUrl", "QStringList", "QStringList", 0 }; override_arg_types[411] = s; }
        { static const char* s[] = { "QList<Plugin>", 0 }; override_arg_types[412] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[413] = s; }
        { static const char* s[] = { "QWebView*", "QWebPage::WebWindowType", 0 }; override_arg_types[414] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", 0 }; override_arg_types[415] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[416] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[417] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[418] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[419] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[420] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[421] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[422] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[423] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[424] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[425] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "Qt::ItemSelectionMode", 0 }; override_arg_types[426] = s; }
        { static const char* s[] = { "bool", "QPainterPath", "Qt::ItemSelectionMode", 0 }; override_arg_types[427] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "QEvent*", 0 }; override_arg_types[428] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[429] = s; }
        { static const char* s[] = { 0, "int", "QString", 0 }; override_arg_types[430] = s; }
        { static const char* s[] = { 0, "int", "int", "QString", 0 }; override_arg_types[431] = s; }
        { static const char* s[] = { "QAccessibleInterface*", 0 }; override_arg_types[432] = s; }
        { static const char* s[] = { "QColor", 0 }; override_arg_types[433] = s; }
        { static const char* s[] = { "QAccessibleInterface*", "int", 0 }; override_arg_types[434] = s; }
        { static const char* s[] = { "QAccessibleInterface*", "int", "int", 0 }; override_arg_types[435] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[436] = s; }
        { static const char* s[] = { "QAccessibleInterface*", 0 }; override_arg_types[437] = s; }
        { static const char* s[] = { "QColor", 0 }; override_arg_types[438] = s; }
        { static const char* s[] = { "int", "QAccessibleInterface*", 0 }; override_arg_types[439] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[440] = s; }
        { static const char* s[] = { "QObject*", 0 }; override_arg_types[441] = s; }
        { static const char* s[] = { "QAccessibleInterface*", 0 }; override_arg_types[442] = s; }
        { static const char* s[] = { "QRect", 0 }; override_arg_types[443] = s; }
        { static const char* s[] = { "QAccessible::Role", 0 }; override_arg_types[444] = s; }
        { static const char* s[] = { 0, "QAccessible::Text", "QString", 0 }; override_arg_types[445] = s; }
        { static const char* s[] = { "QString", "QAccessible::Text", 0 }; override_arg_types[446] = s; }
        { static const char* s[] = { "QWindow*", 0 }; override_arg_types[447] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[448] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[449] = s; }
        { static const char* s[] = { "QRect", "int", 0 }; override_arg_types[450] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[451] = s; }
        { static const char* s[] = { "int", "QPoint", 0 }; override_arg_types[452] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[453] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[454] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[455] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[456] = s; }
        { static const char* s[] = { 0, "int", "int", "int", 0 }; override_arg_types[457] = s; }
        { static const char* s[] = { "QString", "int", "int", 0 }; override_arg_types[458] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[459] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[460] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[461] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[462] = s; }
        { static const char* s[] = { 0, "QVariant", 0 }; override_arg_types[463] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[464] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[465] = s; }
        { static const char* s[] = { "QStringList", "QString", 0 }; override_arg_types[466] = s; }
        { static const char* s[] = { "QIcon", "IconType", 0 }; override_arg_types[467] = s; }
        { static const char* s[] = { "QIcon", "QFileInfo", 0 }; override_arg_types[468] = s; }
        { static const char* s[] = { "QString", "QFileInfo", 0 }; override_arg_types[469] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[470] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[471] = s; }
        { static const char* s[] = { "QByteArray", 0 }; override_arg_types[472] = s; }
        { static const char* s[] = { "QWidget*", "int", "QWidget*", 0 }; override_arg_types[473] = s; }
        { static const char* s[] = { "QByteArray", "int", 0 }; override_arg_types[474] = s; }
        { static const char* s[] = { "QSpacerItem*", 0 }; override_arg_types[475] = s; }
        { static const char* s[] = { "QWidget*", 0 }; override_arg_types[476] = s; }
        { static const char* s[] = { "QListWidgetItem*", 0 }; override_arg_types[477] = s; }
        { static const char* s[] = { "QVariant", "int", 0 }; override_arg_types[478] = s; }
        { static const char* s[] = { 0, "int", "QVariant", 0 }; override_arg_types[479] = s; }
        { static const char* s[] = { "QList<QNetworkProxy>", "QNetworkProxyQuery", 0 }; override_arg_types[480] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[481] = s; }
        { static const char* s[] = { "int", "QPaintDevice::PaintDeviceMetric", 0 }; override_arg_types[482] = s; }
        { static const char* s[] = { 0, "const char*", "uint", 0 }; override_arg_types[483] = s; }
        { static const char* s[] = { 0, "PageSize", 0 }; override_arg_types[484] = s; }
        { static const char* s[] = { 0, "QSizeF", 0 }; override_arg_types[485] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[486] = s; }
        { static const char* s[] = { 0, "int", "QVariant", "QSql::ParamType", 0 }; override_arg_types[487] = s; }
        { static const char* s[] = { 0, "QString", "QVariant", "QSql::ParamType", 0 }; override_arg_types[488] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[489] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[490] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[491] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[492] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[493] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[494] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[495] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[496] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[497] = s; }
        { static const char* s[] = { "QSqlRecord", 0 }; override_arg_types[498] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[499] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[500] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[501] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[502] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[503] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[504] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[505] = s; }
        { static const char* s[] = { 0, "QVariant", "int", 0 }; override_arg_types[506] = s; }
        { static const char* s[] = { "QList<QByteArray>", 0 }; override_arg_types[507] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[508] = s; }
        { static const char* s[] = { "QByteArray", 0 }; override_arg_types[509] = s; }
        { static const char* s[] = { "QByteArray", "QChar*", "int", "ConverterState*", 0 }; override_arg_types[510] = s; }
        { static const char* s[] = { "QString", "const char*", "int", "ConverterState*", 0 }; override_arg_types[511] = s; }
        { static const char* s[] = { "QVariant", "int", "int", 0 }; override_arg_types[512] = s; }
        { static const char* s[] = { 0, "int", "int", "QVariant", 0 }; override_arg_types[513] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[514] = s; }
        { static const char* s[] = { "bool", "QUndoCommand*", 0 }; override_arg_types[515] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[516] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[517] = s; }
        qNames = q_names.keys();
        nNames = n_names.keys(); }}

quint64 LObjects::override_id(uint unique, int id) {
    return (245 * (quint64)unique + id); }

void* LObjects::overrideFun(quint64 id) {
    return override_lisp_functions.value(id, 0); }

void LObjects::setOverrideFun(quint64 id, void* fun) {
    override_lisp_functions[id] = fun; }

const QMetaObject* LObjects::staticMetaObject(const QByteArray& name, int n) {
    if(!n) {
        n = LObjects::q_names.value(name, 0);
        if(!n) {
            n = -LObjects::n_names.value(name, 0); }}
    const QMetaObject* m = 0;
    switch(n) {
        case -246: m = &QWindowStateChangeEvent::staticMetaObject; break;
        case -244: m = &QWheelEvent::staticMetaObject; break;
        case -243: m = &QWhatsThisClickedEvent::staticMetaObject; break;
        case -221: m = &QTouchEvent::staticMetaObject; break;
        case -220: m = &QTouchDevice::staticMetaObject; break;
        case -218: m = &QTimerEvent::staticMetaObject; break;
        case -215: m = &QTextTableFormat::staticMetaObject; break;
        case -214: m = &QTextTableCellFormat::staticMetaObject; break;
        case -211: m = &QTextListFormat::staticMetaObject; break;
        case -207: m = &QTextImageFormat::staticMetaObject; break;
        case -206: m = &QTextFrameFormat::staticMetaObject; break;
        case -204: m = &QTextFormat::staticMetaObject; break;
        case -197: m = &QTextCharFormat::staticMetaObject; break;
        case -194: m = &QTextBlockFormat::staticMetaObject; break;
        case -192: m = &QTabletEvent::staticMetaObject; break;
        case -181: m = &QStatusTipEvent::staticMetaObject; break;
        case -164: m = &QSizePolicy::staticMetaObject; break;
        case -163: m = &QShowEvent::staticMetaObject; break;
        case -162: m = &QShortcutEvent::staticMetaObject; break;
        case -160: m = &QScrollPrepareEvent::staticMetaObject; break;
        case -159: m = &QScrollEvent::staticMetaObject; break;
        case -157: m = &QResizeEvent::staticMetaObject; break;
        case -153: m = &QRadialGradient::staticMetaObject; break;
        case -143: m = &QPalette::staticMetaObject; break;
        case -140: m = &QPainter::staticMetaObject; break;
        case -139: m = &QPaintEvent::staticMetaObject; break;
        case -121: m = &QMoveEvent::staticMetaObject; break;
        case -120: m = &QMouseEvent::staticMetaObject; break;
        case -110: m = &QLocale::staticMetaObject; break;
        case -108: m = &QLinearGradient::staticMetaObject; break;
        case -104: m = &QKeyEvent::staticMetaObject; break;
        case -100: m = &QInputMethodQueryEvent::staticMetaObject; break;
        case -99: m = &QInputMethodEvent::staticMetaObject; break;
        case -98: m = &QInputEvent::staticMetaObject; break;
        case -95: m = &QIconDragEvent::staticMetaObject; break;
        case -92: m = &QHoverEvent::staticMetaObject; break;
        case -89: m = &QHideEvent::staticMetaObject; break;
        case -87: m = &QHelpEvent::staticMetaObject; break;
        case -84: m = &QGraphicsSceneWheelEvent::staticMetaObject; break;
        case -83: m = &QGraphicsSceneResizeEvent::staticMetaObject; break;
        case -82: m = &QGraphicsSceneMoveEvent::staticMetaObject; break;
        case -81: m = &QGraphicsSceneMouseEvent::staticMetaObject; break;
        case -80: m = &QGraphicsSceneHoverEvent::staticMetaObject; break;
        case -79: m = &QGraphicsSceneHelpEvent::staticMetaObject; break;
        case -78: m = &QGraphicsSceneEvent::staticMetaObject; break;
        case -77: m = &QGraphicsSceneDragDropEvent::staticMetaObject; break;
        case -76: m = &QGraphicsSceneContextMenuEvent::staticMetaObject; break;
        case -62: m = &QGradient::staticMetaObject; break;
        case -61: m = &QGestureEvent::staticMetaObject; break;
        case -57: m = &QFontDatabase::staticMetaObject; break;
        case -56: m = &QFont::staticMetaObject; break;
        case -55: m = &QFocusEvent::staticMetaObject; break;
        case -54: m = &QFileOpenEvent::staticMetaObject; break;
        case -51: m = &QExposeEvent::staticMetaObject; break;
        case -49: m = &QEvent::staticMetaObject; break;
        case -48: m = &QEnterEvent::staticMetaObject; break;
        case -46: m = &QEasingCurve::staticMetaObject; break;
        case -45: m = &QDynamicPropertyChangeEvent::staticMetaObject; break;
        case -44: m = &QDropEvent::staticMetaObject; break;
        case -43: m = &QDragMoveEvent::staticMetaObject; break;
        case -42: m = &QDragLeaveEvent::staticMetaObject; break;
        case -41: m = &QDragEnterEvent::staticMetaObject; break;
        case -33: m = &QContextMenuEvent::staticMetaObject; break;
        case -32: m = &QConicalGradient::staticMetaObject; break;
        case -30: m = &QCloseEvent::staticMetaObject; break;
        case -29: m = &QChildEvent::staticMetaObject; break;
        case -17: m = &QActionEvent::staticMetaObject; break;
        case 1: m = &QAbstractAnimation::staticMetaObject; break;
        case 2: m = &QAbstractButton::staticMetaObject; break;
        case 3: m = &QAbstractItemDelegate::staticMetaObject; break;
        case 4: m = &QAbstractItemModel::staticMetaObject; break;
        case 5: m = &QAbstractItemView::staticMetaObject; break;
        case 6: m = &QAbstractListModel::staticMetaObject; break;
        case 8: m = &QAbstractPrintDialog::staticMetaObject; break;
        case 9: m = &QAbstractProxyModel::staticMetaObject; break;
        case 10: m = &QAbstractScrollArea::staticMetaObject; break;
        case 11: m = &QAbstractSlider::staticMetaObject; break;
        case 13: m = &QAbstractSpinBox::staticMetaObject; break;
        case 14: m = &QAbstractState::staticMetaObject; break;
        case 15: m = &QAbstractTableModel::staticMetaObject; break;
        case 16: m = &QAbstractTextDocumentLayout::staticMetaObject; break;
        case 17: m = &QAbstractTransition::staticMetaObject; break;
        case 19: m = &QAction::staticMetaObject; break;
        case 20: m = &QActionGroup::staticMetaObject; break;
        case 21: m = &QAnimationGroup::staticMetaObject; break;
        case 22: m = &QApplication::staticMetaObject; break;
        case 25: m = &QBoxLayout::staticMetaObject; break;
        case 26: m = &QBuffer::staticMetaObject; break;
        case 27: m = &QButtonGroup::staticMetaObject; break;
        case 28: m = &QCalendarWidget::staticMetaObject; break;
        case 35: m = &QCheckBox::staticMetaObject; break;
        case 36: m = &QClipboard::staticMetaObject; break;
        case 37: m = &QColorDialog::staticMetaObject; break;
        case 38: m = &QColumnView::staticMetaObject; break;
        case 39: m = &QComboBox::staticMetaObject; break;
        case 40: m = &QCommandLinkButton::staticMetaObject; break;
        case 41: m = &QCommonStyle::staticMetaObject; break;
        case 42: m = &QCompleter::staticMetaObject; break;
        case 43: m = &QCoreApplication::staticMetaObject; break;
        case 44: m = &QDataWidgetMapper::staticMetaObject; break;
        case 45: m = &QDateEdit::staticMetaObject; break;
        case 46: m = &QDateTimeEdit::staticMetaObject; break;
        case 47: m = &QDesktopWidget::staticMetaObject; break;
        case 48: m = &QDial::staticMetaObject; break;
        case 49: m = &QDialog::staticMetaObject; break;
        case 50: m = &QDialogButtonBox::staticMetaObject; break;
        case 51: m = &QDirModel::staticMetaObject; break;
        case 52: m = &QDockWidget::staticMetaObject; break;
        case 53: m = &QDoubleSpinBox::staticMetaObject; break;
        case 54: m = &QDoubleValidator::staticMetaObject; break;
        case 55: m = &QDrag::staticMetaObject; break;
        case 56: m = &QErrorMessage::staticMetaObject; break;
        case 57: m = &QEventLoop::staticMetaObject; break;
        case 58: m = &QEventTransition::staticMetaObject; break;
        case 59: m = &QFile::staticMetaObject; break;
        case 60: m = &QFileDevice::staticMetaObject; break;
        case 61: m = &QFileDialog::staticMetaObject; break;
        case 62: m = &QFileSelector::staticMetaObject; break;
        case 63: m = &QFileSystemModel::staticMetaObject; break;
        case 64: m = &QFileSystemWatcher::staticMetaObject; break;
        case 65: m = &QFinalState::staticMetaObject; break;
        case 66: m = &QFocusFrame::staticMetaObject; break;
        case 67: m = &QFontComboBox::staticMetaObject; break;
        case 68: m = &QFontDialog::staticMetaObject; break;
        case 69: m = &QFormLayout::staticMetaObject; break;
        case 70: m = &QFrame::staticMetaObject; break;
        case 71: m = &QGesture::staticMetaObject; break;
        case 72: m = &QGraphicsAnchor::staticMetaObject; break;
        case 73: m = &QGraphicsBlurEffect::staticMetaObject; break;
        case 74: m = &QGraphicsColorizeEffect::staticMetaObject; break;
        case 75: m = &QGraphicsDropShadowEffect::staticMetaObject; break;
        case 76: m = &QGraphicsEffect::staticMetaObject; break;
        case 77: m = &QGraphicsObject::staticMetaObject; break;
        case 78: m = &QGraphicsOpacityEffect::staticMetaObject; break;
        case 79: m = &QGraphicsProxyWidget::staticMetaObject; break;
        case 80: m = &QGraphicsRotation::staticMetaObject; break;
        case 81: m = &QGraphicsScale::staticMetaObject; break;
        case 82: m = &QGraphicsScene::staticMetaObject; break;
        case 84: m = &QGraphicsTextItem::staticMetaObject; break;
        case 85: m = &QGraphicsTransform::staticMetaObject; break;
        case 87: m = &QGraphicsView::staticMetaObject; break;
        case 89: m = &QGraphicsWidget::staticMetaObject; break;
        case 90: m = &QGridLayout::staticMetaObject; break;
        case 91: m = &QGroupBox::staticMetaObject; break;
        case 92: m = &QGuiApplication::staticMetaObject; break;
        case 93: m = &QHBoxLayout::staticMetaObject; break;
        case 94: m = &QHeaderView::staticMetaObject; break;
        case 103: m = &QHistoryState::staticMetaObject; break;
        case 105: m = &QIODevice::staticMetaObject; break;
        case 106: m = &QIdentityProxyModel::staticMetaObject; break;
        case 107: m = &QInputDialog::staticMetaObject; break;
        case 108: m = &QInputMethod::staticMetaObject; break;
        case 109: m = &QIntValidator::staticMetaObject; break;
        case 110: m = &QItemDelegate::staticMetaObject; break;
        case 111: m = &QItemSelectionModel::staticMetaObject; break;
        case 112: m = &QKeyEventTransition::staticMetaObject; break;
        case 113: m = &QLCDNumber::staticMetaObject; break;
        case 114: m = &QLabel::staticMetaObject; break;
        case 115: m = &QLayout::staticMetaObject; break;
        case 116: m = &QLibrary::staticMetaObject; break;
        case 117: m = &QLineEdit::staticMetaObject; break;
        case 118: m = &QListView::staticMetaObject; break;
        case 119: m = &QListWidget::staticMetaObject; break;
        case 122: m = &QMainWindow::staticMetaObject; break;
        case 123: m = &QMdiArea::staticMetaObject; break;
        case 124: m = &QMdiSubWindow::staticMetaObject; break;
        case 130: m = &QMenu::staticMetaObject; break;
        case 131: m = &QMenuBar::staticMetaObject; break;
        case 132: m = &QMessageBox::staticMetaObject; break;
        case 133: m = &QMimeData::staticMetaObject; break;
        case 134: m = &QMouseEventTransition::staticMetaObject; break;
        case 135: m = &QMovie::staticMetaObject; break;
        case 140: m = &QObject::staticMetaObject; break;
        case 141: m = &QObjectCleanupHandler::staticMetaObject; break;
        case 142: m = &QOpenGLContext::staticMetaObject; break;
        case 143: m = &QOpenGLShader::staticMetaObject; break;
        case 144: m = &QOpenGLShaderProgram::staticMetaObject; break;
        case 145: m = &QOpenGLWidget::staticMetaObject; break;
        case 146: m = &QOpenGLWindow::staticMetaObject; break;
        case 147: m = &QPageSetupDialog::staticMetaObject; break;
        case 148: m = &QPaintDeviceWindow::staticMetaObject; break;
        case 149: m = &QPanGesture::staticMetaObject; break;
        case 150: m = &QParallelAnimationGroup::staticMetaObject; break;
        case 151: m = &QPauseAnimation::staticMetaObject; break;
        case 152: m = &QPdfWriter::staticMetaObject; break;
        case 153: m = &QPinchGesture::staticMetaObject; break;
        case 154: m = &QPlainTextDocumentLayout::staticMetaObject; break;
        case 155: m = &QPlainTextEdit::staticMetaObject; break;
        case 156: m = &QPluginLoader::staticMetaObject; break;
        case 157: m = &QPrintDialog::staticMetaObject; break;
        case 158: m = &QPrintPreviewDialog::staticMetaObject; break;
        case 159: m = &QPrintPreviewWidget::staticMetaObject; break;
        case 160: m = &QProcess::staticMetaObject; break;
        case 161: m = &QProgressBar::staticMetaObject; break;
        case 162: m = &QProgressDialog::staticMetaObject; break;
        case 163: m = &QPropertyAnimation::staticMetaObject; break;
        case 164: m = &QProxyStyle::staticMetaObject; break;
        case 165: m = &QPushButton::staticMetaObject; break;
        case 166: m = &QRadioButton::staticMetaObject; break;
        case 168: m = &QRegExpValidator::staticMetaObject; break;
        case 169: m = &QRubberBand::staticMetaObject; break;
        case 170: m = &QScreen::staticMetaObject; break;
        case 171: m = &QScrollArea::staticMetaObject; break;
        case 172: m = &QScrollBar::staticMetaObject; break;
        case 173: m = &QSequentialAnimationGroup::staticMetaObject; break;
        case 174: m = &QSessionManager::staticMetaObject; break;
        case 175: m = &QSettings::staticMetaObject; break;
        case 176: m = &QShortcut::staticMetaObject; break;
        case 177: m = &QSignalMapper::staticMetaObject; break;
        case 178: m = &QSignalTransition::staticMetaObject; break;
        case 179: m = &QSizeGrip::staticMetaObject; break;
        case 180: m = &QSlider::staticMetaObject; break;
        case 181: m = &QSortFilterProxyModel::staticMetaObject; break;
        case 182: m = &QSpinBox::staticMetaObject; break;
        case 183: m = &QSplashScreen::staticMetaObject; break;
        case 184: m = &QSplitter::staticMetaObject; break;
        case 185: m = &QSplitterHandle::staticMetaObject; break;
        case 191: m = &QStackedLayout::staticMetaObject; break;
        case 192: m = &QStackedWidget::staticMetaObject; break;
        case 193: m = &QStandardItemModel::staticMetaObject; break;
        case 194: m = &QState::staticMetaObject; break;
        case 195: m = &QStateMachine::staticMetaObject; break;
        case 196: m = &QStatusBar::staticMetaObject; break;
        case 197: m = &QStringListModel::staticMetaObject; break;
        case 198: m = &QStyle::staticMetaObject; break;
        case 199: m = &QStyleHints::staticMetaObject; break;
        case 200: m = &QStyledItemDelegate::staticMetaObject; break;
        case 203: m = &QSwipeGesture::staticMetaObject; break;
        case 204: m = &QSyntaxHighlighter::staticMetaObject; break;
        case 205: m = &QSystemTrayIcon::staticMetaObject; break;
        case 206: m = &QTabBar::staticMetaObject; break;
        case 207: m = &QTabWidget::staticMetaObject; break;
        case 208: m = &QTableView::staticMetaObject; break;
        case 209: m = &QTableWidget::staticMetaObject; break;
        case 210: m = &QTapAndHoldGesture::staticMetaObject; break;
        case 211: m = &QTapGesture::staticMetaObject; break;
        case 214: m = &QTextBlockGroup::staticMetaObject; break;
        case 215: m = &QTextBrowser::staticMetaObject; break;
        case 216: m = &QTextDocument::staticMetaObject; break;
        case 217: m = &QTextEdit::staticMetaObject; break;
        case 218: m = &QTextFrame::staticMetaObject; break;
        case 219: m = &QTextList::staticMetaObject; break;
        case 220: m = &QTextObject::staticMetaObject; break;
        case 221: m = &QTextTable::staticMetaObject; break;
        case 222: m = &QTimeEdit::staticMetaObject; break;
        case 223: m = &QTimeLine::staticMetaObject; break;
        case 224: m = &QTimer::staticMetaObject; break;
        case 225: m = &QToolBar::staticMetaObject; break;
        case 226: m = &QToolBox::staticMetaObject; break;
        case 227: m = &QToolButton::staticMetaObject; break;
        case 228: m = &QTranslator::staticMetaObject; break;
        case 229: m = &QTreeView::staticMetaObject; break;
        case 230: m = &QTreeWidget::staticMetaObject; break;
        case 232: m = &QUndoGroup::staticMetaObject; break;
        case 233: m = &QUndoStack::staticMetaObject; break;
        case 234: m = &QUndoView::staticMetaObject; break;
        case 235: m = &QVBoxLayout::staticMetaObject; break;
        case 236: m = &QValidator::staticMetaObject; break;
        case 237: m = &QVariantAnimation::staticMetaObject; break;
        case 246: m = &QWidget::staticMetaObject; break;
        case 247: m = &QWidgetAction::staticMetaObject; break;
        case 248: m = &QWindow::staticMetaObject; break;
        case 249: m = &QWizard::staticMetaObject; break;
        case 250: m = &QWizardPage::staticMetaObject; break;
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
            if(staticMetaObject_help) {
                m = staticMetaObject_help(n); }
            break;
        case 18:
        case 23:
        case 24:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 86:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 167:
        case 238:
        case 239:
            if(staticMetaObject_multimedia) {
                m = staticMetaObject_multimedia(n); }
            break;
        case 7:
        case 12:
        case 104:
        case 120:
        case 121:
        case 136:
        case 137:
        case 138:
        case 139:
        case 212:
        case 213:
        case 231:
            if(staticMetaObject_network) {
                m = staticMetaObject_network(n); }
            break;
        case 186:
        case 187:
        case 188:
        case 189:
        case 190:
            if(staticMetaObject_sql) {
                m = staticMetaObject_sql(n); }
            break;
        case 83:
        case 201:
        case 202:
            if(staticMetaObject_svg) {
                m = staticMetaObject_svg(n); }
            break;
        case 88:
        case 240:
        case 241:
        case 242:
        case 243:
        case 244:
        case 245:
            if(staticMetaObject_webkit) {
                m = staticMetaObject_webkit(n); }
            break; }
    return m; }

void LObjects::deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 1: if(gc) delete (QAbstractGraphicsShapeItem*)p; else delete (LAbstractGraphicsShapeItem*)p; break;
        case 2: if(gc) delete (QAccessible*)p; else delete (LAccessible*)p; break;
        case 3: if(gc) delete (QAccessibleEditableTextInterface*)p; else delete (LAccessibleEditableTextInterface*)p; break;
        case 4: if(gc) delete (QAccessibleEvent*)p; else delete (LAccessibleEvent*)p; break;
        case 5: if(gc) /* nothing */; else delete (LAccessibleInterface*)p; break;
        case 7: if(gc) delete (QAccessibleStateChangeEvent*)p; else delete (LAccessibleStateChangeEvent*)p; break;
        case 8: if(gc) delete (QAccessibleTextCursorEvent*)p; else delete (LAccessibleTextCursorEvent*)p; break;
        case 9: if(gc) delete (QAccessibleTextInsertEvent*)p; else delete (LAccessibleTextInsertEvent*)p; break;
        case 10: if(gc) delete (QAccessibleTextInterface*)p; else delete (LAccessibleTextInterface*)p; break;
        case 11: if(gc) delete (QAccessibleTextRemoveEvent*)p; else delete (LAccessibleTextRemoveEvent*)p; break;
        case 12: if(gc) delete (QAccessibleTextSelectionEvent*)p; else delete (LAccessibleTextSelectionEvent*)p; break;
        case 13: if(gc) delete (QAccessibleTextUpdateEvent*)p; else delete (LAccessibleTextUpdateEvent*)p; break;
        case 14: if(gc) delete (QAccessibleValueChangeEvent*)p; else delete (LAccessibleValueChangeEvent*)p; break;
        case 15: if(gc) delete (QAccessibleValueInterface*)p; else delete (LAccessibleValueInterface*)p; break;
        case 16: if(gc) /* nothing */; else delete (LAccessibleWidget*)p; break;
        case 17: if(gc) delete (QActionEvent*)p; else delete (LActionEvent*)p; break;
        case 22: if(gc) delete (QBackingStore*)p; else delete (LBackingStore*)p; break;
        case 23: if(gc) delete (QBasicTimer*)p; else delete (LBasicTimer*)p; break;
        case 24: if(gc) delete (QBitArray*)p; else delete (LBitArray*)p; break;
        case 25: if(gc) delete (QBitmap*)p; else delete (LBitmap*)p; break;
        case 26: if(gc) delete (QBrush*)p; else delete (LBrush*)p; break;
        case 29: if(gc) delete (QChildEvent*)p; else delete (LChildEvent*)p; break;
        case 30: if(gc) delete (QCloseEvent*)p; else delete (LCloseEvent*)p; break;
        case 31: if(gc) delete (QColor*)p; else delete (LColor*)p; break;
        case 32: if(gc) delete (QConicalGradient*)p; else delete (LConicalGradient*)p; break;
        case 33: if(gc) delete (QContextMenuEvent*)p; else delete (LContextMenuEvent*)p; break;
        case 34: if(gc) delete (QCryptographicHash*)p; else delete (LCryptographicHash*)p; break;
        case 35: if(gc) delete (QCursor*)p; else delete (LCursor*)p; break;
        case 36: if(gc) delete (QDate*)p; else delete (LDate*)p; break;
        case 37: if(gc) delete (QDateTime*)p; else delete (LDateTime*)p; break;
        case 39: if(gc) delete (QDir*)p; else delete (LDir*)p; break;
        case 40: if(gc) delete (QDirIterator*)p; else delete (LDirIterator*)p; break;
        case 41: if(gc) delete (QDragEnterEvent*)p; else delete (LDragEnterEvent*)p; break;
        case 42: if(gc) delete (QDragLeaveEvent*)p; else delete (LDragLeaveEvent*)p; break;
        case 43: if(gc) delete (QDragMoveEvent*)p; else delete (LDragMoveEvent*)p; break;
        case 44: if(gc) delete (QDropEvent*)p; else delete (LDropEvent*)p; break;
        case 45: if(gc) delete (QDynamicPropertyChangeEvent*)p; else delete (LDynamicPropertyChangeEvent*)p; break;
        case 46: if(gc) delete (QEasingCurve*)p; else delete (LEasingCurve*)p; break;
        case 47: if(gc) delete (QElapsedTimer*)p; else delete (LElapsedTimer*)p; break;
        case 48: if(gc) delete (QEnterEvent*)p; else delete (LEnterEvent*)p; break;
        case 49: if(gc) delete (QEvent*)p; else delete (LEvent*)p; break;
        case 50: if(gc) delete (QEventLoopLocker*)p; else delete (LEventLoopLocker*)p; break;
        case 51: if(gc) delete (QExposeEvent*)p; else delete (LExposeEvent*)p; break;
        case 52: if(gc) delete (QFileIconProvider*)p; else delete (LFileIconProvider*)p; break;
        case 53: if(gc) delete (QFileInfo*)p; else delete (LFileInfo*)p; break;
        case 54: if(gc) delete (QFileOpenEvent*)p; else delete (LFileOpenEvent*)p; break;
        case 55: if(gc) delete (QFocusEvent*)p; else delete (LFocusEvent*)p; break;
        case 56: if(gc) delete (QFont*)p; else delete (LFont*)p; break;
        case 57: if(gc) delete (QFontDatabase*)p; else delete (LFontDatabase*)p; break;
        case 58: if(gc) delete (QFontInfo*)p; else delete (LFontInfo*)p; break;
        case 59: if(gc) delete (QFontMetrics*)p; else delete (LFontMetrics*)p; break;
        case 60: if(gc) delete (QFontMetricsF*)p; else delete (LFontMetricsF*)p; break;
        case 61: if(gc) delete (QGestureEvent*)p; else delete (LGestureEvent*)p; break;
        case 62: if(gc) delete (QGradient*)p; else delete (LGradient*)p; break;
        case 63: if(gc) delete (QGraphicsAnchorLayout*)p; else delete (LGraphicsAnchorLayout*)p; break;
        case 64: if(gc) delete (QGraphicsEllipseItem*)p; else delete (LGraphicsEllipseItem*)p; break;
        case 65: if(gc) delete (QGraphicsGridLayout*)p; else delete (LGraphicsGridLayout*)p; break;
        case 66: if(gc) delete (QGraphicsItem*)p; else delete (LGraphicsItem*)p; break;
        case 67: if(gc) delete (QGraphicsItemGroup*)p; else delete (LGraphicsItemGroup*)p; break;
        case 68: if(gc) delete (QGraphicsLayout*)p; else delete (LGraphicsLayout*)p; break;
        case 69: if(gc) delete (QGraphicsLayoutItem*)p; else delete (LGraphicsLayoutItem*)p; break;
        case 70: if(gc) delete (QGraphicsLineItem*)p; else delete (LGraphicsLineItem*)p; break;
        case 71: if(gc) delete (QGraphicsLinearLayout*)p; else delete (LGraphicsLinearLayout*)p; break;
        case 72: if(gc) delete (QGraphicsPathItem*)p; else delete (LGraphicsPathItem*)p; break;
        case 73: if(gc) delete (QGraphicsPixmapItem*)p; else delete (LGraphicsPixmapItem*)p; break;
        case 74: if(gc) delete (QGraphicsPolygonItem*)p; else delete (LGraphicsPolygonItem*)p; break;
        case 75: if(gc) delete (QGraphicsRectItem*)p; else delete (LGraphicsRectItem*)p; break;
        case 76: if(gc) delete (QGraphicsSceneContextMenuEvent*)p; else delete (LGraphicsSceneContextMenuEvent*)p; break;
        case 77: if(gc) delete (QGraphicsSceneDragDropEvent*)p; else delete (LGraphicsSceneDragDropEvent*)p; break;
        case 78: if(gc) delete (QGraphicsSceneEvent*)p; else delete (LGraphicsSceneEvent*)p; break;
        case 79: if(gc) delete (QGraphicsSceneHelpEvent*)p; else delete (LGraphicsSceneHelpEvent*)p; break;
        case 80: if(gc) delete (QGraphicsSceneHoverEvent*)p; else delete (LGraphicsSceneHoverEvent*)p; break;
        case 81: if(gc) delete (QGraphicsSceneMouseEvent*)p; else delete (LGraphicsSceneMouseEvent*)p; break;
        case 82: if(gc) delete (QGraphicsSceneMoveEvent*)p; else delete (LGraphicsSceneMoveEvent*)p; break;
        case 83: if(gc) delete (QGraphicsSceneResizeEvent*)p; else delete (LGraphicsSceneResizeEvent*)p; break;
        case 84: if(gc) delete (QGraphicsSceneWheelEvent*)p; else delete (LGraphicsSceneWheelEvent*)p; break;
        case 85: if(gc) delete (QGraphicsSimpleTextItem*)p; else delete (LGraphicsSimpleTextItem*)p; break;
        case 87: if(gc) delete (QHelpEvent*)p; else delete (LHelpEvent*)p; break;
        case 89: if(gc) delete (QHideEvent*)p; else delete (LHideEvent*)p; break;
        case 92: if(gc) delete (QHoverEvent*)p; else delete (LHoverEvent*)p; break;
        case 94: if(gc) delete (QIcon*)p; else delete (LIcon*)p; break;
        case 95: if(gc) delete (QIconDragEvent*)p; else delete (LIconDragEvent*)p; break;
        case 96: if(gc) delete (QImage*)p; else delete (LImage*)p; break;
        case 98: if(gc) delete (QInputEvent*)p; else delete (LInputEvent*)p; break;
        case 99: if(gc) delete (QInputMethodEvent*)p; else delete (LInputMethodEvent*)p; break;
        case 100: if(gc) delete (QInputMethodQueryEvent*)p; else delete (LInputMethodQueryEvent*)p; break;
        case 101: if(gc) delete (QItemEditorCreatorBase*)p; else delete (LItemEditorCreatorBase*)p; break;
        case 102: if(gc) delete (QItemEditorFactory*)p; else delete (LItemEditorFactory*)p; break;
        case 103: if(gc) delete (QItemSelectionRange*)p; else delete (LItemSelectionRange*)p; break;
        case 104: if(gc) delete (QKeyEvent*)p; else delete (LKeyEvent*)p; break;
        case 105: if(gc) delete (QKeySequence*)p; else delete (LKeySequence*)p; break;
        case 106: if(gc) delete (QLayoutItem*)p; else delete (LLayoutItem*)p; break;
        case 107: if(gc) delete (QLibraryInfo*)p; else delete (LLibraryInfo*)p; break;
        case 108: if(gc) delete (QLinearGradient*)p; else delete (LLinearGradient*)p; break;
        case 109: if(gc) delete (QListWidgetItem*)p; else delete (LListWidgetItem*)p; break;
        case 110: if(gc) delete (QLocale*)p; else delete (LLocale*)p; break;
        case 111: if(gc) delete (QMargins*)p; else delete (LMargins*)p; break;
        case 112: if(gc) delete (QMarginsF*)p; else delete (LMarginsF*)p; break;
        case 113: if(gc) delete (QMatrix*)p; else delete (LMatrix*)p; break;
        case 114: if(gc) delete (QMatrix4x4*)p; else delete (LMatrix4x4*)p; break;
        case 117: if(gc) delete (QMessageAuthenticationCode*)p; else delete (LMessageAuthenticationCode*)p; break;
        case 118: if(gc) delete (QMetaObject*)p; else delete (LMetaObject*)p; break;
        case 119: if(gc) delete (QModelIndex*)p; else delete (LModelIndex*)p; break;
        case 120: if(gc) delete (QMouseEvent*)p; else delete (LMouseEvent*)p; break;
        case 121: if(gc) delete (QMoveEvent*)p; else delete (LMoveEvent*)p; break;
        case 131: if(gc) delete (QOpenGLFramebufferObject*)p; else delete (LOpenGLFramebufferObject*)p; break;
        case 132: if(gc) delete (QOpenGLFramebufferObjectFormat*)p; else delete (LOpenGLFramebufferObjectFormat*)p; break;
        case 133: if(gc) delete (QOpenGLPaintDevice*)p; else delete (LOpenGLPaintDevice*)p; break;
        case 134: if(gc) delete (QOpenGLTexture*)p; else delete (LOpenGLTexture*)p; break;
        case 135: if(gc) delete (QPageLayout*)p; else delete (LPageLayout*)p; break;
        case 136: if(gc) delete (QPageSize*)p; else delete (LPageSize*)p; break;
        case 139: if(gc) delete (QPaintEvent*)p; else delete (LPaintEvent*)p; break;
        case 140: if(gc) delete (QPainter*)p; else delete (LPainter*)p; break;
        case 141: if(gc) delete (QPainterPath*)p; else delete (LPainterPath*)p; break;
        case 142: if(gc) delete (QPainterPathStroker*)p; else delete (LPainterPathStroker*)p; break;
        case 143: if(gc) delete (QPalette*)p; else delete (LPalette*)p; break;
        case 144: if(gc) delete (QPen*)p; else delete (LPen*)p; break;
        case 145: if(gc) delete (QPersistentModelIndex*)p; else delete (LPersistentModelIndex*)p; break;
        case 146: if(gc) delete (QPicture*)p; else delete (LPicture*)p; break;
        case 147: if(gc) delete (QPixmap*)p; else delete (LPixmap*)p; break;
        case 148: if(gc) delete (QPixmapCache*)p; else delete (LPixmapCache*)p; break;
        case 149: if(gc) delete (QPrinter*)p; else delete (LPrinter*)p; break;
        case 150: if(gc) delete (QPrinterInfo*)p; else delete (LPrinterInfo*)p; break;
        case 151: if(gc) delete (QProcessEnvironment*)p; else delete (LProcessEnvironment*)p; break;
        case 152: if(gc) delete (QQuaternion*)p; else delete (LQuaternion*)p; break;
        case 153: if(gc) delete (QRadialGradient*)p; else delete (LRadialGradient*)p; break;
        case 154: if(gc) delete (QRegExp*)p; else delete (LRegExp*)p; break;
        case 155: if(gc) delete (QRegion*)p; else delete (LRegion*)p; break;
        case 156: if(gc) delete (QRegularExpression*)p; else delete (LRegularExpression*)p; break;
        case 157: if(gc) delete (QResizeEvent*)p; else delete (LResizeEvent*)p; break;
        case 158: if(gc) delete (QRunnable*)p; else delete (LRunnable*)p; break;
        case 159: if(gc) delete (QScrollEvent*)p; else delete (LScrollEvent*)p; break;
        case 160: if(gc) delete (QScrollPrepareEvent*)p; else delete (LScrollPrepareEvent*)p; break;
        case 161: if(gc) delete (QSemaphore*)p; else delete (LSemaphore*)p; break;
        case 162: if(gc) delete (QShortcutEvent*)p; else delete (LShortcutEvent*)p; break;
        case 163: if(gc) delete (QShowEvent*)p; else delete (LShowEvent*)p; break;
        case 164: if(gc) delete (QSizePolicy*)p; else delete (LSizePolicy*)p; break;
        case 165: if(gc) delete (QSpacerItem*)p; else delete (LSpacerItem*)p; break;
        case 179: if(gc) delete (QStandardItem*)p; else delete (LStandardItem*)p; break;
        case 181: if(gc) delete (QStatusTipEvent*)p; else delete (LStatusTipEvent*)p; break;
        case 182: if(gc) delete (QStorageInfo*)p; else delete (LStorageInfo*)p; break;
        case 183: if(gc) delete (QStyleOption*)p; else delete (LStyleOption*)p; break;
        case 184: if(gc) delete (QStyleOptionGraphicsItem*)p; else delete (LStyleOptionGraphicsItem*)p; break;
        case 186: if(gc) delete (QSurfaceFormat*)p; else delete (LSurfaceFormat*)p; break;
        case 189: if(gc) delete (QSystemSemaphore*)p; else delete (LSystemSemaphore*)p; break;
        case 190: if(gc) delete (QTableWidgetItem*)p; else delete (LTableWidgetItem*)p; break;
        case 191: if(gc) delete (QTableWidgetSelectionRange*)p; else delete (LTableWidgetSelectionRange*)p; break;
        case 192: if(gc) delete (QTabletEvent*)p; else delete (LTabletEvent*)p; break;
        case 193: if(gc) delete (QTextBlock*)p; else delete (LTextBlock*)p; break;
        case 194: if(gc) delete (QTextBlockFormat*)p; else delete (LTextBlockFormat*)p; break;
        case 195: if(gc) delete (QTextBlockUserData*)p; else delete (LTextBlockUserData*)p; break;
        case 196: if(gc) delete (QTextBoundaryFinder*)p; else delete (LTextBoundaryFinder*)p; break;
        case 197: if(gc) delete (QTextCharFormat*)p; else delete (LTextCharFormat*)p; break;
        case 198: if(gc) /* nothing */; else delete (LTextCodec*)p; break;
        case 199: if(gc) delete (QTextCursor*)p; else delete (LTextCursor*)p; break;
        case 200: if(gc) delete (QTextDecoder*)p; else delete (LTextDecoder*)p; break;
        case 201: if(gc) delete (QTextDocumentFragment*)p; else delete (LTextDocumentFragment*)p; break;
        case 202: if(gc) delete (QTextDocumentWriter*)p; else delete (LTextDocumentWriter*)p; break;
        case 203: if(gc) delete (QTextEncoder*)p; else delete (LTextEncoder*)p; break;
        case 204: if(gc) delete (QTextFormat*)p; else delete (LTextFormat*)p; break;
        case 205: if(gc) delete (QTextFragment*)p; else delete (LTextFragment*)p; break;
        case 206: if(gc) delete (QTextFrameFormat*)p; else delete (LTextFrameFormat*)p; break;
        case 207: if(gc) delete (QTextImageFormat*)p; else delete (LTextImageFormat*)p; break;
        case 208: if(gc) delete (QTextLayout*)p; else delete (LTextLayout*)p; break;
        case 209: if(gc) delete (QTextLength*)p; else delete (LTextLength*)p; break;
        case 210: if(gc) delete (QTextLine*)p; else delete (LTextLine*)p; break;
        case 211: if(gc) delete (QTextListFormat*)p; else delete (LTextListFormat*)p; break;
        case 212: if(gc) delete (QTextOption*)p; else delete (LTextOption*)p; break;
        case 213: if(gc) delete (QTextTableCell*)p; else delete (LTextTableCell*)p; break;
        case 214: if(gc) delete (QTextTableCellFormat*)p; else delete (LTextTableCellFormat*)p; break;
        case 215: if(gc) delete (QTextTableFormat*)p; else delete (LTextTableFormat*)p; break;
        case 216: if(gc) delete (QTime*)p; else delete (LTime*)p; break;
        case 217: if(gc) delete (QTimeZone*)p; else delete (LTimeZone*)p; break;
        case 218: if(gc) delete (QTimerEvent*)p; else delete (LTimerEvent*)p; break;
        case 219: if(gc) delete (QToolTip*)p; else delete (LToolTip*)p; break;
        case 220: if(gc) delete (QTouchDevice*)p; else delete (LTouchDevice*)p; break;
        case 221: if(gc) delete (QTouchEvent*)p; else delete (LTouchEvent*)p; break;
        case 222: if(gc) delete (QTransform*)p; else delete (LTransform*)p; break;
        case 223: if(gc) delete (QTreeWidgetItem*)p; else delete (LTreeWidgetItem*)p; break;
        case 224: if(gc) delete (QUndoCommand*)p; else delete (LUndoCommand*)p; break;
        case 225: if(gc) delete (QUrl*)p; else delete (LUrl*)p; break;
        case 226: if(gc) delete (QUuid*)p; else delete (LUuid*)p; break;
        case 227: if(gc) delete (QVariant*)p; else delete (LVariant*)p; break;
        case 228: if(gc) delete (QVector2D*)p; else delete (LVector2D*)p; break;
        case 229: if(gc) delete (QVector3D*)p; else delete (LVector3D*)p; break;
        case 230: if(gc) delete (QVector4D*)p; else delete (LVector4D*)p; break;
        case 242: if(gc) delete (QWhatsThis*)p; else delete (LWhatsThis*)p; break;
        case 243: if(gc) delete (QWhatsThisClickedEvent*)p; else delete (LWhatsThisClickedEvent*)p; break;
        case 244: if(gc) delete (QWheelEvent*)p; else delete (LWheelEvent*)p; break;
        case 245: if(gc) delete (QWidgetItem*)p; else delete (LWidgetItem*)p; break;
        case 246: if(gc) delete (QWindowStateChangeEvent*)p; else delete (LWindowStateChangeEvent*)p; break;
        case 86:
        case 88:
            if(deleteNObject_help) {
                deleteNObject_help(n, p, gc); }
            break;
        case 18:
        case 19:
        case 20:
        case 27:
        case 28:
        case 97:
        case 115:
        case 116:
        case 231:
        case 232:
        case 233:
            if(deleteNObject_multimedia) {
                deleteNObject_multimedia(n, p, gc); }
            break;
        case 21:
        case 90:
        case 91:
        case 93:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 174:
        case 175:
        case 176:
        case 177:
        case 178:
            if(deleteNObject_network) {
                deleteNObject_network(n, p, gc); }
            break;
        case 166:
        case 167:
        case 168:
        case 169:
        case 170:
        case 171:
        case 172:
        case 173:
            if(deleteNObject_sql) {
                deleteNObject_sql(n, p, gc); }
            break;
        case 187:
            if(deleteNObject_svg) {
                deleteNObject_svg(n, p, gc); }
            break;
        case 234:
        case 235:
        case 236:
        case 237:
        case 238:
        case 239:
        case 240:
        case 241:
            if(deleteNObject_webkit) {
                deleteNObject_webkit(n, p, gc); }
            break; }}

const char* LObjects::nObjectSuperClass(const QByteArray& name) {
    const char* s = 0;
    switch(LObjects::n_names.value(name)) {
        case 1: s = "QGraphicsItem"; break;
        case 6: s = "QAccessibleInterface"; break;
        case 7: s = "QAccessibleEvent"; break;
        case 8: s = "QAccessibleEvent"; break;
        case 9: s = "QAccessibleTextCursorEvent"; break;
        case 11: s = "QAccessibleTextCursorEvent"; break;
        case 12: s = "QAccessibleTextCursorEvent"; break;
        case 13: s = "QAccessibleTextCursorEvent"; break;
        case 14: s = "QAccessibleEvent"; break;
        case 16: s = "QAccessibleObject"; break;
        case 17: s = "QEvent"; break;
        case 25: s = "QPixmap"; break;
        case 29: s = "QEvent"; break;
        case 30: s = "QEvent"; break;
        case 32: s = "QGradient"; break;
        case 33: s = "QInputEvent"; break;
        case 41: s = "QDragMoveEvent"; break;
        case 42: s = "QEvent"; break;
        case 43: s = "QDropEvent"; break;
        case 44: s = "QEvent"; break;
        case 45: s = "QEvent"; break;
        case 48: s = "QEvent"; break;
        case 51: s = "QEvent"; break;
        case 54: s = "QEvent"; break;
        case 55: s = "QEvent"; break;
        case 61: s = "QEvent"; break;
        case 63: s = "QGraphicsLayout"; break;
        case 64: s = "QAbstractGraphicsShapeItem"; break;
        case 65: s = "QGraphicsLayout"; break;
        case 67: s = "QGraphicsItem"; break;
        case 68: s = "QGraphicsLayoutItem"; break;
        case 70: s = "QGraphicsItem"; break;
        case 71: s = "QGraphicsLayout"; break;
        case 72: s = "QAbstractGraphicsShapeItem"; break;
        case 73: s = "QGraphicsItem"; break;
        case 74: s = "QAbstractGraphicsShapeItem"; break;
        case 75: s = "QAbstractGraphicsShapeItem"; break;
        case 76: s = "QGraphicsSceneEvent"; break;
        case 77: s = "QGraphicsSceneEvent"; break;
        case 78: s = "QEvent"; break;
        case 79: s = "QGraphicsSceneEvent"; break;
        case 80: s = "QGraphicsSceneEvent"; break;
        case 81: s = "QGraphicsSceneEvent"; break;
        case 82: s = "QGraphicsSceneEvent"; break;
        case 83: s = "QGraphicsSceneEvent"; break;
        case 84: s = "QGraphicsSceneEvent"; break;
        case 85: s = "QAbstractGraphicsShapeItem"; break;
        case 87: s = "QEvent"; break;
        case 89: s = "QEvent"; break;
        case 92: s = "QInputEvent"; break;
        case 95: s = "QEvent"; break;
        case 96: s = "QPaintDevice"; break;
        case 98: s = "QEvent"; break;
        case 99: s = "QEvent"; break;
        case 100: s = "QEvent"; break;
        case 104: s = "QInputEvent"; break;
        case 108: s = "QGradient"; break;
        case 120: s = "QInputEvent"; break;
        case 121: s = "QEvent"; break;
        case 133: s = "QPaintDevice"; break;
        case 137: s = "QPaintDevice"; break;
        case 139: s = "QEvent"; break;
        case 146: s = "QPaintDevice"; break;
        case 147: s = "QPaintDevice"; break;
        case 149: s = "QPagedPaintDevice"; break;
        case 153: s = "QGradient"; break;
        case 157: s = "QEvent"; break;
        case 159: s = "QEvent"; break;
        case 160: s = "QEvent"; break;
        case 162: s = "QEvent"; break;
        case 163: s = "QEvent"; break;
        case 165: s = "QLayoutItem"; break;
        case 169: s = "QSqlRecord"; break;
        case 181: s = "QEvent"; break;
        case 184: s = "QStyleOption"; break;
        case 187: s = "QPaintDevice"; break;
        case 192: s = "QInputEvent"; break;
        case 194: s = "QTextFormat"; break;
        case 197: s = "QTextFormat"; break;
        case 206: s = "QTextFormat"; break;
        case 207: s = "QTextCharFormat"; break;
        case 211: s = "QTextFormat"; break;
        case 214: s = "QTextCharFormat"; break;
        case 215: s = "QTextFrameFormat"; break;
        case 218: s = "QEvent"; break;
        case 221: s = "QInputEvent"; break;
        case 243: s = "QEvent"; break;
        case 244: s = "QInputEvent"; break;
        case 245: s = "QLayoutItem"; break;
        case 246: s = "QEvent"; break; }
    return s; }

StrList LObjects::overrideFunctions(const QByteArray& name) {
    NumList ids;
    int n = q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 1: ids = LAbstractAnimation::overrideIds; break;
            case 2: ids = LAbstractButton::overrideIds; break;
            case 3: ids = LAbstractItemDelegate::overrideIds; break;
            case 4: ids = LAbstractItemModel::overrideIds; break;
            case 5: ids = LAbstractItemView::overrideIds; break;
            case 6: ids = LAbstractListModel::overrideIds; break;
            case 8: ids = LAbstractPrintDialog::overrideIds; break;
            case 9: ids = LAbstractProxyModel::overrideIds; break;
            case 10: ids = LAbstractScrollArea::overrideIds; break;
            case 11: ids = LAbstractSlider::overrideIds; break;
            case 13: ids = LAbstractSpinBox::overrideIds; break;
            case 14: ids = LAbstractState::overrideIds; break;
            case 16: ids = LAbstractTextDocumentLayout::overrideIds; break;
            case 17: ids = LAbstractTransition::overrideIds; break;
            case 19: ids = LAction::overrideIds; break;
            case 20: ids = LActionGroup::overrideIds; break;
            case 21: ids = LAnimationGroup::overrideIds; break;
            case 22: ids = LApplication::overrideIds; break;
            case 25: ids = LBoxLayout::overrideIds; break;
            case 26: ids = LBuffer::overrideIds; break;
            case 27: ids = LButtonGroup::overrideIds; break;
            case 28: ids = LCalendarWidget::overrideIds; break;
            case 35: ids = LCheckBox::overrideIds; break;
            case 37: ids = LColorDialog::overrideIds; break;
            case 38: ids = LColumnView::overrideIds; break;
            case 39: ids = LComboBox::overrideIds; break;
            case 40: ids = LCommandLinkButton::overrideIds; break;
            case 41: ids = LCommonStyle::overrideIds; break;
            case 42: ids = LCompleter::overrideIds; break;
            case 43: ids = LCoreApplication::overrideIds; break;
            case 44: ids = LDataWidgetMapper::overrideIds; break;
            case 45: ids = LDateEdit::overrideIds; break;
            case 46: ids = LDateTimeEdit::overrideIds; break;
            case 47: ids = LDesktopWidget::overrideIds; break;
            case 48: ids = LDial::overrideIds; break;
            case 49: ids = LDialog::overrideIds; break;
            case 50: ids = LDialogButtonBox::overrideIds; break;
            case 51: ids = LDirModel::overrideIds; break;
            case 52: ids = LDockWidget::overrideIds; break;
            case 53: ids = LDoubleSpinBox::overrideIds; break;
            case 54: ids = LDoubleValidator::overrideIds; break;
            case 55: ids = LDrag::overrideIds; break;
            case 56: ids = LErrorMessage::overrideIds; break;
            case 57: ids = LEventLoop::overrideIds; break;
            case 58: ids = LEventTransition::overrideIds; break;
            case 59: ids = LFile::overrideIds; break;
            case 61: ids = LFileDialog::overrideIds; break;
            case 62: ids = LFileSelector::overrideIds; break;
            case 63: ids = LFileSystemModel::overrideIds; break;
            case 64: ids = LFileSystemWatcher::overrideIds; break;
            case 65: ids = LFinalState::overrideIds; break;
            case 66: ids = LFocusFrame::overrideIds; break;
            case 67: ids = LFontComboBox::overrideIds; break;
            case 68: ids = LFontDialog::overrideIds; break;
            case 69: ids = LFormLayout::overrideIds; break;
            case 70: ids = LFrame::overrideIds; break;
            case 71: ids = LGesture::overrideIds; break;
            case 72: ids = LGraphicsAnchor::overrideIds; break;
            case 73: ids = LGraphicsBlurEffect::overrideIds; break;
            case 74: ids = LGraphicsColorizeEffect::overrideIds; break;
            case 75: ids = LGraphicsDropShadowEffect::overrideIds; break;
            case 76: ids = LGraphicsEffect::overrideIds; break;
            case 78: ids = LGraphicsOpacityEffect::overrideIds; break;
            case 79: ids = LGraphicsProxyWidget::overrideIds; break;
            case 80: ids = LGraphicsRotation::overrideIds; break;
            case 81: ids = LGraphicsScale::overrideIds; break;
            case 82: ids = LGraphicsScene::overrideIds; break;
            case 84: ids = LGraphicsTextItem::overrideIds; break;
            case 87: ids = LGraphicsView::overrideIds; break;
            case 89: ids = LGraphicsWidget::overrideIds; break;
            case 90: ids = LGridLayout::overrideIds; break;
            case 91: ids = LGroupBox::overrideIds; break;
            case 92: ids = LGuiApplication::overrideIds; break;
            case 93: ids = LHBoxLayout::overrideIds; break;
            case 94: ids = LHeaderView::overrideIds; break;
            case 103: ids = LHistoryState::overrideIds; break;
            case 105: ids = LIODevice::overrideIds; break;
            case 106: ids = LIdentityProxyModel::overrideIds; break;
            case 107: ids = LInputDialog::overrideIds; break;
            case 109: ids = LIntValidator::overrideIds; break;
            case 110: ids = LItemDelegate::overrideIds; break;
            case 111: ids = LItemSelectionModel::overrideIds; break;
            case 112: ids = LKeyEventTransition::overrideIds; break;
            case 113: ids = LLCDNumber::overrideIds; break;
            case 114: ids = LLabel::overrideIds; break;
            case 116: ids = LLibrary::overrideIds; break;
            case 117: ids = LLineEdit::overrideIds; break;
            case 118: ids = LListView::overrideIds; break;
            case 119: ids = LListWidget::overrideIds; break;
            case 122: ids = LMainWindow::overrideIds; break;
            case 123: ids = LMdiArea::overrideIds; break;
            case 124: ids = LMdiSubWindow::overrideIds; break;
            case 130: ids = LMenu::overrideIds; break;
            case 131: ids = LMenuBar::overrideIds; break;
            case 132: ids = LMessageBox::overrideIds; break;
            case 133: ids = LMimeData::overrideIds; break;
            case 134: ids = LMouseEventTransition::overrideIds; break;
            case 135: ids = LMovie::overrideIds; break;
            case 140: ids = LObject::overrideIds; break;
            case 141: ids = LObjectCleanupHandler::overrideIds; break;
            case 142: ids = LOpenGLContext::overrideIds; break;
            case 143: ids = LOpenGLShader::overrideIds; break;
            case 144: ids = LOpenGLShaderProgram::overrideIds; break;
            case 145: ids = LOpenGLWidget::overrideIds; break;
            case 146: ids = LOpenGLWindow::overrideIds; break;
            case 147: ids = LPageSetupDialog::overrideIds; break;
            case 148: ids = LPaintDeviceWindow::overrideIds; break;
            case 149: ids = LPanGesture::overrideIds; break;
            case 150: ids = LParallelAnimationGroup::overrideIds; break;
            case 151: ids = LPauseAnimation::overrideIds; break;
            case 152: ids = LPdfWriter::overrideIds; break;
            case 153: ids = LPinchGesture::overrideIds; break;
            case 154: ids = LPlainTextDocumentLayout::overrideIds; break;
            case 155: ids = LPlainTextEdit::overrideIds; break;
            case 156: ids = LPluginLoader::overrideIds; break;
            case 157: ids = LPrintDialog::overrideIds; break;
            case 158: ids = LPrintPreviewDialog::overrideIds; break;
            case 159: ids = LPrintPreviewWidget::overrideIds; break;
            case 160: ids = LProcess::overrideIds; break;
            case 161: ids = LProgressBar::overrideIds; break;
            case 162: ids = LProgressDialog::overrideIds; break;
            case 163: ids = LPropertyAnimation::overrideIds; break;
            case 164: ids = LProxyStyle::overrideIds; break;
            case 165: ids = LPushButton::overrideIds; break;
            case 166: ids = LRadioButton::overrideIds; break;
            case 168: ids = LRegExpValidator::overrideIds; break;
            case 169: ids = LRubberBand::overrideIds; break;
            case 171: ids = LScrollArea::overrideIds; break;
            case 172: ids = LScrollBar::overrideIds; break;
            case 173: ids = LSequentialAnimationGroup::overrideIds; break;
            case 175: ids = LSettings::overrideIds; break;
            case 176: ids = LShortcut::overrideIds; break;
            case 177: ids = LSignalMapper::overrideIds; break;
            case 178: ids = LSignalTransition::overrideIds; break;
            case 179: ids = LSizeGrip::overrideIds; break;
            case 180: ids = LSlider::overrideIds; break;
            case 181: ids = LSortFilterProxyModel::overrideIds; break;
            case 182: ids = LSpinBox::overrideIds; break;
            case 183: ids = LSplashScreen::overrideIds; break;
            case 184: ids = LSplitter::overrideIds; break;
            case 185: ids = LSplitterHandle::overrideIds; break;
            case 191: ids = LStackedLayout::overrideIds; break;
            case 192: ids = LStackedWidget::overrideIds; break;
            case 193: ids = LStandardItemModel::overrideIds; break;
            case 194: ids = LState::overrideIds; break;
            case 195: ids = LStateMachine::overrideIds; break;
            case 196: ids = LStatusBar::overrideIds; break;
            case 197: ids = LStringListModel::overrideIds; break;
            case 199: ids = LStyleHints::overrideIds; break;
            case 200: ids = LStyledItemDelegate::overrideIds; break;
            case 203: ids = LSwipeGesture::overrideIds; break;
            case 204: ids = LSyntaxHighlighter::overrideIds; break;
            case 205: ids = LSystemTrayIcon::overrideIds; break;
            case 206: ids = LTabBar::overrideIds; break;
            case 207: ids = LTabWidget::overrideIds; break;
            case 208: ids = LTableView::overrideIds; break;
            case 209: ids = LTableWidget::overrideIds; break;
            case 210: ids = LTapAndHoldGesture::overrideIds; break;
            case 211: ids = LTapGesture::overrideIds; break;
            case 214: ids = LTextBlockGroup::overrideIds; break;
            case 215: ids = LTextBrowser::overrideIds; break;
            case 216: ids = LTextDocument::overrideIds; break;
            case 217: ids = LTextEdit::overrideIds; break;
            case 218: ids = LTextFrame::overrideIds; break;
            case 219: ids = LTextList::overrideIds; break;
            case 220: ids = LTextObject::overrideIds; break;
            case 221: ids = LTextTable::overrideIds; break;
            case 222: ids = LTimeEdit::overrideIds; break;
            case 223: ids = LTimeLine::overrideIds; break;
            case 224: ids = LTimer::overrideIds; break;
            case 225: ids = LToolBar::overrideIds; break;
            case 226: ids = LToolBox::overrideIds; break;
            case 227: ids = LToolButton::overrideIds; break;
            case 228: ids = LTranslator::overrideIds; break;
            case 229: ids = LTreeView::overrideIds; break;
            case 230: ids = LTreeWidget::overrideIds; break;
            case 232: ids = LUndoGroup::overrideIds; break;
            case 233: ids = LUndoStack::overrideIds; break;
            case 234: ids = LUndoView::overrideIds; break;
            case 235: ids = LVBoxLayout::overrideIds; break;
            case 236: ids = LValidator::overrideIds; break;
            case 237: ids = LVariantAnimation::overrideIds; break;
            case 246: ids = LWidget::overrideIds; break;
            case 247: ids = LWidgetAction::overrideIds; break;
            case 248: ids = LWindow::overrideIds; break;
            case 249: ids = LWizard::overrideIds; break;
            case 250: ids = LWizardPage::overrideIds; break;
            case 95:
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
            case 102:
                if(override_help) {
                    NumList* _ids = override_help(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 18:
            case 23:
            case 24:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 86:
            case 125:
            case 126:
            case 127:
            case 128:
            case 129:
            case 167:
            case 238:
            case 239:
                if(override_multimedia) {
                    NumList* _ids = override_multimedia(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 7:
            case 12:
            case 104:
            case 120:
            case 121:
            case 136:
            case 137:
            case 138:
            case 139:
            case 212:
            case 213:
            case 231:
                if(override_network) {
                    NumList* _ids = override_network(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 186:
            case 187:
            case 188:
            case 189:
            case 190:
                if(override_sql) {
                    NumList* _ids = override_sql(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 83:
            case 201:
            case 202:
                if(override_svg) {
                    NumList* _ids = override_svg(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 88:
            case 240:
            case 241:
            case 242:
            case 243:
            case 244:
            case 245:
                if(override_webkit) {
                    NumList* _ids = override_webkit(name);
                    if(_ids) {
                        ids = *_ids; }}
                break; }}
    else {
        n = n_names.value(name);
        switch(n) {
            case 1: ids = LAbstractGraphicsShapeItem::overrideIds; break;
            case 2: ids = LAccessible::overrideIds; break;
            case 3: ids = LAccessibleEditableTextInterface::overrideIds; break;
            case 4: ids = LAccessibleEvent::overrideIds; break;
            case 5: ids = LAccessibleInterface::overrideIds; break;
            case 7: ids = LAccessibleStateChangeEvent::overrideIds; break;
            case 8: ids = LAccessibleTextCursorEvent::overrideIds; break;
            case 9: ids = LAccessibleTextInsertEvent::overrideIds; break;
            case 10: ids = LAccessibleTextInterface::overrideIds; break;
            case 11: ids = LAccessibleTextRemoveEvent::overrideIds; break;
            case 12: ids = LAccessibleTextSelectionEvent::overrideIds; break;
            case 13: ids = LAccessibleTextUpdateEvent::overrideIds; break;
            case 14: ids = LAccessibleValueChangeEvent::overrideIds; break;
            case 15: ids = LAccessibleValueInterface::overrideIds; break;
            case 16: ids = LAccessibleWidget::overrideIds; break;
            case 17: ids = LActionEvent::overrideIds; break;
            case 22: ids = LBackingStore::overrideIds; break;
            case 23: ids = LBasicTimer::overrideIds; break;
            case 24: ids = LBitArray::overrideIds; break;
            case 25: ids = LBitmap::overrideIds; break;
            case 26: ids = LBrush::overrideIds; break;
            case 29: ids = LChildEvent::overrideIds; break;
            case 30: ids = LCloseEvent::overrideIds; break;
            case 31: ids = LColor::overrideIds; break;
            case 32: ids = LConicalGradient::overrideIds; break;
            case 33: ids = LContextMenuEvent::overrideIds; break;
            case 34: ids = LCryptographicHash::overrideIds; break;
            case 35: ids = LCursor::overrideIds; break;
            case 36: ids = LDate::overrideIds; break;
            case 37: ids = LDateTime::overrideIds; break;
            case 39: ids = LDir::overrideIds; break;
            case 40: ids = LDirIterator::overrideIds; break;
            case 41: ids = LDragEnterEvent::overrideIds; break;
            case 42: ids = LDragLeaveEvent::overrideIds; break;
            case 43: ids = LDragMoveEvent::overrideIds; break;
            case 44: ids = LDropEvent::overrideIds; break;
            case 45: ids = LDynamicPropertyChangeEvent::overrideIds; break;
            case 46: ids = LEasingCurve::overrideIds; break;
            case 47: ids = LElapsedTimer::overrideIds; break;
            case 48: ids = LEnterEvent::overrideIds; break;
            case 49: ids = LEvent::overrideIds; break;
            case 50: ids = LEventLoopLocker::overrideIds; break;
            case 51: ids = LExposeEvent::overrideIds; break;
            case 52: ids = LFileIconProvider::overrideIds; break;
            case 53: ids = LFileInfo::overrideIds; break;
            case 54: ids = LFileOpenEvent::overrideIds; break;
            case 55: ids = LFocusEvent::overrideIds; break;
            case 56: ids = LFont::overrideIds; break;
            case 57: ids = LFontDatabase::overrideIds; break;
            case 58: ids = LFontInfo::overrideIds; break;
            case 59: ids = LFontMetrics::overrideIds; break;
            case 60: ids = LFontMetricsF::overrideIds; break;
            case 61: ids = LGestureEvent::overrideIds; break;
            case 62: ids = LGradient::overrideIds; break;
            case 63: ids = LGraphicsAnchorLayout::overrideIds; break;
            case 64: ids = LGraphicsEllipseItem::overrideIds; break;
            case 65: ids = LGraphicsGridLayout::overrideIds; break;
            case 66: ids = LGraphicsItem::overrideIds; break;
            case 67: ids = LGraphicsItemGroup::overrideIds; break;
            case 68: ids = LGraphicsLayout::overrideIds; break;
            case 69: ids = LGraphicsLayoutItem::overrideIds; break;
            case 70: ids = LGraphicsLineItem::overrideIds; break;
            case 71: ids = LGraphicsLinearLayout::overrideIds; break;
            case 72: ids = LGraphicsPathItem::overrideIds; break;
            case 73: ids = LGraphicsPixmapItem::overrideIds; break;
            case 74: ids = LGraphicsPolygonItem::overrideIds; break;
            case 75: ids = LGraphicsRectItem::overrideIds; break;
            case 76: ids = LGraphicsSceneContextMenuEvent::overrideIds; break;
            case 77: ids = LGraphicsSceneDragDropEvent::overrideIds; break;
            case 78: ids = LGraphicsSceneEvent::overrideIds; break;
            case 79: ids = LGraphicsSceneHelpEvent::overrideIds; break;
            case 80: ids = LGraphicsSceneHoverEvent::overrideIds; break;
            case 81: ids = LGraphicsSceneMouseEvent::overrideIds; break;
            case 82: ids = LGraphicsSceneMoveEvent::overrideIds; break;
            case 83: ids = LGraphicsSceneResizeEvent::overrideIds; break;
            case 84: ids = LGraphicsSceneWheelEvent::overrideIds; break;
            case 85: ids = LGraphicsSimpleTextItem::overrideIds; break;
            case 87: ids = LHelpEvent::overrideIds; break;
            case 89: ids = LHideEvent::overrideIds; break;
            case 92: ids = LHoverEvent::overrideIds; break;
            case 94: ids = LIcon::overrideIds; break;
            case 95: ids = LIconDragEvent::overrideIds; break;
            case 96: ids = LImage::overrideIds; break;
            case 98: ids = LInputEvent::overrideIds; break;
            case 99: ids = LInputMethodEvent::overrideIds; break;
            case 100: ids = LInputMethodQueryEvent::overrideIds; break;
            case 101: ids = LItemEditorCreatorBase::overrideIds; break;
            case 102: ids = LItemEditorFactory::overrideIds; break;
            case 103: ids = LItemSelectionRange::overrideIds; break;
            case 104: ids = LKeyEvent::overrideIds; break;
            case 105: ids = LKeySequence::overrideIds; break;
            case 106: ids = LLayoutItem::overrideIds; break;
            case 107: ids = LLibraryInfo::overrideIds; break;
            case 108: ids = LLinearGradient::overrideIds; break;
            case 109: ids = LListWidgetItem::overrideIds; break;
            case 110: ids = LLocale::overrideIds; break;
            case 111: ids = LMargins::overrideIds; break;
            case 112: ids = LMarginsF::overrideIds; break;
            case 113: ids = LMatrix::overrideIds; break;
            case 114: ids = LMatrix4x4::overrideIds; break;
            case 117: ids = LMessageAuthenticationCode::overrideIds; break;
            case 118: ids = LMetaObject::overrideIds; break;
            case 119: ids = LModelIndex::overrideIds; break;
            case 120: ids = LMouseEvent::overrideIds; break;
            case 121: ids = LMoveEvent::overrideIds; break;
            case 131: ids = LOpenGLFramebufferObject::overrideIds; break;
            case 132: ids = LOpenGLFramebufferObjectFormat::overrideIds; break;
            case 133: ids = LOpenGLPaintDevice::overrideIds; break;
            case 134: ids = LOpenGLTexture::overrideIds; break;
            case 135: ids = LPageLayout::overrideIds; break;
            case 136: ids = LPageSize::overrideIds; break;
            case 139: ids = LPaintEvent::overrideIds; break;
            case 140: ids = LPainter::overrideIds; break;
            case 141: ids = LPainterPath::overrideIds; break;
            case 142: ids = LPainterPathStroker::overrideIds; break;
            case 143: ids = LPalette::overrideIds; break;
            case 144: ids = LPen::overrideIds; break;
            case 145: ids = LPersistentModelIndex::overrideIds; break;
            case 146: ids = LPicture::overrideIds; break;
            case 147: ids = LPixmap::overrideIds; break;
            case 148: ids = LPixmapCache::overrideIds; break;
            case 149: ids = LPrinter::overrideIds; break;
            case 150: ids = LPrinterInfo::overrideIds; break;
            case 151: ids = LProcessEnvironment::overrideIds; break;
            case 152: ids = LQuaternion::overrideIds; break;
            case 153: ids = LRadialGradient::overrideIds; break;
            case 154: ids = LRegExp::overrideIds; break;
            case 155: ids = LRegion::overrideIds; break;
            case 156: ids = LRegularExpression::overrideIds; break;
            case 157: ids = LResizeEvent::overrideIds; break;
            case 158: ids = LRunnable::overrideIds; break;
            case 159: ids = LScrollEvent::overrideIds; break;
            case 160: ids = LScrollPrepareEvent::overrideIds; break;
            case 161: ids = LSemaphore::overrideIds; break;
            case 162: ids = LShortcutEvent::overrideIds; break;
            case 163: ids = LShowEvent::overrideIds; break;
            case 164: ids = LSizePolicy::overrideIds; break;
            case 165: ids = LSpacerItem::overrideIds; break;
            case 179: ids = LStandardItem::overrideIds; break;
            case 181: ids = LStatusTipEvent::overrideIds; break;
            case 182: ids = LStorageInfo::overrideIds; break;
            case 183: ids = LStyleOption::overrideIds; break;
            case 184: ids = LStyleOptionGraphicsItem::overrideIds; break;
            case 186: ids = LSurfaceFormat::overrideIds; break;
            case 189: ids = LSystemSemaphore::overrideIds; break;
            case 190: ids = LTableWidgetItem::overrideIds; break;
            case 191: ids = LTableWidgetSelectionRange::overrideIds; break;
            case 192: ids = LTabletEvent::overrideIds; break;
            case 193: ids = LTextBlock::overrideIds; break;
            case 194: ids = LTextBlockFormat::overrideIds; break;
            case 195: ids = LTextBlockUserData::overrideIds; break;
            case 196: ids = LTextBoundaryFinder::overrideIds; break;
            case 197: ids = LTextCharFormat::overrideIds; break;
            case 198: ids = LTextCodec::overrideIds; break;
            case 199: ids = LTextCursor::overrideIds; break;
            case 200: ids = LTextDecoder::overrideIds; break;
            case 201: ids = LTextDocumentFragment::overrideIds; break;
            case 202: ids = LTextDocumentWriter::overrideIds; break;
            case 203: ids = LTextEncoder::overrideIds; break;
            case 204: ids = LTextFormat::overrideIds; break;
            case 205: ids = LTextFragment::overrideIds; break;
            case 206: ids = LTextFrameFormat::overrideIds; break;
            case 207: ids = LTextImageFormat::overrideIds; break;
            case 208: ids = LTextLayout::overrideIds; break;
            case 209: ids = LTextLength::overrideIds; break;
            case 210: ids = LTextLine::overrideIds; break;
            case 211: ids = LTextListFormat::overrideIds; break;
            case 212: ids = LTextOption::overrideIds; break;
            case 213: ids = LTextTableCell::overrideIds; break;
            case 214: ids = LTextTableCellFormat::overrideIds; break;
            case 215: ids = LTextTableFormat::overrideIds; break;
            case 216: ids = LTime::overrideIds; break;
            case 217: ids = LTimeZone::overrideIds; break;
            case 218: ids = LTimerEvent::overrideIds; break;
            case 219: ids = LToolTip::overrideIds; break;
            case 220: ids = LTouchDevice::overrideIds; break;
            case 221: ids = LTouchEvent::overrideIds; break;
            case 222: ids = LTransform::overrideIds; break;
            case 223: ids = LTreeWidgetItem::overrideIds; break;
            case 224: ids = LUndoCommand::overrideIds; break;
            case 225: ids = LUrl::overrideIds; break;
            case 226: ids = LUuid::overrideIds; break;
            case 227: ids = LVariant::overrideIds; break;
            case 228: ids = LVector2D::overrideIds; break;
            case 229: ids = LVector3D::overrideIds; break;
            case 230: ids = LVector4D::overrideIds; break;
            case 242: ids = LWhatsThis::overrideIds; break;
            case 243: ids = LWhatsThisClickedEvent::overrideIds; break;
            case 244: ids = LWheelEvent::overrideIds; break;
            case 245: ids = LWidgetItem::overrideIds; break;
            case 246: ids = LWindowStateChangeEvent::overrideIds; break;
            case 86:
            case 88:
                if(override_help) {
                    NumList* _ids = override_help(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 18:
            case 19:
            case 20:
            case 27:
            case 28:
            case 97:
            case 115:
            case 116:
            case 231:
            case 232:
            case 233:
                if(override_multimedia) {
                    NumList* _ids = override_multimedia(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 21:
            case 90:
            case 91:
            case 93:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
            case 127:
            case 128:
            case 129:
            case 130:
            case 174:
            case 175:
            case 176:
            case 177:
            case 178:
                if(override_network) {
                    NumList* _ids = override_network(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 166:
            case 167:
            case 168:
            case 169:
            case 170:
            case 171:
            case 172:
            case 173:
                if(override_sql) {
                    NumList* _ids = override_sql(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 187:
                if(override_svg) {
                    NumList* _ids = override_svg(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 234:
            case 235:
            case 236:
            case 237:
            case 238:
            case 239:
            case 240:
            case 241:
                if(override_webkit) {
                    NumList* _ids = override_webkit(name);
                    if(_ids) {
                        ids = *_ids; }}
                break; }}
    StrList funs;
    Q_FOREACH(int id, ids) {
        const char* ret = override_arg_types[id - 1][0];
        funs << QString("%1 %2")
                .arg(ret ? ret : "void")
                .arg(QString(override_function_ids.key(id))).toLatin1(); }
    return funs; }
