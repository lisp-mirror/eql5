// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LHelpContentModel::overrideIds = NumList() << 58 << 59 << 65 << 73 << 76;
NumList LHelpContentWidget::overrideIds = NumList();
NumList LHelpEngineCore::overrideIds = NumList();
NumList LHelpIndexWidget::overrideIds = NumList();
NumList LHelpSearchEngine::overrideIds = NumList();
NumList LHelpSearchQueryWidget::overrideIds = NumList();
NumList LHelpSearchResultWidget::overrideIds = NumList();
NumList LHelpContentItem::overrideIds = NumList();
NumList LHelpSearchQuery::overrideIds = NumList();

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[93] = new Q94;
    LObjects::Q[94] = new Q95;
    LObjects::Q[95] = new Q96;
    LObjects::Q[96] = new Q97;
    LObjects::Q[97] = new Q98;
    LObjects::Q[98] = new Q99;
    LObjects::Q[99] = new Q100;
    LObjects::Q[100] = new Q101;
    LObjects::N[69] = new N70;
    LObjects::N[71] = new N72; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 94: m = &QHelpContentModel::staticMetaObject; break;
        case 95: m = &QHelpContentWidget::staticMetaObject; break;
        case 96: m = &QHelpEngineCore::staticMetaObject; break;
        case 97: m = &QHelpIndexModel::staticMetaObject; break;
        case 98: m = &QHelpIndexWidget::staticMetaObject; break;
        case 99: m = &QHelpSearchEngine::staticMetaObject; break;
        case 100: m = &QHelpSearchQueryWidget::staticMetaObject; break;
        case 101: m = &QHelpSearchResultWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 70: if(gc) delete (QHelpContentItem*)p; else delete (LHelpContentItem*)p; break;
        case 72: if(gc) delete (QHelpSearchQuery*)p; else delete (LHelpSearchQuery*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 94: ids = &LHelpContentModel::overrideIds; break;
            case 95: ids = &LHelpContentWidget::overrideIds; break;
            case 96: ids = &LHelpEngineCore::overrideIds; break;
            case 98: ids = &LHelpIndexWidget::overrideIds; break;
            case 99: ids = &LHelpSearchEngine::overrideIds; break;
            case 100: ids = &LHelpSearchQueryWidget::overrideIds; break;
            case 101: ids = &LHelpSearchResultWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 70: ids = &LHelpContentItem::overrideIds; break;
            case 72: ids = &LHelpSearchQuery::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
