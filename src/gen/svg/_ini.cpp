// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsSvgItem::overrideIds = NumList() << 253 << 224 << 226;
NumList LSvgRenderer::overrideIds = NumList();
NumList LSvgWidget::overrideIds = NumList() << 25 << 20;
NumList LSvgGenerator::overrideIds = NumList() << 443;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[72] = new Q73;
    LObjects::Q[175] = new Q176;
    LObjects::Q[176] = new Q177;
    LObjects::N[150] = new N151; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 73: m = &QGraphicsSvgItem::staticMetaObject; break;
        case 176: m = &QSvgRenderer::staticMetaObject; break;
        case 177: m = &QSvgWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 151: if(gc) delete (QSvgGenerator*)p; else delete (LSvgGenerator*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 73: ids = &LGraphicsSvgItem::overrideIds; break;
            case 176: ids = &LSvgRenderer::overrideIds; break;
            case 177: ids = &LSvgWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 151: ids = &LSvgGenerator::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
