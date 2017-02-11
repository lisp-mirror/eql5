// copyright (c) Polos Ruetz

#include "ecl_fun.h"
#include "eql.h"
#include "dyn_object.h"
#include "gen/_lobjects.h"
#include "ui_loader.h"
#include "single_shot.h"
#include <QLibrary>

QT_BEGIN_NAMESPACE

// switches
static bool _check_argument_types_ = true;
static bool _garbage_collection_ =   true;

static const char SIG = '2';
static const char SLO = '1';
static bool _ok_ = false;
static StrList _cstring_buffer_;
static const QMetaObject* staticQtMetaObject = QtMetaObject::get();

META_TYPE (T_bool_ok_pointer,                  bool*)
META_TYPE (T_GLint,                            GLint)
META_TYPE (T_GLuint,                           GLuint)
META_TYPE (T_GLenum,                           GLenum)
META_TYPE (T_short,                            short)
META_TYPE (T_ushort,                           ushort)
META_TYPE (T_GLfloat,                          GLfloat)
META_TYPE (T_qint32,                           qint32)
META_TYPE (T_qint64,                           qint64)
META_TYPE (T_quint8,                           quint8)
META_TYPE (T_quint16,                          quint16)
META_TYPE (T_quint32,                          quint32)
META_TYPE (T_quint64,                          quint64)
META_TYPE (T_QFileInfo,                        QFileInfo)
META_TYPE (T_QFileInfoList,                    QFileInfoList)
META_TYPE (T_QGradient,                        QGradient)
META_TYPE (T_QGradientStop,                    QGradientStop)
META_TYPE (T_QHash_int_QByteArray,             QHashIntQByteArray);
META_TYPE (T_QList_QAbstractAnimation,         QList<QAbstractAnimation*>)
META_TYPE (T_QList_QAbstractButton,            QList<QAbstractButton*>)
META_TYPE (T_QList_QAbstractState,             QList<QAbstractState*>)
META_TYPE (T_QList_QAction,                    QList<QAction*>)
META_TYPE (T_QList_QByteArray,                 QList<QByteArray>)
META_TYPE (T_QList_QDockWidget,                QList<QDockWidget*>)
META_TYPE (T_QList_QGesture,                   QList<QGesture*>)
META_TYPE (T_QList_QGraphicsItem,              QList<QGraphicsItem*>)
META_TYPE (T_QList_QGraphicsTransform,         QList<QGraphicsTransform*>)
META_TYPE (T_QList_QGraphicsView,              QList<QGraphicsView*>)
META_TYPE (T_QList_QGraphicsWidget,            QList<QGraphicsWidget*>)
META_TYPE (T_QList_QKeySequence,               QList<QKeySequence>)
META_TYPE (T_QList_QListWidgetItem,            QList<QListWidgetItem*>)
META_TYPE (T_QList_QMdiSubWindow,              QList<QMdiSubWindow*>)
META_TYPE (T_QModelIndexList,                  QModelIndexList)
META_TYPE (T_QList_QObject,                    QList<QObject*>)
META_TYPE (T_QObjectList,                      QObjectList)
META_TYPE (T_QList_QPolygonF,                  QList<QPolygonF>)
META_TYPE (T_QList_QSize,                      QList<QSize>)
META_TYPE (T_QList_QStandardItem,              QList<QStandardItem*>)
META_TYPE (T_QList_QStorageInfo,               QList<QStorageInfo>)
META_TYPE (T_QList_QTableWidgetItem,           QList<QTableWidgetItem*>)
META_TYPE (T_QList_QTableWidgetSelectionRange, QList<QTableWidgetSelectionRange>)
META_TYPE (T_QList_QTextBlock,                 QList<QTextBlock>)
META_TYPE (T_QList_QTextEdit_ExtraSelection,   QList<QTextEdit::ExtraSelection>)
META_TYPE (T_QList_QTextFrame,                 QList<QTextFrame*>)
META_TYPE (T_QList_QTouchDevice,               QList<const QTouchDevice*>)
META_TYPE (T_QList_QTreeWidgetItem,            QList<QTreeWidgetItem*>)
META_TYPE (T_QList_QUndoStack,                 QList<QUndoStack*>)
META_TYPE (T_QList_QUrl,                       QList<QUrl>)
META_TYPE (T_QList_QWidget,                    QList<QWidget*>)
META_TYPE (T_QWidgetList,                      QWidgetList)
META_TYPE (T_QList_int,                        QList<int>)
META_TYPE (T_QList_qreal,                      QList<qreal>)
META_TYPE (T_QMargins,                         QMargins)
META_TYPE (T_QMarginsF,                        QMarginsF)
META_TYPE (T_QModelIndex,                      QModelIndex)
META_TYPE (T_QPageLayout,                      QPageLayout)
META_TYPE (T_QPageSize,                        QPageSize)
META_TYPE (T_QPainterPath,                     QPainterPath)
META_TYPE (T_QPolygonF,                        QPolygonF)
META_TYPE (T_QRgb,                             QRgb)
META_TYPE (T_QStorageInfo,                     QStorageInfo)
META_TYPE (T_QTableWidgetSelectionRange,       QTableWidgetSelectionRange)
META_TYPE (T_QTextBlock,                       QTextBlock)
META_TYPE (T_QTextBlockFormat,                 QTextBlockFormat)
META_TYPE (T_QTextCharFormat,                  QTextCharFormat)
META_TYPE (T_QTextFrameFormat,                 QTextFrameFormat)
META_TYPE (T_QTextListFormat,                  QTextListFormat)
META_TYPE (T_QTextCursor,                      QTextCursor)
META_TYPE (T_QTextDocumentFragment,            QTextDocumentFragment)
META_TYPE (T_QTextLine,                        QTextLine)
META_TYPE (T_QTextOption,                      QTextOption)
META_TYPE (T_QVector_QGradientstop,            QVector<QGradientStop>)
META_TYPE (T_QVector_QLine,                    QVector<QLine>)
META_TYPE (T_QVector_QLineF,                   QVector<QLineF>)
META_TYPE (T_QVector_QPoint,                   QVector<QPoint>)
META_TYPE (T_QVector_QPointF,                  QVector<QPointF>)
META_TYPE (T_QVector_QRect,                    QVector<QRect>)
META_TYPE (T_QVector_QRectF,                   QVector<QRectF>)
META_TYPE (T_QVector_QRgb,                     QVector<QRgb>)
META_TYPE (T_QVector_QTextFormat,              QVector<QTextFormat>)
META_TYPE (T_QVector_QTextLength,              QVector<QTextLength>)
META_TYPE (T_QVector_float,                    QVector<float>)
META_TYPE (T_QVector_int,                      QVector<int>)
META_TYPE (T_QVector_qreal,                    QVector<qreal>)
META_TYPE (T_WId,                              WId)

void iniCLFunctions() {
    cl_object eql(STRING("EQL"));
    if(cl_find_package(eql) == Cnil) {
        cl_make_package(1, eql); }
    si_select_package(eql);
    DEFUN ("%error-msg",             error_msg2,            2)
    DEFUN ("%make-qimage/dangerous", make_qimage_dangerous, 5)
    DEFUN ("no-qexec",               no_qexec,              0)
    DEFUN ("qadd-event-filter",      qadd_event_filter,     3)
    DEFUN ("%qapropos",              qapropos2,             3)
    DEFUN ("qapp",                   qapp,                  0)
    DEFUN ("qcall-default",          qcall_default,         0)
    DEFUN ("qclear-event-filters",   qclear_event_filters,  0)
    DEFUN ("%qconnect",              qconnect2,             4)
    DEFUN ("qcopy",                  qcopy,                 1)
    DEFUN ("%qdelete",               qdelete2,              2)
    DEFUN ("%qdisconnect",           qdisconnect2,          4)
    DEFUN ("%qenums",                qenums2,               2)
    DEFUN ("qescape",                qescape,               1)
    DEFUN ("%qexec",                 qexec2,                1)
    DEFUN ("qexit",                  qexit,                 0)
    DEFUN ("qfind-child",            qfind_child,           2)
    DEFUN ("%qfind-children",        qfind_children2,       3)
    DEFUN ("qfrom-utf8",             qfrom_utf8,            1)
    DEFUN ("qid",                    qid,                   1)
    DEFUN ("%qinvoke-method",        qinvoke_method2,       4)
    DEFUN ("%qload-c++",             qload_cpp,             2)
    DEFUN ("qload-ui",               qload_ui,              1)
    DEFUN ("qlocal8bit",             qlocal8bit,            1)
    DEFUN ("%qnew-instance",         qnew_instance2,        2)
    DEFUN ("%qobject-names",         qobject_names2,        1)
    DEFUN ("qok",                    qok,                   0)
    DEFUN ("qoverride",              qoverride,             3)
    DEFUN ("qprocess-events",        qprocess_events,       0)
    DEFUN ("qproperty",              qproperty,             2)
    DEFUN ("%qrequire",              qrequire2,             2)
    DEFUN ("qremove-event-filter",   qremove_event_filter,  1)
    DEFUN ("%qrun-in-gui-thread",    qrun_in_gui_thread2,   2)
    DEFUN ("qsender",                qsender,               0)
    DEFUN ("%qset-gc",               qset_gc,               1)
    DEFUN ("qset-property",          qset_property,         3)
    DEFUN ("%qsingle-shot",          qsingle_shot2,         2)
    DEFUN ("qstatic-meta-object",    qstatic_meta_object,   1)
    DEFUN ("qsuper-class-name",      qsuper_class_name,     1)
    DEFUN ("qtranslate",             qtranslate,            3)
    DEFUN ("qt-object-name",         qt_object_name,        1)
    DEFUN ("qt-object-?",            qt_object_x,           1)
    DEFUN ("%qui-class",             qui_class2,            2)
    DEFUN ("qui-names",              qui_names,             1)
    DEFUN ("qutf8",                  qutf8,                 1)
    DEFUN ("%qvariant-equal",        qvariant_equal2,       2)
    DEFUN ("qvariant-from-value",    qvariant_from_value,   2)
    DEFUN ("qvariant-value",         qvariant_value,        1)
    DEFUN ("qversion",               qversion,              0) }

// QtObject methods

QByteArray QtObject::idToClassName(int id) {
    return (id > 0) ? LObjects::qNames.at(id - 1) : LObjects::nNames.at(-id - 1); }

QByteArray QtObject::className() const {
    return id ? idToClassName(id) : QByteArray("?"); }



// *** utilities ***

static QByteArray toCString(cl_object l_str) {
    QByteArray ba;
    if(ECL_STRINGP(l_str)) {
        if(ECL_BASE_STRING_P(l_str)) {
            ba = QByteArray((char*)l_str->base_string.self, l_str->base_string.fillp); }
        else {
            uint l = l_str->string.fillp;
            ba.reserve(l);
            ecl_character* l_s = l_str->string.self;
            for(uint i = 0; i < l; ++i) {
                ba[i] = l_s[i]; }}}
    return ba; }

static cl_object from_cstring(const QByteArray& s) {
    cl_object l_s = ecl_alloc_simple_base_string(s.length());
    memcpy(l_s->base_string.self, s.constData(), s.length());
    return l_s; }

static void type_msg(const QByteArray& wanted, const QByteArray& got) {
    STATIC_SYMBOL (s_error_output, "*ERROR-OUTPUT*")
    cl_format(4,
              cl_symbol_value(s_error_output),
              STRING("~%[EQL:typ] wanted <~A> got <~A>"),
              from_cstring(wanted),
              from_cstring(got.isEmpty() ? "no Qt object" : got)); }

void error_msg(const char* fun, cl_object l_args) {
    STATIC_SYMBOL_PKG (s_break_on_errors, "*BREAK-ON-ERRORS*", "EQL")
    if(cl_symbol_value(s_break_on_errors) != Cnil) {
        STATIC_SYMBOL_PKG (s_break, "%BREAK", "EQL") // see "lisp/ini.lisp"
        cl_funcall(4,
                   s_break,
                   STRING("~%[EQL:err] ~A ~{~S~^ ~}~%"),
                   STRING(fun),
                   l_args); }
    else {
        STATIC_SYMBOL (s_error_output, "*ERROR-OUTPUT*")
        cl_format(4,
                  cl_symbol_value(s_error_output),
                  STRING("~%[EQL:err] ~A ~{~S~^ ~}~%"),
                  STRING(fun),
                  l_args); }}

cl_object error_msg2(cl_object l_fun, cl_object l_args) { // to be called from Lisp (see "lisp/ini.lisp")
    ecl_process_env()->nvalues = 1;
    error_msg(toCString(l_fun), l_args);
    return Cnil; }

static const QMetaObject* staticMetaObject(const QtObject& qt) {
    return LObjects::staticMetaObject(QByteArray(), qt.id); }

static const QMetaObject* methodMetaObject(const QtObject& qt) {
    QObject* obj = qt.isQObject() ? LObjects::Q[qt.id - 1] : LObjects::N[-qt.id - 1];
    return obj ? obj->metaObject() : 0; }

static const QMetaObject* methodMetaObjectFromName(const QByteArray& name, bool qobject) {
    const QMetaObject* mo = 0;
    int n = qobject ? LObjects::q_names.value(name, 0) : LObjects::n_names.value(name, 0);
    if(n) {
        QObject* o = qobject ? LObjects::Q[n - 1] : LObjects::N[n - 1];
        if(o) {
            mo = o->metaObject(); }}
    return mo; }

static QByteArray superClassName(const QByteArray& name, bool* found = 0) {
    QByteArray super;
    if(LObjects::q_names.value(name, 0)) {
        if(found) {
            *found = true; }
        const QMetaObject* moStatic = LObjects::staticMetaObject(name);
        if(moStatic) {
            const QMetaObject* mo = moStatic->superClass();
            if(mo) {
                super = mo->className(); }}}
    else if(LObjects::n_names.value(name, 0)) {
        if(found) {
            *found = true; }
        super = LObjects::nObjectSuperClass(name); }
    return super; }

static bool inherits(const QByteArray& sub, const QByteArray& super) {
    if(sub == super) {
        return true; }
    QByteArray upper(sub);
    while(!(upper = superClassName(upper)).isEmpty()) {
        // multiple inheritance exceptions (see "helper/multiple-inheritance.txt")
        if("QGraphicsObject" == upper) {
            if("QObject" == super) {
                return true; }
            upper = "QGraphicsItem"; }
        if(upper == super) {
            return true; }}
    return false; }

enum CallType { SignalOrSlot, Method, Static, Qt_EQL };

static IntList findMethodIndex(CallType type, const QByteArray& name, const QMetaObject* mo, int len) {
    IntList method_i;
    bool this_arg = (Method == type);
    QByteArray search(name);
    bool exact = true;
    if(search.endsWith(')')) {
        if(search.endsWith("...)")) {
            exact = false;
            search.truncate(search.length() - 4);
            if(!search.endsWith(',')) {
                search.append(','); }}}
    else {
        if(!len && !this_arg) {
            if(search.endsWith('(')) {
                search.append(')'); }
            else {
                search.append("()"); }}
        else {
            exact = false; }}
    if(exact) {
        int i = mo->indexOfMethod(search);
        if(i != -1) {
            method_i << i; }}
    else {
        if(!search.contains('(')) {
            search.append('('); }
        StrList candidates;
        int min = ((SignalOrSlot == type) || (Qt_EQL == type)) ? 0 : mo->methodOffset();
        for(int i = mo->methodCount() - 1; i >= min; --i) {
            QByteArray sig(mo->method(i).methodSignature());
            int len_args = sig.count(',');
            if(!this_arg) {
                if(!sig.endsWith("()")) {
                    ++len_args; }}
            if(len_args == len) {
                if(sig.startsWith(search)) {
                    method_i << i;
                    candidates << sig; }}}
        // eliminate ambiguous ...F float 'primitive' argument lists by simply choosing the float one
        // (of course this can be overridden by simply providing the non float argument list)
        if(candidates.size() > 1) {
            IntList mi, mi_F;
            for(int i = 0; i < candidates.size(); i++) {
                QByteArray sig(candidates.at(i));
                if(sig.contains("QPointF") ||
                   sig.contains("QLineF") ||
                   sig.contains("QRectF") || 
                   sig.contains("QSizeF") ||
                   sig.contains("QPolygonF")) {
                    mi_F << method_i.at(i); }
                else
                if(sig.contains("QPoint") ||
                   sig.contains("QLine") ||
                   sig.contains("QRect") || 
                   sig.contains("QSize") ||
                   sig.contains("QPolygon")) {
                    mi << method_i.at(i); }}
            if(mi_F.size() && mi.size()) {
                IntList mi_ok;
                Q_FOREACH(int i, method_i) {
                    if(!mi.contains(i)) {
                        mi_ok << i; }}
                method_i = mi_ok; }}}
    return method_i; }

static cl_object q_keyword() {
    STATIC_SYMBOL_PKG (s_q, "Q", "KEYWORD")
    return s_q; }

static cl_object qt_keyword() {
    STATIC_SYMBOL_PKG (s_qt, "QT", "KEYWORD")
    return s_qt; }

static cl_object make_vector() {
    STATIC_SYMBOL_PKG (s_make_vector, "%MAKE-VECTOR", "EQL") // see "lisp/ini.lisp"
    cl_object l_vector = cl_funcall(1, s_make_vector);
    return l_vector; }



// *** type conversions ***

template<typename T>
static T toInt(cl_object l_num) {
    T i = 0;
    if(cl_integerp(l_num) == Ct) {
        i = fixint(l_num); }
    return i; }

static int toInt(cl_object l_num) {
    return toInt<int>(l_num); }

template<typename T>
static T toUInt(cl_object l_num) {
    T i = 0;
    if(cl_integerp(l_num) == Ct) {
        i = fixnnint(l_num); }
    return i; }

static uint toUInt(cl_object l_num) {
    return toUInt<uint>(l_num); }

template<typename T>
static T toFloat(cl_object l_num) {
    T f = 0;
    if(ECL_SINGLE_FLOAT_P(l_num)) {
        f = sf(l_num); }
    else if(ECL_DOUBLE_FLOAT_P(l_num)) {
        f = df(l_num); }
#ifdef ECL_LONG_FLOAT
    else if(ECL_LONG_FLOAT_P(l_num)) {
        f = ecl_long_float(l_num); }
#endif
    else if(cl_integerp(l_num) == Ct) {
        f = fixint(l_num); }
    else {
        cl_object l_f = cl_float(1, l_num);
        if(ECL_DOUBLE_FLOAT_P(l_f)) {
            f = df(l_f); }
        else if(ECL_SINGLE_FLOAT_P(l_f)) {
            f = sf(l_f); }
#ifdef ECL_LONG_FLOAT
        else if(ECL_LONG_FLOAT_P(l_f)) {
            f = ecl_long_float(l_f); }
#endif
    }
    return f; }

static float toFloat(cl_object l_num) {
    return toFloat<float>(l_num); }

static qreal toReal(cl_object l_num) {
    return toFloat<qreal>(l_num); }

static char toChar(cl_object l_ch) {
    char ch = 0;
    if(CHARACTERP(l_ch)) {
        ch = toInt(cl_char_code(l_ch)); }
    return ch; }

static QChar toQChar(cl_object l_ch) {
    QChar ch;
    if(CHARACTERP(l_ch)) {
        ch = QChar(toInt(cl_char_code(l_ch))); }
    return ch; }

static QByteArray toQByteArray(cl_object l_vec) {
    QByteArray ba;
    if(ECL_VECTORP(l_vec)) {
        int len = LEN(l_vec);
        ba.reserve(len);
        for(int i = 0; i < len; ++i) {
            ba[i] = toInt(ecl_aref(l_vec, i)); }}
    return ba; }

static QString toQString(cl_object l_str) {
    QString s;
    if(ECL_STRINGP(l_str)) {
        if(ECL_BASE_STRING_P(l_str)) {
            s = QString::fromLatin1((char*)l_str->base_string.self, l_str->base_string.fillp); }
        else {
            uint l = l_str->string.fillp;
            s.reserve(l);
            ecl_character* l_s = l_str->string.self;
            for(uint i = 0; i < l; ++i) {
                s[i] = QChar(l_s[i]); }}}
    return s; }

static int classId(cl_object l_class) {
    QByteArray name(toCString(l_class));
    if('L' == name.at(0)) {
        name[0] = 'Q'; }
    int id = LObjects::q_names.value(name, 0);
    if(!id) {
        id = -LObjects::n_names.value(name, 0); }
    return id; }

static const char* eventName(QEvent::Type type) {
    const char* name = 0;
    switch(type) {
        case QEvent::ActionRemoved:
        case QEvent::ActionChanged:
        case QEvent::ActionAdded:
            name = "QActionEvent";
            break;
        case QEvent::ChildRemoved:
        case QEvent::ChildPolished:
        case QEvent::ChildAdded:
            name = "QChildEvent";
            break;
        case QEvent::Close:
            name = "QCloseEvent";
            break;
        case QEvent::ContextMenu:
            name = "QContextMenuEvent";
            break;
        case QEvent::DeferredDelete:
            name = "QDeferredDeleteEvent";
            break;
        case QEvent::DragEnter:
            name = "QDragEnterEvent";
            break;
        case QEvent::DragLeave:
            name = "QDragLeaveEvent";
            break;
        case QEvent::DragMove:
            name = "QDragMoveEvent";
            break;
        case QEvent::Drop:
            name = "QDropEvent";
            break;
        case QEvent::Enter:
            name = "QEnterEvent";
            break;
        case QEvent::FileOpen:
            name = "QFileOpenEvent";
            break;
        case QEvent::FocusOut:
        case QEvent::FocusIn:
        case QEvent::FocusAboutToChange:
            name = "QFocusEvent";
            break;
        case QEvent::GraphicsSceneContextMenu:
            name = "QGraphicsSceneContextMenuEvent";
            break;
        case QEvent::GraphicsSceneDrop:
        case QEvent::GraphicsSceneDragMove:
        case QEvent::GraphicsSceneDragLeave:
        case QEvent::GraphicsSceneDragEnter:
            name = "QGraphicsSceneDragDropEvent";
            break;
        case QEvent::GraphicsSceneHoverMove:
        case QEvent::GraphicsSceneHoverLeave:
        case QEvent::GraphicsSceneHoverEnter:
            name = "QGraphicsSceneHoverEvent";
            break;
        case QEvent::GraphicsSceneMouseRelease:
        case QEvent::GraphicsSceneMousePress:
        case QEvent::GraphicsSceneMouseMove:
        case QEvent::GraphicsSceneMouseDoubleClick:
            name = "QGraphicsSceneMouseEvent";
            break;
        case QEvent::GraphicsSceneMove:
            name = "QGraphicsSceneMoveEvent";
            break;
        case QEvent::GraphicsSceneResize:
            name = "QGraphicsSceneResizeEvent";
            break;
        case QEvent::GraphicsSceneWheel:
            name = "QGraphicsSceneWheelEvent";
            break;
        case QEvent::GraphicsSceneHelp:
            name = "QHelpEvent";
            break;
        case QEvent::Hide:
            name = "QHideEvent";
            break;
        case QEvent::HoverMove:
        case QEvent::HoverLeave:
        case QEvent::HoverEnter:
            name = "QHoverEvent";
            break;
        case QEvent::IconDrag:
            name = "QIconDragEvent";
            break;
        case QEvent::InputMethod:
            name = "QInputMethodEvent";
            break;
        case QEvent::InputMethodQuery:
            name = "QInputMethodQueryEvent";
            break;
        case QEvent::ShortcutOverride:
        case QEvent::KeyRelease:
        case QEvent::KeyPress:
            name = "QKeyEvent";
            break;
        case QEvent::MouseMove:
        case QEvent::MouseButtonRelease:
        case QEvent::MouseButtonPress:
        case QEvent::MouseButtonDblClick:
            name = "QMouseEvent";
            break;
        case QEvent::Move:
            name = "QMoveEvent";
            break;
        case QEvent::NativeGesture:
            name  = "QNativeGestureEvent";
            break;
        case QEvent::Paint:
            name = "QPaintEvent";
            break;
        case QEvent::PlatformSurface:
            name = "QPlatformSurfaceEvent";
            break;
        case QEvent::Resize:
            name = "QResizeEvent";
            break;
        case QEvent::OrientationChange:
            name = "QScreenOrientationChangeEvent";
            break;
        case QEvent::Scroll:
            name = "QScrollEvent";
            break;
        case QEvent::ScrollPrepare:
            name = "QScrollPrepareEvent";
            break;
        case QEvent::Shortcut:
            name = "QShortcutEvent";
            break;
        case QEvent::Show:
            name = "QShowEvent";
            break;
        case QEvent::StatusTip:
            name = "QStatusTipEvent";
            break;
        case QEvent::TabletLeaveProximity:
        case QEvent::TabletEnterProximity:
        case QEvent::TabletRelease:
        case QEvent::TabletPress:
        case QEvent::TabletMove:
            name = "QTabletEvent";
            break;
        case QEvent::Timer:
            name = "QTimerEvent";
            break;
        case QEvent::WhatsThis:
        case QEvent::ToolTip:
            name = "QHelpEvent";
            break;
        case QEvent::Wheel:
            name = "QWheelEvent";
            break;
        case QEvent::WindowStateChange:
            name = "QWindowStateChangeEvent";
            break;
        case QEvent::TouchUpdate:
        case QEvent::TouchEnd:
        case QEvent::TouchCancel:
        case QEvent::TouchBegin:
            name = "QTouchEvent";
            break;
        case QEvent::GestureOverride:
        case QEvent::Gesture:
            name = "QGestureEvent";
            break;
        default:
            name = "QEvent"; }
    return name; }

static QByteArray qtObjectName(cl_object l_obj, const QByteArray& type = QByteArray()) {
    STATIC_SYMBOL_PKG (s_qt_object_p,      "QT-OBJECT-P",      "EQL")
    STATIC_SYMBOL_PKG (s_ensure_qt_object, "ENSURE-QT-OBJECT", "EQL")
    STATIC_SYMBOL_PKG (s_qt_object_id,     "QT-OBJECT-ID",     "EQL")
    // 'primitives' first
    QByteArray name;
    if(cl_integerp(l_obj) == Ct) {
        name = "int"; }
    else if(cl_characterp(l_obj) == Ct) {
        name = "QChar"; }
    else if(cl_stringp(l_obj) == Ct) {
        name = "QString QColor"; }
    else if(cl_listp(l_obj) == Ct) {
        int l = LEN(l_obj);
        switch(l) {
            case 0:  break;
            case 2:  name = "QPointF QSizeF QList"; break;
            case 4:  name = "QRectF QLineF QList";  break;
            default: name = "QPolygonF QList"; }}
    else if(cl_vectorp(l_obj) == Ct) {
        name = "QVector"; }
    // qt-object
    // (this is carefully optimized, in a probably non-obvious way, because THE-QT-OBJECT is really slow)
    if(type.isNull() || LObjects::q_names.contains(type) || LObjects::n_names.contains(type)) {
        l_obj = cl_funcall(3, s_ensure_qt_object, l_obj, Ct); }
    if(cl_funcall(2, s_qt_object_p, l_obj) == Ct) {
        name = QtObject::idToClassName(toInt(cl_funcall(2, s_qt_object_id, l_obj))); }
    return name; }

QtObject toQtObject(cl_object l_obj, cl_object l_cast, bool* qobject_align, bool quiet) {
    STATIC_SYMBOL_PKG (s_ensure_qt_object,  "ENSURE-QT-OBJECT",  "EQL")
    STATIC_SYMBOL_PKG (s_qt_object_pointer, "QT-OBJECT-POINTER", "EQL")
    STATIC_SYMBOL_PKG (s_qt_object_unique,  "QT-OBJECT-UNIQUE",  "EQL")
    STATIC_SYMBOL_PKG (s_qt_object_id,      "QT-OBJECT-ID",      "EQL")
    QtObject o;
    if(ECL_STRINGP(l_obj)) { // string name, for static methods
        o.id = classId(l_obj); }
    else {
        if(quiet) {
            l_obj = cl_funcall(3, s_ensure_qt_object, l_obj, Ct); }
        else {
            l_obj = cl_funcall(2, s_ensure_qt_object, l_obj); }
        if(l_obj != Cnil) {
            o.pointer = (void*)fixnnint(cl_funcall(2, s_qt_object_pointer, l_obj));
            o.unique = fixnnint(cl_funcall(2, s_qt_object_unique, l_obj));
            o.id = toInt(cl_funcall(2, s_qt_object_id, l_obj));
            if(l_cast != Cnil) {
                int id_orig = o.id;
                o.id = classId(l_cast);
                if((id_orig > 0) && (o.id < 0)) {
                    *qobject_align = true; }}}}
    return o; }

static cl_object new_qt_object(void* pointer, uint unique, int id, bool finalize = false) {
    STATIC_SYMBOL_PKG (s_new_qt_object, "NEW-QT-OBJECT", "EQL")
    cl_object l_qt_object = cl_funcall(5,
                                       s_new_qt_object,
                                       ecl_make_unsigned_integer((quintptr)pointer),
                                       ecl_make_unsigned_integer(unique),
                                       MAKE_FIXNUM(id),
                                       finalize ? Ct : Cnil);
    return l_qt_object; }

cl_object qt_object_from_name(const QByteArray& name, void* pointer, uint unique, bool finalize) {
    QByteArray name2(name);
    if(name2.endsWith('*')) {
        name2.truncate(name2.length() - 1); }
    if(name2.startsWith("const ")) {
        name2 = name2.mid(6); }
    if('L' == name2.at(0)) {
        name2[0] = 'Q'; }
    int id = LObjects::q_names.value(name2, 0);
    if(!id) {
        id = -LObjects::n_names.value(name2, 0); }
    cl_object l_qt_object = new_qt_object(pointer, unique, id, finalize);
    return l_qt_object; }

static QString symbolName(cl_object l_symbol) {
    QString name;
    if((cl_symbolp(l_symbol) == Ct)) {
        name = toQString(cl_symbol_name(l_symbol)).toLower(); }
    else if(ECL_STRINGP(l_symbol)) {
        name = toQString(l_symbol); }
    return name; }

static QStringList toQStringList(cl_object l_list) {
    QStringList l;
    if(LISTP(l_list)) {
        cl_object l_el = l_list;
        while(l_el != Cnil) {
            l << toQString(cl_car(l_el));
            l_el = cl_cdr(l_el); }}
    return l; }

static QPolygon toQPolygon(cl_object l_list) {
    QPolygon p;
    if(LISTP(l_list)) {
        cl_object l_el = l_list;
        while(l_el != Cnil) {
            p << QPoint(toInt(cl_first(l_el)), toInt(cl_second(l_el)));
            l_el = cl_cddr(l_el); }}
    return p; }

static QPolygonF toQPolygonF(cl_object l_list) {
    QPolygonF p;
    if(LISTP(l_list)) {
        cl_object l_el = l_list;
        while(l_el != Cnil) {
            p << QPointF(toReal(cl_first(l_el)), toReal(cl_second(l_el)));
            l_el = cl_cddr(l_el); }}
    return p; }

static QColor toQColor(cl_object l_c) {
    if(ECL_STRINGP(l_c)) {
        return QColor(toQString(l_c)); }
    QtObject o = toQtObject(l_c);
    if("QColor" == o.className() && o.pointer) {
        QColor* p = (QColor*)o.pointer;
        return *p; }
    return QColor(); }

static QGradient toQGradient(cl_object l_g) {
    QtObject o = toQtObject(l_g);
    if(inherits(o.className(), "QGradient") && o.pointer) {
        QGradient* p = (QGradient*)o.pointer;
        return *p; }
    return QGradient(); }

static QGradientStop toQGradientStop(cl_object l_gs) {
    QGradientStop gs;
    if(cl_consp(l_gs)) {
        gs = qMakePair(toReal(cl_car(l_gs)), toQColor(cl_cdr(l_gs))); }
    return gs; }

static QList<QTextEdit::ExtraSelection> toQTextEditExtraSelectionList(cl_object l_list) {
    QList<QTextEdit::ExtraSelection> l;
    if(LISTP(l_list)) {
        cl_object l_el = l_list;
        while(l_el != Cnil) {
            cl_object l_curr = cl_first(l_el);
            QtObject q_cursor = toQtObject(cl_first(l_curr));
            QtObject q_format = toQtObject(cl_second(l_curr));
            if(("QTextCursor" == q_cursor.className()) &&
               ("QTextCharFormat" == q_format.className())) {
                QTextEdit::ExtraSelection sel;
                sel.cursor = *(QTextCursor*)q_cursor.pointer;
                sel.format = *(QTextCharFormat*)q_format.pointer;
                l << sel; }
            l_el = cl_rest(l_el); }}
    return l; }

static QHashIntQByteArray toQHashIntQByteArray(cl_object l_alist) {
    QHash<int, QByteArray> hash;
    if(LISTP(l_alist)) {
        cl_object l_el = l_alist;
        while(l_el != Cnil) {
            cl_object l_curr = cl_first(l_el);
            int i = toInt(cl_car(l_curr));
            QByteArray ba(toCString(cl_cdr(l_curr)));
            hash.insert(i, ba);
            l_el = cl_rest(l_el); }}
    return hash; }

// implicit pointer types
TO_QT_TYPE_PTR  (QBitmap, qbitmap)
TO_QT_TYPE_PTR2 (QBrush, qbrush)
TO_QT_TYPE_PTR2 (QCursor, qcursor)
TO_QT_TYPE_PTR2 (QDate, qdate)
TO_QT_TYPE_PTR2 (QDateTime, qdatetime)
TO_QT_TYPE_PTR  (QEasingCurve, qeasingcurve)
TO_QT_TYPE_PTR2 (QFileInfo, qfileinfo)
TO_QT_TYPE_PTR2 (QFont, qfont)
TO_QT_TYPE_PTR2 (QIcon, qicon)
TO_QT_TYPE_PTR2 (QImage, qimage)
TO_QT_TYPE_PTR2 (QKeySequence, qkeysequence)
TO_QT_TYPE_PTR2 (QLocale, qlocale)
TO_QT_TYPE_PTR2 (QMatrix, qmatrix)
TO_QT_TYPE_PTR  (QMargins, qmargins)
TO_QT_TYPE_PTR  (QMarginsF, qmarginsf)
TO_QT_TYPE_PTR2 (QModelIndex, qmodelindex)
TO_QT_TYPE_PTR  (QPageLayout, qpagelayout)
TO_QT_TYPE_PTR  (QPageSize, qpagesize)
TO_QT_TYPE_PTR  (QPainterPath, qpainterpath)
TO_QT_TYPE_PTR2 (QPalette, qpalette)
TO_QT_TYPE_PTR2 (QPen, qpen)
TO_QT_TYPE_PTR2 (QPixmap, qpixmap)
TO_QT_TYPE_PTR  (QRegion, qregion)
TO_QT_TYPE_PTR  (QRegExp, qregexp)
TO_QT_TYPE_PTR  (QRegularExpression, qregularexpression)
TO_QT_TYPE_PTR2 (QSizePolicy, qsizepolicy)
TO_QT_TYPE_PTR  (QStorageInfo, qstorageinfo)
TO_QT_TYPE_PTR2 (QTableWidgetSelectionRange, qtablewidgetselectionrange)
TO_QT_TYPE_PTR2 (QTextBlock, qtextblock)
TO_QT_TYPE_PTR  (QTextBlockFormat, qtextblockformat)
TO_QT_TYPE_PTR  (QTextCharFormat, qtextcharformat)
TO_QT_TYPE_PTR  (QTextFrameFormat, qtextframeformat)
TO_QT_TYPE_PTR  (QTextListFormat, qtextlistformat)
TO_QT_TYPE_PTR  (QTextCursor, qtextcursor)
TO_QT_TYPE_PTR  (QTextDocumentFragment, qtextdocumentfragment)
TO_QT_TYPE_PTR2 (QTextFormat, qtextformat)
TO_QT_TYPE_PTR2 (QTextLength, qtextlength)
TO_QT_TYPE_PTR  (QTextLine, qtextline)
TO_QT_TYPE_PTR  (QTextOption, qtextoption)
TO_QT_TYPE_PTR2 (QTime, qtime)
TO_QT_TYPE_PTR2 (QTransform, qtransform)
TO_QT_TYPE_PTR2 (QUrl, qurl)
TO_QT_TYPE_PTR  (QVariant, qvariant)

TO_QT_TYPEF  (QPoint)
TO_QT_TYPEF  (QSize)
TO_QT_TYPEF2 (QLine)
TO_QT_TYPEF2 (QRect)

TO_QT_LIST_PTR (QAbstractAnimation)
TO_QT_LIST_PTR (QAbstractButton)
TO_QT_LIST_PTR (QAbstractState)
TO_QT_LIST_PTR (QAction)
TO_QT_LIST_PTR (QDockWidget)
TO_QT_LIST_PTR (QGesture)
TO_QT_LIST_PTR (QGraphicsItem)
TO_QT_LIST_PTR (QGraphicsTransform)
TO_QT_LIST_PTR (QGraphicsView)
TO_QT_LIST_PTR (QGraphicsWidget)
TO_QT_LIST_PTR (QListWidgetItem)
TO_QT_LIST_PTR (QMdiSubWindow)
TO_QT_LIST_PTR (QObject)
TO_QT_LIST_PTR (QStandardItem)
TO_QT_LIST_PTR (QTableWidgetItem)
TO_QT_LIST_PTR (QTextFrame)
TO_QT_LIST_PTR (QTreeWidgetItem)
TO_QT_LIST_PTR (QUndoStack)
TO_QT_LIST_PTR (QWidget)

TO_QT_LIST_VAL  (QByteArray)
TO_QT_LIST_VAL  (QFileInfo)
TO_QT_LIST_VAL  (QKeySequence)
TO_QT_LIST_VAL  (QModelIndex)
TO_QT_LIST_VAL  (QPolygonF)
TO_QT_LIST_VAL  (QSize)
TO_QT_LIST_VAL  (QTableWidgetSelectionRange)
TO_QT_LIST_VAL  (QTextBlock)
TO_QT_LIST_VAL  (QUrl)
TO_QT_LIST_VAL2 (int, Int)
TO_QT_LIST_VAL2 (qreal, Real)

TO_QT_VECTOR_VAL  (QGradientStop)
TO_QT_VECTOR_VAL  (QLine)
TO_QT_VECTOR_VAL  (QLineF)
TO_QT_VECTOR_VAL  (QPoint)
TO_QT_VECTOR_VAL  (QPointF)
TO_QT_VECTOR_VAL  (QRect)
TO_QT_VECTOR_VAL  (QRectF)
TO_QT_VECTOR_VAL  (QTextFormat)
TO_QT_VECTOR_VAL  (QTextLength)
TO_QT_VECTOR_VAL2 (QRgb, UInt)
TO_QT_VECTOR_VAL2 (float, Float)
TO_QT_VECTOR_VAL2 (int, Int)
TO_QT_VECTOR_VAL2 (qreal, Real)

QVariant toQVariant(cl_object l_obj, const char* s_type, int type, bool* ok) {
    QVariant var;
    if(type == -1) {
        type = QVariant::nameToType(s_type); }
    if(type == QVariant::Invalid) {
        *ok = false;
        return var; }
    switch(type) {
        case QVariant::Bool:        var = (l_obj != Cnil); break;
        case QVariant::Brush:       var = toQBrush(l_obj); break;
        case QVariant::ByteArray:   var = toQByteArray(l_obj); break;
        case QVariant::Char:        var = toQChar(l_obj); break;
        case QVariant::Color:       var = toQColor(l_obj); break;
        case QVariant::Cursor:      var = toQCursor(l_obj); break;
        case QVariant::Date:        var = toQDate(l_obj); break;
        case QVariant::DateTime:    var = toQDateTime(l_obj); break;
        case QVariant::Double:      var = toFloat<double>(l_obj); break;
        case QVariant::Font:        var = toQFont(l_obj); break;
        case QVariant::Icon:        var = toQIcon(l_obj); break;
        case QVariant::Image:       var = toQImage(l_obj); break;
        case QVariant::Int:         var = toInt(l_obj); break;
        case QVariant::KeySequence: var = toQKeySequence(l_obj); break;
        case QVariant::Line:        var = toQLine(l_obj); break;
        case QVariant::LineF:       var = toQLineF(l_obj); break;
        case QVariant::Locale:      var = toQLocale(l_obj); break;
        case QVariant::LongLong:    var = toInt<qlonglong>(l_obj); break;
        case QVariant::Matrix:      var = toQMatrix(l_obj); break;
        case QVariant::Palette:     var = toQPalette(l_obj); break;
        case QVariant::Pen:         var = toQPen(l_obj); break;
        case QVariant::Pixmap:      var = toQPixmap(l_obj); break;
        case QVariant::Point:       var = toQPoint(l_obj); break;
        case QVariant::PointF:      var = toQPointF(l_obj); break;
        case QVariant::Polygon:     var = toQPolygon(l_obj); break;
        case QVariant::Rect:        var = toQRect(l_obj); break;
        case QVariant::RectF:       var = toQRectF(l_obj); break;
        case QVariant::Size:        var = toQSize(l_obj); break;
        case QVariant::SizeF:       var = toQSizeF(l_obj); break;
        case QVariant::SizePolicy:  var = toQSizePolicy(l_obj); break;
        case QVariant::String:      var = toQString(l_obj); break;
        case QVariant::StringList:  var = toQStringList(l_obj); break;
        case QVariant::TextFormat:  var = toQTextFormat(l_obj); break;
        case QVariant::TextLength:  var = toQTextLength(l_obj); break;
        case QVariant::Time:        var = toQTime(l_obj); break;
        case QVariant::Transform:   var = toQTransform(l_obj); break;
        case QVariant::Url:         var = toQUrl(l_obj); break;
        case QVariant::UInt:        var = toUInt(l_obj); break;
        case QVariant::ULongLong:   var = toUInt<qulonglong>(l_obj); break;
        default:
            // Qt_EQL: a type safe object pointer (checked at run-time)
            if(QMetaType::VoidStar == type) {
                QtObject obj = toQtObject(l_obj);
                if(obj.pointer) {
                    var.setValue(eql_pointer(obj.pointer, obj.id)); }}}
    return var; }

static QVariantList toQVariantList(cl_object l_list) {
    QVariantList l;
    if(LISTP(l_list)) {
        cl_object l_el = l_list;
        while(l_el != Cnil) {
            QtObject q_var = toQtObject(cl_car(l_el));
            if("QVariant" == q_var.className()) {
                l << *(QVariant*)q_var.pointer; }
            l_el = cl_cdr(l_el); }}
    return l; }

static cl_object from_char(char ch) {
    cl_object l_char = cl_code_char(MAKE_FIXNUM((int)ch));
    return l_char; }

static cl_object from_qchar(const QChar& ch) {
    cl_object l_char = cl_code_char(MAKE_FIXNUM(ch.unicode()));
    return l_char; }

static cl_object from_qbytearray(const QByteArray& ba) {
    cl_object l_vec = make_vector();
    for(int i = 0; i < ba.size(); ++i) {
        cl_vector_push_extend(2, MAKE_FIXNUM(ba.at(i)), l_vec); }
    return l_vec; }

static cl_object from_qstring(const QString& s) {
    cl_object l_s = ecl_alloc_simple_extended_string(s.length());
    ecl_character* l_p = l_s->string.self;
    for(int i = 0; i < s.length(); ++i) {
        l_p[i] = s.at(i).unicode(); }
    return l_s; }

static cl_object from_qstringlist(const QStringList& l) {
    cl_object l_list = Cnil;
    Q_FOREACH(QString s, l) {
        l_list = CONS(from_qstring(s), l_list); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static cl_object from_intlist(const QList<int>& l) {
    cl_object l_list = Cnil;
    Q_FOREACH(int i, l) {
        l_list = CONS(ecl_make_integer(i), l_list); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static cl_object from_qreallist(const QList<qreal>& l) {
    cl_object l_list = Cnil;
    Q_FOREACH(qreal r, l) {
        l_list = CONS(ecl_make_doublefloat(r), l_list); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static cl_object from_qcolor(const QColor& col) {
    cl_object l_ret = Cnil;
    if(col.isValid()) { // return NIL for invalid QColors
        if(EQL::return_value_p) {
            l_ret = qt_object_from_name("QColor", new QColor(col), 0, true); } // GC
        else {
            l_ret = qt_object_from_name("QColor", (void*)&col); }}
    return l_ret; }

static cl_object from_qpolygon(const QPolygon& p) {
    cl_object l_list = Cnil;
    for(int i = 0; i < p.size(); ++i) {
        int x, y;
        p.point(i, &x, &y);
        l_list = CONS(ecl_make_integer(y), CONS(ecl_make_integer(x), l_list)); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static cl_object from_qpolygonf(const QPolygonF& pol) {
    cl_object l_list = Cnil;
    for(int i = 0; i < pol.size(); ++i) {
        QPointF p = pol.at(i);
        l_list = CONS(ecl_make_doublefloat(p.y()), CONS(ecl_make_doublefloat(p.x()), l_list)); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static cl_object from_qgradientstop(const QGradientStop& gs) {
    cl_object l_gs = CONS(ecl_make_doublefloat(gs.first), from_qcolor(gs.second));
    return l_gs; }

static cl_object from_qwidgetlist(const QWidgetList& wl) {
    cl_object l_list = Cnil;
    Q_FOREACH(QWidget* w, wl) {
        l_list = CONS(qt_object_from_name(w->metaObject()->className(),
                                          w,
                                          w->property("EQL.unique").toUInt()),
                      l_list); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static cl_object from_qobjectlist(const QObjectList& ol) {
    cl_object l_list = Cnil;
    Q_FOREACH(QObject* o, ol) {
        l_list = CONS(qt_object_from_name(o->metaObject()->className(),
                                          o,
                                          o->property("EQL.unique").toUInt()),
                      l_list); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static cl_object from_qtexteditextraselectionlist(const QList<QTextEdit::ExtraSelection>& l) {
    cl_object l_list = Cnil;
    Q_FOREACH(QTextEdit::ExtraSelection sel, l) {
        l_list = CONS(LIST2(qt_object_from_name("QTextCursor", new QTextCursor(sel.cursor)),
                            qt_object_from_name("QTextCharFormat", new QTextCharFormat(sel.format))),
                      l_list); }
    l_list = cl_nreverse(l_list);
    return l_list; }

TO_CL_TYPEF  (QPoint, qpoint, x, y)
TO_CL_TYPEF  (QSize, qsize, width, height)
TO_CL_TYPEF2 (QLine, qline, x1, y1, x2, y2)
TO_CL_TYPEF2 (QRect, qrect, x, y, width, height)

TO_CL_LIST_PTR (QAbstractAnimation, qabstractanimation)
TO_CL_LIST_PTR (QAbstractButton, qabstractbutton)
TO_CL_LIST_PTR (QAbstractState, qabstractstate)
TO_CL_LIST_PTR (QAction, qaction)
TO_CL_LIST_PTR (QDockWidget, qdockwidget)
TO_CL_LIST_PTR (QGesture, qgesture)
TO_CL_LIST_PTR (QGraphicsItem, qgraphicsitem)
TO_CL_LIST_PTR (QGraphicsTransform, qgraphicstransform)
TO_CL_LIST_PTR (QGraphicsView, qgraphicsview)
TO_CL_LIST_PTR (QGraphicsWidget, qgraphicswidget)
TO_CL_LIST_PTR (QListWidgetItem, qlistwidgetitem)
TO_CL_LIST_PTR (QMdiSubWindow, qmdisubwindow)
TO_CL_LIST_PTR (QStandardItem, qstandarditem)
TO_CL_LIST_PTR (QTableWidgetItem, qtablewidgetitem)
TO_CL_LIST_PTR (QTextFrame, qtextframe)
TO_CL_LIST_PTR (QTouchDevice, qtouchdevice)
TO_CL_LIST_PTR (QTreeWidgetItem, qtreewidgetitem)
TO_CL_LIST_PTR (QUndoStack, qundostack)

TO_CL_LIST_VAL (QByteArray, qbytearray)
TO_CL_LIST_VAL (QFileInfo, qfileinfo)
TO_CL_LIST_VAL (QKeySequence, qkeysequence)
TO_CL_LIST_VAL (QModelIndex, qmodelindex)
TO_CL_LIST_VAL (QPolygonF, qpolygonf)
TO_CL_LIST_VAL (QSize, qsize)
TO_CL_LIST_VAL (QStorageInfo, qstorageinfo)
TO_CL_LIST_VAL (QTableWidgetSelectionRange, qtablewidgetselectionrange)
TO_CL_LIST_VAL (QTextBlock, qtextblock)
TO_CL_LIST_VAL (QUrl, qurl)

TO_CL_VECTOR_VAL  (QGradientStop, qgradientstop)
TO_CL_VECTOR_VAL  (QLine, qline)
TO_CL_VECTOR_VAL  (QLineF, qlinef)
TO_CL_VECTOR_VAL  (QPoint, qpoint)
TO_CL_VECTOR_VAL  (QPointF, qpointf)
TO_CL_VECTOR_VAL  (QRect, qrect)
TO_CL_VECTOR_VAL  (QRectF, qrectf)
TO_CL_VECTOR_VAL  (QTextFormat, qtextformat)
TO_CL_VECTOR_VAL  (QTextLength, qtextlength)
TO_CL_VECTOR_VAL2 (QRgb, qrgb, ecl_make_unsigned_integer)
TO_CL_VECTOR_VAL2 (float, float, ecl_make_singlefloat)
TO_CL_VECTOR_VAL2 (int, int, ecl_make_integer)
TO_CL_VECTOR_VAL2 (qreal, qreal, ecl_make_doublefloat)

static cl_object from_qvariant_value(const QVariant& var) {
    cl_object l_obj = Cnil;
    int type = var.type();
    switch(type) {
        case QVariant::Bool:        l_obj = var.toBool() ? Ct : Cnil; break;
        case QVariant::Brush:       l_obj = from_qbrush(var.value<QBrush>()); break;
        case QVariant::ByteArray:   l_obj = from_qbytearray(var.toByteArray()); break;
        case QVariant::Char:        l_obj = from_qchar(var.toChar()); break;
        case QVariant::Color:       l_obj = from_qstring(var.toString()); break;
        case QVariant::Cursor:      l_obj = from_qcursor(var.value<QCursor>()); break;
        case QVariant::Date:        l_obj = from_qdate(var.toDate()); break;
        case QVariant::DateTime:    l_obj = from_qdatetime(var.toDateTime()); break;
        case QVariant::Double:      l_obj = ecl_make_doublefloat(var.toDouble()); break;
        case QVariant::Font:        l_obj = from_qfont(var.value<QFont>()); break;
        case QVariant::Icon:        l_obj = from_qicon(var.value<QIcon>()); break;
        case QVariant::Int:         l_obj = ecl_make_integer(var.toInt()); break;
        case QVariant::Image:       l_obj = from_qimage(var.value<QImage>()); break;
        case QVariant::KeySequence: l_obj = from_qkeysequence(var.value<QKeySequence>()); break;
        case QVariant::Line:        l_obj = from_qline(var.toLine()); break;
        case QVariant::LineF:       l_obj = from_qlinef(var.toLineF()); break;
        case QVariant::Locale:      l_obj = from_qlocale(var.toLocale()); break;
        case QVariant::LongLong:    l_obj = ecl_make_integer(var.toLongLong()); break;
        case QVariant::Palette:     l_obj = from_qpalette(var.value<QPalette>()); break;
        case QVariant::Pen:         l_obj = from_qpen(var.value<QPen>()); break;
        case QVariant::Pixmap:      l_obj = from_qpixmap(var.value<QPixmap>()); break;
        case QVariant::Point:       l_obj = from_qpoint(var.toPoint()); break;
        case QVariant::PointF:      l_obj = from_qpointf(var.toPointF()); break;
        case QVariant::Polygon:     l_obj = from_qpolygon(var.value<QPolygon>()); break;
        case QVariant::Rect:        l_obj = from_qrect(var.toRect()); break;
        case QVariant::RectF:       l_obj = from_qrectf(var.toRectF()); break;
        case QVariant::Size:        l_obj = from_qsize(var.toSize()); break;
        case QVariant::SizeF:       l_obj = from_qsizef(var.toSizeF()); break;
        case QVariant::SizePolicy:  l_obj = from_qsizepolicy(var.value<QSizePolicy>()); break;
        case QVariant::String:      l_obj = from_qstring(var.toString()); break;
        case QVariant::StringList:  l_obj = from_qstringlist(var.toStringList()); break;
        case QVariant::TextFormat:  l_obj = from_qtextformat(var.value<QTextFormat>()); break;
        case QVariant::TextLength:  l_obj = from_qtextlength(var.value<QTextLength>()); break;
        case QVariant::Time:        l_obj = from_qtime(var.toTime()); break;
        case QVariant::Url:         l_obj = from_qurl(var.toUrl()); break;
        case QVariant::UInt:        l_obj = ecl_make_unsigned_integer(var.toUInt()); break;
        case QVariant::ULongLong:   l_obj = ecl_make_unsigned_integer(var.toULongLong()); break;
        // special case: QVariantList (can be nested)
        case QVariant::List:
            Q_FOREACH(QVariant v, var.value<QVariantList>()) {
                l_obj = CONS(from_qvariant_value(v), l_obj); }
            l_obj = cl_nreverse(l_obj);
            break; }
    return l_obj; }

static cl_object from_qvariantlist(const QVariantList& l) {
    cl_object l_list = Cnil;
    Q_FOREACH(QVariant v, l) {
        l_list = CONS(from_qvariant_value(v), l_list); }
    l_list = cl_nreverse(l_list);
    return l_list; }

static MetaArg toMetaArg(const QByteArray& sType, cl_object l_arg) {
    void* p = 0;
    const int n = QMetaType::type(sType);
    switch(n) {
        case QMetaType::Bool:                    p = new bool(l_arg != Cnil); break;
        case QMetaType::Char:                    p = new char(toChar(l_arg)); break;
        case QMetaType::Double:                  p = new double(toFloat<double>(l_arg)); break;
        case QMetaType::Float:                   p = new float(toFloat<float>(l_arg)); break;
        case QMetaType::Int:                     p = new int(toInt(l_arg)); break;
        case QMetaType::Long:                    p = new int(toInt<long>(l_arg)); break;
        case QMetaType::LongLong:                p = new qlonglong(toInt<qlonglong>(l_arg)); break;
        case QMetaType::UChar:                   p = new uchar(toUInt(l_arg)); break;
        case QMetaType::UInt:                    p = new uint(toUInt(l_arg)); break;
        case QMetaType::ULong:                   p = new ulong(toUInt<ulong>(l_arg)); break;
        case QMetaType::ULongLong:               p = new qulonglong(toUInt<qulonglong>(l_arg)); break;
        case QMetaType::QBitmap:                 p = new QBitmap(*toQBitmapPointer(l_arg)); break;
        case QMetaType::QByteArray:              p = new QByteArray(toQByteArray(l_arg)); break;
        case QMetaType::QChar:                   p = new QChar(toQChar(l_arg)); break;
        case QMetaType::QColor:                  p = new QColor(toQColor(l_arg)); break;
        case QMetaType::QCursor:                 p = new QCursor(toQCursor(l_arg)); break;
        case QMetaType::QDate:                   p = new QDate(*toQDatePointer(l_arg)); break;
        case QMetaType::QDateTime:               p = new QDateTime(*toQDateTimePointer(l_arg)); break;
        case QMetaType::QEasingCurve:            p = new QEasingCurve(*toQEasingCurvePointer(l_arg)); break;
        case QMetaType::QFont:                   p = new QFont(*toQFontPointer(l_arg)); break;
        case QMetaType::QKeySequence:            p = new QKeySequence(*toQKeySequencePointer(l_arg)); break;
        case QMetaType::QLine:                   p = new QLine(toQLine(l_arg)); break;
        case QMetaType::QLineF:                  p = new QLineF(toQLineF(l_arg)); break;
        case QMetaType::QLocale:                 p = new QLocale(*toQLocalePointer(l_arg)); break;
        case QMetaType::QMatrix:                 p = new QMatrix(*toQMatrixPointer(l_arg)); break;
        case QMetaType::QPoint:                  p = new QPoint(toQPoint(l_arg)); break;
        case QMetaType::QPointF:                 p = new QPointF(toQPointF(l_arg)); break;
        case QMetaType::QPolygon:                p = new QPolygon(toQPolygon(l_arg)); break;
        case QMetaType::QRect:                   p = new QRect(toQRect(l_arg)); break;
        case QMetaType::QRectF:                  p = new QRectF(toQRectF(l_arg)); break;
        case QMetaType::QRegion:                 p = new QRegion(*toQRegionPointer(l_arg)); break;
        case QMetaType::QRegExp:                 p = new QRegExp(*toQRegExpPointer(l_arg)); break;
        case QMetaType::QRegularExpression:      p = new QRegularExpression(*toQRegularExpressionPointer(l_arg)); break;
        case QMetaType::QSize:                   p = new QSize(toQSize(l_arg)); break;
        case QMetaType::QSizeF:                  p = new QSizeF(toQSizeF(l_arg)); break;
        case QMetaType::QSizePolicy:             p = new QSizePolicy(*toQSizePolicyPointer(l_arg)); break;
        case QMetaType::QString:                 p = new QString(toQString(l_arg)); break;
        case QMetaType::QStringList:             p = new QStringList(toQStringList(l_arg)); break;
        case QMetaType::QBrush:                  p = new QBrush(*toQBrushPointer(l_arg)); break;
        case QMetaType::QIcon:                   p = new QIcon(*toQIconPointer(l_arg)); break;
        case QMetaType::QImage:                  p = new QImage(*toQImagePointer(l_arg)); break;
        case QMetaType::QPalette:                p = new QPalette(*toQPalettePointer(l_arg)); break;
        case QMetaType::QPen:                    p = new QPen(*toQPenPointer(l_arg)); break;
        case QMetaType::QPixmap:                 p = new QPixmap(*toQPixmapPointer(l_arg)); break;
        case QMetaType::QTextFormat:             p = new QTextFormat(*toQTextFormatPointer(l_arg)); break;
        case QMetaType::QTextLength:             p = new QTextLength(*toQTextLengthPointer(l_arg)); break;
        case QMetaType::QTime:                   p = new QTime(*toQTimePointer(l_arg)); break;
        case QMetaType::QTransform:              p = new QTransform(*toQTransformPointer(l_arg)); break;
        case QMetaType::QUrl:                    p = new QUrl(*toQUrlPointer(l_arg)); break;
        case QMetaType::QVariant:                p = new QVariant(*toQVariantPointer(l_arg)); break;
        case QMetaType::QVariantList:            p = new QVariantList(toQVariantList(l_arg)); break;
    default:
        if(T_bool_ok_pointer == n) {
            p = new void*(&_ok_); }
        else if(sType.endsWith('*')) {
            if(sType.startsWith('Q') || sType.startsWith("const Q")) {
                QtObject o = toQtObject(l_arg);
                quintptr l = (quintptr)o.pointer;
                // cast from QObject to non QObject + multiple inheritance problem
                // e.g. QGraphicsObject, which inherits both QObject and QGraphicsItem
                int q = sType.indexOf('Q');
                if((o.id > 0) && LObjects::n_names.contains(sType.mid(q, sType.length() - q - 1))) {
                    l += sizeof(QObject); }
                void** v = new void*((void*)l);
                p = v; }
            else if("const char*" == sType) {
                QByteArray ba(toCString(l_arg));
                _cstring_buffer_ << ba;
                const char** s = new const char*(ba.constData());
                p = s; }}
        else if(T_QFileInfo == n)                        p = new QFileInfo(toQFileInfo(l_arg));
        else if(T_QFileInfoList == n)                    p = new QFileInfoList(toQFileInfoList(l_arg));
        else if(T_QGradient == n)                        p = new QGradient(toQGradient(l_arg));
        else if(T_QGradientStop == n)                    p = new QGradientStop(toQGradientStop(l_arg));
        else if(T_QHash_int_QByteArray == n)             p = new QHash<int, QByteArray>(toQHashIntQByteArray(l_arg));
        else if(T_QList_QAbstractAnimation == n)         p = new QList<QAbstractAnimation*>(toQAbstractAnimationList(l_arg));
        else if(T_QList_QAbstractButton == n)            p = new QList<QAbstractButton*>(toQAbstractButtonList(l_arg));
        else if(T_QList_QAbstractState == n)             p = new QList<QAbstractState*>(toQAbstractStateList(l_arg));
        else if(T_QList_QAction == n)                    p = new QList<QAction*>(toQActionList(l_arg));
        else if(T_QList_QByteArray == n)                 p = new QList<QByteArray>(toQByteArrayList(l_arg));
        else if(T_QList_QDockWidget == n)                p = new QList<QDockWidget*>(toQDockWidgetList(l_arg));
        else if(T_QList_QGesture == n)                   p = new QList<QGesture*>(toQGestureList(l_arg));
        else if(T_QList_QGraphicsItem == n)              p = new QList<QGraphicsItem*>(toQGraphicsItemList(l_arg));
        else if(T_QList_QGraphicsTransform == n)         p = new QList<QGraphicsTransform*>(toQGraphicsTransformList(l_arg));
        else if(T_QList_QGraphicsView == n)              p = new QList<QGraphicsView*>(toQGraphicsViewList(l_arg));
        else if(T_QList_QGraphicsWidget == n)            p = new QList<QGraphicsWidget*>(toQGraphicsWidgetList(l_arg));
        else if(T_QList_QKeySequence == n)               p = new QList<QKeySequence>(toQKeySequenceList(l_arg));
        else if(T_QList_QListWidgetItem == n)            p = new QList<QListWidgetItem*>(toQListWidgetItemList(l_arg));
        else if(T_QList_QMdiSubWindow == n)              p = new QList<QMdiSubWindow*>(toQMdiSubWindowList(l_arg));
        else if(T_QModelIndexList == n)                  p = new QModelIndexList(toQModelIndexList(l_arg));
        else if((T_QObjectList == n) || (T_QList_QObject == n))
            p = new QList<QObject*>(toQObjectList(l_arg));
        else if(T_QList_QPolygonF == n)                  p = new QList<QPolygonF>(toQPolygonFList(l_arg));
        else if(T_QList_QSize == n)                      p = new QList<QSize>(toQSizeList(l_arg));
        else if(T_QList_QStandardItem == n)              p = new QList<QStandardItem*>(toQStandardItemList(l_arg));
        else if(T_QList_QTableWidgetItem == n)           p = new QList<QTableWidgetItem*>(toQTableWidgetItemList(l_arg));
        else if(T_QList_QTableWidgetSelectionRange == n) p = new QList<QTableWidgetSelectionRange>(toQTableWidgetSelectionRangeList(l_arg));
        else if(T_QList_QTextBlock == n)                 p = new QList<QTextBlock>(toQTextBlockList(l_arg));
        else if(T_QList_QTextEdit_ExtraSelection == n)   p = new QList<QTextEdit::ExtraSelection>(toQTextEditExtraSelectionList(l_arg));
        else if(T_QList_QTextFrame == n)                 p = new QList<QTextFrame*>(toQTextFrameList(l_arg));
        else if(T_QList_QTreeWidgetItem == n)            p = new QList<QTreeWidgetItem*>(toQTreeWidgetItemList(l_arg));
        else if(T_QList_QUndoStack == n)                 p = new QList<QUndoStack*>(toQUndoStackList(l_arg));
        else if(T_QList_QUrl == n)                       p = new QList<QUrl>(toQUrlList(l_arg));
        else if((T_QWidgetList == n) || (T_QList_QWidget == n))
            p = new QList<QWidget*>(toQWidgetList(l_arg));
        else if(T_QList_int == n)                        p = new QList<int>(toIntList(l_arg));
        else if(T_QList_qreal == n)                      p = new QList<qreal>(toRealList(l_arg));
        else if(T_QMargins == n)                         p = new QMargins(*toQMarginsPointer(l_arg));
        else if(T_QMarginsF == n)                        p = new QMarginsF(*toQMarginsFPointer(l_arg));
        else if(T_QModelIndex == n)                      p = new QModelIndex(*toQModelIndexPointer(l_arg));
        else if(T_QPageLayout == n)                      p = new QPageLayout(*toQPageLayoutPointer(l_arg));
        else if(T_QPageSize == n)                        p = new QPageSize(*toQPageSizePointer(l_arg));
        else if(T_QPainterPath == n)                     p = new QPainterPath(*toQPainterPathPointer(l_arg));
        else if(T_QPolygonF == n)                        p = new QPolygonF(toQPolygonF(l_arg));
        else if(T_QRgb == n)                             p = new QRgb(toUInt(l_arg));
        else if(T_QStorageInfo == n)                     p = new QStorageInfo(*toQStorageInfoPointer(l_arg));
        else if(T_QTableWidgetSelectionRange == n)       p = new QTableWidgetSelectionRange(*toQTableWidgetSelectionRangePointer(l_arg));
        else if(T_QTextBlock == n)                       p = new QTextBlock(*toQTextBlockPointer(l_arg));
        else if(T_QTextBlockFormat == n)                 p = new QTextBlockFormat(*toQTextBlockFormatPointer(l_arg));
        else if(T_QTextCharFormat == n)                  p = new QTextCharFormat(*toQTextCharFormatPointer(l_arg));
        else if(T_QTextFrameFormat == n)                 p = new QTextFrameFormat(*toQTextFrameFormatPointer(l_arg));
        else if(T_QTextListFormat == n)                  p = new QTextListFormat(*toQTextListFormatPointer(l_arg));
        else if(T_QTextCursor == n)                      p = new QTextCursor(*toQTextCursorPointer(l_arg));
        else if(T_QTextDocumentFragment == n)            p = new QTextDocumentFragment(*toQTextDocumentFragmentPointer(l_arg));
        else if(T_QTextLine == n)                        p = new QTextLine(*toQTextLinePointer(l_arg));
        else if(T_QTextOption == n)                      p = new QTextOption(*toQTextOptionPointer(l_arg));
        else if(T_QVector_QGradientstop == n)            p = new QVector<QGradientStop>(toQGradientStopVector(l_arg));
        else if(T_QVector_QLine == n)                    p = new QVector<QLine>(toQLineVector(l_arg));
        else if(T_QVector_QLineF == n)                   p = new QVector<QLineF>(toQLineFVector(l_arg));
        else if(T_QVector_QPoint == n)                   p = new QVector<QPoint>(toQPointVector(l_arg));
        else if(T_QVector_QPointF == n)                  p = new QVector<QPointF>(toQPointFVector(l_arg));
        else if(T_QVector_QRect == n)                    p = new QVector<QRect>(toQRectVector(l_arg));
        else if(T_QVector_QRectF == n)                   p = new QVector<QRectF>(toQRectFVector(l_arg));
        else if(T_QVector_QRgb == n)                     p = new QVector<QRgb>(toQRgbVector(l_arg));
        else if(T_QVector_QTextFormat == n)              p = new QVector<QTextFormat>(toQTextFormatVector(l_arg));
        else if(T_QVector_QTextLength == n)              p = new QVector<QTextLength>(toQTextLengthVector(l_arg));
        else if(T_QVector_float == n)                    p = new QVector<float>(tofloatVector(l_arg));
        else if(T_QVector_int == n)                      p = new QVector<int>(tointVector(l_arg));
        else if(T_QVector_qreal == n)                    p = new QVector<qreal>(toqrealVector(l_arg));
        else if(T_WId == n)                              p = new ulong(toUInt<ulong>(l_arg));
        else if(T_GLint == n)                            p = new GLint(toInt<GLint>(l_arg));
        else if(T_GLuint == n)                           p = new GLuint(toUInt<GLuint>(l_arg));
        else if(T_GLenum == n)                           p = new GLenum(toUInt<GLenum>(l_arg));
        else if(T_GLfloat == n)                          p = new GLfloat(toFloat<GLfloat>(l_arg));
        else if(T_short == n)                            p = new short(toInt<short>(l_arg));
        else if(T_ushort == n)                           p = new ushort(toUInt<ushort>(l_arg));
        else if(T_qint32 == n)                           p = new qint32(toInt<qint32>(l_arg));
        else if(T_qint64 == n)                           p = new qint64(toInt<qint64>(l_arg));
        else if(T_quint8 == n)                           p = new quint8(toUInt<quint8>(l_arg));
        else if(T_quint16 == n)                          p = new quint16(toUInt<quint16>(l_arg));
        else if(T_quint32 == n)                          p = new quint32(toUInt<quint32>(l_arg));
        else if(T_quint64 == n)                          p = new quint64(toUInt<quint64>(l_arg));
        // module types
        else {
            bool found = false;
            if(LObjects::toMetaArg_help) {
                p = LObjects::toMetaArg_help(n, l_arg, &found); }
            if(!found && LObjects::toMetaArg_multimedia) {
                p = LObjects::toMetaArg_multimedia(n, l_arg, &found); }
            if(!found && LObjects::toMetaArg_network) {
                p = LObjects::toMetaArg_network(n, l_arg, &found); }
            if(!found && LObjects::toMetaArg_quick) {
                p = LObjects::toMetaArg_quick(n, l_arg, &found); }
            if(!found && LObjects::toMetaArg_sql) {
                p = LObjects::toMetaArg_sql(n, l_arg, &found); }
            if(!found && LObjects::toMetaArg_webkit) {
                p = LObjects::toMetaArg_webkit(n, l_arg, &found); }
            if(!found) {
                // enum
                if(!sType.endsWith('>') && sType.contains(':')) {
                    int* i = new int(toInt(l_arg));
                    p = i; }}}}
    return MetaArg(sType, p); }

cl_object to_lisp_arg(const MetaArg& arg) {
    cl_object l_ret = Cnil;
    void* p = arg.second;
    if(p) {
        QByteArray sType(arg.first);
        const int n = QMetaType::type(sType);
        switch(n) {
            case QMetaType::Bool:                    l_ret = *(bool*)p ? Ct : Cnil; break;
            case QMetaType::Char:                    l_ret = from_char(*(char*)p); break;
            case QMetaType::Double:                  l_ret = ecl_make_doublefloat(*(double*)p); break;
            case QMetaType::Float:                   l_ret = ecl_make_singlefloat(*(float*)p); break;
            case QMetaType::Int:                     l_ret = ecl_make_integer(*(int*)p); break;
            case QMetaType::Long:                    l_ret = ecl_make_integer(*(long*)p); break;
            case QMetaType::LongLong:                l_ret = ecl_make_integer(*(qlonglong*)p); break;
            case QMetaType::UChar:                   l_ret = MAKE_FIXNUM(*(uchar*)p); break;
            case QMetaType::UInt:                    l_ret = ecl_make_unsigned_integer(*(uint*)p); break;
            case QMetaType::ULong:                   l_ret = ecl_make_unsigned_integer(*(ulong*)p); break;
            case QMetaType::ULongLong:               l_ret = ecl_make_unsigned_integer(*(qulonglong*)p); break;
            case QMetaType::QBitmap:                 l_ret = from_qbitmap(*(QBitmap*)p); break;
            case QMetaType::QBrush:                  l_ret = from_qbrush(*(QBrush*)p); break;
            case QMetaType::QByteArray:              l_ret = from_qbytearray(*(QByteArray*)p); break;
            case QMetaType::QChar:                   l_ret = from_qchar(*(QChar*)p); break;
            case QMetaType::QColor:                  l_ret = from_qcolor(*(QColor*)p); break;
            case QMetaType::QCursor:                 l_ret = from_qcursor(*(QCursor*)p); break;
            case QMetaType::QDate:                   l_ret = from_qdate(*(QDate*)p); break;
            case QMetaType::QDateTime:               l_ret = from_qdatetime(*(QDateTime*)p); break;
            case QMetaType::QEasingCurve:            l_ret = from_qeasingcurve(*(QEasingCurve*)p); break;
            case QMetaType::QFont:                   l_ret = from_qfont(*(QFont*)p); break;
            case QMetaType::QIcon:                   l_ret = from_qicon(*(QIcon*)p); break;
            case QMetaType::QImage:                  l_ret = from_qimage(*(QImage*)p); break;
            case QMetaType::QKeySequence:            l_ret = from_qkeysequence(*(QKeySequence*)p); break;
            case QMetaType::QLine:                   l_ret = from_qline(*(QLine*)p); break;
            case QMetaType::QLineF:                  l_ret = from_qlinef(*(QLineF*)p); break;
            case QMetaType::QLocale:                 l_ret = from_qlocale(*(QLocale*)p); break;
            case QMetaType::QMatrix:                 l_ret = from_qmatrix(*(QMatrix*)p); break;
            case QMetaType::QPalette:                l_ret = from_qpalette(*(QPalette*)p); break;
            case QMetaType::QPen:                    l_ret = from_qpen(*(QPen*)p); break;
            case QMetaType::QPixmap:                 l_ret = from_qpixmap(*(QPixmap*)p); break;
            case QMetaType::QPoint:                  l_ret = from_qpoint(*(QPoint*)p); break;
            case QMetaType::QPointF:                 l_ret = from_qpointf(*(QPointF*)p); break;
            case QMetaType::QPolygon:                l_ret = from_qpolygon(*(QPolygon*)p); break;
            case QMetaType::QRect:                   l_ret = from_qrect(*(QRect*)p); break;
            case QMetaType::QRectF:                  l_ret = from_qrectf(*(QRectF*)p); break;
            case QMetaType::QRegion:                 l_ret = from_qregion(*(QRegion*)p); break;
            case QMetaType::QRegExp:                 l_ret = from_qregexp(*(QRegExp*)p); break;
            case QMetaType::QRegularExpression:      l_ret = from_qregularexpression(*(QRegularExpression*)p); break;
            case QMetaType::QSize:                   l_ret = from_qsize(*(QSize*)p); break;
            case QMetaType::QSizePolicy:             l_ret = from_qsizepolicy(*(QSizePolicy*)p); break;
            case QMetaType::QSizeF:                  l_ret = from_qsizef(*(QSizeF*)p); break;
            case QMetaType::QString:                 l_ret = from_qstring(*(QString*)p); break;
            case QMetaType::QStringList:             l_ret = from_qstringlist(*(QStringList*)p); break;
            case QMetaType::QTextFormat:             l_ret = from_qtextformat(*(QTextFormat*)p); break;
            case QMetaType::QTextLength:             l_ret = from_qtextlength(*(QTextLength*)p); break;
            case QMetaType::QTransform:              l_ret = from_qtransform(*(QTransform*)p); break;
            case QMetaType::QTime:                   l_ret = from_qtime(*(QTime*)p); break;
            case QMetaType::QUrl:                    l_ret = from_qurl(*(QUrl*)p); break;
            case QMetaType::QVariant:                l_ret = from_qvariant(*(QVariant*)p); break;
            case QMetaType::QVariantList:            l_ret = from_qvariantlist(*(QVariantList*)p); break;
        default:
            if(T_bool_ok_pointer == n) {
                l_ret = _ok_ ? Ct : Cnil; }
            else if(sType.endsWith('*')) {
                if(sType.startsWith('Q') || sType.startsWith("const Q")) {
                    l_ret = qt_object_from_name(sType, *(void**)p); }
                else if("const char*" == sType) {
                    l_ret = STRING_COPY(*(char**)p); }
                else {
                    l_ret = ecl_make_unsigned_integer((quintptr)*(void**)p); }}
            else if(T_QFileInfo == n)                        l_ret = from_qfileinfo(*(QFileInfo*)p);
            else if(T_QFileInfoList == n)                    l_ret = from_qfileinfolist(*(QFileInfoList*)p);
            else if(T_QGradientStop == n)                    l_ret = from_qgradientstop(*(QGradientStop*)p);
            else if(T_QList_QAbstractAnimation == n)         l_ret = from_qabstractanimationlist(*(QList<QAbstractAnimation*>*)p);
            else if(T_QList_QAbstractButton == n)            l_ret = from_qabstractbuttonlist(*(QList<QAbstractButton*>*)p);
            else if(T_QList_QAbstractState == n)             l_ret = from_qabstractstatelist(*(QList<QAbstractState*>*)p);
            else if(T_QList_QAction == n)                    l_ret = from_qactionlist(*(QList<QAction*>*)p);
            else if(T_QList_QByteArray == n)                 l_ret = from_qbytearraylist(*(QList<QByteArray>*)p);
            else if(T_QList_QDockWidget == n)                l_ret = from_qdockwidgetlist(*(QList<QDockWidget*>*)p);
            else if(T_QList_QGesture == n)                   l_ret = from_qgesturelist(*(QList<QGesture*>*)p);
            else if(T_QList_QGraphicsItem == n)              l_ret = from_qgraphicsitemlist(*(QList<QGraphicsItem*>*)p);
            else if(T_QList_QGraphicsTransform == n)         l_ret = from_qgraphicstransformlist(*(QList<QGraphicsTransform*>*)p);
            else if(T_QList_QGraphicsView == n)              l_ret = from_qgraphicsviewlist(*(QList<QGraphicsView*>*)p);
            else if(T_QList_QGraphicsWidget == n)            l_ret = from_qgraphicswidgetlist(*(QList<QGraphicsWidget*>*)p);
            else if(T_QList_QKeySequence == n)               l_ret = from_qkeysequencelist(*(QList<QKeySequence>*)p);
            else if(T_QList_QListWidgetItem == n)            l_ret = from_qlistwidgetitemlist(*(QList<QListWidgetItem*>*)p);
            else if(T_QList_QMdiSubWindow == n)              l_ret = from_qmdisubwindowlist(*(QList<QMdiSubWindow*>*)p);
            else if(T_QModelIndexList == n)                  l_ret = from_qmodelindexlist(*(QModelIndexList*)p);
            else if((T_QObjectList == n) || (T_QList_QObject == n))
                l_ret = from_qobjectlist(*(QList<QObject*>*)p);
            else if(T_QList_QPolygonF == n)                  l_ret = from_qpolygonflist(*(QList<QPolygonF>*)p);
            else if(T_QList_QSize == n)                      l_ret = from_qsizelist(*(QList<QSize>*)p);
            else if(T_QList_QStandardItem == n)              l_ret = from_qstandarditemlist(*(QList<QStandardItem*>*)p);
            else if(T_QList_QStorageInfo == n)               l_ret = from_qstorageinfolist(*(QList<QStorageInfo>*)p);
            else if(T_QList_QTableWidgetItem == n)           l_ret = from_qtablewidgetitemlist(*(QList<QTableWidgetItem*>*)p);
            else if(T_QList_QTableWidgetSelectionRange == n) l_ret = from_qtablewidgetselectionrangelist(*(QList<QTableWidgetSelectionRange>*)p);
            else if(T_QList_QTextBlock == n)                 l_ret = from_qtextblocklist(*(QList<QTextBlock>*)p);
            else if(T_QList_QTextEdit_ExtraSelection == n)   l_ret = from_qtexteditextraselectionlist(*(QList<QTextEdit::ExtraSelection>*)p);
            else if(T_QList_QTextFrame == n)                 l_ret = from_qtextframelist(*(QList<QTextFrame*>*)p);
            else if(T_QList_QTouchDevice == n)               l_ret = from_qtouchdevicelist(*(QList<QTouchDevice*>*)p);
            else if(T_QList_QTreeWidgetItem == n)            l_ret = from_qtreewidgetitemlist(*(QList<QTreeWidgetItem*>*)p);
            else if(T_QList_QUndoStack == n)                 l_ret = from_qundostacklist(*(QList<QUndoStack*>*)p);
            else if(T_QList_QUrl == n)                       l_ret = from_qurllist(*(QList<QUrl>*)p);
            else if((T_QWidgetList == n) || (T_QList_QWidget == n))
                l_ret = from_qwidgetlist(*(QList<QWidget*>*)p);
            else if(T_QList_int == n)                        l_ret = from_intlist(*(QList<int>*)p);
            else if(T_QList_qreal == n)                      l_ret = from_qreallist(*(QList<qreal>*)p);
            else if(T_QMargins == n)                         l_ret = from_qmargins(*(QMargins*)p);
            else if(T_QMarginsF == n)                        l_ret = from_qmarginsf(*(QMarginsF*)p);
            else if(T_QModelIndex == n)                      l_ret = from_qmodelindex(*(QModelIndex*)p);
            else if(T_QPageLayout == n)                      l_ret = from_qpagelayout(*(QPageLayout*)p);
            else if(T_QPageSize == n)                        l_ret = from_qpagesize(*(QPageSize*)p);
            else if(T_QPainterPath == n)                     l_ret = from_qpainterpath(*(QPainterPath*)p);
            else if(T_QPolygonF == n)                        l_ret = from_qpolygonf(*(QPolygonF*)p);
            else if(T_QRgb == n)                             l_ret = ecl_make_unsigned_integer(*(QRgb*)p);
            else if(T_QStorageInfo == n)                     l_ret = from_qstorageinfo(*(QStorageInfo*)p);
            else if(T_QTableWidgetSelectionRange == n)       l_ret = from_qtablewidgetselectionrange(*(QTableWidgetSelectionRange*)p);
            else if(T_QTextBlock == n)                       l_ret = from_qtextblock(*(QTextBlock*)p);
            else if(T_QTextBlockFormat == n)                 l_ret = from_qtextblockformat(*(QTextBlockFormat*)p);
            else if(T_QTextCharFormat == n)                  l_ret = from_qtextcharformat(*(QTextCharFormat*)p);
            else if(T_QTextFrameFormat == n)                 l_ret = from_qtextframeformat(*(QTextFrameFormat*)p);
            else if(T_QTextListFormat == n)                  l_ret = from_qtextlistformat(*(QTextListFormat*)p);
            else if(T_QTextCursor == n)                      l_ret = from_qtextcursor(*(QTextCursor*)p);
            else if(T_QTextDocumentFragment == n)            l_ret = from_qtextdocumentfragment(*(QTextDocumentFragment*)p);
            else if(T_QTextLine == n)                        l_ret = from_qtextline(*(QTextLine*)p);
            else if(T_QTextOption == n)                      l_ret = from_qtextoption(*(QTextOption*)p);
            else if(T_QVector_QGradientstop == n)            l_ret = from_qgradientstopvector(*(QVector<QGradientStop>*)p);
            else if(T_QVector_QLine == n)                    l_ret = from_qlinevector(*(QVector<QLine>*)p);
            else if(T_QVector_QLineF == n)                   l_ret = from_qlinefvector(*(QVector<QLineF>*)p);
            else if(T_QVector_QPoint == n)                   l_ret = from_qpointvector(*(QVector<QPoint>*)p);
            else if(T_QVector_QPointF == n)                  l_ret = from_qpointfvector(*(QVector<QPointF>*)p);
            else if(T_QVector_QRect == n)                    l_ret = from_qrectvector(*(QVector<QRect>*)p);
            else if(T_QVector_QRectF == n)                   l_ret = from_qrectfvector(*(QVector<QRectF>*)p);
            else if(T_QVector_QRgb == n)                     l_ret = from_qrgbvector(*(QVector<QRgb>*)p);
            else if(T_QVector_QTextFormat == n)              l_ret = from_qtextformatvector(*(QVector<QTextFormat>*)p);
            else if(T_QVector_QTextLength == n)              l_ret = from_qtextlengthvector(*(QVector<QTextLength>*)p);
            else if(T_QVector_float == n)                    l_ret = from_floatvector(*(QVector<float>*)p);
            else if(T_QVector_int == n)                      l_ret = from_intvector(*(QVector<int>*)p);
            else if(T_QVector_qreal == n)                    l_ret = from_qrealvector(*(QVector<qreal>*)p);
            else if(T_WId == n)                              l_ret = ecl_make_unsigned_integer(*(ulong*)p);
            else if(T_GLint == n)                            l_ret = ecl_make_integer(*(GLint*)p);
            else if(T_GLuint == n)                           l_ret = ecl_make_unsigned_integer(*(GLuint*)p);
            else if(T_GLenum == n)                           l_ret = ecl_make_unsigned_integer(*(GLenum*)p);
            else if(T_GLfloat == n)                          l_ret = ecl_make_singlefloat(*(GLfloat*)p);
            else if(T_short == n)                            l_ret = ecl_make_integer(*(short*)p);
            else if(T_ushort == n)                           l_ret = ecl_make_unsigned_integer(*(ushort*)p);
            else if(T_qint32 == n)                           l_ret = ecl_make_integer(*(qint32*)p);
            else if(T_qint64 == n)                           l_ret = ecl_make_integer(*(qint64*)p);
            else if(T_quint8 == n)                           l_ret = ecl_make_unsigned_integer(*(quint8*)p);
            else if(T_quint16 == n)                          l_ret = ecl_make_unsigned_integer(*(quint16*)p);
            else if(T_quint32 == n)                          l_ret = ecl_make_unsigned_integer(*(quint32*)p);
            else if(T_quint64 == n)                          l_ret = ecl_make_unsigned_integer(*(quint64*)p);
            // module types
            else {
                bool found = false;
                if(LObjects::to_lisp_arg_help) {
                    l_ret = LObjects::to_lisp_arg_help(n, p, &found); }
                if(!found && LObjects::to_lisp_arg_multimedia) {
                    l_ret = LObjects::to_lisp_arg_multimedia(n, p, &found); }
                if(!found && LObjects::to_lisp_arg_network) {
                    l_ret = LObjects::to_lisp_arg_network(n, p, &found); }
                if(!found && LObjects::to_lisp_arg_quick) {
                    l_ret = LObjects::to_lisp_arg_quick(n, p, &found); }
                if(!found && LObjects::to_lisp_arg_sql) {
                    l_ret = LObjects::to_lisp_arg_sql(n, p, &found); }
                if(!found && LObjects::to_lisp_arg_webkit) {
                    l_ret = LObjects::to_lisp_arg_webkit(n, p, &found); }
                // enum
                if(!found) {
                    if(!sType.endsWith('>') && sType.contains(':')) {
                    int* i = (int*)p;
                    l_ret = ecl_make_integer(*i); }}}}}
    return l_ret; }

static void clearMetaArg(const MetaArg& arg, bool is_ret = false) {
    void* p = arg.second;
    QByteArray sType(arg.first);
    const int n = QMetaType::type(sType);
    // catch all exceptions first
    if(T_bool_ok_pointer == n) {
        delete (void**)p; }
    else if(sType.endsWith('*')) {
        if("const char*" == sType) {
            if(!is_ret && !_cstring_buffer_.isEmpty()) {
                _cstring_buffer_.removeLast(); }
            delete (char**)p; }
        else {
            delete (void**)p; }}
    // enums
    else if(!sType.endsWith('>') && sType.contains(':')) {
        delete (int*)p; }
    // default
    else {
        QMetaType::destroy(n, p); }}

static void clearMetaArgList(const MetaArgList& args) {
    MetaArgIterator it(args);
    it.toBack();
    while(it.hasPrevious()) {
        clearMetaArg(it.previous()); }}

static MetaArg retArg(const QByteArray& name) {
    void* p = 0;
    MetaArg ret(name, p);
    if(name.endsWith('*')) {
        if("const char*" == name) {
            p = new char**; }
        else {
            p = new void**; }}
    else {
        p = QMetaType::create(QMetaType::type(name)); }
    ret.second = p;
    return ret; }



// *** meta info ***

static StrList metaInfo(const QByteArray& type, const QByteArray& qclass, const QByteArray& search,
                        bool non, const QMetaObject* mo) {
    StrList info;
    if("methods" == type) {
        if(!mo) {
            mo = methodMetaObjectFromName(qclass, !non); }
        if(mo) {
            for(int i = mo->methodOffset(); i < mo->methodCount(); ++i) {
                QMetaMethod mm(mo->method(i));
                if(mm.methodType() == QMetaMethod::Method) {
                    QString sig(mm.methodSignature());
                    bool constructor = sig.startsWith('C');
                    QString ret;
                    if(constructor) {
                        sig = qclass + "(" + sig.mid(sig.contains(',') ? 7 : 6);
                        ret = "constructor"; }
                    else {
                        ret = mm.typeName();
                        if(ret.isEmpty()) {
                            ret = "void"; }}
                    ret.append(" ");
                    if(!sig.startsWith("_q_")) {
                        bool _static = false;
                        if(sig.startsWith('M')) {
                            sig = sig.mid(1); }
                        else if(sig.startsWith('S')) {
                            _static = true;
                            sig = sig.mid(1); }
                        QString name(ret + sig + (_static ? " static" : ""));
                        if(!_static && !constructor) {
                            QByteArray rm('(' + qclass + '*');
                            if(mm.parameterNames().size() > 1) {
                                rm.append(','); }
                            name.replace(rm, "("); }
                        if(name.contains(search, Qt::CaseInsensitive)) {
                            info << name.toLatin1(); }}}}}}
    else if("override" == type) {
        Q_FOREACH(QByteArray name, LObjects::overrideFunctions(qclass)) {
            if(QString(name).contains(search, Qt::CaseInsensitive)) {
                info << name; }}}
    else if(!non) {
        if(!mo) {
            mo = LObjects::staticMetaObject(qclass); }
        if(mo) {
            if("properties" == type) {
                for(int i = mo->propertyOffset(); i < mo->propertyCount(); ++i) {
                    QMetaProperty mp(mo->property(i));
                    QString name = QString("%1 %2%3")
                                   .arg(mp.typeName())
                                   .arg(mp.name())
                                   .arg(mp.isWritable() ? "" : " const");
                    if(name.contains(search, Qt::CaseInsensitive)) {
                        info << name.toLatin1(); }}}
            else {
                int _type = ("signals" == type) ? QMetaMethod::Signal : QMetaMethod::Slot;
                for(int i = mo->methodOffset(); i < mo->methodCount(); ++i) {
                    QMetaMethod mm(mo->method(i));
                    if(mm.methodType() == _type) {
                        QString ret(mm.typeName());
                        if(ret.isEmpty()) {
                            ret = "void"; }
                        QString sig(mm.methodSignature());
                        if(!sig.startsWith("_q_")) {
                            QString name(QString("%1 %2").arg(ret).arg(sig));
                            if(name.contains(search, Qt::CaseInsensitive)) {
                                info << name.toLatin1(); }}}}}}}
    return info; }

static bool metaInfoLessThan(const QByteArray& s1, const QString& s2) {
    if(s1.contains('(')) {
        return s1.mid(1 + s1.lastIndexOf(' ', s1.indexOf('('))) <
               s2.mid(1 + s2.lastIndexOf(' ', s2.indexOf('('))); }
    return s1.mid(1 + s1.indexOf(' ')) <
           s2.mid(1 + s2.indexOf(' ')); }

static cl_object collect_info(const QByteArray& type, const QByteArray& qclass, const QByteArray& qsearch,
                              bool non, bool* found, const QMetaObject* mo) {
    cl_object l_info = Cnil;
    StrList info = metaInfo(type, qclass, qsearch, non, mo);
    qSort(info.begin(), info.end(), metaInfoLessThan);
    if(info.size()) {
        *found = true;
        Q_FOREACH(QByteArray i, info) {
            l_info = CONS(STRING_COPY(i.constData()), l_info); }}
    l_info = cl_nreverse(l_info);
    return l_info; }

cl_object qapropos2(cl_object l_search, cl_object l_class, cl_object l_type) {
    /// args: (&optional search-string class-name)
    /// Finds all occurrencies of the given search string in the given object's meta information.<br>Constructors are listed under "Methods".<br>To list the user defined functions of external C++ classes (see Qt_EQL), pass the object instead of the class name.
    ///     (qapropos "html" "QTextEdit")
    ///     (qapropos nil "QWidget")
    ///     (qapropos)             
    ///     (qapropos '|toString|)   ; wrapper function symbol
    ///     (qapropos nil *qt-main*) ; see Qt_EQL (QObject derived C++ classes)
    ecl_process_env()->nvalues = 1;    
    QByteArray search;
    if(ECL_STRINGP(l_search)) {
        search = toCString(l_search); }
    bool all = (Cnil == l_type);
    bool q = all ? false : (Ct == cl_eql(q_keyword(), l_type));
    StrList classes;
    bool qt_eql = false;
    const QMetaObject* mo = 0;
    if(ECL_STRINGP(l_class)) {
        if(!classId(l_class)) {
            error_msg("QAPROPOS: class not found:", LIST1(l_class));
            return Cnil; }
        classes << toCString(l_class); }
    else if(Cnil == l_class) {
        if(all) {
            classes << LObjects::qNames;
            classes << LObjects::nNames;
            qSort(classes.begin(), classes.end()); }
        else {
            classes = q ? LObjects::qNames : LObjects::nNames; }}
    else {
        QtObject obj = toQtObject(l_class);
        if(obj.isQObject()) {
            if(obj.pointer) {
                qt_eql = true;
                mo = ((QObject*)obj.pointer)->metaObject();
                classes << QString("%1 : %2")
                        .arg(mo->className())
                        .arg(QString(obj.className()))
                        .toLatin1(); }}}
    cl_object l_docs = Cnil;
    Q_FOREACH(QByteArray cl, classes) {
        bool found = false;
        bool non = LObjects::n_names.contains(cl);
        if(non || qt_eql || LObjects::q_names.contains(cl)) {
            cl_object l_doc_pro = Cnil;
            cl_object l_doc_slo = Cnil;
            cl_object l_doc_sig = Cnil;
            cl_object l_doc_ovr = Cnil;
            if(!non) {
                l_doc_pro = collect_info("properties", cl, search, non, &found, mo); }
            cl_object l_doc_met = collect_info("methods", cl, search, non, &found, mo);
            if(!non) {
                l_doc_slo = collect_info("slots", cl, search, non, &found, mo);
                l_doc_sig = collect_info("signals", cl, search, non, &found, mo); }
            l_doc_ovr = collect_info("override", cl, search, non, &found, mo);
            if(found) {
                cl_object l_doc = Cnil;
                if(l_doc_pro != Cnil) {
                    l_doc = CONS(CONS(STRING("Properties:"), l_doc_pro), l_doc); }
                if(l_doc_met != Cnil) {
                    l_doc = CONS(CONS(STRING("Methods:"), l_doc_met), l_doc); }
                if(l_doc_slo != Cnil) {
                    l_doc = CONS(CONS(STRING("Slots:"), l_doc_slo), l_doc); }
                if(l_doc_sig != Cnil) {
                    l_doc = CONS(CONS(STRING("Signals:"), l_doc_sig), l_doc); }
                if((l_doc_ovr != Cnil) && !qt_eql) {
                    l_doc = CONS(CONS(STRING("Override:"), l_doc_ovr), l_doc); }
                l_doc = cl_nreverse(l_doc);
                if(l_doc != Cnil) {
                    l_docs = CONS(CONS(STRING_COPY(cl.data()), l_doc), l_docs); }}}}
    cl_object l_ret = cl_nreverse(l_docs);
    return l_ret; }



// *** main functions ***

cl_object qnew_instance2(cl_object l_name, cl_object l_args) {
    /// args: (class-name &rest arguments/properties)
    /// alias: qnew
    /// Creates a new Qt object, optionally passing the given arguments to the constructor.<br>Additionally you can pass any number of property/value pairs.<br>Please note how you can abbreviate long type lists.
    ///     (qnew "QWidget")
    ///     (qnew "QPixmap(int,int)" 50 50)                                           ; providing constructor types
    ///     (qnew "QLabel" "text" "Readme")                                           ; set properties (any number); can be combined with above
    ///     (qnew "QMatrix4x4(qreal...)" 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4)             ; abbreviate long type lists
    ///     (qnew "QSizePolicy(...)" |QSizePolicy.Expanding| |QSizePolicy.Expanding|) ; will work if type unambiguous, and no properties are passed
    ecl_process_env()->nvalues = 1;
    static QHash<QByteArray, int> i_constructor;
    if(ECL_STRINGP(l_name)) {
        QByteArray name(QMetaObject::normalizedSignature(toCString(l_name)));
        QByteArray nameOnly(name);
        int p = name.indexOf('(');
        if(p != -1) {
            nameOnly = name.left(p); }
        int id = LObjects::q_names.value(nameOnly, 0);
        if(!id) {
            id = -LObjects::n_names.value(nameOnly, 0); }
        if(id) {
            QObject* caller = (id > 0) ? LObjects::Q[id - 1] : LObjects::N[-id - 1];
            if(caller) {
                const QMetaObject* mo = caller->metaObject();
                int method_i = i_constructor.value(name, -1);
                int len = LEN(l_args);
                if(method_i == -1) {
                    IntList method_list = findMethodIndex(Method, QByteArray("C(uint") + ((p == -1) ? ")" : ("," + name.mid(p + 1))), mo, len);
                    if(method_list.size()) {
                        method_i = method_list.at(0);
                        i_constructor[name] = method_i; }}
                if(method_i != -1) {
                    // qt_metacall to given constructor "C(uint...)"
                    QMetaMethod mm(mo->method(method_i));
                    StrList types(mm.parameterTypes());
                    if(len >= (types.length() - 1)) {
                        const int MAX_ARGS = 16;
                        //               r = return, u = unique
                        //               r  u  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16
                        void* args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                        void* pointer = 0;
                        args[0] = &pointer; // return value
                        uint unique = LObjects::unique();
                        args[1] = &unique;
                        MetaArgList mArgs;
                        cl_object l_do_args = l_args;
                        if(p != -1) {
                            for(int i = 0; (i < (types.length() - 1)) && (i < MAX_ARGS) && (l_do_args != Cnil); ++i) {
                                MetaArg m_arg(toMetaArg(types.at(i + 1), cl_car(l_do_args)));
                                args[i + 2] = m_arg.second;
                                mArgs << m_arg;
                                l_do_args = cl_cdr(l_do_args); }}
                        caller->qt_metacall(QMetaObject::InvokeMetaMethod, method_i, args);
                        clearMetaArgList(mArgs);
                        if(pointer) {
                            cl_object l_ret = new_qt_object(pointer, unique, id);
                            if(id > 0) { // QObject derived
                                QObject* obj = (QObject*)pointer;
                                if(obj->isWidgetType()) {
                                    obj->setProperty("EQL.unique", unique); }
                                while(l_do_args != Cnil) {
                                    qset_property(l_ret, cl_first(l_do_args), cl_second(l_do_args));
                                    l_do_args = cl_cddr(l_do_args); }}
                            return l_ret; }}}}}}
    error_msg("QNEW-INSTANCE", LIST2(l_name, l_args));
    return Cnil; }

cl_object qcopy(cl_object l_obj) {
    /// args: (object)
    /// Copies <code>object</code> using copy-on-write, if such a constructor is available (non QObject derived classes only).<br>This function is short for e.g: <code>(qnew "QPixmap(QPixmap)" pixmap)</code><br><br>Note that the returned value will not be garbage collected (analogous to <code>qnew</code>).
    ///     (qcopy pixmap) ; QPen, QBrush, QFont, QPalette, QPixmap, QImage...
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if(!o.isQObject()) {
        if(o.pointer) {
            // qt_metacall to constructor "C(uint,<object>)"
            QObject* caller = LObjects::N[-o.id - 1];
            const QMetaObject* mo = caller->metaObject();
            int n = mo->indexOfMethod(QByteArray("C(uint,") + o.className() + ")");
            if(n != -1) {
                void* args[] = { 0, 0, 0 };
                void* pointer = 0;
                args[0] = &pointer; // return value
                uint unique = LObjects::unique();
                args[1] = &unique;
                args[2] = o.pointer;
                caller->qt_metacall(QMetaObject::InvokeMetaMethod, n, args);
                if(pointer) {
                    cl_object l_ret = new_qt_object(pointer, unique, o.id);
                    return l_ret; }}}}
    error_msg("QCOPY", LIST1(l_obj));
    return Cnil; }

cl_object qset_gc(cl_object l_obj) {
    ecl_process_env()->nvalues = 1;
    _garbage_collection_ = (l_obj != Cnil);
    return l_obj; }

enum { GarbageCollection = 1 };

cl_object qdelete2(cl_object l_obj, cl_object l_later) {
    /// args: (object &optional later)
    /// alias: qdel
    /// Deletes any Qt object, and sets the <code>pointer</code> value to <code>0</code>. Deleting a widget deletes all its child widgets, too.<br>If <code>later</code> is not <code>NIL</code>, the function <code>QObject::deleteLater()</code> will be called instead (but note: the <code>object</code> pointer will be set to <code>0</code> immediately.)<br>Returns <code>T</code> if the object has effectively been deleted.<br><br>See also <code>qlet</code> for local Qt objects.
    ///     (qdel widget)
    ///     (qdel socket :later)
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if(o.pointer) {
        bool ok = false;
        STATIC_SYMBOL_PKG (s_qt_object_finalize, "QT-OBJECT-FINALIZE", "EQL")
        if(cl_funcall(2, s_qt_object_finalize, l_obj) != Cnil) {
            if(_garbage_collection_) {
                if(o.isQObject()) {
                    QObject* obj = (QObject*)o.pointer;
                    delete obj; }
                else {
                    LObjects::deleteNObject(-o.id, o.pointer, GarbageCollection); }
                ok = true; }
            else {
                return Cnil; }}
        else {
            if(o.isQObject()) {
                QObject* obj = (QObject*)o.pointer;
                if(Cnil == l_later) {
                    delete obj; }
                else {
                    obj->deleteLater(); }}
            else {
                LObjects::deleteNObject(-o.id, o.pointer); }
            ok = true; }
        if(ok) {
            STATIC_SYMBOL_PKG (s_qset_null, "QSET-NULL", "EQL")
            cl_funcall(2, s_qset_null, l_obj);
            return Ct; }}
    // no error message (unintentional multiple deletion)
    return Cnil; }

cl_object qproperty(cl_object l_obj, cl_object l_name) {
    /// args: (object name)
    /// alias: qget
    /// Gets a Qt property. Enumerator values are returned as <code>int</code> values.<br>Returns <code>T</code> as second return value for successful calls.
    ///     (qget label "text")
    QtObject o = toQtObject(l_obj);
    if(ECL_STRINGP(l_name)) {
        if(o.isQObject() && o.pointer) {
            const QMetaObject* mo = ((QObject*)o.pointer)->metaObject();
            int n = mo->indexOfProperty(toCString(l_name));
            if(n != -1) {
                QMetaProperty mp(mo->property(n));
                QVariant var(mp.read((QObject*)o.pointer));
                const cl_env_ptr l_env = ecl_process_env();
                l_env->nvalues = 2;
                bool return_value_p = EQL::return_value_p;
                EQL::return_value_p = true;
                l_env->values[0] = from_qvariant_value(var);
                EQL::return_value_p = return_value_p;
                l_env->values[1] = Ct;
                return l_env->values[0]; }}}
    ecl_process_env()->nvalues = 1;
    error_msg("QPROPERTY", LIST2(l_obj, l_name));
    return Cnil; }

cl_object qset_property(cl_object l_obj, cl_object l_name, cl_object l_val) {
    /// args: (object name value)
    /// alias: qset
    /// Sets a Qt property. Enumerators have to be passed as <code>int</code> values.<br>Returns <code>T</code> as second return value for successful calls.
    ///     (qset label "alignment" |Qt.AlignCenter|)
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if(ECL_STRINGP(l_name)) {
        if(o.isQObject() && o.pointer) {
            const QMetaObject* mo = ((QObject*)o.pointer)->metaObject();
            int n = mo->indexOfProperty(toCString(l_name));
            if(n != -1) {
                QMetaProperty mp(mo->property(n));
                QVariant var;
                if(mp.isEnumType()) {
                    var = toInt(l_val); }
                else {
                    var = toQVariant(l_val, mp.typeName()); }
                if(mp.write((QObject*)o.pointer, var)) {
                    const cl_env_ptr l_env = ecl_process_env();
                    l_env->nvalues = 2;
                    l_env->values[0] = l_val;
                    l_env->values[1] = Ct;
                    return l_env->values[0]; }}}}
    error_msg("QSET-PROPERTY", LIST3(l_obj, l_name, l_val));
    return Cnil; }

cl_object qvariant_value(cl_object l_obj) {
    /// args: (object)
    /// Returns the Lisp value of the <code>QVariant</code> object.
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    if("QVariant" == o.className() && o.pointer) {
        QVariant* p = (QVariant*)o.pointer;
        bool return_value_p = EQL::return_value_p;
        EQL::return_value_p = true;
        cl_object l_ret = from_qvariant_value(*p);
        EQL::return_value_p = return_value_p;
        return l_ret; }
    error_msg("QVARIANT-VALUE", LIST1(l_obj));
    return Cnil; }

cl_object qvariant_from_value(cl_object l_val, cl_object l_type) {
    /// args: (value type-name)
    /// Constructs a new <code>QVariant</code>. This is needed for types that don't have a direct constructor, like <code>QPixmap</code>, or primitive types, like <code>QSize</code>.
    ///     (qvariant-from-value "red" "QColor")
    ecl_process_env()->nvalues = 1;
    QByteArray typeName(toCString(l_type));
    if(!typeName.isEmpty()) {
        bool ok = true;
        QVariant var(toQVariant(l_val, typeName, -1, &ok));
        if(ok) {
            QVariant* p = new QVariant(var);
            cl_object l_ret = Cnil;
            if(EQL::return_value_p) {
                l_ret = qt_object_from_name("QVariant", p, 0, true); } // GC
            else {
                l_ret = qt_object_from_name("QVariant", p); }
            return l_ret; }}
    error_msg("QVARIANT-FROM-VALUE", LIST2(l_val, l_type));
    return Cnil; }

cl_object qinvoke_method2(cl_object l_obj, cl_object l_cast, cl_object l_name, cl_object l_args) {
    /// args: (object function-name &rest arguments)
    /// alias: qfun
    /// Calls any of Qt methods, slots, signals. Static methods can be called by passing the string name of an object.<br><br>The most convenient way of calling Qt methods is to use the wrapper functions (see alternative 2 below), which allows for tab completion, showing all possible candidates in case of ambiguous type lists (overloaded methods). Additionally, static functions are shown as one symbol (easily catching the eye).<br><br>(Optionally you can pass the argument types (as for <code>qconnect</code> and <code>qoverride</code>), which may result in better performance, but only in some edge cases.)
    ///     (qfun item "setText" 0 "Some objects are EQL.")
    ///     (qfun "QDateTime" "currentDateTime")            ; static method
    ///     (qfun slider "valueChanged" 10)                 ; emit signal
    ///     
    ///     ;; alternative 1: (macro '!')
    ///     
    ///     (! "setText" item 0 "Some objects are EQL.")
    ///     (! "currentDateTime" "QDateTime")
    ///     (! "valueChanged" slider 10)
    ///     
    ///     ;; alternative 2: (wrapper functions)
    ///     
    ///     (|setText| item 0 "Some objects are EQL.")
    ///     (|currentDateTime.QDateTime|)
    ///     (|valueChanged| slider 10)
    static QHash<QByteArray, IntList> i_slot;
    static QHash<QByteArray, IntList> i_method;
    if((l_obj != Cnil) && ECL_STRINGP(l_name)) {
        bool qobject_align = false;
        bool qt_eql = false;
        QByteArray castClass;
        if(l_cast != Cnil) {
            if(ECL_STRINGP(l_cast)) {
                castClass = toCString(l_cast); }
            else if(cl_eql(qt_keyword(), l_cast)) {
                qt_eql = true; }}
        QtObject obj = toQtObject(l_obj, qt_eql ? Cnil : l_cast, &qobject_align);
        IntList method_i;
        if(obj.id) {
            QByteArray name(QMetaObject::normalizedSignature(toCString(l_name)));
            int len_args = LEN(l_args);
            QByteArray cacheName((castClass.isEmpty()
                                  ? (qt_eql
                                     ? QByteArray(obj.pointer ? ((QObject*)obj.pointer)->metaObject()->className() : "Qt")
                                     : obj.className())
                                  : castClass)
                                 + '_' + name + char('A' + len_args));
            bool method = false;
            const QMetaObject* mo = 0;
            method_i = i_slot.value(cacheName);
            if(method_i.size()) {
                mo = staticMetaObject(obj); }
            else {
                method_i = i_method.value(cacheName);
                if(method_i.size()) {
                    if(qt_eql) {
                        if(obj.pointer) {
                            mo = ((QObject*)obj.pointer)->metaObject(); }}
                    else {
                        method = true;
                        mo = methodMetaObject(obj); }}}
            if(method_i.isEmpty()) {
                if(qt_eql) {
                    if(obj.pointer) {
                        mo = ((QObject*)obj.pointer)->metaObject();
                        method_i = findMethodIndex(Qt_EQL, name, mo, len_args); }}
                else {
                    mo = staticMetaObject(obj);
                    if(castClass.isEmpty() && obj.isQObject()) {
                        method_i = findMethodIndex(SignalOrSlot, name, mo, len_args); }
                    if(method_i.isEmpty()) {
                        method = true;
                        int p = name.indexOf('(');
                        if(p == -1) {
                            p = name.length();
                            name.append('('); }
                        if(obj.isStatic()) {
                            mo = methodMetaObject(obj);
                            // static methods start with 'S'
                            method_i = findMethodIndex(Static, QByteArray("S") + name.left(p + 1) + name.mid(p + 1), mo, len_args); }
                        else {
                            QString sep;
                            if(len_args) {
                                sep = ","; }
                            // ordinary methods start with 'M'
                            QString _name("M" + name.left(p + 1) + "%1*" + sep + name.mid(p + 1));
                            if(castClass.isEmpty()) {
                                const QMetaObject* _mo = mo;
                                mo = methodMetaObject(obj);
                                if(obj.isQObject()) {
                                    do {
                                        method_i = findMethodIndex(Method, _name.arg(_mo->className()).toLatin1(), mo, len_args);
                                        if(method_i.size()) {
                                            break; }
                                        _mo = _mo->superClass();
                                        mo = mo->superClass(); }
                                    while(mo && _mo); }
                                else {
                                    const char* _class = obj.className().constData();
                                    do {
                                        method_i = findMethodIndex(Method, _name.arg(_class).toLatin1(), mo, len_args);
                                        if(method_i.size()) {
                                            break; }
                                        _class = LObjects::nObjectSuperClass(_class);
                                        mo = mo->superClass(); }
                                    while(_class && mo); }}
                            else {
                                // very rare need of cast, see QFUN* for examples
                                mo = methodMetaObject(obj);
                                method_i = findMethodIndex(Method, _name.arg(castClass.constData()).toLatin1(), mo, len_args); }}}}
                if(method_i.size()) {
                    if(method || qt_eql) {
                        i_method[cacheName] = method_i; }
                    else {
                        i_slot[cacheName] = method_i; }}}
            if(mo && method_i.size()) {
                // qt_metacall
                int method_index = method_i.at(0);
                QMetaMethod mm(mo->method(method_index));
                StrList types(mm.parameterTypes());
                bool this_arg = method && !obj.isStatic();
                cl_object l_do_args = l_args;
                if((types.length() - (this_arg ? 1 : 0)) == len_args) {
                    const int MAX_ARGS = 10;
                    //               r = return, o = object
                    //               r  o  1  2  3  4  5  6  7  8  9 10
                    void* args[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                    MetaArgList mArgs;
                    int i = -1;
                    void* _this = 0;
                    if(this_arg) {
                        quintptr l = (quintptr)obj.pointer;
                        if(qobject_align) {
                            // cast from QObject to non QObject + multiple inheritance problem
                            l += sizeof(QObject); }
                        _this = (void*)l;
                        args[++i + 1] = &_this; }
                    bool types_ok = true;
                    int i_start = i;
                    int already_checked = -1;
                    // type ambiguity (same number of arguments): find method for matching type list
                    if(method_i.size() > 1) {
                        // verify if first option already matches, since latest matching option will be put
                        // in front of the list (auto-optimization of inner loops)
                        int m1 = method_i.at(0);
                        StrList types1(mo->method(m1).parameterTypes());
                        while((l_do_args != Cnil) && (i < MAX_ARGS)) {
                            ++i;
                            QByteArray curr(types1.at(i));
                            if(curr.endsWith('*')) {
                                curr.truncate(curr.length() - 1); }
                            QByteArray typeName(qtObjectName(cl_car(l_do_args), curr));
                            bool match = (inherits(typeName, curr) ||
                                         ((curr == "int") ? (typeName == "int") : typeName.contains(curr)) ||
                                         (curr.contains("::") && (typeName == "int")) ||
                                         (curr.contains("QList") && typeName.contains("QList")) ||
                                         (curr.contains("QVector") && typeName.contains("QVector")));
                            if(!match) {
                                goto ok1; }
                            l_do_args = cl_cdr(l_do_args); }
                        goto ok3;
ok1:
                        i = i_start;
                        l_do_args = l_args;
                        IntList method_i_orig = method_i;
                        while((l_do_args != Cnil) && (i < MAX_ARGS)) {
                            ++i;
                            cl_object l_arg = cl_car(l_do_args);
                            QByteArray typeName(qtObjectName(l_arg));
                            IntList matches; 
                            Q_FOREACH(int mi, method_i) {
                                StrList types_i(mo->method(mi).parameterTypes());
                                QByteArray curr(types_i.at(i));
                                if(curr.endsWith('*')) {
                                    curr.truncate(curr.length() - 1); }
                                if(inherits(typeName, curr) ||
                                   ((curr == "int") ? (typeName == "int") : typeName.contains(curr)) ||
                                   (curr.contains("::") && (typeName == "int")) ||
                                   (curr.contains("QList") && typeName.contains("QList")) ||
                                   (curr.contains("QVector") && typeName.contains("QVector"))) {
                                    matches << mi;
                                    method_index = mi;
                                    mm = mo->method(method_index);
                                    types = types_i;
                                    if(types.size() == (i + 1)) { // last argument
                                        goto ok2; }}}
                            if(matches.size() == 1) {
                                goto ok2; }
                            else if(matches.size() > 1) {
                                method_i = matches; }
                            l_do_args = cl_cdr(l_do_args); }
ok2:
                        // put method_index in front (optimization for repeated calls)
                        method_i = method_i_orig;
                        method_i.removeOne(method_index);
                        method_i.prepend(method_index);
                        if(method || qt_eql) {
                            i_method[cacheName] = method_i; }
                        else {
                            i_slot[cacheName] = method_i; }}
ok3:
                    l_do_args = l_args;
                    already_checked = i;
                    i = i_start;
                    while((l_do_args != Cnil) && (i < MAX_ARGS)) {
                        ++i;
                        cl_object l_arg = cl_car(l_do_args);
                        // type check
                        if(_check_argument_types_ && (i > already_checked)) {
                            if((l_arg != Cnil) &&
                               (types.at(i).startsWith('Q')) &&
                               !types.at(i).contains(':') &&
                               !types.at(i).endsWith('>')) {
                                if(!strstr("QByteArray QChar QColor QGradientStop QLineF QPointF QPolygonF QRectF QRgb QSizeF QStringList", // primitives
                                           types.at(i))) {
                                    if(types.at(i) != "QVariantList") { // special case
                                        QByteArray name1(types.at(i));
                                        if(name1.endsWith('*')) {
                                            name1.truncate(name1.length() - 1); }
                                        QByteArray name2(qtObjectName(l_arg, name1));
                                        if(!inherits(name2, name1)) {
                                            type_msg(name1, name2);
                                            types_ok = false;
                                            break; }}}}}
                        MetaArg m_arg(toMetaArg(types.at(i), l_arg));
                        args[i + 1] = m_arg.second;
                        mArgs << m_arg;
                        l_do_args = cl_cdr(l_do_args); }
                    if(types_ok) {
                        MetaArg ret(retArg(mm.typeName()));
                        args[0] = ret.second; // return value
                        QObject* caller = 0;
                        if(method) {
                            caller = obj.isQObject() ? LObjects::Q[obj.id - 1] : LObjects::N[-obj.id - 1]; }
                        else {
                            caller = obj.isQObject() ? (QObject*)obj.pointer : 0; }
                        if(caller) {
                            caller->qt_metacall(QMetaObject::InvokeMetaMethod, method_index, args);
                            clearMetaArgList(mArgs);
                            cl_object l_ret = Cnil;
                            if(ret.second) {
                                bool return_value_p = EQL::return_value_p;
                                EQL::return_value_p = true;
                                l_ret = to_lisp_arg(ret);
                                EQL::return_value_p = return_value_p;
                                clearMetaArg(ret, true); }
                            const cl_env_ptr l_env = ecl_process_env();
                            l_env->nvalues = 2;
                            l_env->values[0] = l_ret;
                            l_env->values[1] = Ct;
                            return l_env->values[0]; }
                        else {
                            clearMetaArgList(mArgs); }}}}}}
    ecl_process_env()->nvalues = 1;
    error_msg("QINVOKE-METHOD", LIST4(l_obj, l_cast, l_name, l_args));
    return Cnil; }

static void* ensurePersistentFunction(cl_object l_fun) {
    STATIC_SYMBOL_PKG (s_ensure_persistent_function, "%ENSURE-PERSISTENT-FUNCTION", "EQL") // see "lisp/ini.lisp"
    cl_object l_ret = cl_funcall(2, s_ensure_persistent_function, l_fun);
    return (Cnil == l_ret) ? 0 : (void*)l_ret; }

cl_object qconnect2(cl_object l_caller, cl_object l_signal, cl_object l_receiver, cl_object l_slot) {
    /// args: (caller signal receiver/function &optional slot)
    /// Connects either a Qt signal to a Qt slot, or a Qt signal to a Lisp function.
    ///     (qconnect edit "textChanged(QString)" label "setText(QString)")
    ///     (qconnect edit "textChanged(QString)" (lambda (txt) (print txt)))
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_signal)) {
        QtObject o1 = toQtObject(l_caller);
        if(o1.isQObject() && o1.pointer) {
            QByteArray signal(QMetaObject::normalizedSignature(toCString(l_signal)));
            if(ECL_STRINGP(l_slot)) {
                QtObject o2 = toQtObject(l_receiver);
                if(o2.isQObject() && o2.pointer) {
                    QByteArray slot(QMetaObject::normalizedSignature(toCString(l_slot)));
                    if(QMetaObject::checkConnectArgs(signal, slot)) {
                        if(QObject::connect((QObject*)o1.pointer, SIG + signal, (QObject*)o2.pointer, SLO + slot)) {
                            return Ct; }}}}
            else if(Cnil == l_slot) {
                void* fun = ensurePersistentFunction(l_receiver);
                if(fun) {
                    QObject* object = (QObject*)o1.pointer;
                    if(DynObject::connect(object, SIG + signal, LObjects::dynObject, fun)) {
                        // when object gets deleted, remove all Lisp connections
                        QObject::connect(object, QSIGNAL(destroyed(QObject*)),
                                         LObjects::eql, QSLOT(removeConnections(QObject*)));
                        return Ct; }}}}}
    error_msg("QCONNECT", LIST4(l_caller, l_signal, l_receiver, l_slot));
    return Cnil; }

cl_object qdisconnect2(cl_object l_caller, cl_object l_signal, cl_object l_receiver, cl_object l_slot) {
    /// args: (caller &optional signal receiver/function slot)
    /// Disconnects signals to either Qt slots or Lisp functions. Anything but the caller can be either <code>NIL</code> or omitted.<br>Returns <code>T</code> if something has effectively been disconnected.
    ///     (qdisconnect edit "textChanged(QString)" label "setText(QString)")
    ///     (qdisconnect edit "textChanged(QString)")
    ///     (qdisconnect edit nil label)
    ///     (qdisconnect edit)
    ecl_process_env()->nvalues = 1;
    QtObject o1 = toQtObject(l_caller);
    if(o1.isQObject() && o1.pointer) {
        QtObject o2 = toQtObject(l_receiver, Cnil, 0, true); // quiet
        QByteArray signal(toCString(l_signal));
        QByteArray slot(toCString(l_slot));
        if(!signal.isEmpty()) {
            signal = QMetaObject::normalizedSignature(signal);
            signal.prepend(SIG); }
        if(!slot.isEmpty()) {
            slot = QMetaObject::normalizedSignature(slot);
            slot.prepend(SLO); }
        bool disconnected = false;
        bool null_receiver = (l_receiver == Cnil);
        if(null_receiver || o2.isQObject()) {
            if(QObject::disconnect((QObject*)o1.pointer,
                                   signal.isEmpty() ? 0: signal.constData(),
                                   o2.isQObject() ? (QObject*)o2.pointer : 0,
                                   slot.isEmpty() ? 0 : slot.constData())) {
                disconnected = true; }}
        if(null_receiver || !o2.isQObject()) {
            if(DynObject::disconnect((QObject*)o1.pointer,
                                     signal.isEmpty() ? 0 : signal.constData(),
                                     LObjects::dynObject,
                                     l_receiver)) {
                disconnected = true; }}
        return disconnected ? Ct : Cnil; }
    error_msg("QDISCONNECT", LIST4(l_caller, l_signal, l_receiver, l_slot));
    return Cnil; }

cl_object qsender() {
    /// args: ()
    /// Corresponding to <code>QObject::sender()</code>. To use inside a Lisp function connected to a Qt signal.
    ecl_process_env()->nvalues = 1;
    QObject* curr = DynObject::currentSender;
    if(curr) {
        cl_object l_ret = qt_object_from_name(curr->metaObject()->className(),
                                              curr,
                                              curr->property("EQL.unique").toUInt());
        return l_ret; }
    error_msg("QSENDER", Cnil);
    return Cnil; }

static cl_object call_lisp_fun(cl_object l_fun, cl_object l_args, quint64 override_id = 0) {
    cl_object l_ret = Cnil;
    const cl_env_ptr l_env = ecl_process_env();
    if(override_id) {
        LObjects::callingList.append(override_id);
        LObjects::calling = override_id; }
    CL_CATCH_ALL_BEGIN(l_env) {
        CL_UNWIND_PROTECT_BEGIN(l_env) {
            l_ret = cl_apply(2, l_fun, l_args); }
        CL_UNWIND_PROTECT_EXIT {
            if(override_id) {
                LObjects::callingList.removeLast();
                LObjects::calling = LObjects::callingList.isEmpty() ? 0 : LObjects::callingList.last(); }}
        CL_UNWIND_PROTECT_END; }
    CL_CATCH_ALL_END;
    return l_ret; }

void callConnectFun(void* fun, const StrList& types, void** args) {
    int i = 0;
    cl_object l_args = Cnil;
    Q_FOREACH(QByteArray type, types) {
        l_args = CONS(to_lisp_arg(MetaArg(type, args[++i])), l_args); }
    call_lisp_fun((cl_object)fun, cl_nreverse(l_args)); }

cl_object qoverride(cl_object l_obj, cl_object l_name, cl_object l_fun) {
    /// args: (object name function)
    /// Sets a Lisp function to be called on a virtual Qt method.<br>To remove a function, pass <code>NIL</code> instead of the function argument.<br><br>If you call <code>qcall-default</code> anywhere inside your overridden function, the base implementation will be called <b>afterwards</b>.<br>Instead of <code>qcall-default</code> you can directly call the base implementation, which is useful if you want to do post-processing of the returned value.
    ///     (qoverride edit "keyPressEvent(QKeyEvent*)" (lambda (ev) (print (|key| ev)) (qcall-default)))
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    void* fun = (Cnil == l_fun) ? 0 : ensurePersistentFunction(l_fun);
    if(o.pointer) {
        QByteArray name(QMetaObject::normalizedSignature(toCString(l_name)));
        uint id = LObjects::override_function_ids.value(name, 0);
        if(id) {
            LObjects::setOverrideFun(LObjects::override_id(o.unique, id), fun);
            return Ct; }}
    error_msg("QOVERRIDE", LIST3(l_obj, l_name, l_fun));
    return Cnil; }

cl_object qcall_default() {
    /// args: ()
    /// To use anywhere inside an overridden function (see <code>qoverride</code>).<br>Calls the base implementation of the virtual Qt method <b>after</b> leaving the function body.<br><br>Optionally call the base implementation directly (if you want to do post-processing of the return value).
    ecl_process_env()->nvalues = 1;
    LObjects::call_default = true;
    return Ct; }

QVariant callOverrideFun(void* fun, int id, const void** args, quint64 override_id) {
    STATIC_SYMBOL_PKG (s_qt_object_p,       "QT-OBJECT-P",       "EQL")
    STATIC_SYMBOL_PKG (s_qt_object_pointer, "QT-OBJECT-POINTER", "EQL")
    int n = id - 1;
    int i = 0;
    const char* arg_type = 0;
    cl_object l_args = Cnil;
    while((arg_type = LObjects::override_arg_types[n][i + 1])) {
        l_args = CONS(to_lisp_arg(MetaArg(arg_type, (void*)args[i])), l_args);
        ++i; }
    LObjects::call_default = false; // see qcall_default()
    bool return_value_p = EQL::return_value_p;
    EQL::return_value_p = true;
    cl_object l_ret = call_lisp_fun((cl_object)fun, cl_nreverse(l_args), override_id);
    EQL::return_value_p = return_value_p;
    QVariant ret;
    const char* ret_type = LObjects::override_arg_types[n][0];
    if(ret_type) {
        QByteArray retType(ret_type);
        void* pointer = 0;
        if(cl_funcall(2, s_qt_object_p, l_ret) == Ct) {
            pointer = (void*)fixnnint(cl_funcall(2, s_qt_object_pointer, l_ret)); }
        if(retType.startsWith('Q') && retType.endsWith('*')) {
            ret.setValue(pointer); }
        else {
            const int type = QMetaType::type(ret_type);
            if(type == QMetaType::QVariant)               ret = *(QVariant*)pointer;
            else if(type == T_QFileInfo)                  ret.setValue(*(QFileInfo*)pointer);
            else if(type == T_QHash_int_QByteArray)       ret.setValue(toQHashIntQByteArray(l_ret));
            else if(type == T_QModelIndex)                ret.setValue(*(QModelIndex*)pointer);
            else if(type == T_QPainterPath)               ret.setValue(*(QPainterPath*)pointer);
            else if(type == T_QTableWidgetSelectionRange) ret.setValue(*(QTableWidgetSelectionRange*)pointer);
            else if(type == T_QTextBlock)                 ret.setValue(*(QTextBlock*)pointer);
            else if(type == T_QTextCharFormat)            ret.setValue(*(QTextCharFormat*)pointer);
            else if(type == T_QTextCursor)                ret.setValue(*(QTextCursor*)pointer);
            else if(type == T_QTextDocumentFragment)      ret.setValue(*(QTextDocumentFragment*)pointer);
            else if(type == T_QTextOption)                ret.setValue(*(QTextOption*)pointer);
            else                                          ret = toQVariant(l_ret, 0, type); }}
    return ret; }

cl_object qadd_event_filter(cl_object l_obj, cl_object l_ev, cl_object l_fun) {
    /// args: (object event function)
    /// Convenience function. Adds a Lisp function to be called on a given event type.<br>If the object argument is <code>NIL</code>, the event will be captured for the whole application.<br>If the Lisp function returns <code>NIL</code>, the event will be processed by Qt afterwards.<br><br>Returns a handle which can be used to remove the filter, see <code>qremove-event-filter</code>.<br><br>See also <code>qoverride</code> for <code>QObject::eventFilter(QObject*,QEvent*)</code> and <br><code>QObject::installEventFilter(QObject*)</code>,<br><code>QObject::removeEventFilter(QObject*)</code>.<br><br>The event class corresponds to the respective event type (no cast needed).
    ///     (qadd-event-filter nil |QEvent.MouseButtonPress| (lambda (object mouse-event) (print object) nil))
    ecl_process_env()->nvalues = 1;
    void* fun = ensurePersistentFunction(l_fun);
    if(fun) {
        QObject* obj = 0;
        if(l_obj != Cnil) {
            QtObject o = toQtObject(l_obj);
            if(o.isQObject()) {
                obj = (QObject*)o.pointer; }}
        int id = LObjects::dynObject->addEventFilter(obj, toInt(l_ev), fun);
        cl_object l_id = ecl_make_integer(id);
        return l_id; }
    error_msg("QADD-EVENT-FILTER", LIST3(l_obj, l_ev, l_fun));
    return Cnil; }

cl_object qremove_event_filter(cl_object l_handle) {
    /// args: (handle)
    /// Removes the event filter corresponding to <code>handle</code>, which is the return value of <code>qadd-event-filter</code>.<br>Returns <code>handle</code> if the event filter has effectively been removed.<br>See also <code>qclear-event-filters</code>.
    ecl_process_env()->nvalues = 1;
    if(cl_integerp(l_handle) == Ct) {
        return LObjects::dynObject->removeEventFilter(toInt(l_handle)) ? l_handle : Cnil; }
    error_msg("QREMOVE-EVENT-FILTER", LIST1(l_handle));
    return Cnil; }

bool callEventFun(void* fun, QObject* obj, QEvent* ev) {
    if(fun) {
        if(obj->objectName().endsWith("viewport")) {
            obj = obj->parent(); }
        return (call_lisp_fun((cl_object)fun,
                              LIST2(qt_object_from_name(obj->metaObject()->className(), (void*)obj),
                                    qt_object_from_name(eventName(ev->type()), (void*)ev)))
                != Cnil); }
    return true; }

cl_object qclear_event_filters() {
    /// args: ()
    /// Clears all added event filters.
    ecl_process_env()->nvalues = 1;
    LObjects::dynObject->clearEventFilters();
    return Ct; }

cl_object qrequire2(cl_object l_name, cl_object l_quiet) { /// qrequire
   /// args: (module &optional quiet)
   /// Loads an EQL module, corresponding to a Qt module.<br>Returns the module name if both loading and initializing have been successful.<br>If the <code>quiet</code> argument is not <code>NIL</code>, no error message will be shown on failure.<br><br>Currently available modules: <code>:help :multimedia :network :quick :sql :svg :webkit</code>
   ///     (qrequire :network)
    ecl_process_env()->nvalues = 1;
    QString name = symbolName(l_name);
    QString prefix, postfix;
#ifdef Q_OS_DARWIN
    prefix = "lib"; postfix = ".1.dylib";
#endif
#ifdef Q_OS_LINUX
    prefix = "lib"; postfix = ".so.1";
#endif
    QLibrary lib(prefix + "eql5_" + name + postfix); // global library
    typedef void (*Ini)();
    Ini ini = (Ini)lib.resolve("ini");
    if(ini) {
        ini();
        StaticMetaObject meta = (StaticMetaObject)lib.resolve("staticMetaObject");
        DeleteNObject del = (DeleteNObject)lib.resolve("deleteNObject");
        Override over = (Override)lib.resolve("overrideFunctions");
        if(meta && del && over) {
            if("svg" == name) {
                LObjects::staticMetaObject_svg = meta;
                LObjects::deleteNObject_svg = del;
                LObjects::override_svg = over;
                return l_name; }
            else {
                ToMetaArg metaArg = (ToMetaArg)lib.resolve("toMetaArg");
                To_lisp_arg lispArg = (To_lisp_arg)lib.resolve("to_lisp_arg");
                if(metaArg && lispArg) {
                    if("help" == name) {
                        LObjects::staticMetaObject_help = meta;
                        LObjects::deleteNObject_help = del;
                        LObjects::override_help = over;
                        LObjects::toMetaArg_help = metaArg;
                        LObjects::to_lisp_arg_help = lispArg;
                        return l_name; }
                    else if("multimedia" == name) {
                        LObjects::staticMetaObject_multimedia = meta;
                        LObjects::deleteNObject_multimedia = del;
                        LObjects::override_multimedia = over;
                        LObjects::toMetaArg_multimedia = metaArg;
                        LObjects::to_lisp_arg_multimedia = lispArg;
                        return l_name; }
                    else if("network" == name) {
                        LObjects::staticMetaObject_network = meta;
                        LObjects::deleteNObject_network = del;
                        LObjects::override_network = over;
                        LObjects::toMetaArg_network = metaArg;
                        LObjects::to_lisp_arg_network = lispArg;
                        return l_name; }
                    else if("quick" == name) {
                        LObjects::staticMetaObject_quick = meta;
                        LObjects::deleteNObject_quick = del;
                        LObjects::override_quick = over;
                        LObjects::toMetaArg_quick = metaArg;
                        LObjects::to_lisp_arg_quick = lispArg;
                        return l_name; }
                    else if("sql" == name) {
                        LObjects::staticMetaObject_sql = meta;
                        LObjects::deleteNObject_sql = del;
                        LObjects::override_sql = over;
                        LObjects::toMetaArg_sql = metaArg;
                        LObjects::to_lisp_arg_sql = lispArg;
                        return l_name; }
                    else if("webkit" == name) {
                        LObjects::staticMetaObject_webkit = meta;
                        LObjects::deleteNObject_webkit = del;
                        LObjects::override_webkit = over;
                        LObjects::toMetaArg_webkit = metaArg;
                        LObjects::to_lisp_arg_webkit = lispArg;
                        return l_name; }}}}}
    if(l_quiet == Cnil) {
        error_msg("QREQUIRE", LIST1(l_name)); }
    return Cnil; }

cl_object qload_cpp(cl_object l_lib_name, cl_object l_unload) { /// qload-c++
    /// args: (library-name &optional unload)
    /// Loads a custom Qt/C++ plugin (see <code>Qt_EQL/</code>).<br>The <code>library-name</code> has to be passed as path to the plugin, without file ending.<br><br>This offers a simple way to extend your application with your own Qt/C++ functions.<br>The plugin will be reloaded (if supported by the OS) every time you call this function (Linux: see also <code>qauto-reload-c++</code>).<br>If the <code>unload</code> argument is not <code>NIL</code>, the plugin will be unloaded (if supported by the OS).
    ///     (defparameter *c++* (qload-c++ "eql_cpp")) ; load (Linux: see also QAUTO-RELOAD-C++)
    ///     
    ///     (qapropos nil *c++*)                       ; documentation
    ///     
    ///     (! "mySpeedyQtFunction" (:qt *c++*))       ; call library function (see also DEFINE-QT-WRAPPERS)
    static QHash<QString, QLibrary*> libraries;
    QString libName = toQString(l_lib_name);
    bool unload = (l_unload != Cnil);
    if(!libName.isEmpty()) {
        if(!libName.contains('/')) {
            libName.prepend("./"); }
        QLibrary* lib = libraries.value(libName, 0);
        if(lib) {
            if(lib->isLoaded()) {
                lib->unload(); // for both unload/reload
                if(!unload) {
                    cl_sleep(ecl_make_singlefloat(0.5)); }}}
        if(unload) {
            ecl_process_env()->nvalues = 1;
            if(lib) {
                delete lib;
                libraries.remove(libName);
                return l_lib_name; }
            return Cnil; }
        if(!lib) {
            lib = new QLibrary(libName);
            libraries[libName] = lib; }
        typedef QObject* (*Ini)();
        Ini ini = (Ini)lib->resolve("ini");
        if(ini) {
            QObject* main = ini();
            if(main) {
                cl_object l_ret = qt_object_from_name(LObjects::vanillaQtSuperClassName(main->metaObject()),
                                                      main,
                                                      main->property("EQL.unique").toUInt());
                const cl_env_ptr l_env = ecl_process_env();
                l_env->nvalues = 2;
                l_env->values[0] = l_ret;
                // for QFileSystemWatcher (QAUTO-RELOAD-C++)
                QString fileName(lib->fileName());
                if(fileName.startsWith("./")) {
                    fileName.prepend(QDir::currentPath() + "/"); }
                l_env->values[1] = from_qstring(fileName);
                return l_ret; }}}
    ecl_process_env()->nvalues = 1;
    error_msg("QLOAD-C++", LIST2(l_lib_name, l_unload));
    return Cnil; }



// *** convenience functions ***

cl_object qtranslate(cl_object l_con, cl_object l_src, cl_object l_n) {
    ecl_process_env()->nvalues = 1;
    QByteArray context(toQString(l_con).toUtf8());
    QByteArray source(toQString(l_src).toUtf8());
    int n = toInt(l_n);
    cl_object l_ret;
    if(n == -1) {
        l_ret = from_qstring(QCoreApplication::translate(context, source)); }
    else {
        l_ret = from_qstring(QCoreApplication::translate(context, source, 0, n)); }
    return l_ret; }

cl_object qlocal8bit(cl_object l_str) {
    /// args: (string)
    /// Converts a Unicode pathname to a simple ECL base string, using <code>QString::toLocal8Bit()</code> (see <code>QLocale</code> settings).<br>Depending on the OS (namely Windows), this is necessary if you get a filename from Qt and want to use it in ECL.<br><br>See also <b>QUTF8</b>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_cstring(toQString(l_str).toLocal8Bit()); // returns 'ecl_simple_base_string', not Unicode
    return l_ret; }

cl_object qutf8(cl_object l_str) {
    /// args: (string)
    /// Converts a Unicode pathname to a simple ECL base string, using <code>QString::toUtf8()</code>.<br>Depending on the OS (namely OSX, Linux), this is necessary if you get a filename from Qt and want to use it in ECL.<br><br>See also <b>QLOCAL8BIT</b>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_cstring(toQString(l_str).toUtf8()); // returns 'ecl_simple_base_string', not Unicode
    return l_ret; }

cl_object qfrom_utf8(cl_object l_ba) {
    /// args: (byte-array)
    /// Returns the byte array (vector of octets) converted using <code>QString::fromUtf8()</code>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_qstring(QString::fromUtf8(toQByteArray(l_ba)));
    return l_ret; }

cl_object qescape(cl_object l_str) {
    /// args: (string)
    /// Calls <code>QString::toHtmlEscaped()</code>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = from_qstring(toQString(l_str).toHtmlEscaped());
    return l_ret; }

cl_object qt_object_name(cl_object l_obj) {
    /// args: (object)
    /// Returns the Qt class name.
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    cl_object l_ret = from_cstring(o.className());
    return l_ret; }

cl_object qt_object_x(cl_object l_obj) { /// qt-object-?
    /// args: (object)
    /// Returns the specific <code>qt-object</code> of a generic <code>qt-object</code>.<br>Works for QObject and QEvent inherited classes only.
    ///     (qt-object-? (|parentWidget| widget))
    ///     (qt-object-? (|widget| (|itemAt| box-layout 0)))
    ///     (qt-object-? event)
    ecl_process_env()->nvalues = 1;
    QtObject o = toQtObject(l_obj);
    cl_object l_ret = l_obj;
    if(o.pointer) {
        // QObject
        if(o.isQObject()) {
            QObject* obj = (QObject*)o.pointer;
            l_ret = qt_object_from_name(LObjects::vanillaQtSuperClassName(obj->metaObject()),
                                        obj,
                                        obj->property("EQL.unique").toUInt()); }
        // QEvent
        else if(o.id == -LObjects::n_names.value("QEvent")) {
            const char* name = eventName(((QEvent*)o.pointer)->type());
            if(name) {
                l_ret = qt_object_from_name(name, o.pointer, o.unique); }}}
    return l_ret; }

cl_object qobject_names2(cl_object l_type) {
    /// args: (&optional type)
    /// Returns all supported object names. Passing either <code>:q</code> or <code>:n</code> returns only the QObject inherited, or not QObject inherited names, respectively.
    ecl_process_env()->nvalues = 1;
    bool all = (Cnil == l_type);
    StrList names;
    if(all) {
        names << LObjects::qNames;
        names << LObjects::nNames;
        qSort(names.begin(), names.end()); }
    else {
        names = (Ct == cl_eql(q_keyword(), l_type)) ? LObjects::qNames : LObjects::nNames; }
    QStringList list;
    Q_FOREACH(QByteArray name, names) {
        list << QString(name); }
    cl_object l_ret = from_qstringlist(list);
    return l_ret; }

cl_object qenums2(cl_object l_class, cl_object l_name) {
    /// args: (class-name &optional enum-name)
    /// Returns the meta enum list of the given <code>class-name</code> and <code>enum-name</code> (see <code>Q_ENUMS</code> in Qt sources).<br>Omitting <code>enum-name</code> will return all meta enum lists  of the class/scope.
    ///     (qenums "QLineEdit" "EchoMode") ; gives '("QLineEdit" ("EchoMode" ("Normal" . 0) ...))
    ///     (qenums "Qt")
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_class)) {
        QByteArray className(toCString(l_class));
        QByteArray name(toCString(l_name));
        const QMetaObject* mo = ("Qt" == className) ? staticQtMetaObject : LObjects::staticMetaObject(className);
        if(mo) {
            cl_object l_enums = Cnil;
            for(int i = mo->enumeratorOffset(); i < mo->enumeratorCount(); ++i) {
                QMetaEnum me(mo->enumerator(i));
                if((l_name == Cnil) || (me.name() == name)) {
                    cl_object l_keys = LIST1(from_cstring(me.name()));
                    for(int j = 0; j < me.keyCount(); ++j) {
                        QByteArray key(me.key(j));
                        int val = (me.isFlag() ? me.keysToValue(key) : me.keyToValue(key));
                        l_keys = CONS(CONS(from_cstring(key), ecl_make_integer(val)), l_keys); }
                    l_enums = CONS(cl_nreverse(l_keys), l_enums); }}
            l_enums = CONS(l_class, cl_nreverse(l_enums));
            return l_enums; }}
    error_msg("QENUMS", LIST2(l_class, l_name));
    return Cnil; }

cl_object qapp() {
    /// args: ()
    /// Convenience function returning <code>qApp</code>.
    ecl_process_env()->nvalues = 1;
    cl_object l_ret = qt_object_from_name("QApplication", (void*)qApp);
    return l_ret; }

cl_object qprocess_events() {
    /// args: ()
    /// Convenience function to call <code>QApplication::processEvents()</code>.
    ecl_process_env()->nvalues = 1;
    QApplication::processEvents();
    return Ct; }

cl_object qexec2(cl_object l_milliseconds) {
    /// args: (&optional milliseconds)
    /// Convenience function to call <code>QApplication::exec()</code>.<br>Optionally pass the time in milliseconds after which <code>QEventLoop::exit()</code> will be called.<br>See also <code>qsleep</code>.
    ecl_process_env()->nvalues = 1;
    if(l_milliseconds != Cnil) {
        static QTimer* timer = 0;
        if(!timer) {
            timer = new QTimer;
            EQL::eventLoop = new QEventLoop;
            timer->setSingleShot(true);
            QObject::connect(timer, QSIGNAL(timeout()), LObjects::eql, QSLOT(exitEventLoop())); }
        timer->start(toInt(l_milliseconds));
        EQL::eventLoop->exec();
        return l_milliseconds; }
    QCoreApplication::exit(); // prevent "The event loop is already running"
    QApplication::exec();
    return Ct; }

cl_object no_qexec() {
    EQL::qexec = false;
    return Cnil; }

cl_object qexit() {
    /// args: ()
    /// Calls <code>QEventLoop::exit()</code>, in order to exit event processing after a call to <code>qexec</code> with a timeout.<br>Returns <code>T</code> if the event loop has effectively been exited.
    ecl_process_env()->nvalues = 1;
    if(EQL::eventLoop) {
        if(EQL::eventLoop->isRunning()) {
            EQL::eventLoop->exit();
            return Ct; }}
    return Cnil; }

cl_object qstatic_meta_object(cl_object l_class) {
    /// args: (class-name)
    /// Returns the <code>::staticMetaObject</code> of the given class name.
    ///     (qstatic-meta-object "QEasingCurve")
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_class)) {
        const QMetaObject* m = LObjects::staticMetaObject(toCString(l_class));
        if(m) {
            cl_object l_ret = qt_object_from_name("QMetaObject", (void*)m);
            return l_ret; }}
    error_msg("QSTATIC-META-OBJECT", LIST1(l_class));
    return Cnil; }

cl_object qload_ui(cl_object l_ui) {
    /// args: (file-name)
    /// Calls a custom <code>QUiLoader::load()</code> function, loading a UI file created by Qt Designer. Returns the top level widget of the UI.<br>Use <code>qfind-child</code> to retrieve the child widgets.
    ///     (qload-ui "my-fancy-gui.ui")
    ecl_process_env()->nvalues = 1;
    QString ui(toQString(l_ui));
    if(!ui.isEmpty()) {
        if(!ui.endsWith(".ui")) {
            ui.append(".ui"); }
        UiLoader loader;
        QFile file(ui);
        if(file.open(QIODevice::ReadOnly)) {
            QWidget* w = loader.load(&file);
            file.close();
            if(w) {
                cl_object l_ret = qt_object_from_name(LObjects::vanillaQtSuperClassName(w->metaObject()),
                                                      w,
                                                      w->property("EQL.unique").toUInt());
                return  l_ret; }}}
    error_msg("QLOAD-UI", LIST1(l_ui));
    return Cnil; }

cl_object qfind_child(cl_object l_obj, cl_object l_name) {
    /// args: (object object-name)
    /// Calls <code>QObject::findChild&lt;QObject*&gt;()</code>.<br>Can be used to get the child objects of any Qt object (typically from a UI, see <code>qload-ui</code>), identified by <code>QObject::objectName()</code>.
    ///     (qfind-child *main* "editor")
    ecl_process_env()->nvalues = 1;
    QString name(toQString(l_name));
    if(!name.isEmpty()) {
        QtObject o = toQtObject(l_obj);
        if(o.isQObject()) {
            QObject* obj = ((QObject*)o.pointer)->findChild<QObject*>(name);
            if(obj) {
                cl_object l_ret = qt_object_from_name(LObjects::vanillaQtSuperClassName(obj->metaObject()),
                                                      obj,
                                                      obj->property("EQL.unique").toUInt());
                return l_ret; }}}
    error_msg("QFIND-CHILD", LIST2(l_obj, l_name));
    return Cnil; }

cl_object qfind_children2(cl_object l_obj, cl_object l_name, cl_object l_class) {
    /// args: (object &optional object-name class-name)
    /// Calls <code>QObject::findChildren&lt;QObject*&gt;()</code>, returning a list of all child objects matching <code>object-name</code> and <code>class-name</code>.<br>Omitting the <code>&optional</code> arguments will find all children, recursively.
    ///     (qfind-children *qt-main* nil "LightWidget") ; see Qt_EQL example
    ecl_process_env()->nvalues = 1;
    QString objectName(toQString(l_name));
    QByteArray className(toCString(l_class));
    QtObject o = toQtObject(l_obj);
    if(o.isQObject()) {
        QObjectList children = ((QObject*)o.pointer)->findChildren<QObject*>(objectName);
        cl_object l_children = Cnil;
        Q_FOREACH(QObject* child, children) {
            QByteArray className2(child->metaObject()->className());
            QByteArray className3(LObjects::vanillaQtSuperClassName(child->metaObject()));
            if(className.isEmpty()      ||
              (className == className2) ||
              (className == className3)) {
                l_children = CONS(qt_object_from_name(className3, child, child->property("EQL.unique").toUInt()),
                                  l_children); }}
        l_children = cl_nreverse(l_children);
        return l_children; }
    error_msg("QFIND-CHILDREN", LIST3(l_obj, l_name, l_class));
    return Cnil; }

cl_object qui_class2(cl_object l_ui, cl_object l_name) {
    /// args: (file-name &optional object-name)
    /// Finds the class name for the given user-defined object name in the given UI file.<br>Omitting the object name will return the top level class name of the UI.
    ///     (qui-class "examples/data/main-window.ui" "editor") ; returns "QTextEdit"
    ecl_process_env()->nvalues = 1;
    QString ui(toQString(l_ui));
    QString name(toQString(l_name));
    if(!ui.isEmpty()) {
        if(!ui.endsWith(".ui")) {
            ui.append(".ui"); }
        bool main = name.isEmpty();
        QFile file(ui);
        QString className;
        if(file.open(QIODevice::ReadOnly)) {
            QXmlStreamReader reader(&file);
            while(!reader.atEnd()) {
                reader.readNext();
                if(reader.isStartElement()) {
                    QStringRef el(reader.name());
                    if("widget" == el) {
                        if(main) {
                            className = reader.attributes().value("class").toString();
                            break; }
                        else if(name == reader.attributes().value("name")) {
                            className = reader.attributes().value("class").toString();
                            break; }
                        main = false; }
                    else if("action" == el) {
                        if(name == reader.attributes().value("name")) {
                            className = "QAction";
                            break; }}
                    else if("actiongroup" == el) {
                        if(name == reader.attributes().value("name")) {
                            className = "QActionGroup";
                            break; }}
                    else if("layout" == el) {
                        if(name == reader.attributes().value("name")) {
                            className = reader.attributes().value("class").toString();
                            break; }}}}
            if(!className.isEmpty()) {
                cl_object l_ret = from_qstring(className);
                return l_ret; }}}
    error_msg("QUI-CLASS", LIST2(l_ui, l_name));
    return Cnil; }

cl_object qui_names(cl_object l_ui) {
    /// args: (file-name)
    /// Finds all user-defined object names in the given UI file.
    ///     (qui-names "examples/data/main-window.ui")
    ecl_process_env()->nvalues = 1;
    QString ui(toQString(l_ui));
    if(!ui.isEmpty()) {
        if(!ui.endsWith(".ui")) {
            ui.append(".ui"); }
        QFile file(ui);
        if(file.open(QIODevice::ReadOnly)) {
            QStringList names;
            QXmlStreamReader reader(&file);
            while(!reader.atEnd()) {
                reader.readNext();
                if(reader.isStartElement()) {
                    QStringRef el(reader.name());
                    if(("widget"      == el) ||
                       ("action"      == el) ||
                       ("actiongroup" == el) ||
                       ("layout"      == el)) {
                        QString name(reader.attributes().value("name").toString());
                        if(!name.isEmpty()) {
                            names << name; }}}}
            names.sort();
            cl_object l_ret = from_qstringlist(names);
            return l_ret; }}
    error_msg("QUI-NAMES", LIST1(l_ui));
    return Cnil; }

cl_object qsuper_class_name(cl_object l_name) {
    /// args: (name)
    /// Returns the super class of an object name, or <code>NIL</code> if the class doesn't inherit another Qt class.<br>Returns <code>T</code> as second return value for successful calls.
    ///     (qsuper-class-name "QGraphicsLineItem")
    if(ECL_STRINGP(l_name)) {
        bool found = false;
        QByteArray super = superClassName(toCString(l_name), &found);
        const cl_env_ptr l_env = ecl_process_env();
        if(found) {
            l_env->nvalues = 2;
            l_env->values[0] = super.isEmpty() ? Cnil : from_cstring(super);
            l_env->values[1] = Ct;
            return l_env->values[0]; }}
    ecl_process_env()->nvalues = 1;
    error_msg("QSUPER-CLASS-NAME", LIST1(l_name));
    return Cnil; }

cl_object qsingle_shot2(cl_object l_msec, cl_object l_fun) {
    /// args: (milliseconds function)
    /// A single shot timer similar to <code>QTimer::singleShot()</code>.
    ///     (qsingle-shot 1000 'one-second-later)
    ///     
    ///     (let ((ms 500))
    ///     &nbsp;&nbsp;(qsingle-shot ms (lambda () (qmsg ms))))
    ecl_process_env()->nvalues = 1;
    if(l_fun != Cnil) {
        new SingleShot(toInt(l_msec), l_fun); // see "delete this;" in "single_shot.h"
        return l_msec; }
    error_msg("QSINGLE-SHOT", LIST2(l_msec, l_fun));
    return Cnil; }

cl_object qok() {
    /// args: ()
    /// Needed to get the boolean <b>ok</b> value in cases like this:
    ///    (! "getFont(bool*)" "QFontDialog" nil)
    ///
    ///    (|getFont.QFontDialog| nil) ; NIL needed for &lt;bool*&gt;
    ecl_process_env()->nvalues = 1;
    return _ok_ ? Ct : Cnil; }

cl_object qid(cl_object l_class) {
    /// args: (name)
    /// Returns the internally used ID of the object name. Non QObject classes have negative ids.
    ///     (qid "QWidget")
    ecl_process_env()->nvalues = 1;
    if(ECL_STRINGP(l_class)) {
        int id = classId(l_class);
        if(id) {
            cl_object l_ret = MAKE_FIXNUM(id);
            return l_ret; }}
    // no error message (testing for a supported Qt class)
    return Cnil; }

cl_object qvariant_equal2(cl_object l_var1, cl_object l_var2) {
    // for internal use only (use QEQL instead, which will call this function for QVariants)
    ecl_process_env()->nvalues = 1;
    QtObject var1 = toQtObject(l_var1);
    QtObject var2 = toQtObject(l_var2);
    int id_var = -LObjects::n_names.value("QVariant", 0);
    if((var1.id == id_var) && (var2.id == id_var)) {
        QVariant* vp1 = (QVariant*)var1.pointer;
        QVariant* vp2 = (QVariant*)var2.pointer;
        cl_object l_ret = (*vp1 == *vp2) ? Ct : Cnil; // QVariant::operator==
        return l_ret; }
    return Cnil; }

cl_object qversion() {
    /// args: ()
    /// Returns the EQL version number as "&lt;year&gt;.&lt;month&gt;.&lt;counter&gt;".<br>The second return value is the Qt version as returned by <code>qVersion()</code>.
    const cl_env_ptr l_env = ecl_process_env();
    l_env->nvalues = 2;
    l_env->values[0] = from_cstring(EQL::version);
    l_env->values[1] = from_cstring(qVersion());
    return l_env->values[0]; }

cl_object qrun_in_gui_thread2(cl_object l_function_or_closure, cl_object l_blocking) {
    /// args: (function &optional (blocking t))
    /// alias: qrun
    /// Runs <code>function</code> in GUI thread while (by default) blocking the calling thread (if called from main thread, <code>function</code> will simply be called directly).<br>This is needed to run GUI code from ECL threads other than the main thread.<br>Returns <code>T</code> on success.<br><br>There are 2 reasons to always wrap any EQL function like this, if called from another ECL thread:<ul><li>Qt GUI methods always need to run in the GUI thread<li>EQL functions are not designed to be reentrant (not needed for GUI code)</ul>See also macro <code>qrun*</code>.
    ///     (qrun 'update-view-data)
    if(l_function_or_closure != Cnil) {
        QObject o;
        if(o.thread() == QApplication::instance()->thread()) {
            // direct call
            LObjects::eql->runInGuiThread(l_function_or_closure);
            return Ct; }
        else {
            // queued call in main event loop (GUI thread)
            QMetaObject::invokeMethod(LObjects::eql,
                                      "runInGuiThread",
                                      (l_blocking != Cnil) ? Qt::BlockingQueuedConnection : Qt::QueuedConnection,
                                      Q_ARG(void*, l_function_or_closure)); 
            return Ct; }}
    error_msg("QRUN-IN-GUI-THREAD", LIST1(l_function_or_closure));
    return Cnil; }



// *** special extensions ***

//
// Contributed by Mark Cox, please see "LICENSE-MAKE-QIMAGE.txt"
//

cl_object make_qimage_dangerous(cl_object l_vector, cl_object l_width, cl_object l_height, cl_object l_bytes_per_line, cl_object l_format) {
     ecl_process_env()->nvalues = 1;

    // make sure all the input data is of the correct type.
    if (!ECL_VECTORP(l_vector) || !ECL_FIXNUMP(l_width) || !ECL_FIXNUMP(l_height) || !ECL_FIXNUMP(l_bytes_per_line) || !ECL_FIXNUMP(l_format)) {
      error_msg("MAKE-QIMAGE", LIST5(l_vector, l_width, l_height, l_bytes_per_line, l_format));
      return Cnil; }

    ecl_vector *v = &l_vector->vector;
    switch (v->elttype) {
    case aet_bit:
    case aet_b8:
    case aet_b16:
    case aet_b32:
      break;
    default:
      error_msg("MAKE-QIMAGE", LIST5(l_vector, l_width, l_height, l_bytes_per_line, l_format));
      return Cnil; }

    int width                   = toInt<int>(l_width);
    int height                  = toInt<int>(l_height);
    int bytes_per_line          = toInt<int>(l_bytes_per_line);
    QImage::Format image_format = (QImage::Format)toInt<int>(l_format);

    QImage *image = new QImage(width, height, image_format);
    Q_ASSERT(image->bytesPerLine() >= bytes_per_line);

    uint8_t *current = v->self.b8;
    for (int row = 0; row < height; row++) {
      uint8_t *destination = (uint8_t *)image->scanLine(row);
      std::copy(current, current + bytes_per_line, destination);
      current += bytes_per_line; }

    cl_object l_image = qt_object_from_name("QImage", (void*)image); // assign return value to avoid erroneous GC
    return l_image; }

QT_END_NAMESPACE
