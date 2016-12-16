// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGraphicsSvgItem::overrideIds = NumList() << 260 << 231 << 233;
NumList LSvgRenderer::overrideIds = NumList();
NumList LSvgWidget::overrideIds = NumList() << 25 << 20;
NumList LSvgGenerator::overrideIds = NumList() << 463;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[81] = new Q82;
    LObjects::Q[193] = new Q194;
    LObjects::Q[194] = new Q195;
    LObjects::N[157] = new N158; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 82: m = &QGraphicsSvgItem::staticMetaObject; break;
        case 194: m = &QSvgRenderer::staticMetaObject; break;
        case 195: m = &QSvgWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 158: if(gc) delete (QSvgGenerator*)p; else delete (LSvgGenerator*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 82: ids = &LGraphicsSvgItem::overrideIds; break;
            case 194: ids = &LSvgRenderer::overrideIds; break;
            case 195: ids = &LSvgWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 158: ids = &LSvgGenerator::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
