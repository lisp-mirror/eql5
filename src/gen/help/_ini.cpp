// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

TO_QT_TYPE_PTR2 (QHelpSearchQuery, qhelpsearchquery)

TO_QT_LIST_VAL (QHelpSearchQuery)

TO_CL_LIST_VAL (QHelpSearchQuery, qhelpsearchquery)

#define META_TYPE_(var, type) var = qRegisterMetaType< type >(#type);

NumList LHelpContentModel::overrideIds = NumList() << 58 << 59 << 65 << 73 << 77;
NumList LHelpContentWidget::overrideIds = NumList();
NumList LHelpEngineCore::overrideIds = NumList();
NumList LHelpIndexWidget::overrideIds = NumList();
NumList LHelpSearchEngine::overrideIds = NumList();
NumList LHelpSearchQueryWidget::overrideIds = NumList();
NumList LHelpSearchResultWidget::overrideIds = NumList();
NumList LHelpContentItem::overrideIds = NumList();
NumList LHelpSearchQuery::overrideIds = NumList();

void* help_ini() {
    static bool _ = false; if(_) return 0; _ = true;
    ModuleHelp* module = new ModuleHelp;
    module->ini2();
    LObjects::Q[94] = new Q95;
    LObjects::Q[95] = new Q96;
    LObjects::Q[96] = new Q97;
    LObjects::Q[97] = new Q98;
    LObjects::Q[98] = new Q99;
    LObjects::Q[99] = new Q100;
    LObjects::Q[100] = new Q101;
    LObjects::Q[101] = new Q102;
    LObjects::N[85] = new N86;
    LObjects::N[87] = new N88;
    return module; }

ModuleHelp::ModuleHelp() {
    help_ini(); }

void ModuleHelp::ini2() {
    META_TYPE_(LObjects::T_QHelpSearchQuery, QHelpSearchQuery)
    META_TYPE_(LObjects::T_QList_QHelpSearchQuery, QList<QHelpSearchQuery>) }

void* ModuleHelp::toMetaArg(int n, cl_object l_arg, bool* found) {
    void* p = 0;
    bool _found = true;
    if(LObjects::T_QHelpSearchQuery == n)            { p = new QHelpSearchQuery(*toQHelpSearchQueryPointer(l_arg)); }
    else if(LObjects::T_QList_QHelpSearchQuery == n) { p = new QList<QHelpSearchQuery>(toQHelpSearchQueryList(l_arg)); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return p; }
    
cl_object ModuleHelp::to_lisp_arg(int n, void* p, bool* found) {
    cl_object l_ret = Cnil;
    bool _found = true;
    if(LObjects::T_QHelpSearchQuery == n)            { l_ret = from_qhelpsearchquery(*(QHelpSearchQuery*)p); }
    else if(LObjects::T_QList_QHelpSearchQuery == n) { l_ret = from_qhelpsearchquerylist(*(QList<QHelpSearchQuery>*)p); }
    else { _found = false; }
    if(_found) {
        *found = true; }
    return l_ret; }

const QMetaObject* ModuleHelp::staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 95: m = &QHelpContentModel::staticMetaObject; break;
        case 96: m = &QHelpContentWidget::staticMetaObject; break;
        case 97: m = &QHelpEngineCore::staticMetaObject; break;
        case 98: m = &QHelpIndexModel::staticMetaObject; break;
        case 99: m = &QHelpIndexWidget::staticMetaObject; break;
        case 100: m = &QHelpSearchEngine::staticMetaObject; break;
        case 101: m = &QHelpSearchQueryWidget::staticMetaObject; break;
        case 102: m = &QHelpSearchResultWidget::staticMetaObject; break; }
    return m; }

void ModuleHelp::deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 86: if(gc) delete (QHelpContentItem*)p; else delete (LHelpContentItem*)p; break;
        case 88: if(gc) delete (QHelpSearchQuery*)p; else delete (LHelpSearchQuery*)p; break; }}

NumList* ModuleHelp::overrideIds(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 95: ids = &LHelpContentModel::overrideIds; break;
            case 96: ids = &LHelpContentWidget::overrideIds; break;
            case 97: ids = &LHelpEngineCore::overrideIds; break;
            case 99: ids = &LHelpIndexWidget::overrideIds; break;
            case 100: ids = &LHelpSearchEngine::overrideIds; break;
            case 101: ids = &LHelpSearchQueryWidget::overrideIds; break;
            case 102: ids = &LHelpSearchResultWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 86: ids = &LHelpContentItem::overrideIds; break;
            case 88: ids = &LHelpSearchQuery::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
