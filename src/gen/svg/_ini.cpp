// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsSvgItem::overrideIds = NumList() << 261 << 232 << 234;
NumList LSvgRenderer::overrideIds = NumList();
NumList LSvgWidget::overrideIds = NumList() << 25 << 20;
NumList LSvgGenerator::overrideIds = NumList() << 520;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[82] = new Q83;
    LObjects::Q[226] = new Q227;
    LObjects::Q[227] = new Q228;
    LObjects::N[217] = new N218; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 83: m = &QGraphicsSvgItem::staticMetaObject; break;
        case 227: m = &QSvgRenderer::staticMetaObject; break;
        case 228: m = &QSvgWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 218: if(gc) delete (QSvgGenerator*)p; else delete (LSvgGenerator*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 83: ids = &LGraphicsSvgItem::overrideIds; break;
            case 227: ids = &LSvgRenderer::overrideIds; break;
            case 228: ids = &LSvgWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 218: ids = &LSvgGenerator::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
