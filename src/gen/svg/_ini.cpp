// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsSvgItem::overrideIds = NumList() << 260 << 231 << 233;
NumList LSvgRenderer::overrideIds = NumList();
NumList LSvgWidget::overrideIds = NumList() << 25 << 20;
NumList LSvgGenerator::overrideIds = NumList() << 483;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[82] = new Q83;
    LObjects::Q[200] = new Q201;
    LObjects::Q[201] = new Q202;
    LObjects::N[186] = new N187; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 83: m = &QGraphicsSvgItem::staticMetaObject; break;
        case 201: m = &QSvgRenderer::staticMetaObject; break;
        case 202: m = &QSvgWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 187: if(gc) delete (QSvgGenerator*)p; else delete (LSvgGenerator*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 83: ids = &LGraphicsSvgItem::overrideIds; break;
            case 201: ids = &LSvgRenderer::overrideIds; break;
            case 202: ids = &LSvgWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 187: ids = &LSvgGenerator::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
