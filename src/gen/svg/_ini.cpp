// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsSvgItem::overrideIds = NumList() << 262 << 233 << 235;
NumList LSvgRenderer::overrideIds = NumList();
NumList LSvgWidget::overrideIds = NumList() << 25 << 20;
NumList LSvgGenerator::overrideIds = NumList() << 471;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[75] = new Q76;
    LObjects::Q[171] = new Q172;
    LObjects::Q[172] = new Q173;
    LObjects::N[151] = new N152; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 76: m = &QGraphicsSvgItem::staticMetaObject; break;
        case 172: m = &QSvgRenderer::staticMetaObject; break;
        case 173: m = &QSvgWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 152: if(gc) delete (QSvgGenerator*)p; else delete (LSvgGenerator*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 76: ids = &LGraphicsSvgItem::overrideIds; break;
            case 172: ids = &LSvgRenderer::overrideIds; break;
            case 173: ids = &LSvgWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 152: ids = &LSvgGenerator::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
