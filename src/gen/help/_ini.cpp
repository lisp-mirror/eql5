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
    LObjects::Q[83] = new Q84;
    LObjects::Q[84] = new Q85;
    LObjects::Q[85] = new Q86;
    LObjects::Q[86] = new Q87;
    LObjects::Q[87] = new Q88;
    LObjects::Q[88] = new Q89;
    LObjects::Q[89] = new Q90;
    LObjects::Q[90] = new Q91;
    LObjects::N[64] = new N65;
    LObjects::N[66] = new N67; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 84: m = &QHelpContentModel::staticMetaObject; break;
        case 85: m = &QHelpContentWidget::staticMetaObject; break;
        case 86: m = &QHelpEngineCore::staticMetaObject; break;
        case 87: m = &QHelpIndexModel::staticMetaObject; break;
        case 88: m = &QHelpIndexWidget::staticMetaObject; break;
        case 89: m = &QHelpSearchEngine::staticMetaObject; break;
        case 90: m = &QHelpSearchQueryWidget::staticMetaObject; break;
        case 91: m = &QHelpSearchResultWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 65: if(gc) delete (QHelpContentItem*)p; else delete (LHelpContentItem*)p; break;
        case 67: if(gc) delete (QHelpSearchQuery*)p; else delete (LHelpSearchQuery*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 84: ids = &LHelpContentModel::overrideIds; break;
            case 85: ids = &LHelpContentWidget::overrideIds; break;
            case 86: ids = &LHelpEngineCore::overrideIds; break;
            case 88: ids = &LHelpIndexWidget::overrideIds; break;
            case 89: ids = &LHelpSearchEngine::overrideIds; break;
            case 90: ids = &LHelpSearchQueryWidget::overrideIds; break;
            case 91: ids = &LHelpSearchResultWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 65: ids = &LHelpContentItem::overrideIds; break;
            case 67: ids = &LHelpSearchQuery::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
