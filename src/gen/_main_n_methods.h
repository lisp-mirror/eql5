// THIS FILE IS GENERATED (see helper/)

#ifndef MAIN_N_METHODS_H
#define MAIN_N_METHODS_H

#include "_main_n_classes.h"
#include <QtWidgets>
#include <QtPrintSupport>
#include "../extras.h"
#include "../eql_global.h"

QT_BEGIN_NAMESPACE

class EQL_EXPORT N2 : public QObject { // QAccessible
    Q_OBJECT
public:
    Q_INVOKABLE QAccessibleInterface* SaccessibleInterface(QAccessible::Id x1) { return QAccessible::accessibleInterface(x1); }
    Q_INVOKABLE void SdeleteAccessibleInterface(QAccessible::Id x1) { QAccessible::deleteAccessibleInterface(x1); }
    Q_INVOKABLE void SinstallFactory(QAccessible::InterfaceFactory x1) { QAccessible::installFactory(x1); }
    Q_INVOKABLE bool SisActive() { return QAccessible::isActive(); }
    Q_INVOKABLE QAccessibleInterface* SqueryAccessibleInterface(QObject* x1) { return QAccessible::queryAccessibleInterface(x1); }
    Q_INVOKABLE int SregisterAccessibleInterface(QAccessibleInterface* x1) { return QAccessible::registerAccessibleInterface(x1); }
    Q_INVOKABLE void SremoveFactory(QAccessible::InterfaceFactory x1) { QAccessible::removeFactory(x1); }
    Q_INVOKABLE void SsetRootObject(QObject* x1) { QAccessible::setRootObject(x1); }
    Q_INVOKABLE int SuniqueId(QAccessibleInterface* x1) { return QAccessible::uniqueId(x1); }
    Q_INVOKABLE void SupdateAccessibility(QAccessibleEvent* x1) { QAccessible::updateAccessibility(x1); }
};

class EQL_EXPORT N3 : public QObject { // QAccessibleEditableTextInterface
    Q_OBJECT
public:
    Q_INVOKABLE void MdeleteText(QAccessibleEditableTextInterface* o, int x1, int x2) { o->deleteText(x1, x2); }
    Q_INVOKABLE void MinsertText(QAccessibleEditableTextInterface* o, int x1, const QString& x2) { o->insertText(x1, x2); }
    Q_INVOKABLE void MreplaceText(QAccessibleEditableTextInterface* o, int x1, int x2, const QString& x3) { o->replaceText(x1, x2, x3); }
};

class EQL_EXPORT N4 : public QObject { // QAccessibleEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1, QAccessible::Event x2) { return new LAccessibleEvent(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QAccessibleInterface* x1, QAccessible::Event x2) { return new LAccessibleEvent(u, x1, x2); }
    Q_INVOKABLE QAccessibleInterface* MaccessibleInterface(QAccessibleEvent* o) const { return o->accessibleInterface(); }
    Q_INVOKABLE int Mchild(QAccessibleEvent* o) const { return o->child(); }
    Q_INVOKABLE QObject* Mobject(QAccessibleEvent* o) const { return o->object(); }
    Q_INVOKABLE void MsetChild(QAccessibleEvent* o, int x1) { o->setChild(x1); }
    Q_INVOKABLE int Mtype(QAccessibleEvent* o) const { return o->type(); }
};

class EQL_EXPORT N5 : public QObject { // QAccessibleInterface
    Q_OBJECT
public:
    Q_INVOKABLE QAccessibleActionInterface* MactionInterface(QAccessibleInterface* o) { return o->actionInterface(); }
    Q_INVOKABLE QColor MbackgroundColor(QAccessibleInterface* o) const { return o->backgroundColor(); }
    Q_INVOKABLE QAccessibleInterface* Mchild(QAccessibleInterface* o, int x1) const { return o->child(x1); }
    Q_INVOKABLE QAccessibleInterface* MchildAt(QAccessibleInterface* o, int x1, int x2) const { return o->childAt(x1, x2); }
    Q_INVOKABLE int MchildCount(QAccessibleInterface* o) const { return o->childCount(); }
    Q_INVOKABLE QAccessibleInterface* MfocusChild(QAccessibleInterface* o) const { return o->focusChild(); }
    Q_INVOKABLE QColor MforegroundColor(QAccessibleInterface* o) const { return o->foregroundColor(); }
    Q_INVOKABLE int MindexOfChild(QAccessibleInterface* o, const QAccessibleInterface* x1) const { return o->indexOfChild(x1); }
    Q_INVOKABLE bool MisValid(QAccessibleInterface* o) const { return o->isValid(); }
    Q_INVOKABLE QObject* Mobject(QAccessibleInterface* o) const { return o->object(); }
    Q_INVOKABLE QAccessibleInterface* Mparent(QAccessibleInterface* o) const { return o->parent(); }
    Q_INVOKABLE QRect Mrect(QAccessibleInterface* o) const { return o->rect(); }
    Q_INVOKABLE int Mrole(QAccessibleInterface* o) const { return o->role(); }
    Q_INVOKABLE void MsetText(QAccessibleInterface* o, QAccessible::Text x1, const QString& x2) { o->setText(x1, x2); }
    Q_INVOKABLE QAccessibleTableCellInterface* MtableCellInterface(QAccessibleInterface* o) { return o->tableCellInterface(); }
    Q_INVOKABLE QAccessibleTableInterface* MtableInterface(QAccessibleInterface* o) { return o->tableInterface(); }
    Q_INVOKABLE QString Mtext(QAccessibleInterface* o, QAccessible::Text x1) const { return o->text(x1); }
    Q_INVOKABLE QAccessibleTextInterface* MtextInterface(QAccessibleInterface* o) { return o->textInterface(); }
    Q_INVOKABLE QAccessibleValueInterface* MvalueInterface(QAccessibleInterface* o) { return o->valueInterface(); }
    Q_INVOKABLE QWindow* Mwindow(QAccessibleInterface* o) const { return o->window(); }
};

class EQL_EXPORT N10 : public QObject { // QAccessibleTextInterface
    Q_OBJECT
public:
    Q_INVOKABLE void MaddSelection(QAccessibleTextInterface* o, int x1, int x2) { o->addSelection(x1, x2); }
    Q_INVOKABLE int McharacterCount(QAccessibleTextInterface* o) const { return o->characterCount(); }
    Q_INVOKABLE QRect McharacterRect(QAccessibleTextInterface* o, int x1) const { return o->characterRect(x1); }
    Q_INVOKABLE int McursorPosition(QAccessibleTextInterface* o) const { return o->cursorPosition(); }
    Q_INVOKABLE int MoffsetAtPoint(QAccessibleTextInterface* o, const QPoint& x1) const { return o->offsetAtPoint(x1); }
    Q_INVOKABLE void MremoveSelection(QAccessibleTextInterface* o, int x1) { o->removeSelection(x1); }
    Q_INVOKABLE void MscrollToSubstring(QAccessibleTextInterface* o, int x1, int x2) { o->scrollToSubstring(x1, x2); }
    Q_INVOKABLE int MselectionCount(QAccessibleTextInterface* o) const { return o->selectionCount(); }
    Q_INVOKABLE void MsetCursorPosition(QAccessibleTextInterface* o, int x1) { o->setCursorPosition(x1); }
    Q_INVOKABLE void MsetSelection(QAccessibleTextInterface* o, int x1, int x2, int x3) { o->setSelection(x1, x2, x3); }
    Q_INVOKABLE QString Mtext(QAccessibleTextInterface* o, int x1, int x2) const { return o->text(x1, x2); }
};

class EQL_EXPORT N15 : public QObject { // QAccessibleValueInterface
    Q_OBJECT
public:
    Q_INVOKABLE QVariant McurrentValue(QAccessibleValueInterface* o) const { return o->currentValue(); }
    Q_INVOKABLE QVariant MmaximumValue(QAccessibleValueInterface* o) const { return o->maximumValue(); }
    Q_INVOKABLE QVariant MminimumStepSize(QAccessibleValueInterface* o) const { return o->minimumStepSize(); }
    Q_INVOKABLE QVariant MminimumValue(QAccessibleValueInterface* o) const { return o->minimumValue(); }
    Q_INVOKABLE void MsetCurrentValue(QAccessibleValueInterface* o, const QVariant& x1) { o->setCurrentValue(x1); }
};

class EQL_EXPORT N22 : public QObject { // QBackingStore
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWindow* x1) { return new LBackingStore(u, x1); }
    Q_INVOKABLE void MbeginPaint(QBackingStore* o, const QRegion& x1) { o->beginPaint(x1); }
    Q_INVOKABLE void MendPaint(QBackingStore* o) { o->endPaint(); }
    Q_INVOKABLE void Mflush(QBackingStore* o, const QRegion& x1, QWindow* x2 = 0, const QPoint& x3 = QPoint()) { o->flush(x1, x2, x3); }
    Q_INVOKABLE QPlatformBackingStore* Mhandle(QBackingStore* o) const { return o->handle(); }
    Q_INVOKABLE bool MhasStaticContents(QBackingStore* o) const { return o->hasStaticContents(); }
    Q_INVOKABLE QPaintDevice* MpaintDevice(QBackingStore* o) { return o->paintDevice(); }
    Q_INVOKABLE void Mresize(QBackingStore* o, const QSize& x1) { o->resize(x1); }
    Q_INVOKABLE bool Mscroll(QBackingStore* o, const QRegion& x1, int x2, int x3) { return o->scroll(x1, x2, x3); }
    Q_INVOKABLE void MsetStaticContents(QBackingStore* o, const QRegion& x1) { o->setStaticContents(x1); }
    Q_INVOKABLE QSize Msize(QBackingStore* o) const { return o->size(); }
    Q_INVOKABLE QRegion MstaticContents(QBackingStore* o) const { return o->staticContents(); }
    Q_INVOKABLE QWindow* Mwindow(QBackingStore* o) const { return o->window(); }
};

class EQL_EXPORT N23 : public QObject { // QBasicTimer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBasicTimer(u); }
    Q_INVOKABLE bool MisActive(QBasicTimer* o) const { return o->isActive(); }
    Q_INVOKABLE void Mstart(QBasicTimer* o, int x1, QObject* x2) { o->start(x1, x2); }
    Q_INVOKABLE void Mstart(QBasicTimer* o, int x1, Qt::TimerType x2, QObject* x3) { o->start(x1, x2, x3); }
    Q_INVOKABLE void Mstop(QBasicTimer* o) { o->stop(); }
    Q_INVOKABLE int MtimerId(QBasicTimer* o) const { return o->timerId(); }
};

class EQL_EXPORT N24 : public QObject { // QBitArray
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBitArray(u); }
    Q_INVOKABLE void* C(uint u, int x1, bool x2 = false) { return new LBitArray(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QBitArray& x1) { return new LBitArray(u, x1); }
    Q_INVOKABLE bool Mat(QBitArray* o, int x1) const { return o->at(x1); }
    Q_INVOKABLE void Mclear(QBitArray* o) { o->clear(); }
    Q_INVOKABLE void MclearBit(QBitArray* o, int x1) { o->clearBit(x1); }
    Q_INVOKABLE int Mcount(QBitArray* o) const { return o->count(); }
    Q_INVOKABLE int Mcount(QBitArray* o, bool x1) const { return o->count(x1); }
    Q_INVOKABLE bool Mfill(QBitArray* o, bool x1, int x2 = -1) { return o->fill(x1, x2); }
    Q_INVOKABLE void Mfill(QBitArray* o, bool x1, int x2, int x3) { o->fill(x1, x2, x3); }
    Q_INVOKABLE bool MisEmpty(QBitArray* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisNull(QBitArray* o) const { return o->isNull(); }
    Q_INVOKABLE void Mresize(QBitArray* o, int x1) { o->resize(x1); }
    Q_INVOKABLE void MsetBit(QBitArray* o, int x1) { o->setBit(x1); }
    Q_INVOKABLE void MsetBit(QBitArray* o, int x1, bool x2) { o->setBit(x1, x2); }
    Q_INVOKABLE int Msize(QBitArray* o) const { return o->size(); }
    Q_INVOKABLE void Mswap(QBitArray* o, QBitArray& x1) { o->swap(x1); }
    Q_INVOKABLE bool MtestBit(QBitArray* o, int x1) const { return o->testBit(x1); }
    Q_INVOKABLE bool MtoggleBit(QBitArray* o, int x1) { return o->toggleBit(x1); }
    Q_INVOKABLE void Mtruncate(QBitArray* o, int x1) { o->truncate(x1); }
};

class EQL_EXPORT N26 : public QObject { // QBrush
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBrush(u); }
    Q_INVOKABLE void* C(uint u, Qt::BrushStyle x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QColor& x1, Qt::BrushStyle x2 = Qt::SolidPattern) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1, Qt::BrushStyle x2 = Qt::SolidPattern) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QColor& x1, const QPixmap& x2) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1, const QPixmap& x2) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QImage& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBrush& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QGradient& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE QColor Mcolor(QBrush* o) const { return o->color(); }
    Q_INVOKABLE const QGradient* Mgradient(QBrush* o) const { return o->gradient(); }
    Q_INVOKABLE bool MisOpaque(QBrush* o) const { return o->isOpaque(); }
    Q_INVOKABLE QMatrix Mmatrix(QBrush* o) const { return o->matrix(); }
    Q_INVOKABLE void MsetColor(QBrush* o, const QColor& x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetColor(QBrush* o, Qt::GlobalColor x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetMatrix(QBrush* o, const QMatrix& x1) { o->setMatrix(x1); }
    Q_INVOKABLE void MsetStyle(QBrush* o, Qt::BrushStyle x1) { o->setStyle(x1); }
    Q_INVOKABLE void MsetTexture(QBrush* o, const QPixmap& x1) { o->setTexture(x1); }
    Q_INVOKABLE void MsetTextureImage(QBrush* o, const QImage& x1) { o->setTextureImage(x1); }
    Q_INVOKABLE void MsetTransform(QBrush* o, const QTransform& x1) { o->setTransform(x1); }
    Q_INVOKABLE int Mstyle(QBrush* o) const { return o->style(); }
    Q_INVOKABLE void Mswap(QBrush* o, QBrush& x1) { o->swap(x1); }
    Q_INVOKABLE QPixmap Mtexture(QBrush* o) const { return o->texture(); }
    Q_INVOKABLE QImage MtextureImage(QBrush* o) const { return o->textureImage(); }
    Q_INVOKABLE QTransform Mtransform(QBrush* o) const { return o->transform(); }
};

class EQL_EXPORT N31 : public QObject { // QColor
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LColor(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3, int x4 = 255) { return new LColor(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, QRgb x1) { return new LColor(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LColor(u, x1); }
    Q_INVOKABLE void* C(uint u, const char* x1) { return new LColor(u, x1); }
    Q_INVOKABLE void* C(uint u, const QColor& x1) { return new LColor(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1) { return new LColor(u, x1); }
    Q_INVOKABLE int Malpha(QColor* o) const { return o->alpha(); }
    Q_INVOKABLE qreal MalphaF(QColor* o) const { return o->alphaF(); }
    Q_INVOKABLE int Mblack(QColor* o) const { return o->black(); }
    Q_INVOKABLE qreal MblackF(QColor* o) const { return o->blackF(); }
    Q_INVOKABLE int Mblue(QColor* o) const { return o->blue(); }
    Q_INVOKABLE qreal MblueF(QColor* o) const { return o->blueF(); }
    Q_INVOKABLE QColor MconvertTo(QColor* o, QColor::Spec x1) const { return o->convertTo(x1); }
    Q_INVOKABLE int Mcyan(QColor* o) const { return o->cyan(); }
    Q_INVOKABLE qreal McyanF(QColor* o) const { return o->cyanF(); }
    Q_INVOKABLE QColor Mdarker(QColor* o, int x1 = 200) const { return o->darker(x1); }
    Q_INVOKABLE int Mgreen(QColor* o) const { return o->green(); }
    Q_INVOKABLE qreal MgreenF(QColor* o) const { return o->greenF(); }
    Q_INVOKABLE int MhslHue(QColor* o) const { return o->hslHue(); }
    Q_INVOKABLE qreal MhslHueF(QColor* o) const { return o->hslHueF(); }
    Q_INVOKABLE int MhslSaturation(QColor* o) const { return o->hslSaturation(); }
    Q_INVOKABLE qreal MhslSaturationF(QColor* o) const { return o->hslSaturationF(); }
    Q_INVOKABLE int MhsvHue(QColor* o) const { return o->hsvHue(); }
    Q_INVOKABLE qreal MhsvHueF(QColor* o) const { return o->hsvHueF(); }
    Q_INVOKABLE int MhsvSaturation(QColor* o) const { return o->hsvSaturation(); }
    Q_INVOKABLE qreal MhsvSaturationF(QColor* o) const { return o->hsvSaturationF(); }
    Q_INVOKABLE int Mhue(QColor* o) const { return o->hue(); }
    Q_INVOKABLE qreal MhueF(QColor* o) const { return o->hueF(); }
    Q_INVOKABLE bool MisValid(QColor* o) const { return o->isValid(); }
    Q_INVOKABLE QColor Mlighter(QColor* o, int x1 = 150) const { return o->lighter(x1); }
    Q_INVOKABLE int Mlightness(QColor* o) const { return o->lightness(); }
    Q_INVOKABLE qreal MlightnessF(QColor* o) const { return o->lightnessF(); }
    Q_INVOKABLE int Mmagenta(QColor* o) const { return o->magenta(); }
    Q_INVOKABLE qreal MmagentaF(QColor* o) const { return o->magentaF(); }
    Q_INVOKABLE QString Mname(QColor* o) const { return o->name(); }
    Q_INVOKABLE QString Mname(QColor* o, QColor::NameFormat x1) const { return o->name(x1); }
    Q_INVOKABLE int Mred(QColor* o) const { return o->red(); }
    Q_INVOKABLE qreal MredF(QColor* o) const { return o->redF(); }
    Q_INVOKABLE QRgb Mrgb(QColor* o) const { return o->rgb(); }
    Q_INVOKABLE QRgb Mrgba(QColor* o) const { return o->rgba(); }
    Q_INVOKABLE int Msaturation(QColor* o) const { return o->saturation(); }
    Q_INVOKABLE qreal MsaturationF(QColor* o) const { return o->saturationF(); }
    Q_INVOKABLE void MsetAlpha(QColor* o, int x1) { o->setAlpha(x1); }
    Q_INVOKABLE void MsetAlphaF(QColor* o, qreal x1) { o->setAlphaF(x1); }
    Q_INVOKABLE void MsetBlue(QColor* o, int x1) { o->setBlue(x1); }
    Q_INVOKABLE void MsetBlueF(QColor* o, qreal x1) { o->setBlueF(x1); }
    Q_INVOKABLE void MsetCmyk(QColor* o, int x1, int x2, int x3, int x4, int x5 = 255) { o->setCmyk(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetCmykF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5 = 1.0) { o->setCmykF(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetGreen(QColor* o, int x1) { o->setGreen(x1); }
    Q_INVOKABLE void MsetGreenF(QColor* o, qreal x1) { o->setGreenF(x1); }
    Q_INVOKABLE void MsetHsl(QColor* o, int x1, int x2, int x3, int x4 = 255) { o->setHsl(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetHslF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { o->setHslF(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetHsv(QColor* o, int x1, int x2, int x3, int x4 = 255) { o->setHsv(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetHsvF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { o->setHsvF(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetNamedColor(QColor* o, const QString& x1) { o->setNamedColor(x1); }
    Q_INVOKABLE void MsetRed(QColor* o, int x1) { o->setRed(x1); }
    Q_INVOKABLE void MsetRedF(QColor* o, qreal x1) { o->setRedF(x1); }
    Q_INVOKABLE void MsetRgb(QColor* o, int x1, int x2, int x3, int x4 = 255) { o->setRgb(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetRgb(QColor* o, QRgb x1) { o->setRgb(x1); }
    Q_INVOKABLE void MsetRgbF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { o->setRgbF(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetRgba(QColor* o, QRgb x1) { o->setRgba(x1); }
    Q_INVOKABLE int Mspec(QColor* o) const { return o->spec(); }
    Q_INVOKABLE QColor MtoCmyk(QColor* o) const { return o->toCmyk(); }
    Q_INVOKABLE QColor MtoHsl(QColor* o) const { return o->toHsl(); }
    Q_INVOKABLE QColor MtoHsv(QColor* o) const { return o->toHsv(); }
    Q_INVOKABLE QColor MtoRgb(QColor* o) const { return o->toRgb(); }
    Q_INVOKABLE int Mvalue(QColor* o) const { return o->value(); }
    Q_INVOKABLE qreal MvalueF(QColor* o) const { return o->valueF(); }
    Q_INVOKABLE int Myellow(QColor* o) const { return o->yellow(); }
    Q_INVOKABLE qreal MyellowF(QColor* o) const { return o->yellowF(); }
    Q_INVOKABLE QStringList ScolorNames() { return QColor::colorNames(); }
    Q_INVOKABLE QColor SfromCmyk(int x1, int x2, int x3, int x4, int x5 = 255) { return QColor::fromCmyk(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QColor SfromCmykF(qreal x1, qreal x2, qreal x3, qreal x4, qreal x5 = 1.0) { return QColor::fromCmykF(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QColor SfromHsl(int x1, int x2, int x3, int x4 = 255) { return QColor::fromHsl(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromHslF(qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { return QColor::fromHslF(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromHsv(int x1, int x2, int x3, int x4 = 255) { return QColor::fromHsv(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromHsvF(qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { return QColor::fromHsvF(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromRgb(QRgb x1) { return QColor::fromRgb(x1); }
    Q_INVOKABLE QColor SfromRgb(int x1, int x2, int x3, int x4 = 255) { return QColor::fromRgb(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromRgbF(qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { return QColor::fromRgbF(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromRgba(QRgb x1) { return QColor::fromRgba(x1); }
    Q_INVOKABLE bool SisValidColor(const QString& x1) { return QColor::isValidColor(x1); }
};

class EQL_EXPORT N34 : public QObject { // QCryptographicHash
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QCryptographicHash::Algorithm x1) { return new LCryptographicHash(u, x1); }
    Q_INVOKABLE void MaddData(QCryptographicHash* o, const char* x1, int x2) { o->addData(x1, x2); }
    Q_INVOKABLE void MaddData(QCryptographicHash* o, const QByteArray& x1) { o->addData(x1); }
    Q_INVOKABLE void Mreset(QCryptographicHash* o) { o->reset(); }
    Q_INVOKABLE QByteArray Mresult(QCryptographicHash* o) const { return o->result(); }
    Q_INVOKABLE QByteArray Shash(const QByteArray& x1, QCryptographicHash::Algorithm x2) { return QCryptographicHash::hash(x1, x2); }
};

class EQL_EXPORT N35 : public QObject { // QCursor
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LCursor(u); }
    Q_INVOKABLE void* C(uint u, Qt::CursorShape x1) { return new LCursor(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBitmap& x1, const QBitmap& x2, int x3 = -1, int x4 = -1) { return new LCursor(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1, int x2 = -1, int x3 = -1) { return new LCursor(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QCursor& x1) { return new LCursor(u, x1); }
    Q_INVOKABLE const QBitmap* Mbitmap(QCursor* o) const { return o->bitmap(); }
    Q_INVOKABLE QPoint MhotSpot(QCursor* o) const { return o->hotSpot(); }
    Q_INVOKABLE const QBitmap* Mmask(QCursor* o) const { return o->mask(); }
    Q_INVOKABLE QPixmap Mpixmap(QCursor* o) const { return o->pixmap(); }
    Q_INVOKABLE void MsetShape(QCursor* o, Qt::CursorShape x1) { o->setShape(x1); }
    Q_INVOKABLE int Mshape(QCursor* o) const { return o->shape(); }
    Q_INVOKABLE QPoint Spos() { return QCursor::pos(); }
    Q_INVOKABLE QPoint Spos(const QScreen* x1) { return QCursor::pos(x1); }
    Q_INVOKABLE void SsetPos(int x1, int x2) { QCursor::setPos(x1, x2); }
    Q_INVOKABLE void SsetPos(QScreen* x1, int x2, int x3) { QCursor::setPos(x1, x2, x3); }
    Q_INVOKABLE void SsetPos(const QPoint& x1) { QCursor::setPos(x1); }
    Q_INVOKABLE void SsetPos(QScreen* x1, const QPoint& x2) { QCursor::setPos(x1, x2); }
};

class EQL_EXPORT N36 : public QObject { // QDate
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LDate(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3) { return new LDate(u, x1, x2, x3); }
    Q_INVOKABLE QDate MaddDays(QDate* o, qint64 x1) const { return o->addDays(x1); }
    Q_INVOKABLE QDate MaddMonths(QDate* o, int x1) const { return o->addMonths(x1); }
    Q_INVOKABLE QDate MaddYears(QDate* o, int x1) const { return o->addYears(x1); }
    Q_INVOKABLE int Mday(QDate* o) const { return o->day(); }
    Q_INVOKABLE int MdayOfWeek(QDate* o) const { return o->dayOfWeek(); }
    Q_INVOKABLE int MdayOfYear(QDate* o) const { return o->dayOfYear(); }
    Q_INVOKABLE int MdaysInMonth(QDate* o) const { return o->daysInMonth(); }
    Q_INVOKABLE int MdaysInYear(QDate* o) const { return o->daysInYear(); }
    Q_INVOKABLE qlonglong MdaysTo(QDate* o, const QDate& x1) const { return o->daysTo(x1); }
    Q_INVOKABLE bool MisNull(QDate* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QDate* o) const { return o->isValid(); }
    Q_INVOKABLE int Mmonth(QDate* o) const { return o->month(); }
    Q_INVOKABLE bool MsetDate(QDate* o, int x1, int x2, int x3) { return o->setDate(x1, x2, x3); }
    Q_INVOKABLE qlonglong MtoJulianDay(QDate* o) const { return o->toJulianDay(); }
    Q_INVOKABLE QString MtoString(QDate* o, const QString& x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QDate* o, Qt::DateFormat x1 = Qt::TextDate) const { return o->toString(x1); }
    Q_INVOKABLE int Myear(QDate* o) const { return o->year(); }
    Q_INVOKABLE QDate ScurrentDate() { return QDate::currentDate(); }
    Q_INVOKABLE QDate SfromJulianDay(qint64 x1) { return QDate::fromJulianDay(x1); }
    Q_INVOKABLE QDate SfromString(const QString& x1, Qt::DateFormat x2 = Qt::TextDate) { return QDate::fromString(x1, x2); }
    Q_INVOKABLE QDate SfromString(const QString& x1, const QString& x2) { return QDate::fromString(x1, x2); }
    Q_INVOKABLE bool SisLeapYear(int x1) { return QDate::isLeapYear(x1); }
    Q_INVOKABLE bool SisValid(int x1, int x2, int x3) { return QDate::isValid(x1, x2, x3); }
    Q_INVOKABLE QString SlongDayName(int x1, QDate::MonthNameType x2 = QDate::DateFormat) { return QDate::longDayName(x1, x2); }
    Q_INVOKABLE QString SlongMonthName(int x1, QDate::MonthNameType x2 = QDate::DateFormat) { return QDate::longMonthName(x1, x2); }
    Q_INVOKABLE QString SshortDayName(int x1, QDate::MonthNameType x2 = QDate::DateFormat) { return QDate::shortDayName(x1, x2); }
    Q_INVOKABLE QString SshortMonthName(int x1, QDate::MonthNameType x2 = QDate::DateFormat) { return QDate::shortMonthName(x1, x2); }
};

class EQL_EXPORT N37 : public QObject { // QDateTime
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LDateTime(u); }
    Q_INVOKABLE void* C(uint u, const QDate& x1) { return new LDateTime(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDate& x1, const QTime& x2, Qt::TimeSpec x3 = Qt::LocalTime) { return new LDateTime(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QDate& x1, const QTime& x2, Qt::TimeSpec x3, int x4) { return new LDateTime(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QDate& x1, const QTime& x2, const QTimeZone& x3) { return new LDateTime(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QDateTime& x1) { return new LDateTime(u, x1); }
    Q_INVOKABLE QDateTime MaddDays(QDateTime* o, qint64 x1) const { return o->addDays(x1); }
    Q_INVOKABLE QDateTime MaddMSecs(QDateTime* o, qint64 x1) const { return o->addMSecs(x1); }
    Q_INVOKABLE QDateTime MaddMonths(QDateTime* o, int x1) const { return o->addMonths(x1); }
    Q_INVOKABLE QDateTime MaddSecs(QDateTime* o, qint64 x1) const { return o->addSecs(x1); }
    Q_INVOKABLE QDateTime MaddYears(QDateTime* o, int x1) const { return o->addYears(x1); }
    Q_INVOKABLE QDate Mdate(QDateTime* o) const { return o->date(); }
    Q_INVOKABLE qlonglong MdaysTo(QDateTime* o, const QDateTime& x1) const { return o->daysTo(x1); }
    Q_INVOKABLE bool MisDaylightTime(QDateTime* o) const { return o->isDaylightTime(); }
    Q_INVOKABLE bool MisNull(QDateTime* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QDateTime* o) const { return o->isValid(); }
    Q_INVOKABLE qlonglong MmsecsTo(QDateTime* o, const QDateTime& x1) const { return o->msecsTo(x1); }
    Q_INVOKABLE int MoffsetFromUtc(QDateTime* o) const { return o->offsetFromUtc(); }
    Q_INVOKABLE qlonglong MsecsTo(QDateTime* o, const QDateTime& x1) const { return o->secsTo(x1); }
    Q_INVOKABLE void MsetDate(QDateTime* o, const QDate& x1) { o->setDate(x1); }
    Q_INVOKABLE void MsetMSecsSinceEpoch(QDateTime* o, qint64 x1) { o->setMSecsSinceEpoch(x1); }
    Q_INVOKABLE void MsetOffsetFromUtc(QDateTime* o, int x1) { o->setOffsetFromUtc(x1); }
    Q_INVOKABLE void MsetTime(QDateTime* o, const QTime& x1) { o->setTime(x1); }
    Q_INVOKABLE void MsetTimeSpec(QDateTime* o, Qt::TimeSpec x1) { o->setTimeSpec(x1); }
    Q_INVOKABLE void MsetTimeZone(QDateTime* o, const QTimeZone& x1) { o->setTimeZone(x1); }
    Q_INVOKABLE void MsetTime_t(QDateTime* o, uint x1) { o->setTime_t(x1); }
    Q_INVOKABLE void Mswap(QDateTime* o, QDateTime& x1) { o->swap(x1); }
    Q_INVOKABLE QTime Mtime(QDateTime* o) const { return o->time(); }
    Q_INVOKABLE int MtimeSpec(QDateTime* o) const { return o->timeSpec(); }
    Q_INVOKABLE QTimeZone MtimeZone(QDateTime* o) const { return o->timeZone(); }
    Q_INVOKABLE QString MtimeZoneAbbreviation(QDateTime* o) const { return o->timeZoneAbbreviation(); }
    Q_INVOKABLE QDateTime MtoLocalTime(QDateTime* o) const { return o->toLocalTime(); }
    Q_INVOKABLE qlonglong MtoMSecsSinceEpoch(QDateTime* o) const { return o->toMSecsSinceEpoch(); }
    Q_INVOKABLE QDateTime MtoOffsetFromUtc(QDateTime* o, int x1) const { return o->toOffsetFromUtc(x1); }
    Q_INVOKABLE QString MtoString(QDateTime* o, const QString& x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QDateTime* o, Qt::DateFormat x1 = Qt::TextDate) const { return o->toString(x1); }
    Q_INVOKABLE QDateTime MtoTimeSpec(QDateTime* o, Qt::TimeSpec x1) const { return o->toTimeSpec(x1); }
    Q_INVOKABLE QDateTime MtoTimeZone(QDateTime* o, const QTimeZone& x1) const { return o->toTimeZone(x1); }
    Q_INVOKABLE uint MtoTime_t(QDateTime* o) const { return o->toTime_t(); }
    Q_INVOKABLE QDateTime MtoUTC(QDateTime* o) const { return o->toUTC(); }
    Q_INVOKABLE QDateTime ScurrentDateTime() { return QDateTime::currentDateTime(); }
    Q_INVOKABLE QDateTime ScurrentDateTimeUtc() { return QDateTime::currentDateTimeUtc(); }
    Q_INVOKABLE qlonglong ScurrentMSecsSinceEpoch() { return QDateTime::currentMSecsSinceEpoch(); }
    Q_INVOKABLE QDateTime SfromMSecsSinceEpoch(qint64 x1) { return QDateTime::fromMSecsSinceEpoch(x1); }
    Q_INVOKABLE QDateTime SfromMSecsSinceEpoch(qint64 x1, Qt::TimeSpec x2, int x3 = 0) { return QDateTime::fromMSecsSinceEpoch(x1, x2, x3); }
    Q_INVOKABLE QDateTime SfromMSecsSinceEpoch(qint64 x1, const QTimeZone& x2) { return QDateTime::fromMSecsSinceEpoch(x1, x2); }
    Q_INVOKABLE QDateTime SfromString(const QString& x1, Qt::DateFormat x2 = Qt::TextDate) { return QDateTime::fromString(x1, x2); }
    Q_INVOKABLE QDateTime SfromString(const QString& x1, const QString& x2) { return QDateTime::fromString(x1, x2); }
    Q_INVOKABLE QDateTime SfromTime_t(uint x1) { return QDateTime::fromTime_t(x1); }
    Q_INVOKABLE QDateTime SfromTime_t(uint x1, Qt::TimeSpec x2, int x3 = 0) { return QDateTime::fromTime_t(x1, x2, x3); }
    Q_INVOKABLE QDateTime SfromTime_t(uint x1, const QTimeZone& x2) { return QDateTime::fromTime_t(x1, x2); }
};

class EQL_EXPORT N38 : public QObject { // QDesktopServices
    Q_OBJECT
public:
    Q_INVOKABLE bool SopenUrl(const QUrl& x1) { return QDesktopServices::openUrl(x1); }
};

class EQL_EXPORT N39 : public QObject { // QDir
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QDir& x1) { return new LDir(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1 = QString()) { return new LDir(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QString& x2, QDir::SortFlags x3 = QDir::Name|QDir::IgnoreCase, QDir::Filters x4 = QDir::AllEntries) { return new LDir(u, x1, x2, x3, x4); }
    Q_INVOKABLE QString MabsoluteFilePath(QDir* o, const QString& x1) const { return o->absoluteFilePath(x1); }
    Q_INVOKABLE QString MabsolutePath(QDir* o) const { return o->absolutePath(); }
    Q_INVOKABLE QString McanonicalPath(QDir* o) const { return o->canonicalPath(); }
    Q_INVOKABLE bool Mcd(QDir* o, const QString& x1) { return o->cd(x1); }
    Q_INVOKABLE bool McdUp(QDir* o) { return o->cdUp(); }
    Q_INVOKABLE uint Mcount(QDir* o) const { return o->count(); }
    Q_INVOKABLE QString MdirName(QDir* o) const { return o->dirName(); }
    Q_INVOKABLE QFileInfoList MentryInfoList(QDir* o, const QStringList& x1, QDir::Filters x2 = QDir::NoFilter, QDir::SortFlags x3 = QDir::NoSort) const { return o->entryInfoList(x1, x2, x3); }
    Q_INVOKABLE QFileInfoList MentryInfoList(QDir* o, QDir::Filters x1 = QDir::NoFilter, QDir::SortFlags x2 = QDir::NoSort) const { return o->entryInfoList(x1, x2); }
    Q_INVOKABLE QStringList MentryList(QDir* o, const QStringList& x1, QDir::Filters x2 = QDir::NoFilter, QDir::SortFlags x3 = QDir::NoSort) const { return o->entryList(x1, x2, x3); }
    Q_INVOKABLE QStringList MentryList(QDir* o, QDir::Filters x1 = QDir::NoFilter, QDir::SortFlags x2 = QDir::NoSort) const { return o->entryList(x1, x2); }
    Q_INVOKABLE bool Mexists(QDir* o, const QString& x1) const { return o->exists(x1); }
    Q_INVOKABLE bool Mexists(QDir* o) const { return o->exists(); }
    Q_INVOKABLE QString MfilePath(QDir* o, const QString& x1) const { return o->filePath(x1); }
    Q_INVOKABLE int Mfilter(QDir* o) const { return o->filter(); }
    Q_INVOKABLE bool MisAbsolute(QDir* o) const { return o->isAbsolute(); }
    Q_INVOKABLE bool MisReadable(QDir* o) const { return o->isReadable(); }
    Q_INVOKABLE bool MisRelative(QDir* o) const { return o->isRelative(); }
    Q_INVOKABLE bool MisRoot(QDir* o) const { return o->isRoot(); }
    Q_INVOKABLE bool MmakeAbsolute(QDir* o) { return o->makeAbsolute(); }
    Q_INVOKABLE bool Mmkdir(QDir* o, const QString& x1) const { return o->mkdir(x1); }
    Q_INVOKABLE bool Mmkpath(QDir* o, const QString& x1) const { return o->mkpath(x1); }
    Q_INVOKABLE QStringList MnameFilters(QDir* o) const { return o->nameFilters(); }
    Q_INVOKABLE QString Mpath(QDir* o) const { return o->path(); }
    Q_INVOKABLE void Mrefresh(QDir* o) const { o->refresh(); }
    Q_INVOKABLE QString MrelativeFilePath(QDir* o, const QString& x1) const { return o->relativeFilePath(x1); }
    Q_INVOKABLE bool Mremove(QDir* o, const QString& x1) { return o->remove(x1); }
    Q_INVOKABLE bool MremoveRecursively(QDir* o) { return o->removeRecursively(); }
    Q_INVOKABLE bool Mrename(QDir* o, const QString& x1, const QString& x2) { return o->rename(x1, x2); }
    Q_INVOKABLE bool Mrmdir(QDir* o, const QString& x1) const { return o->rmdir(x1); }
    Q_INVOKABLE bool Mrmpath(QDir* o, const QString& x1) const { return o->rmpath(x1); }
    Q_INVOKABLE void MsetFilter(QDir* o, QDir::Filters x1) { o->setFilter(x1); }
    Q_INVOKABLE void MsetNameFilters(QDir* o, const QStringList& x1) { o->setNameFilters(x1); }
    Q_INVOKABLE void MsetPath(QDir* o, const QString& x1) { o->setPath(x1); }
    Q_INVOKABLE void MsetSorting(QDir* o, QDir::SortFlags x1) { o->setSorting(x1); }
    Q_INVOKABLE int Msorting(QDir* o) const { return o->sorting(); }
    Q_INVOKABLE void Mswap(QDir* o, QDir& x1) { o->swap(x1); }
    Q_INVOKABLE void SaddSearchPath(const QString& x1, const QString& x2) { QDir::addSearchPath(x1, x2); }
    Q_INVOKABLE QString ScleanPath(const QString& x1) { return QDir::cleanPath(x1); }
    Q_INVOKABLE QDir Scurrent() { return QDir::current(); }
    Q_INVOKABLE QString ScurrentPath() { return QDir::currentPath(); }
    Q_INVOKABLE QFileInfoList Sdrives() { return QDir::drives(); }
    Q_INVOKABLE QString SfromNativeSeparators(const QString& x1) { return QDir::fromNativeSeparators(x1); }
    Q_INVOKABLE QDir Shome() { return QDir::home(); }
    Q_INVOKABLE QString ShomePath() { return QDir::homePath(); }
    Q_INVOKABLE bool SisAbsolutePath(const QString& x1) { return QDir::isAbsolutePath(x1); }
    Q_INVOKABLE bool SisRelativePath(const QString& x1) { return QDir::isRelativePath(x1); }
    Q_INVOKABLE bool Smatch(const QString& x1, const QString& x2) { return QDir::match(x1, x2); }
    Q_INVOKABLE bool Smatch(const QStringList& x1, const QString& x2) { return QDir::match(x1, x2); }
    Q_INVOKABLE QDir Sroot() { return QDir::root(); }
    Q_INVOKABLE QString SrootPath() { return QDir::rootPath(); }
    Q_INVOKABLE QStringList SsearchPaths(const QString& x1) { return QDir::searchPaths(x1); }
    Q_INVOKABLE QChar Sseparator() { return QDir::separator(); }
    Q_INVOKABLE bool SsetCurrent(const QString& x1) { return QDir::setCurrent(x1); }
    Q_INVOKABLE void SsetSearchPaths(const QString& x1, const QStringList& x2) { QDir::setSearchPaths(x1, x2); }
    Q_INVOKABLE QDir Stemp() { return QDir::temp(); }
    Q_INVOKABLE QString StempPath() { return QDir::tempPath(); }
    Q_INVOKABLE QString StoNativeSeparators(const QString& x1) { return QDir::toNativeSeparators(x1); }
};

class EQL_EXPORT N40 : public QObject { // QDirIterator
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QDir& x1, QDirIterator::IteratorFlags x2 = QDirIterator::NoIteratorFlags) { return new LDirIterator(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QDirIterator::IteratorFlags x2 = QDirIterator::NoIteratorFlags) { return new LDirIterator(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QDir::Filters x2, QDirIterator::IteratorFlags x3 = QDirIterator::NoIteratorFlags) { return new LDirIterator(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QStringList& x2, QDir::Filters x3 = QDir::NoFilter, QDirIterator::IteratorFlags x4 = QDirIterator::NoIteratorFlags) { return new LDirIterator(u, x1, x2, x3, x4); }
    Q_INVOKABLE QFileInfo MfileInfo(QDirIterator* o) const { return o->fileInfo(); }
    Q_INVOKABLE QString MfileName(QDirIterator* o) const { return o->fileName(); }
    Q_INVOKABLE QString MfilePath(QDirIterator* o) const { return o->filePath(); }
    Q_INVOKABLE bool MhasNext(QDirIterator* o) const { return o->hasNext(); }
    Q_INVOKABLE QString Mnext(QDirIterator* o) { return o->next(); }
    Q_INVOKABLE QString Mpath(QDirIterator* o) const { return o->path(); }
};

class EQL_EXPORT N46 : public QObject { // QEasingCurve
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QEasingCurve::Type x1 = QEasingCurve::Linear) { return new LEasingCurve(u, x1); }
    Q_INVOKABLE void* C(uint u, const QEasingCurve& x1) { return new LEasingCurve(u, x1); }
    Q_INVOKABLE void MaddCubicBezierSegment(QEasingCurve* o, const QPointF& x1, const QPointF& x2, const QPointF& x3) { o->addCubicBezierSegment(x1, x2, x3); }
    Q_INVOKABLE void MaddTCBSegment(QEasingCurve* o, const QPointF& x1, qreal x2, qreal x3, qreal x4) { o->addTCBSegment(x1, x2, x3, x4); }
    Q_INVOKABLE qreal Mamplitude(QEasingCurve* o) const { return o->amplitude(); }
    Q_INVOKABLE qreal Movershoot(QEasingCurve* o) const { return o->overshoot(); }
    Q_INVOKABLE qreal Mperiod(QEasingCurve* o) const { return o->period(); }
    Q_INVOKABLE void MsetAmplitude(QEasingCurve* o, qreal x1) { o->setAmplitude(x1); }
    Q_INVOKABLE void MsetOvershoot(QEasingCurve* o, qreal x1) { o->setOvershoot(x1); }
    Q_INVOKABLE void MsetPeriod(QEasingCurve* o, qreal x1) { o->setPeriod(x1); }
    Q_INVOKABLE void MsetType(QEasingCurve* o, QEasingCurve::Type x1) { o->setType(x1); }
    Q_INVOKABLE void Mswap(QEasingCurve* o, QEasingCurve& x1) { o->swap(x1); }
    Q_INVOKABLE QVector<QPointF> MtoCubicSpline(QEasingCurve* o) const { return o->toCubicSpline(); }
    Q_INVOKABLE int Mtype(QEasingCurve* o) const { return o->type(); }
    Q_INVOKABLE qreal MvalueForProgress(QEasingCurve* o, qreal x1) const { return o->valueForProgress(x1); }
};

class EQL_EXPORT N47 : public QObject { // QElapsedTimer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LElapsedTimer(u); }
    Q_INVOKABLE qlonglong Melapsed(QElapsedTimer* o) const { return o->elapsed(); }
    Q_INVOKABLE bool MhasExpired(QElapsedTimer* o, qint64 x1) const { return o->hasExpired(x1); }
    Q_INVOKABLE void Minvalidate(QElapsedTimer* o) { o->invalidate(); }
    Q_INVOKABLE bool MisValid(QElapsedTimer* o) const { return o->isValid(); }
    Q_INVOKABLE qlonglong MmsecsSinceReference(QElapsedTimer* o) const { return o->msecsSinceReference(); }
    Q_INVOKABLE qlonglong MmsecsTo(QElapsedTimer* o, const QElapsedTimer& x1) const { return o->msecsTo(x1); }
    Q_INVOKABLE qlonglong MnsecsElapsed(QElapsedTimer* o) const { return o->nsecsElapsed(); }
    Q_INVOKABLE qlonglong Mrestart(QElapsedTimer* o) { return o->restart(); }
    Q_INVOKABLE qlonglong MsecsTo(QElapsedTimer* o, const QElapsedTimer& x1) const { return o->secsTo(x1); }
    Q_INVOKABLE void Mstart(QElapsedTimer* o) { o->start(); }
    Q_INVOKABLE int SclockType() { return QElapsedTimer::clockType(); }
    Q_INVOKABLE bool SisMonotonic() { return QElapsedTimer::isMonotonic(); }
};

class EQL_EXPORT N49 : public QObject { // QEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QEvent::Type x1) { return new LEvent(u, x1); }
    Q_INVOKABLE void Maccept(QEvent* o) { o->accept(); }
    Q_INVOKABLE void Mignore(QEvent* o) { o->ignore(); }
    Q_INVOKABLE bool MisAccepted(QEvent* o) const { return o->isAccepted(); }
    Q_INVOKABLE void MsetAccepted(QEvent* o, bool x1) { o->setAccepted(x1); }
    Q_INVOKABLE bool Mspontaneous(QEvent* o) const { return o->spontaneous(); }
    Q_INVOKABLE int Mtype(QEvent* o) const { return o->type(); }
    Q_INVOKABLE int SregisterEventType(int x1 = -1) { return QEvent::registerEventType(x1); }
};

class EQL_EXPORT N50 : public QObject { // QEventLoopLocker
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LEventLoopLocker(u); }
    Q_INVOKABLE void* C(uint u, QEventLoop* x1) { return new LEventLoopLocker(u, x1); }
    Q_INVOKABLE void* C(uint u, QThread* x1) { return new LEventLoopLocker(u, x1); }
};

class EQL_EXPORT N52 : public QObject { // QFileIconProvider
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LFileIconProvider(u); }
    Q_INVOKABLE QIcon Micon(QFileIconProvider* o, QFileIconProvider::IconType x1) const { return o->icon(x1); }
    Q_INVOKABLE QIcon Micon(QFileIconProvider* o, const QFileInfo& x1) const { return o->icon(x1); }
    Q_INVOKABLE int Moptions(QFileIconProvider* o) const { return o->options(); }
    Q_INVOKABLE void MsetOptions(QFileIconProvider* o, QFileIconProvider::Options x1) { o->setOptions(x1); }
    Q_INVOKABLE QString Mtype(QFileIconProvider* o, const QFileInfo& x1) const { return o->type(x1); }
};

class EQL_EXPORT N53 : public QObject { // QFileInfo
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LFileInfo(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LFileInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QFile& x1) { return new LFileInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDir& x1, const QString& x2) { return new LFileInfo(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QFileInfo& x1) { return new LFileInfo(u, x1); }
    Q_INVOKABLE QDir MabsoluteDir(QFileInfo* o) const { return o->absoluteDir(); }
    Q_INVOKABLE QString MabsoluteFilePath(QFileInfo* o) const { return o->absoluteFilePath(); }
    Q_INVOKABLE QString MabsolutePath(QFileInfo* o) const { return o->absolutePath(); }
    Q_INVOKABLE QString MbaseName(QFileInfo* o) const { return o->baseName(); }
    Q_INVOKABLE QString MbundleName(QFileInfo* o) const { return o->bundleName(); }
    Q_INVOKABLE bool Mcaching(QFileInfo* o) const { return o->caching(); }
    Q_INVOKABLE QString McanonicalFilePath(QFileInfo* o) const { return o->canonicalFilePath(); }
    Q_INVOKABLE QString McanonicalPath(QFileInfo* o) const { return o->canonicalPath(); }
    Q_INVOKABLE QString McompleteBaseName(QFileInfo* o) const { return o->completeBaseName(); }
    Q_INVOKABLE QString McompleteSuffix(QFileInfo* o) const { return o->completeSuffix(); }
    Q_INVOKABLE QDateTime Mcreated(QFileInfo* o) const { return o->created(); }
    Q_INVOKABLE QDir Mdir(QFileInfo* o) const { return o->dir(); }
    Q_INVOKABLE bool Mexists(QFileInfo* o) const { return o->exists(); }
    Q_INVOKABLE QString MfileName(QFileInfo* o) const { return o->fileName(); }
    Q_INVOKABLE QString MfilePath(QFileInfo* o) const { return o->filePath(); }
    Q_INVOKABLE QString Mgroup(QFileInfo* o) const { return o->group(); }
    Q_INVOKABLE uint MgroupId(QFileInfo* o) const { return o->groupId(); }
    Q_INVOKABLE bool MisAbsolute(QFileInfo* o) const { return o->isAbsolute(); }
    Q_INVOKABLE bool MisBundle(QFileInfo* o) const { return o->isBundle(); }
    Q_INVOKABLE bool MisDir(QFileInfo* o) const { return o->isDir(); }
    Q_INVOKABLE bool MisExecutable(QFileInfo* o) const { return o->isExecutable(); }
    Q_INVOKABLE bool MisFile(QFileInfo* o) const { return o->isFile(); }
    Q_INVOKABLE bool MisHidden(QFileInfo* o) const { return o->isHidden(); }
    Q_INVOKABLE bool MisNativePath(QFileInfo* o) const { return o->isNativePath(); }
    Q_INVOKABLE bool MisReadable(QFileInfo* o) const { return o->isReadable(); }
    Q_INVOKABLE bool MisRelative(QFileInfo* o) const { return o->isRelative(); }
    Q_INVOKABLE bool MisRoot(QFileInfo* o) const { return o->isRoot(); }
    Q_INVOKABLE bool MisSymLink(QFileInfo* o) const { return o->isSymLink(); }
    Q_INVOKABLE bool MisWritable(QFileInfo* o) const { return o->isWritable(); }
    Q_INVOKABLE QDateTime MlastModified(QFileInfo* o) const { return o->lastModified(); }
    Q_INVOKABLE QDateTime MlastRead(QFileInfo* o) const { return o->lastRead(); }
    Q_INVOKABLE bool MmakeAbsolute(QFileInfo* o) { return o->makeAbsolute(); }
    Q_INVOKABLE QString Mowner(QFileInfo* o) const { return o->owner(); }
    Q_INVOKABLE uint MownerId(QFileInfo* o) const { return o->ownerId(); }
    Q_INVOKABLE QString Mpath(QFileInfo* o) const { return o->path(); }
    Q_INVOKABLE bool Mpermission(QFileInfo* o, QFile::Permissions x1) const { return o->permission(x1); }
    Q_INVOKABLE int Mpermissions(QFileInfo* o) const { return o->permissions(); }
    Q_INVOKABLE void Mrefresh(QFileInfo* o) { o->refresh(); }
    Q_INVOKABLE void MsetCaching(QFileInfo* o, bool x1) { o->setCaching(x1); }
    Q_INVOKABLE void MsetFile(QFileInfo* o, const QString& x1) { o->setFile(x1); }
    Q_INVOKABLE void MsetFile(QFileInfo* o, const QFile& x1) { o->setFile(x1); }
    Q_INVOKABLE void MsetFile(QFileInfo* o, const QDir& x1, const QString& x2) { o->setFile(x1, x2); }
    Q_INVOKABLE qlonglong Msize(QFileInfo* o) const { return o->size(); }
    Q_INVOKABLE QString Msuffix(QFileInfo* o) const { return o->suffix(); }
    Q_INVOKABLE void Mswap(QFileInfo* o, QFileInfo& x1) { o->swap(x1); }
    Q_INVOKABLE QString MsymLinkTarget(QFileInfo* o) const { return o->symLinkTarget(); }
    Q_INVOKABLE bool Sexists(const QString& x1) { return QFileInfo::exists(x1); }
};

class EQL_EXPORT N56 : public QObject { // QFont
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LFont(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1, int x2 = -1, int x3 = -1, bool x4 = false) { return new LFont(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QFont& x1, QPaintDevice* x2) { return new LFont(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QFont& x1) { return new LFont(u, x1); }
    Q_INVOKABLE bool Mbold(QFont* o) const { return o->bold(); }
    Q_INVOKABLE int Mcapitalization(QFont* o) const { return o->capitalization(); }
    Q_INVOKABLE QString MdefaultFamily(QFont* o) const { return o->defaultFamily(); }
    Q_INVOKABLE bool MexactMatch(QFont* o) const { return o->exactMatch(); }
    Q_INVOKABLE QString Mfamily(QFont* o) const { return o->family(); }
    Q_INVOKABLE bool MfixedPitch(QFont* o) const { return o->fixedPitch(); }
    Q_INVOKABLE bool MfromString(QFont* o, const QString& x1) { return o->fromString(x1); }
    Q_INVOKABLE int MhintingPreference(QFont* o) const { return o->hintingPreference(); }
    Q_INVOKABLE bool MisCopyOf(QFont* o, const QFont& x1) const { return o->isCopyOf(x1); }
    Q_INVOKABLE bool Mitalic(QFont* o) const { return o->italic(); }
    Q_INVOKABLE bool Mkerning(QFont* o) const { return o->kerning(); }
    Q_INVOKABLE QString Mkey(QFont* o) const { return o->key(); }
    Q_INVOKABLE QString MlastResortFamily(QFont* o) const { return o->lastResortFamily(); }
    Q_INVOKABLE QString MlastResortFont(QFont* o) const { return o->lastResortFont(); }
    Q_INVOKABLE qreal MletterSpacing(QFont* o) const { return o->letterSpacing(); }
    Q_INVOKABLE int MletterSpacingType(QFont* o) const { return o->letterSpacingType(); }
    Q_INVOKABLE bool Moverline(QFont* o) const { return o->overline(); }
    Q_INVOKABLE int MpixelSize(QFont* o) const { return o->pixelSize(); }
    Q_INVOKABLE int MpointSize(QFont* o) const { return o->pointSize(); }
    Q_INVOKABLE qreal MpointSizeF(QFont* o) const { return o->pointSizeF(); }
    Q_INVOKABLE QFont Mresolve(QFont* o, const QFont& x1) const { return o->resolve(x1); }
    Q_INVOKABLE void MsetBold(QFont* o, bool x1) { o->setBold(x1); }
    Q_INVOKABLE void MsetCapitalization(QFont* o, QFont::Capitalization x1) { o->setCapitalization(x1); }
    Q_INVOKABLE void MsetFamily(QFont* o, const QString& x1) { o->setFamily(x1); }
    Q_INVOKABLE void MsetFixedPitch(QFont* o, bool x1) { o->setFixedPitch(x1); }
    Q_INVOKABLE void MsetHintingPreference(QFont* o, QFont::HintingPreference x1) { o->setHintingPreference(x1); }
    Q_INVOKABLE void MsetItalic(QFont* o, bool x1) { o->setItalic(x1); }
    Q_INVOKABLE void MsetKerning(QFont* o, bool x1) { o->setKerning(x1); }
    Q_INVOKABLE void MsetLetterSpacing(QFont* o, QFont::SpacingType x1, qreal x2) { o->setLetterSpacing(x1, x2); }
    Q_INVOKABLE void MsetOverline(QFont* o, bool x1) { o->setOverline(x1); }
    Q_INVOKABLE void MsetPixelSize(QFont* o, int x1) { o->setPixelSize(x1); }
    Q_INVOKABLE void MsetPointSize(QFont* o, int x1) { o->setPointSize(x1); }
    Q_INVOKABLE void MsetPointSizeF(QFont* o, qreal x1) { o->setPointSizeF(x1); }
    Q_INVOKABLE void MsetStretch(QFont* o, int x1) { o->setStretch(x1); }
    Q_INVOKABLE void MsetStrikeOut(QFont* o, bool x1) { o->setStrikeOut(x1); }
    Q_INVOKABLE void MsetStyle(QFont* o, QFont::Style x1) { o->setStyle(x1); }
    Q_INVOKABLE void MsetStyleHint(QFont* o, QFont::StyleHint x1, QFont::StyleStrategy x2 = QFont::PreferDefault) { o->setStyleHint(x1, x2); }
    Q_INVOKABLE void MsetStyleName(QFont* o, const QString& x1) { o->setStyleName(x1); }
    Q_INVOKABLE void MsetStyleStrategy(QFont* o, QFont::StyleStrategy x1) { o->setStyleStrategy(x1); }
    Q_INVOKABLE void MsetUnderline(QFont* o, bool x1) { o->setUnderline(x1); }
    Q_INVOKABLE void MsetWeight(QFont* o, int x1) { o->setWeight(x1); }
    Q_INVOKABLE void MsetWordSpacing(QFont* o, qreal x1) { o->setWordSpacing(x1); }
    Q_INVOKABLE int Mstretch(QFont* o) const { return o->stretch(); }
    Q_INVOKABLE bool MstrikeOut(QFont* o) const { return o->strikeOut(); }
    Q_INVOKABLE int Mstyle(QFont* o) const { return o->style(); }
    Q_INVOKABLE int MstyleHint(QFont* o) const { return o->styleHint(); }
    Q_INVOKABLE QString MstyleName(QFont* o) const { return o->styleName(); }
    Q_INVOKABLE int MstyleStrategy(QFont* o) const { return o->styleStrategy(); }
    Q_INVOKABLE void Mswap(QFont* o, QFont& x1) { o->swap(x1); }
    Q_INVOKABLE QString MtoString(QFont* o) const { return o->toString(); }
    Q_INVOKABLE bool Munderline(QFont* o) const { return o->underline(); }
    Q_INVOKABLE int Mweight(QFont* o) const { return o->weight(); }
    Q_INVOKABLE qreal MwordSpacing(QFont* o) const { return o->wordSpacing(); }
    Q_INVOKABLE void SinsertSubstitution(const QString& x1, const QString& x2) { QFont::insertSubstitution(x1, x2); }
    Q_INVOKABLE void SinsertSubstitutions(const QString& x1, const QStringList& x2) { QFont::insertSubstitutions(x1, x2); }
    Q_INVOKABLE void SremoveSubstitutions(const QString& x1) { QFont::removeSubstitutions(x1); }
    Q_INVOKABLE QString Ssubstitute(const QString& x1) { return QFont::substitute(x1); }
    Q_INVOKABLE QStringList Ssubstitutes(const QString& x1) { return QFont::substitutes(x1); }
    Q_INVOKABLE QStringList Ssubstitutions() { return QFont::substitutions(); }
};

class EQL_EXPORT N57 : public QObject { // QFontDatabase
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LFontDatabase(u); }
    Q_INVOKABLE bool Mbold(QFontDatabase* o, const QString& x1, const QString& x2) const { return o->bold(x1, x2); }
    Q_INVOKABLE QStringList Mfamilies(QFontDatabase* o, QFontDatabase::WritingSystem x1 = QFontDatabase::Any) const { return o->families(x1); }
    Q_INVOKABLE QFont Mfont(QFontDatabase* o, const QString& x1, const QString& x2, int x3) const { return o->font(x1, x2, x3); }
    Q_INVOKABLE bool MisBitmapScalable(QFontDatabase* o, const QString& x1, const QString& x2 = QString()) const { return o->isBitmapScalable(x1, x2); }
    Q_INVOKABLE bool MisFixedPitch(QFontDatabase* o, const QString& x1, const QString& x2 = QString()) const { return o->isFixedPitch(x1, x2); }
    Q_INVOKABLE bool MisPrivateFamily(QFontDatabase* o, const QString& x1) const { return o->isPrivateFamily(x1); }
    Q_INVOKABLE bool MisScalable(QFontDatabase* o, const QString& x1, const QString& x2 = QString()) const { return o->isScalable(x1, x2); }
    Q_INVOKABLE bool MisSmoothlyScalable(QFontDatabase* o, const QString& x1, const QString& x2 = QString()) const { return o->isSmoothlyScalable(x1, x2); }
    Q_INVOKABLE bool Mitalic(QFontDatabase* o, const QString& x1, const QString& x2) const { return o->italic(x1, x2); }
    Q_INVOKABLE QList<int> MpointSizes(QFontDatabase* o, const QString& x1, const QString& x2 = QString()) { return o->pointSizes(x1, x2); }
    Q_INVOKABLE QList<int> MsmoothSizes(QFontDatabase* o, const QString& x1, const QString& x2) { return o->smoothSizes(x1, x2); }
    Q_INVOKABLE QString MstyleString(QFontDatabase* o, const QFont& x1) { return o->styleString(x1); }
    Q_INVOKABLE QString MstyleString(QFontDatabase* o, const QFontInfo& x1) { return o->styleString(x1); }
    Q_INVOKABLE QStringList Mstyles(QFontDatabase* o, const QString& x1) const { return o->styles(x1); }
    Q_INVOKABLE int Mweight(QFontDatabase* o, const QString& x1, const QString& x2) const { return o->weight(x1, x2); }
    Q_INVOKABLE int SaddApplicationFont(const QString& x1) { return QFontDatabase::addApplicationFont(x1); }
    Q_INVOKABLE int SaddApplicationFontFromData(const QByteArray& x1) { return QFontDatabase::addApplicationFontFromData(x1); }
    Q_INVOKABLE QStringList SapplicationFontFamilies(int x1) { return QFontDatabase::applicationFontFamilies(x1); }
    Q_INVOKABLE bool SremoveAllApplicationFonts() { return QFontDatabase::removeAllApplicationFonts(); }
    Q_INVOKABLE bool SremoveApplicationFont(int x1) { return QFontDatabase::removeApplicationFont(x1); }
    Q_INVOKABLE QList<int> SstandardSizes() { return QFontDatabase::standardSizes(); }
    Q_INVOKABLE QFont SsystemFont(QFontDatabase::SystemFont x1) { return QFontDatabase::systemFont(x1); }
    Q_INVOKABLE QString SwritingSystemName(QFontDatabase::WritingSystem x1) { return QFontDatabase::writingSystemName(x1); }
    Q_INVOKABLE QString SwritingSystemSample(QFontDatabase::WritingSystem x1) { return QFontDatabase::writingSystemSample(x1); }
};

class EQL_EXPORT N58 : public QObject { // QFontInfo
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QFont& x1) { return new LFontInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QFontInfo& x1) { return new LFontInfo(u, x1); }
    Q_INVOKABLE bool Mbold(QFontInfo* o) const { return o->bold(); }
    Q_INVOKABLE bool MexactMatch(QFontInfo* o) const { return o->exactMatch(); }
    Q_INVOKABLE QString Mfamily(QFontInfo* o) const { return o->family(); }
    Q_INVOKABLE bool MfixedPitch(QFontInfo* o) const { return o->fixedPitch(); }
    Q_INVOKABLE bool Mitalic(QFontInfo* o) const { return o->italic(); }
    Q_INVOKABLE int MpixelSize(QFontInfo* o) const { return o->pixelSize(); }
    Q_INVOKABLE int MpointSize(QFontInfo* o) const { return o->pointSize(); }
    Q_INVOKABLE qreal MpointSizeF(QFontInfo* o) const { return o->pointSizeF(); }
    Q_INVOKABLE int Mstyle(QFontInfo* o) const { return o->style(); }
    Q_INVOKABLE int MstyleHint(QFontInfo* o) const { return o->styleHint(); }
    Q_INVOKABLE QString MstyleName(QFontInfo* o) const { return o->styleName(); }
    Q_INVOKABLE void Mswap(QFontInfo* o, QFontInfo& x1) { o->swap(x1); }
    Q_INVOKABLE int Mweight(QFontInfo* o) const { return o->weight(); }
};

class EQL_EXPORT N59 : public QObject { // QFontMetrics
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QFont& x1) { return new LFontMetrics(u, x1); }
    Q_INVOKABLE void* C(uint u, const QFont& x1, QPaintDevice* x2) { return new LFontMetrics(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QFontMetrics& x1) { return new LFontMetrics(u, x1); }
    Q_INVOKABLE int Mascent(QFontMetrics* o) const { return o->ascent(); }
    Q_INVOKABLE int MaverageCharWidth(QFontMetrics* o) const { return o->averageCharWidth(); }
    Q_INVOKABLE QRect MboundingRect(QFontMetrics* o, QChar x1) const { return o->boundingRect(x1); }
    Q_INVOKABLE QRect MboundingRect(QFontMetrics* o, const QString& x1) const { return o->boundingRect(x1); }
    Q_INVOKABLE int Mdescent(QFontMetrics* o) const { return o->descent(); }
    Q_INVOKABLE QString MelidedText(QFontMetrics* o, const QString& x1, Qt::TextElideMode x2, int x3, int x4 = 0) const { return o->elidedText(x1, x2, x3, x4); }
    Q_INVOKABLE int Mheight(QFontMetrics* o) const { return o->height(); }
    Q_INVOKABLE bool MinFont(QFontMetrics* o, QChar x1) const { return o->inFont(x1); }
    Q_INVOKABLE bool MinFontUcs4(QFontMetrics* o, uint x1) const { return o->inFontUcs4(x1); }
    Q_INVOKABLE int Mleading(QFontMetrics* o) const { return o->leading(); }
    Q_INVOKABLE int MleftBearing(QFontMetrics* o, QChar x1) const { return o->leftBearing(x1); }
    Q_INVOKABLE int MlineSpacing(QFontMetrics* o) const { return o->lineSpacing(); }
    Q_INVOKABLE int MlineWidth(QFontMetrics* o) const { return o->lineWidth(); }
    Q_INVOKABLE int MmaxWidth(QFontMetrics* o) const { return o->maxWidth(); }
    Q_INVOKABLE int MminLeftBearing(QFontMetrics* o) const { return o->minLeftBearing(); }
    Q_INVOKABLE int MminRightBearing(QFontMetrics* o) const { return o->minRightBearing(); }
    Q_INVOKABLE int MoverlinePos(QFontMetrics* o) const { return o->overlinePos(); }
    Q_INVOKABLE int MrightBearing(QFontMetrics* o, QChar x1) const { return o->rightBearing(x1); }
    Q_INVOKABLE int MstrikeOutPos(QFontMetrics* o) const { return o->strikeOutPos(); }
    Q_INVOKABLE void Mswap(QFontMetrics* o, QFontMetrics& x1) { o->swap(x1); }
    Q_INVOKABLE QRect MtightBoundingRect(QFontMetrics* o, const QString& x1) const { return o->tightBoundingRect(x1); }
    Q_INVOKABLE int MunderlinePos(QFontMetrics* o) const { return o->underlinePos(); }
    Q_INVOKABLE int Mwidth(QFontMetrics* o, const QString& x1, int x2 = -1) const { return o->width(x1, x2); }
    Q_INVOKABLE int Mwidth(QFontMetrics* o, QChar x1) const { return o->width(x1); }
    Q_INVOKABLE int MxHeight(QFontMetrics* o) const { return o->xHeight(); }
};

class EQL_EXPORT N60 : public QObject { // QFontMetricsF
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QFont& x1) { return new LFontMetricsF(u, x1); }
    Q_INVOKABLE void* C(uint u, const QFont& x1, QPaintDevice* x2) { return new LFontMetricsF(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QFontMetrics& x1) { return new LFontMetricsF(u, x1); }
    Q_INVOKABLE void* C(uint u, const QFontMetricsF& x1) { return new LFontMetricsF(u, x1); }
    Q_INVOKABLE qreal Mascent(QFontMetricsF* o) const { return o->ascent(); }
    Q_INVOKABLE qreal MaverageCharWidth(QFontMetricsF* o) const { return o->averageCharWidth(); }
    Q_INVOKABLE QRectF MboundingRect(QFontMetricsF* o, const QString& x1) const { return o->boundingRect(x1); }
    Q_INVOKABLE QRectF MboundingRect(QFontMetricsF* o, QChar x1) const { return o->boundingRect(x1); }
    Q_INVOKABLE qreal Mdescent(QFontMetricsF* o) const { return o->descent(); }
    Q_INVOKABLE QString MelidedText(QFontMetricsF* o, const QString& x1, Qt::TextElideMode x2, qreal x3, int x4 = 0) const { return o->elidedText(x1, x2, x3, x4); }
    Q_INVOKABLE qreal Mheight(QFontMetricsF* o) const { return o->height(); }
    Q_INVOKABLE bool MinFont(QFontMetricsF* o, QChar x1) const { return o->inFont(x1); }
    Q_INVOKABLE bool MinFontUcs4(QFontMetricsF* o, uint x1) const { return o->inFontUcs4(x1); }
    Q_INVOKABLE qreal Mleading(QFontMetricsF* o) const { return o->leading(); }
    Q_INVOKABLE qreal MleftBearing(QFontMetricsF* o, QChar x1) const { return o->leftBearing(x1); }
    Q_INVOKABLE qreal MlineSpacing(QFontMetricsF* o) const { return o->lineSpacing(); }
    Q_INVOKABLE qreal MlineWidth(QFontMetricsF* o) const { return o->lineWidth(); }
    Q_INVOKABLE qreal MmaxWidth(QFontMetricsF* o) const { return o->maxWidth(); }
    Q_INVOKABLE qreal MminLeftBearing(QFontMetricsF* o) const { return o->minLeftBearing(); }
    Q_INVOKABLE qreal MminRightBearing(QFontMetricsF* o) const { return o->minRightBearing(); }
    Q_INVOKABLE qreal MoverlinePos(QFontMetricsF* o) const { return o->overlinePos(); }
    Q_INVOKABLE qreal MrightBearing(QFontMetricsF* o, QChar x1) const { return o->rightBearing(x1); }
    Q_INVOKABLE qreal MstrikeOutPos(QFontMetricsF* o) const { return o->strikeOutPos(); }
    Q_INVOKABLE void Mswap(QFontMetricsF* o, QFontMetricsF& x1) { o->swap(x1); }
    Q_INVOKABLE QRectF MtightBoundingRect(QFontMetricsF* o, const QString& x1) const { return o->tightBoundingRect(x1); }
    Q_INVOKABLE qreal MunderlinePos(QFontMetricsF* o) const { return o->underlinePos(); }
    Q_INVOKABLE qreal Mwidth(QFontMetricsF* o, const QString& x1) const { return o->width(x1); }
    Q_INVOKABLE qreal Mwidth(QFontMetricsF* o, QChar x1) const { return o->width(x1); }
    Q_INVOKABLE qreal MxHeight(QFontMetricsF* o) const { return o->xHeight(); }
};

class EQL_EXPORT N62 : public QObject { // QGradient
    Q_OBJECT
public:
    Q_INVOKABLE int McoordinateMode(QGradient* o) const { return o->coordinateMode(); }
    Q_INVOKABLE void MsetColorAt(QGradient* o, qreal x1, const QColor& x2) { o->setColorAt(x1, x2); }
    Q_INVOKABLE void MsetCoordinateMode(QGradient* o, QGradient::CoordinateMode x1) { o->setCoordinateMode(x1); }
    Q_INVOKABLE void MsetSpread(QGradient* o, QGradient::Spread x1) { o->setSpread(x1); }
    Q_INVOKABLE void MsetStops(QGradient* o, const QGradientStops& x1) { o->setStops(x1); }
    Q_INVOKABLE int Mspread(QGradient* o) const { return o->spread(); }
    Q_INVOKABLE QGradientStops Mstops(QGradient* o) const { return o->stops(); }
    Q_INVOKABLE int Mtype(QGradient* o) const { return o->type(); }
};

class EQL_EXPORT N66 : public QObject { // QGraphicsItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsItem(u, x1); }
    Q_INVOKABLE bool MacceptDrops(QGraphicsItem* o) const { return o->acceptDrops(); }
    Q_INVOKABLE bool MacceptHoverEvents(QGraphicsItem* o) const { return o->acceptHoverEvents(); }
    Q_INVOKABLE bool MacceptTouchEvents(QGraphicsItem* o) const { return o->acceptTouchEvents(); }
    Q_INVOKABLE int MacceptedMouseButtons(QGraphicsItem* o) const { return o->acceptedMouseButtons(); }
    Q_INVOKABLE void Madvance(QGraphicsItem* o, int x1) { o->advance(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE QRegion MboundingRegion(QGraphicsItem* o, const QTransform& x1) const { return o->boundingRegion(x1); }
    Q_INVOKABLE qreal MboundingRegionGranularity(QGraphicsItem* o) const { return o->boundingRegionGranularity(); }
    Q_INVOKABLE int McacheMode(QGraphicsItem* o) const { return o->cacheMode(); }
    Q_INVOKABLE QList<QGraphicsItem*> MchildItems(QGraphicsItem* o) const { return o->childItems(); }
    Q_INVOKABLE QRectF MchildrenBoundingRect(QGraphicsItem* o) const { return o->childrenBoundingRect(); }
    Q_INVOKABLE void MclearFocus(QGraphicsItem* o) { o->clearFocus(); }
    Q_INVOKABLE QPainterPath MclipPath(QGraphicsItem* o) const { return o->clipPath(); }
    Q_INVOKABLE bool McollidesWithItem(QGraphicsItem* o, const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->collidesWithItem(x1, x2); }
    Q_INVOKABLE bool McollidesWithPath(QGraphicsItem* o, const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->collidesWithPath(x1, x2); }
    Q_INVOKABLE QList<QGraphicsItem*> McollidingItems(QGraphicsItem* o, Qt::ItemSelectionMode x1 = Qt::IntersectsItemShape) const { return o->collidingItems(x1); }
    Q_INVOKABLE QGraphicsItem* McommonAncestorItem(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->commonAncestorItem(x1); }
    Q_INVOKABLE bool Mcontains(QGraphicsItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE QCursor Mcursor(QGraphicsItem* o) const { return o->cursor(); }
    Q_INVOKABLE QVariant Mdata(QGraphicsItem* o, int x1) const { return o->data(x1); }
    Q_INVOKABLE QTransform MdeviceTransform(QGraphicsItem* o, const QTransform& x1) const { return o->deviceTransform(x1); }
    Q_INVOKABLE qreal MeffectiveOpacity(QGraphicsItem* o) const { return o->effectiveOpacity(); }
    Q_INVOKABLE void MensureVisible(QGraphicsItem* o, const QRectF& x1 = QRectF(), int x2 = 50, int x3 = 50) { o->ensureVisible(x1, x2, x3); }
    Q_INVOKABLE void MensureVisible(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4, int x5 = 50, int x6 = 50) { o->ensureVisible(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE bool MfiltersChildEvents(QGraphicsItem* o) const { return o->filtersChildEvents(); }
    Q_INVOKABLE int Mflags(QGraphicsItem* o) const { return o->flags(); }
    Q_INVOKABLE QGraphicsItem* MfocusItem(QGraphicsItem* o) const { return o->focusItem(); }
    Q_INVOKABLE QGraphicsItem* MfocusProxy(QGraphicsItem* o) const { return o->focusProxy(); }
    Q_INVOKABLE void MgrabKeyboard(QGraphicsItem* o) { o->grabKeyboard(); }
    Q_INVOKABLE void MgrabMouse(QGraphicsItem* o) { o->grabMouse(); }
    Q_INVOKABLE QGraphicsEffect* MgraphicsEffect(QGraphicsItem* o) const { return o->graphicsEffect(); }
    Q_INVOKABLE QGraphicsItemGroup* Mgroup(QGraphicsItem* o) const { return o->group(); }
    Q_INVOKABLE bool MhasCursor(QGraphicsItem* o) const { return o->hasCursor(); }
    Q_INVOKABLE bool MhasFocus(QGraphicsItem* o) const { return o->hasFocus(); }
    Q_INVOKABLE void Mhide(QGraphicsItem* o) { o->hide(); }
    Q_INVOKABLE int MinputMethodHints(QGraphicsItem* o) const { return o->inputMethodHints(); }
    Q_INVOKABLE void MinstallSceneEventFilter(QGraphicsItem* o, QGraphicsItem* x1) { o->installSceneEventFilter(x1); }
    Q_INVOKABLE bool MisActive(QGraphicsItem* o) const { return o->isActive(); }
    Q_INVOKABLE bool MisAncestorOf(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->isAncestorOf(x1); }
    Q_INVOKABLE bool MisClipped(QGraphicsItem* o) const { return o->isClipped(); }
    Q_INVOKABLE bool MisEnabled(QGraphicsItem* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisObscured(QGraphicsItem* o, const QRectF& x1 = QRectF()) const { return o->isObscured(x1); }
    Q_INVOKABLE bool MisObscured(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->isObscured(x1, x2, x3, x4); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE bool MisPanel(QGraphicsItem* o) const { return o->isPanel(); }
    Q_INVOKABLE bool MisSelected(QGraphicsItem* o) const { return o->isSelected(); }
    Q_INVOKABLE bool MisUnderMouse(QGraphicsItem* o) const { return o->isUnderMouse(); }
    Q_INVOKABLE bool MisVisible(QGraphicsItem* o) const { return o->isVisible(); }
    Q_INVOKABLE bool MisVisibleTo(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->isVisibleTo(x1); }
    Q_INVOKABLE bool MisWidget(QGraphicsItem* o) const { return o->isWidget(); }
    Q_INVOKABLE bool MisWindow(QGraphicsItem* o) const { return o->isWindow(); }
    Q_INVOKABLE QTransform MitemTransform(QGraphicsItem* o, const QGraphicsItem* x1, bool* x2 = 0) const { return o->itemTransform(x1, x2); }
    Q_INVOKABLE QPointF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPointF& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPolygonF& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPainterPath MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPainterPath& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapFromItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QPointF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3) const { return o->mapFromItem(x1, x2, x3); }
    Q_INVOKABLE QPointF MmapFromParent(QGraphicsItem* o, const QPointF& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPolygonF MmapFromParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPolygonF MmapFromParent(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPainterPath MmapFromParent(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPolygonF MmapFromParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapFromParent(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapFromParent(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapFromParent(x1, x2); }
    Q_INVOKABLE QPointF MmapFromScene(QGraphicsItem* o, const QPointF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygonF MmapFromScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygonF MmapFromScene(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPainterPath MmapFromScene(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygonF MmapFromScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapFromScene(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapFromScene(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapFromScene(x1, x2); }
    Q_INVOKABLE QRectF MmapRectFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapRectFromItem(x1, x2); }
    Q_INVOKABLE QRectF MmapRectFromItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapRectFromItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF MmapRectFromParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectFromParent(x1); }
    Q_INVOKABLE QRectF MmapRectFromParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectFromParent(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MmapRectFromScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectFromScene(x1); }
    Q_INVOKABLE QRectF MmapRectFromScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectFromScene(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MmapRectToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapRectToItem(x1, x2); }
    Q_INVOKABLE QRectF MmapRectToItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapRectToItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF MmapRectToParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectToParent(x1); }
    Q_INVOKABLE QRectF MmapRectToParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectToParent(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MmapRectToScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectToScene(x1); }
    Q_INVOKABLE QRectF MmapRectToScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectToScene(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPointF& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPolygonF& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPainterPath MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPainterPath& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapToItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QPointF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3) const { return o->mapToItem(x1, x2, x3); }
    Q_INVOKABLE QPointF MmapToParent(QGraphicsItem* o, const QPointF& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPolygonF MmapToParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPolygonF MmapToParent(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPainterPath MmapToParent(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPolygonF MmapToParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapToParent(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapToParent(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapToParent(x1, x2); }
    Q_INVOKABLE QPointF MmapToScene(QGraphicsItem* o, const QPointF& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPainterPath MmapToScene(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapToScene(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapToScene(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapToScene(x1, x2); }
    Q_INVOKABLE void MmoveBy(QGraphicsItem* o, qreal x1, qreal x2) { o->moveBy(x1, x2); }
    Q_INVOKABLE qreal Mopacity(QGraphicsItem* o) const { return o->opacity(); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QGraphicsItem* Mpanel(QGraphicsItem* o) const { return o->panel(); }
    Q_INVOKABLE int MpanelModality(QGraphicsItem* o) const { return o->panelModality(); }
    Q_INVOKABLE QGraphicsItem* MparentItem(QGraphicsItem* o) const { return o->parentItem(); }
    Q_INVOKABLE QGraphicsObject* MparentObject(QGraphicsItem* o) const { return o->parentObject(); }
    Q_INVOKABLE QGraphicsWidget* MparentWidget(QGraphicsItem* o) const { return o->parentWidget(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsItem* o) const { return o->pos(); }
    Q_INVOKABLE void MremoveSceneEventFilter(QGraphicsItem* o, QGraphicsItem* x1) { o->removeSceneEventFilter(x1); }
    Q_INVOKABLE void MresetTransform(QGraphicsItem* o) { o->resetTransform(); }
    Q_INVOKABLE qreal Mrotation(QGraphicsItem* o) const { return o->rotation(); }
    Q_INVOKABLE qreal Mscale(QGraphicsItem* o) const { return o->scale(); }
    Q_INVOKABLE QGraphicsScene* Mscene(QGraphicsItem* o) const { return o->scene(); }
    Q_INVOKABLE QRectF MsceneBoundingRect(QGraphicsItem* o) const { return o->sceneBoundingRect(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsItem* o) const { return o->scenePos(); }
    Q_INVOKABLE QTransform MsceneTransform(QGraphicsItem* o) const { return o->sceneTransform(); }
    Q_INVOKABLE void Mscroll(QGraphicsItem* o, qreal x1, qreal x2, const QRectF& x3 = QRectF()) { o->scroll(x1, x2, x3); }
    Q_INVOKABLE void MsetAcceptDrops(QGraphicsItem* o, bool x1) { o->setAcceptDrops(x1); }
    Q_INVOKABLE void MsetAcceptHoverEvents(QGraphicsItem* o, bool x1) { o->setAcceptHoverEvents(x1); }
    Q_INVOKABLE void MsetAcceptTouchEvents(QGraphicsItem* o, bool x1) { o->setAcceptTouchEvents(x1); }
    Q_INVOKABLE void MsetAcceptedMouseButtons(QGraphicsItem* o, Qt::MouseButtons x1) { o->setAcceptedMouseButtons(x1); }
    Q_INVOKABLE void MsetActive(QGraphicsItem* o, bool x1) { o->setActive(x1); }
    Q_INVOKABLE void MsetBoundingRegionGranularity(QGraphicsItem* o, qreal x1) { o->setBoundingRegionGranularity(x1); }
    Q_INVOKABLE void MsetCacheMode(QGraphicsItem* o, QGraphicsItem::CacheMode x1, const QSize& x2 = QSize()) { o->setCacheMode(x1, x2); }
    Q_INVOKABLE void MsetCursor(QGraphicsItem* o, const QCursor& x1) { o->setCursor(x1); }
    Q_INVOKABLE void MsetData(QGraphicsItem* o, int x1, const QVariant& x2) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetEnabled(QGraphicsItem* o, bool x1) { o->setEnabled(x1); }
    Q_INVOKABLE void MsetFiltersChildEvents(QGraphicsItem* o, bool x1) { o->setFiltersChildEvents(x1); }
    Q_INVOKABLE void MsetFlag(QGraphicsItem* o, QGraphicsItem::GraphicsItemFlag x1, bool x2 = true) { o->setFlag(x1, x2); }
    Q_INVOKABLE void MsetFlags(QGraphicsItem* o, QGraphicsItem::GraphicsItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFocus(QGraphicsItem* o, Qt::FocusReason x1 = Qt::OtherFocusReason) { o->setFocus(x1); }
    Q_INVOKABLE void MsetFocusProxy(QGraphicsItem* o, QGraphicsItem* x1) { o->setFocusProxy(x1); }
    Q_INVOKABLE void MsetGraphicsEffect(QGraphicsItem* o, QGraphicsEffect* x1) { o->setGraphicsEffect(x1); }
    Q_INVOKABLE void MsetGroup(QGraphicsItem* o, QGraphicsItemGroup* x1) { o->setGroup(x1); }
    Q_INVOKABLE void MsetInputMethodHints(QGraphicsItem* o, Qt::InputMethodHints x1) { o->setInputMethodHints(x1); }
    Q_INVOKABLE void MsetOpacity(QGraphicsItem* o, qreal x1) { o->setOpacity(x1); }
    Q_INVOKABLE void MsetPanelModality(QGraphicsItem* o, QGraphicsItem::PanelModality x1) { o->setPanelModality(x1); }
    Q_INVOKABLE void MsetParentItem(QGraphicsItem* o, QGraphicsItem* x1) { o->setParentItem(x1); }
    Q_INVOKABLE void MsetPos(QGraphicsItem* o, const QPointF& x1) { o->setPos(x1); }
    Q_INVOKABLE void MsetPos(QGraphicsItem* o, qreal x1, qreal x2) { o->setPos(x1, x2); }
    Q_INVOKABLE void MsetRotation(QGraphicsItem* o, qreal x1) { o->setRotation(x1); }
    Q_INVOKABLE void MsetScale(QGraphicsItem* o, qreal x1) { o->setScale(x1); }
    Q_INVOKABLE void MsetSelected(QGraphicsItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetToolTip(QGraphicsItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetTransform(QGraphicsItem* o, const QTransform& x1, bool x2 = false) { o->setTransform(x1, x2); }
    Q_INVOKABLE void MsetTransformOriginPoint(QGraphicsItem* o, const QPointF& x1) { o->setTransformOriginPoint(x1); }
    Q_INVOKABLE void MsetTransformOriginPoint(QGraphicsItem* o, qreal x1, qreal x2) { o->setTransformOriginPoint(x1, x2); }
    Q_INVOKABLE void MsetVisible(QGraphicsItem* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE void MsetX(QGraphicsItem* o, qreal x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QGraphicsItem* o, qreal x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZValue(QGraphicsItem* o, qreal x1) { o->setZValue(x1); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsItem* o) const { return o->shape(); }
    Q_INVOKABLE void Mshow(QGraphicsItem* o) { o->show(); }
    Q_INVOKABLE void MstackBefore(QGraphicsItem* o, const QGraphicsItem* x1) { o->stackBefore(x1); }
    Q_INVOKABLE QGraphicsObject* MtoGraphicsObject(QGraphicsItem* o) { return o->toGraphicsObject(); }
    Q_INVOKABLE QString MtoolTip(QGraphicsItem* o) const { return o->toolTip(); }
    Q_INVOKABLE QGraphicsItem* MtopLevelItem(QGraphicsItem* o) const { return o->topLevelItem(); }
    Q_INVOKABLE QGraphicsWidget* MtopLevelWidget(QGraphicsItem* o) const { return o->topLevelWidget(); }
    Q_INVOKABLE QTransform Mtransform(QGraphicsItem* o) const { return o->transform(); }
    Q_INVOKABLE QPointF MtransformOriginPoint(QGraphicsItem* o) const { return o->transformOriginPoint(); }
    Q_INVOKABLE int Mtype(QGraphicsItem* o) const { return o->type(); }
    Q_INVOKABLE void MungrabKeyboard(QGraphicsItem* o) { o->ungrabKeyboard(); }
    Q_INVOKABLE void MungrabMouse(QGraphicsItem* o) { o->ungrabMouse(); }
    Q_INVOKABLE void MunsetCursor(QGraphicsItem* o) { o->unsetCursor(); }
    Q_INVOKABLE void Mupdate(QGraphicsItem* o, const QRectF& x1 = QRectF()) { o->update(x1); }
    Q_INVOKABLE void Mupdate(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->update(x1, x2, x3, x4); }
    Q_INVOKABLE QGraphicsWidget* Mwindow(QGraphicsItem* o) const { return o->window(); }
    Q_INVOKABLE qreal Mx(QGraphicsItem* o) const { return o->x(); }
    Q_INVOKABLE qreal My(QGraphicsItem* o) const { return o->y(); }
    Q_INVOKABLE qreal MzValue(QGraphicsItem* o) const { return o->zValue(); }
    Q_INVOKABLE void MprepareGeometryChange(QGraphicsItem* o) { ((LGraphicsItem*)o)->prepareGeometryChange(); }
    Q_INVOKABLE void MupdateMicroFocus(QGraphicsItem* o) { ((LGraphicsItem*)o)->updateMicroFocus(); }
};

class EQL_EXPORT N69 : public QObject { // QGraphicsLayoutItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsLayoutItem* x1 = 0, bool x2 = false) { return new LGraphicsLayoutItem(u, x1, x2); }
    Q_INVOKABLE QRectF McontentsRect(QGraphicsLayoutItem* o) const { return o->contentsRect(); }
    Q_INVOKABLE QSizeF MeffectiveSizeHint(QGraphicsLayoutItem* o, Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { return o->effectiveSizeHint(x1, x2); }
    Q_INVOKABLE QRectF Mgeometry(QGraphicsLayoutItem* o) const { return o->geometry(); }
    Q_INVOKABLE QGraphicsItem* MgraphicsItem(QGraphicsLayoutItem* o) const { return o->graphicsItem(); }
    Q_INVOKABLE bool MisLayout(QGraphicsLayoutItem* o) const { return o->isLayout(); }
    Q_INVOKABLE qreal MmaximumHeight(QGraphicsLayoutItem* o) const { return o->maximumHeight(); }
    Q_INVOKABLE QSizeF MmaximumSize(QGraphicsLayoutItem* o) const { return o->maximumSize(); }
    Q_INVOKABLE qreal MmaximumWidth(QGraphicsLayoutItem* o) const { return o->maximumWidth(); }
    Q_INVOKABLE qreal MminimumHeight(QGraphicsLayoutItem* o) const { return o->minimumHeight(); }
    Q_INVOKABLE QSizeF MminimumSize(QGraphicsLayoutItem* o) const { return o->minimumSize(); }
    Q_INVOKABLE qreal MminimumWidth(QGraphicsLayoutItem* o) const { return o->minimumWidth(); }
    Q_INVOKABLE bool MownedByLayout(QGraphicsLayoutItem* o) const { return o->ownedByLayout(); }
    Q_INVOKABLE QGraphicsLayoutItem* MparentLayoutItem(QGraphicsLayoutItem* o) const { return o->parentLayoutItem(); }
    Q_INVOKABLE qreal MpreferredHeight(QGraphicsLayoutItem* o) const { return o->preferredHeight(); }
    Q_INVOKABLE QSizeF MpreferredSize(QGraphicsLayoutItem* o) const { return o->preferredSize(); }
    Q_INVOKABLE qreal MpreferredWidth(QGraphicsLayoutItem* o) const { return o->preferredWidth(); }
    Q_INVOKABLE void MsetGeometry(QGraphicsLayoutItem* o, const QRectF& x1) { o->setGeometry(x1); }
    Q_INVOKABLE void MsetMaximumHeight(QGraphicsLayoutItem* o, qreal x1) { o->setMaximumHeight(x1); }
    Q_INVOKABLE void MsetMaximumSize(QGraphicsLayoutItem* o, const QSizeF& x1) { o->setMaximumSize(x1); }
    Q_INVOKABLE void MsetMaximumSize(QGraphicsLayoutItem* o, qreal x1, qreal x2) { o->setMaximumSize(x1, x2); }
    Q_INVOKABLE void MsetMaximumWidth(QGraphicsLayoutItem* o, qreal x1) { o->setMaximumWidth(x1); }
    Q_INVOKABLE void MsetMinimumHeight(QGraphicsLayoutItem* o, qreal x1) { o->setMinimumHeight(x1); }
    Q_INVOKABLE void MsetMinimumSize(QGraphicsLayoutItem* o, const QSizeF& x1) { o->setMinimumSize(x1); }
    Q_INVOKABLE void MsetMinimumSize(QGraphicsLayoutItem* o, qreal x1, qreal x2) { o->setMinimumSize(x1, x2); }
    Q_INVOKABLE void MsetMinimumWidth(QGraphicsLayoutItem* o, qreal x1) { o->setMinimumWidth(x1); }
    Q_INVOKABLE void MsetParentLayoutItem(QGraphicsLayoutItem* o, QGraphicsLayoutItem* x1) { o->setParentLayoutItem(x1); }
    Q_INVOKABLE void MsetPreferredHeight(QGraphicsLayoutItem* o, qreal x1) { o->setPreferredHeight(x1); }
    Q_INVOKABLE void MsetPreferredSize(QGraphicsLayoutItem* o, const QSizeF& x1) { o->setPreferredSize(x1); }
    Q_INVOKABLE void MsetPreferredSize(QGraphicsLayoutItem* o, qreal x1, qreal x2) { o->setPreferredSize(x1, x2); }
    Q_INVOKABLE void MsetPreferredWidth(QGraphicsLayoutItem* o, qreal x1) { o->setPreferredWidth(x1); }
    Q_INVOKABLE void MsetSizePolicy(QGraphicsLayoutItem* o, const QSizePolicy& x1) { o->setSizePolicy(x1); }
    Q_INVOKABLE void MsetSizePolicy(QGraphicsLayoutItem* o, QSizePolicy::Policy x1, QSizePolicy::Policy x2, QSizePolicy::ControlType x3 = QSizePolicy::DefaultType) { o->setSizePolicy(x1, x2, x3); }
    Q_INVOKABLE QSizePolicy MsizePolicy(QGraphicsLayoutItem* o) const { return o->sizePolicy(); }
    Q_INVOKABLE void MupdateGeometry(QGraphicsLayoutItem* o) { o->updateGeometry(); }
    Q_INVOKABLE void MsetGraphicsItem(QGraphicsLayoutItem* o, QGraphicsItem* x1) { ((LGraphicsLayoutItem*)o)->setGraphicsItem(x1); }
    Q_INVOKABLE void MsetOwnedByLayout(QGraphicsLayoutItem* o, bool x1) { ((LGraphicsLayoutItem*)o)->setOwnedByLayout(x1); }
};

class EQL_EXPORT N94 : public QObject { // QIcon
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LIcon(u); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LIcon(u, x1); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1) { return new LIcon(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LIcon(u, x1); }
    Q_INVOKABLE QSize MactualSize(QIcon* o, const QSize& x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) const { return o->actualSize(x1, x2, x3); }
    Q_INVOKABLE QSize MactualSize(QIcon* o, QWindow* x1, const QSize& x2, QIcon::Mode x3 = QIcon::Normal, QIcon::State x4 = QIcon::Off) const { return o->actualSize(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddFile(QIcon* o, const QString& x1, const QSize& x2 = QSize(), QIcon::Mode x3 = QIcon::Normal, QIcon::State x4 = QIcon::Off) { o->addFile(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddPixmap(QIcon* o, const QPixmap& x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) { o->addPixmap(x1, x2, x3); }
    Q_INVOKABLE QList<QSize> MavailableSizes(QIcon* o, QIcon::Mode x1 = QIcon::Normal, QIcon::State x2 = QIcon::Off) const { return o->availableSizes(x1, x2); }
    Q_INVOKABLE qlonglong McacheKey(QIcon* o) const { return o->cacheKey(); }
    Q_INVOKABLE bool MisNull(QIcon* o) const { return o->isNull(); }
    Q_INVOKABLE QString Mname(QIcon* o) const { return o->name(); }
    Q_INVOKABLE void Mpaint(QIcon* o, QPainter* x1, const QRect& x2, Qt::Alignment x3 = Qt::AlignCenter, QIcon::Mode x4 = QIcon::Normal, QIcon::State x5 = QIcon::Off) const { o->paint(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void Mpaint(QIcon* o, QPainter* x1, int x2, int x3, int x4, int x5, Qt::Alignment x6 = Qt::AlignCenter, QIcon::Mode x7 = QIcon::Normal, QIcon::State x8 = QIcon::Off) const { o->paint(x1, x2, x3, x4, x5, x6, x7, x8); }
    Q_INVOKABLE QPixmap Mpixmap(QIcon* o, const QSize& x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) const { return o->pixmap(x1, x2, x3); }
    Q_INVOKABLE QPixmap Mpixmap(QIcon* o, QWindow* x1, const QSize& x2, QIcon::Mode x3 = QIcon::Normal, QIcon::State x4 = QIcon::Off) const { return o->pixmap(x1, x2, x3, x4); }
    Q_INVOKABLE QPixmap Mpixmap(QIcon* o, int x1, int x2, QIcon::Mode x3 = QIcon::Normal, QIcon::State x4 = QIcon::Off) const { return o->pixmap(x1, x2, x3, x4); }
    Q_INVOKABLE QPixmap Mpixmap(QIcon* o, int x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) const { return o->pixmap(x1, x2, x3); }
    Q_INVOKABLE void Mswap(QIcon* o, QIcon& x1) { o->swap(x1); }
    Q_INVOKABLE QIcon SfromTheme(const QString& x1, const QIcon& x2 = QIcon()) { return QIcon::fromTheme(x1, x2); }
    Q_INVOKABLE bool ShasThemeIcon(const QString& x1) { return QIcon::hasThemeIcon(x1); }
    Q_INVOKABLE void SsetThemeName(const QString& x1) { QIcon::setThemeName(x1); }
    Q_INVOKABLE void SsetThemeSearchPaths(const QStringList& x1) { QIcon::setThemeSearchPaths(x1); }
    Q_INVOKABLE QString SthemeName() { return QIcon::themeName(); }
    Q_INVOKABLE QStringList SthemeSearchPaths() { return QIcon::themeSearchPaths(); }
};

class EQL_EXPORT N101 : public QObject { // QItemEditorCreatorBase
    Q_OBJECT
public:
    Q_INVOKABLE QWidget* McreateWidget(QItemEditorCreatorBase* o, QWidget* x1) const { return o->createWidget(x1); }
    Q_INVOKABLE QByteArray MvaluePropertyName(QItemEditorCreatorBase* o) const { return o->valuePropertyName(); }
};

class EQL_EXPORT N102 : public QObject { // QItemEditorFactory
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LItemEditorFactory(u); }
    Q_INVOKABLE QWidget* McreateEditor(QItemEditorFactory* o, int x1, QWidget* x2) const { return o->createEditor(x1, x2); }
    Q_INVOKABLE void MregisterEditor(QItemEditorFactory* o, int x1, QItemEditorCreatorBase* x2) { o->registerEditor(x1, x2); }
    Q_INVOKABLE QByteArray MvaluePropertyName(QItemEditorFactory* o, int x1) const { return o->valuePropertyName(x1); }
    Q_INVOKABLE const QItemEditorFactory* SdefaultFactory() { return QItemEditorFactory::defaultFactory(); }
    Q_INVOKABLE void SsetDefaultFactory(QItemEditorFactory* x1) { QItemEditorFactory::setDefaultFactory(x1); }
};

class EQL_EXPORT N103 : public QObject { // QItemSelectionRange
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LItemSelectionRange(u); }
    Q_INVOKABLE void* C(uint u, const QItemSelectionRange& x1) { return new LItemSelectionRange(u, x1); }
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1, const QModelIndex& x2) { return new LItemSelectionRange(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1) { return new LItemSelectionRange(u, x1); }
    Q_INVOKABLE int Mbottom(QItemSelectionRange* o) const { return o->bottom(); }
    Q_INVOKABLE QPersistentModelIndex MbottomRight(QItemSelectionRange* o) const { return o->bottomRight(); }
    Q_INVOKABLE bool Mcontains(QItemSelectionRange* o, const QModelIndex& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QItemSelectionRange* o, int x1, int x2, const QModelIndex& x3) const { return o->contains(x1, x2, x3); }
    Q_INVOKABLE int Mheight(QItemSelectionRange* o) const { return o->height(); }
    Q_INVOKABLE QModelIndexList Mindexes(QItemSelectionRange* o) const { return o->indexes(); }
    Q_INVOKABLE QItemSelectionRange Mintersected(QItemSelectionRange* o, const QItemSelectionRange& x1) const { return o->intersected(x1); }
    Q_INVOKABLE bool Mintersects(QItemSelectionRange* o, const QItemSelectionRange& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool MisEmpty(QItemSelectionRange* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisValid(QItemSelectionRange* o) const { return o->isValid(); }
    Q_INVOKABLE int Mleft(QItemSelectionRange* o) const { return o->left(); }
    Q_INVOKABLE const QAbstractItemModel* Mmodel(QItemSelectionRange* o) const { return o->model(); }
    Q_INVOKABLE QModelIndex Mparent(QItemSelectionRange* o) const { return o->parent(); }
    Q_INVOKABLE int Mright(QItemSelectionRange* o) const { return o->right(); }
    Q_INVOKABLE int Mtop(QItemSelectionRange* o) const { return o->top(); }
    Q_INVOKABLE QPersistentModelIndex MtopLeft(QItemSelectionRange* o) const { return o->topLeft(); }
    Q_INVOKABLE int Mwidth(QItemSelectionRange* o) const { return o->width(); }
};

class EQL_EXPORT N107 : public QObject { // QKeySequence
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LKeySequence(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QKeySequence::SequenceFormat x2 = QKeySequence::NativeText) { return new LKeySequence(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2 = 0, int x3 = 0, int x4 = 0) { return new LKeySequence(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QKeySequence& x1) { return new LKeySequence(u, x1); }
    Q_INVOKABLE void* C(uint u, QKeySequence::StandardKey x1) { return new LKeySequence(u, x1); }
    Q_INVOKABLE int Mcount(QKeySequence* o) const { return o->count(); }
    Q_INVOKABLE bool MisEmpty(QKeySequence* o) const { return o->isEmpty(); }
    Q_INVOKABLE int Mmatches(QKeySequence* o, const QKeySequence& x1) const { return o->matches(x1); }
    Q_INVOKABLE void Mswap(QKeySequence* o, QKeySequence& x1) { o->swap(x1); }
    Q_INVOKABLE QString MtoString(QKeySequence* o, QKeySequence::SequenceFormat x1 = QKeySequence::PortableText) const { return o->toString(x1); }
    Q_INVOKABLE QKeySequence SfromString(const QString& x1, QKeySequence::SequenceFormat x2 = QKeySequence::PortableText) { return QKeySequence::fromString(x1, x2); }
    Q_INVOKABLE QList<QKeySequence> SkeyBindings(QKeySequence::StandardKey x1) { return QKeySequence::keyBindings(x1); }
    Q_INVOKABLE QList<QKeySequence> SlistFromString(const QString& x1, QKeySequence::SequenceFormat x2 = QKeySequence::PortableText) { return QKeySequence::listFromString(x1, x2); }
    Q_INVOKABLE QString SlistToString(const QList<QKeySequence>& x1, QKeySequence::SequenceFormat x2 = QKeySequence::PortableText) { return QKeySequence::listToString(x1, x2); }
    Q_INVOKABLE QKeySequence Smnemonic(const QString& x1) { return QKeySequence::mnemonic(x1); }
};

class EQL_EXPORT N108 : public QObject { // QLayoutItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, Qt::Alignment x1 = 0) { return new LLayoutItem(u, x1); }
    Q_INVOKABLE int Malignment(QLayoutItem* o) const { return o->alignment(); }
    Q_INVOKABLE int McontrolTypes(QLayoutItem* o) const { return o->controlTypes(); }
    Q_INVOKABLE int MexpandingDirections(QLayoutItem* o) const { return o->expandingDirections(); }
    Q_INVOKABLE QRect Mgeometry(QLayoutItem* o) const { return o->geometry(); }
    Q_INVOKABLE bool MhasHeightForWidth(QLayoutItem* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE int MheightForWidth(QLayoutItem* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE void Minvalidate(QLayoutItem* o) { o->invalidate(); }
    Q_INVOKABLE bool MisEmpty(QLayoutItem* o) const { return o->isEmpty(); }
    Q_INVOKABLE QLayout* Mlayout(QLayoutItem* o) { return o->layout(); }
    Q_INVOKABLE QSize MmaximumSize(QLayoutItem* o) const { return o->maximumSize(); }
    Q_INVOKABLE int MminimumHeightForWidth(QLayoutItem* o, int x1) const { return o->minimumHeightForWidth(x1); }
    Q_INVOKABLE QSize MminimumSize(QLayoutItem* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetAlignment(QLayoutItem* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetGeometry(QLayoutItem* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QLayoutItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QSpacerItem* MspacerItem(QLayoutItem* o) { return o->spacerItem(); }
    Q_INVOKABLE QWidget* Mwidget(QLayoutItem* o) { return o->widget(); }
};

class EQL_EXPORT N109 : public QObject { // QLibraryInfo
    Q_OBJECT
public:
    Q_INVOKABLE bool SisDebugBuild() { return QLibraryInfo::isDebugBuild(); }
    Q_INVOKABLE QString SlicensedProducts() { return QLibraryInfo::licensedProducts(); }
    Q_INVOKABLE QString Slicensee() { return QLibraryInfo::licensee(); }
    Q_INVOKABLE QString Slocation(QLibraryInfo::LibraryLocation x1) { return QLibraryInfo::location(x1); }
};

class EQL_EXPORT N111 : public QObject { // QListWidgetItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QListWidget* x1 = 0, int x2 = QListWidgetItem::Type) { return new LListWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QListWidget* x2 = 0, int x3 = QListWidgetItem::Type) { return new LListWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2, QListWidget* x3 = 0, int x4 = QListWidgetItem::Type) { return new LListWidgetItem(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QListWidgetItem& x1) { return new LListWidgetItem(u, x1); }
    Q_INVOKABLE QBrush Mbackground(QListWidgetItem* o) const { return o->background(); }
    Q_INVOKABLE int McheckState(QListWidgetItem* o) const { return o->checkState(); }
    Q_INVOKABLE QListWidgetItem* Mclone(QListWidgetItem* o) const { return o->clone(); }
    Q_INVOKABLE QVariant Mdata(QListWidgetItem* o, int x1) const { return o->data(x1); }
    Q_INVOKABLE int Mflags(QListWidgetItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QListWidgetItem* o) const { return o->font(); }
    Q_INVOKABLE QBrush Mforeground(QListWidgetItem* o) const { return o->foreground(); }
    Q_INVOKABLE QIcon Micon(QListWidgetItem* o) const { return o->icon(); }
    Q_INVOKABLE bool MisHidden(QListWidgetItem* o) const { return o->isHidden(); }
    Q_INVOKABLE bool MisSelected(QListWidgetItem* o) const { return o->isSelected(); }
    Q_INVOKABLE QListWidget* MlistWidget(QListWidgetItem* o) const { return o->listWidget(); }
    Q_INVOKABLE void MsetBackground(QListWidgetItem* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetCheckState(QListWidgetItem* o, Qt::CheckState x1) { o->setCheckState(x1); }
    Q_INVOKABLE void MsetData(QListWidgetItem* o, int x1, const QVariant& x2) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetFlags(QListWidgetItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QListWidgetItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForeground(QListWidgetItem* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetHidden(QListWidgetItem* o, bool x1) { o->setHidden(x1); }
    Q_INVOKABLE void MsetIcon(QListWidgetItem* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetSelected(QListWidgetItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetSizeHint(QListWidgetItem* o, const QSize& x1) { o->setSizeHint(x1); }
    Q_INVOKABLE void MsetStatusTip(QListWidgetItem* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetText(QListWidgetItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextAlignment(QListWidgetItem* o, int x1) { o->setTextAlignment(x1); }
    Q_INVOKABLE void MsetToolTip(QListWidgetItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetWhatsThis(QListWidgetItem* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE QSize MsizeHint(QListWidgetItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QString MstatusTip(QListWidgetItem* o) const { return o->statusTip(); }
    Q_INVOKABLE QString Mtext(QListWidgetItem* o) const { return o->text(); }
    Q_INVOKABLE int MtextAlignment(QListWidgetItem* o) const { return o->textAlignment(); }
    Q_INVOKABLE QString MtoolTip(QListWidgetItem* o) const { return o->toolTip(); }
    Q_INVOKABLE int Mtype(QListWidgetItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QListWidgetItem* o) const { return o->whatsThis(); }
};

class EQL_EXPORT N112 : public QObject { // QLocale
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LLocale(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LLocale(u, x1); }
    Q_INVOKABLE void* C(uint u, QLocale::Language x1, QLocale::Country x2 = QLocale::AnyCountry) { return new LLocale(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QLocale::Language x1, QLocale::Script x2, QLocale::Country x3) { return new LLocale(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QLocale& x1) { return new LLocale(u, x1); }
    Q_INVOKABLE QString MamText(QLocale* o) const { return o->amText(); }
    Q_INVOKABLE QString Mbcp47Name(QLocale* o) const { return o->bcp47Name(); }
    Q_INVOKABLE int Mcountry(QLocale* o) const { return o->country(); }
    Q_INVOKABLE QString McreateSeparatedList(QLocale* o, const QStringList& x1) const { return o->createSeparatedList(x1); }
    Q_INVOKABLE QString McurrencySymbol(QLocale* o, QLocale::CurrencySymbolFormat x1 = QLocale::CurrencySymbol) const { return o->currencySymbol(x1); }
    Q_INVOKABLE QString MdateFormat(QLocale* o, QLocale::FormatType x1 = QLocale::LongFormat) const { return o->dateFormat(x1); }
    Q_INVOKABLE QString MdateTimeFormat(QLocale* o, QLocale::FormatType x1 = QLocale::LongFormat) const { return o->dateTimeFormat(x1); }
    Q_INVOKABLE QString MdayName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->dayName(x1, x2); }
    Q_INVOKABLE QChar MdecimalPoint(QLocale* o) const { return o->decimalPoint(); }
    Q_INVOKABLE QChar Mexponential(QLocale* o) const { return o->exponential(); }
    Q_INVOKABLE int MfirstDayOfWeek(QLocale* o) const { return o->firstDayOfWeek(); }
    Q_INVOKABLE QChar MgroupSeparator(QLocale* o) const { return o->groupSeparator(); }
    Q_INVOKABLE int Mlanguage(QLocale* o) const { return o->language(); }
    Q_INVOKABLE int MmeasurementSystem(QLocale* o) const { return o->measurementSystem(); }
    Q_INVOKABLE QString MmonthName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->monthName(x1, x2); }
    Q_INVOKABLE QString Mname(QLocale* o) const { return o->name(); }
    Q_INVOKABLE QString MnativeCountryName(QLocale* o) const { return o->nativeCountryName(); }
    Q_INVOKABLE QString MnativeLanguageName(QLocale* o) const { return o->nativeLanguageName(); }
    Q_INVOKABLE QChar MnegativeSign(QLocale* o) const { return o->negativeSign(); }
    Q_INVOKABLE int MnumberOptions(QLocale* o) const { return o->numberOptions(); }
    Q_INVOKABLE QChar Mpercent(QLocale* o) const { return o->percent(); }
    Q_INVOKABLE QString MpmText(QLocale* o) const { return o->pmText(); }
    Q_INVOKABLE QChar MpositiveSign(QLocale* o) const { return o->positiveSign(); }
    Q_INVOKABLE int Mscript(QLocale* o) const { return o->script(); }
    Q_INVOKABLE void MsetNumberOptions(QLocale* o, QLocale::NumberOptions x1) { o->setNumberOptions(x1); }
    Q_INVOKABLE QString MstandaloneDayName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->standaloneDayName(x1, x2); }
    Q_INVOKABLE QString MstandaloneMonthName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->standaloneMonthName(x1, x2); }
    Q_INVOKABLE int MtextDirection(QLocale* o) const { return o->textDirection(); }
    Q_INVOKABLE QString MtimeFormat(QLocale* o, QLocale::FormatType x1 = QLocale::LongFormat) const { return o->timeFormat(x1); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, qlonglong x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, qulonglong x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, double x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, short x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, ushort x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, int x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, uint x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QString MtoCurrencyString(QLocale* o, float x1, const QString& x2 = QString()) const { return o->toCurrencyString(x1, x2); }
    Q_INVOKABLE QDate MtoDate(QLocale* o, const QString& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toDate(x1, x2); }
    Q_INVOKABLE QDate MtoDate(QLocale* o, const QString& x1, const QString& x2) const { return o->toDate(x1, x2); }
    Q_INVOKABLE QDateTime MtoDateTime(QLocale* o, const QString& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toDateTime(x1, x2); }
    Q_INVOKABLE QDateTime MtoDateTime(QLocale* o, const QString& x1, const QString& x2) const { return o->toDateTime(x1, x2); }
    Q_INVOKABLE double MtoDouble(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toDouble(x1, x2); }
    Q_INVOKABLE double MtoDouble(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toDouble(x1, x2); }
    Q_INVOKABLE float MtoFloat(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toFloat(x1, x2); }
    Q_INVOKABLE float MtoFloat(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toFloat(x1, x2); }
    Q_INVOKABLE int MtoInt(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toInt(x1, x2); }
    Q_INVOKABLE int MtoInt(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toInt(x1, x2); }
    Q_INVOKABLE qlonglong MtoLongLong(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toLongLong(x1, x2); }
    Q_INVOKABLE qlonglong MtoLongLong(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toLongLong(x1, x2); }
    Q_INVOKABLE QString MtoLower(QLocale* o, const QString& x1) const { return o->toLower(x1); }
    Q_INVOKABLE short MtoShort(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toShort(x1, x2); }
    Q_INVOKABLE short MtoShort(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toShort(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, qlonglong x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDate& x1, const QString& x2) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDate& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QTime& x1, const QString& x2) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QTime& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDateTime& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDateTime& x1, const QString& x2) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, qulonglong x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, double x1, char x2 = 'g', int x3 = 6) const { return o->toString(x1, x2, x3); }
    Q_INVOKABLE QString MtoString(QLocale* o, short x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, ushort x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, int x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, uint x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, float x1, char x2 = 'g', int x3 = 6) const { return o->toString(x1, x2, x3); }
    Q_INVOKABLE QTime MtoTime(QLocale* o, const QString& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toTime(x1, x2); }
    Q_INVOKABLE QTime MtoTime(QLocale* o, const QString& x1, const QString& x2) const { return o->toTime(x1, x2); }
    Q_INVOKABLE uint MtoUInt(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toUInt(x1, x2); }
    Q_INVOKABLE uint MtoUInt(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toUInt(x1, x2); }
    Q_INVOKABLE qulonglong MtoULongLong(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toULongLong(x1, x2); }
    Q_INVOKABLE qulonglong MtoULongLong(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toULongLong(x1, x2); }
    Q_INVOKABLE ushort MtoUShort(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toUShort(x1, x2); }
    Q_INVOKABLE ushort MtoUShort(QLocale* o, const QStringRef& x1, bool* x2 = 0) const { return o->toUShort(x1, x2); }
    Q_INVOKABLE QString MtoUpper(QLocale* o, const QString& x1) const { return o->toUpper(x1); }
    Q_INVOKABLE QStringList MuiLanguages(QLocale* o) const { return o->uiLanguages(); }
    Q_INVOKABLE QList<Qt::DayOfWeek> Mweekdays(QLocale* o) const { return o->weekdays(); }
    Q_INVOKABLE QChar MzeroDigit(QLocale* o) const { return o->zeroDigit(); }
    Q_INVOKABLE QLocale Sc() { return QLocale::c(); }
    Q_INVOKABLE QString ScountryToString(QLocale::Country x1) { return QLocale::countryToString(x1); }
    Q_INVOKABLE QString SlanguageToString(QLocale::Language x1) { return QLocale::languageToString(x1); }
    Q_INVOKABLE QList<QLocale> SmatchingLocales(QLocale::Language x1, QLocale::Script x2, QLocale::Country x3) { return QLocale::matchingLocales(x1, x2, x3); }
    Q_INVOKABLE QString SscriptToString(QLocale::Script x1) { return QLocale::scriptToString(x1); }
    Q_INVOKABLE void SsetDefault(const QLocale& x1) { QLocale::setDefault(x1); }
    Q_INVOKABLE QLocale Ssystem() { return QLocale::system(); }
};

class EQL_EXPORT N113 : public QObject { // QMargins
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMargins(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3, int x4) { return new LMargins(u, x1, x2, x3, x4); }
    Q_INVOKABLE int Mbottom(QMargins* o) const { return o->bottom(); }
    Q_INVOKABLE bool MisNull(QMargins* o) const { return o->isNull(); }
    Q_INVOKABLE int Mleft(QMargins* o) const { return o->left(); }
    Q_INVOKABLE int Mright(QMargins* o) const { return o->right(); }
    Q_INVOKABLE void MsetBottom(QMargins* o, int x1) { o->setBottom(x1); }
    Q_INVOKABLE void MsetLeft(QMargins* o, int x1) { o->setLeft(x1); }
    Q_INVOKABLE void MsetRight(QMargins* o, int x1) { o->setRight(x1); }
    Q_INVOKABLE void MsetTop(QMargins* o, int x1) { o->setTop(x1); }
    Q_INVOKABLE int Mtop(QMargins* o) const { return o->top(); }
};

class EQL_EXPORT N114 : public QObject { // QMarginsF
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMarginsF(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4) { return new LMarginsF(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QMargins& x1) { return new LMarginsF(u, x1); }
    Q_INVOKABLE qreal Mbottom(QMarginsF* o) const { return o->bottom(); }
    Q_INVOKABLE bool MisNull(QMarginsF* o) const { return o->isNull(); }
    Q_INVOKABLE qreal Mleft(QMarginsF* o) const { return o->left(); }
    Q_INVOKABLE qreal Mright(QMarginsF* o) const { return o->right(); }
    Q_INVOKABLE void MsetBottom(QMarginsF* o, qreal x1) { o->setBottom(x1); }
    Q_INVOKABLE void MsetLeft(QMarginsF* o, qreal x1) { o->setLeft(x1); }
    Q_INVOKABLE void MsetRight(QMarginsF* o, qreal x1) { o->setRight(x1); }
    Q_INVOKABLE void MsetTop(QMarginsF* o, qreal x1) { o->setTop(x1); }
    Q_INVOKABLE QMargins MtoMargins(QMarginsF* o) const { return o->toMargins(); }
    Q_INVOKABLE qreal Mtop(QMarginsF* o) const { return o->top(); }
};

class EQL_EXPORT N115 : public QObject { // QMatrix
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMatrix(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { return new LMatrix(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void* C(uint u, const QMatrix& x1) { return new LMatrix(u, x1); }
    Q_INVOKABLE qreal Mm11(QMatrix* o) const { return o->m11(); }
    Q_INVOKABLE qreal Mm12(QMatrix* o) const { return o->m12(); }
    Q_INVOKABLE qreal Mm21(QMatrix* o) const { return o->m21(); }
    Q_INVOKABLE qreal Mm22(QMatrix* o) const { return o->m22(); }
    Q_INVOKABLE qreal Mdeterminant(QMatrix* o) const { return o->determinant(); }
    Q_INVOKABLE qreal Mdx(QMatrix* o) const { return o->dx(); }
    Q_INVOKABLE qreal Mdy(QMatrix* o) const { return o->dy(); }
    Q_INVOKABLE QMatrix Minverted(QMatrix* o, bool* x1 = 0) const { return o->inverted(x1); }
    Q_INVOKABLE bool MisIdentity(QMatrix* o) const { return o->isIdentity(); }
    Q_INVOKABLE bool MisInvertible(QMatrix* o) const { return o->isInvertible(); }
    Q_INVOKABLE QPointF Mmap(QMatrix* o, const QPointF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPoint Mmap(QMatrix* o, const QPoint& x1) const { return o->map(x1); }
    Q_INVOKABLE QLineF Mmap(QMatrix* o, const QLineF& x1) const { return o->map(x1); }
    Q_INVOKABLE QLine Mmap(QMatrix* o, const QLine& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygonF Mmap(QMatrix* o, const QPolygonF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygon Mmap(QMatrix* o, const QPolygon& x1) const { return o->map(x1); }
    Q_INVOKABLE QRegion Mmap(QMatrix* o, const QRegion& x1) const { return o->map(x1); }
    Q_INVOKABLE QPainterPath Mmap(QMatrix* o, const QPainterPath& x1) const { return o->map(x1); }
    Q_INVOKABLE QRectF MmapRect(QMatrix* o, const QRectF& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QRect MmapRect(QMatrix* o, const QRect& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QPolygon MmapToPolygon(QMatrix* o, const QRect& x1) const { return o->mapToPolygon(x1); }
    Q_INVOKABLE void Mreset(QMatrix* o) { o->reset(); }
    Q_INVOKABLE QMatrix Mrotate(QMatrix* o, qreal x1) { return o->rotate(x1); }
    Q_INVOKABLE QMatrix Mscale(QMatrix* o, qreal x1, qreal x2) { return o->scale(x1, x2); }
    Q_INVOKABLE void MsetMatrix(QMatrix* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->setMatrix(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QMatrix Mshear(QMatrix* o, qreal x1, qreal x2) { return o->shear(x1, x2); }
    Q_INVOKABLE QMatrix Mtranslate(QMatrix* o, qreal x1, qreal x2) { return o->translate(x1, x2); }
};

class EQL_EXPORT N116 : public QObject { // QMatrix4x4
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMatrix4x4(u); }
    Q_INVOKABLE void* C(uint u, float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10, float x11, float x12, float x13, float x14, float x15, float x16) { return new LMatrix4x4(u, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16); }
    Q_INVOKABLE void* C(uint u, const QTransform& x1) { return new LMatrix4x4(u, x1); }
    Q_INVOKABLE void* C(uint u, const QMatrix& x1) { return new LMatrix4x4(u, x1); }
    Q_INVOKABLE QVector4D Mcolumn(QMatrix4x4* o, int x1) const { return o->column(x1); }
    Q_INVOKABLE double Mdeterminant(QMatrix4x4* o) const { return o->determinant(); }
    Q_INVOKABLE void Mfill(QMatrix4x4* o, float x1) { o->fill(x1); }
    Q_INVOKABLE void Mfrustum(QMatrix4x4* o, float x1, float x2, float x3, float x4, float x5, float x6) { o->frustum(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QMatrix4x4 Minverted(QMatrix4x4* o, bool* x1 = 0) const { return o->inverted(x1); }
    Q_INVOKABLE bool MisAffine(QMatrix4x4* o) const { return o->isAffine(); }
    Q_INVOKABLE bool MisIdentity(QMatrix4x4* o) const { return o->isIdentity(); }
    Q_INVOKABLE void MlookAt(QMatrix4x4* o, const QVector3D& x1, const QVector3D& x2, const QVector3D& x3) { o->lookAt(x1, x2, x3); }
    Q_INVOKABLE QPoint Mmap(QMatrix4x4* o, const QPoint& x1) const { return o->map(x1); }
    Q_INVOKABLE QPointF Mmap(QMatrix4x4* o, const QPointF& x1) const { return o->map(x1); }
    Q_INVOKABLE QVector3D Mmap(QMatrix4x4* o, const QVector3D& x1) const { return o->map(x1); }
    Q_INVOKABLE QVector4D Mmap(QMatrix4x4* o, const QVector4D& x1) const { return o->map(x1); }
    Q_INVOKABLE QRect MmapRect(QMatrix4x4* o, const QRect& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QRectF MmapRect(QMatrix4x4* o, const QRectF& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QVector3D MmapVector(QMatrix4x4* o, const QVector3D& x1) const { return o->mapVector(x1); }
    Q_INVOKABLE void Moptimize(QMatrix4x4* o) { o->optimize(); }
    Q_INVOKABLE void Mortho(QMatrix4x4* o, float x1, float x2, float x3, float x4, float x5, float x6) { o->ortho(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void Mortho(QMatrix4x4* o, const QRect& x1) { o->ortho(x1); }
    Q_INVOKABLE void Mortho(QMatrix4x4* o, const QRectF& x1) { o->ortho(x1); }
    Q_INVOKABLE void Mperspective(QMatrix4x4* o, float x1, float x2, float x3, float x4) { o->perspective(x1, x2, x3, x4); }
    Q_INVOKABLE void Mrotate(QMatrix4x4* o, float x1, const QVector3D& x2) { o->rotate(x1, x2); }
    Q_INVOKABLE void Mrotate(QMatrix4x4* o, const QQuaternion& x1) { o->rotate(x1); }
    Q_INVOKABLE void Mrotate(QMatrix4x4* o, float x1, float x2, float x3, float x4 = 0.0f) { o->rotate(x1, x2, x3, x4); }
    Q_INVOKABLE QVector4D Mrow(QMatrix4x4* o, int x1) const { return o->row(x1); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, const QVector3D& x1) { o->scale(x1); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, float x1, float x2) { o->scale(x1, x2); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, float x1, float x2, float x3) { o->scale(x1, x2, x3); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, float x1) { o->scale(x1); }
    Q_INVOKABLE void MsetColumn(QMatrix4x4* o, int x1, const QVector4D& x2) { o->setColumn(x1, x2); }
    Q_INVOKABLE void MsetRow(QMatrix4x4* o, int x1, const QVector4D& x2) { o->setRow(x1, x2); }
    Q_INVOKABLE void MsetToIdentity(QMatrix4x4* o) { o->setToIdentity(); }
    Q_INVOKABLE QMatrix MtoAffine(QMatrix4x4* o) const { return o->toAffine(); }
    Q_INVOKABLE QTransform MtoTransform(QMatrix4x4* o) const { return o->toTransform(); }
    Q_INVOKABLE QTransform MtoTransform(QMatrix4x4* o, float x1) const { return o->toTransform(x1); }
    Q_INVOKABLE void Mtranslate(QMatrix4x4* o, const QVector3D& x1) { o->translate(x1); }
    Q_INVOKABLE void Mtranslate(QMatrix4x4* o, float x1, float x2) { o->translate(x1, x2); }
    Q_INVOKABLE void Mtranslate(QMatrix4x4* o, float x1, float x2, float x3) { o->translate(x1, x2, x3); }
    Q_INVOKABLE QMatrix4x4 Mtransposed(QMatrix4x4* o) const { return o->transposed(); }
    Q_INVOKABLE void Mviewport(QMatrix4x4* o, float x1, float x2, float x3, float x4, float x5 = 0.0f, float x6 = 1.0f) { o->viewport(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void Mviewport(QMatrix4x4* o, const QRectF& x1) { o->viewport(x1); }
};

class EQL_EXPORT N119 : public QObject { // QMessageAuthenticationCode
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QCryptographicHash::Algorithm x1, const QByteArray& x2 = QByteArray()) { return new LMessageAuthenticationCode(u, x1, x2); }
    Q_INVOKABLE void MaddData(QMessageAuthenticationCode* o, const char* x1, int x2) { o->addData(x1, x2); }
    Q_INVOKABLE void MaddData(QMessageAuthenticationCode* o, const QByteArray& x1) { o->addData(x1); }
    Q_INVOKABLE void Mreset(QMessageAuthenticationCode* o) { o->reset(); }
    Q_INVOKABLE QByteArray Mresult(QMessageAuthenticationCode* o) const { return o->result(); }
    Q_INVOKABLE void MsetKey(QMessageAuthenticationCode* o, const QByteArray& x1) { o->setKey(x1); }
    Q_INVOKABLE QByteArray Shash(const QByteArray& x1, const QByteArray& x2, QCryptographicHash::Algorithm x3) { return QMessageAuthenticationCode::hash(x1, x2, x3); }
};

class EQL_EXPORT N120 : public QObject { // QMetaObject
    Q_OBJECT
public:
    Q_INVOKABLE int MclassInfoCount(QMetaObject* o) const { return o->classInfoCount(); }
    Q_INVOKABLE int MclassInfoOffset(QMetaObject* o) const { return o->classInfoOffset(); }
    Q_INVOKABLE const char* MclassName(QMetaObject* o) const { return o->className(); }
    Q_INVOKABLE int MconstructorCount(QMetaObject* o) const { return o->constructorCount(); }
    Q_INVOKABLE int MenumeratorCount(QMetaObject* o) const { return o->enumeratorCount(); }
    Q_INVOKABLE int MenumeratorOffset(QMetaObject* o) const { return o->enumeratorOffset(); }
    Q_INVOKABLE int MindexOfClassInfo(QMetaObject* o, const char* x1) const { return o->indexOfClassInfo(x1); }
    Q_INVOKABLE int MindexOfConstructor(QMetaObject* o, const char* x1) const { return o->indexOfConstructor(x1); }
    Q_INVOKABLE int MindexOfEnumerator(QMetaObject* o, const char* x1) const { return o->indexOfEnumerator(x1); }
    Q_INVOKABLE int MindexOfMethod(QMetaObject* o, const char* x1) const { return o->indexOfMethod(x1); }
    Q_INVOKABLE int MindexOfProperty(QMetaObject* o, const char* x1) const { return o->indexOfProperty(x1); }
    Q_INVOKABLE int MindexOfSignal(QMetaObject* o, const char* x1) const { return o->indexOfSignal(x1); }
    Q_INVOKABLE int MindexOfSlot(QMetaObject* o, const char* x1) const { return o->indexOfSlot(x1); }
    Q_INVOKABLE int MmethodCount(QMetaObject* o) const { return o->methodCount(); }
    Q_INVOKABLE int MmethodOffset(QMetaObject* o) const { return o->methodOffset(); }
    Q_INVOKABLE int MpropertyCount(QMetaObject* o) const { return o->propertyCount(); }
    Q_INVOKABLE int MpropertyOffset(QMetaObject* o) const { return o->propertyOffset(); }
    Q_INVOKABLE const QMetaObject* MsuperClass(QMetaObject* o) const { return o->superClass(); }
    Q_INVOKABLE bool ScheckConnectArgs(const char* x1, const char* x2) { return QMetaObject::checkConnectArgs(x1, x2); }
    Q_INVOKABLE void SconnectSlotsByName(QObject* x1) { QMetaObject::connectSlotsByName(x1); }
    Q_INVOKABLE QByteArray SnormalizedSignature(const char* x1) { return QMetaObject::normalizedSignature(x1); }
    Q_INVOKABLE QByteArray SnormalizedType(const char* x1) { return QMetaObject::normalizedType(x1); }
};

class EQL_EXPORT N121 : public QObject { // QModelIndex
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LModelIndex(u); }
    Q_INVOKABLE QModelIndex Mchild(QModelIndex* o, int x1, int x2) const { return o->child(x1, x2); }
    Q_INVOKABLE int Mcolumn(QModelIndex* o) const { return o->column(); }
    Q_INVOKABLE QVariant Mdata(QModelIndex* o, int x1 = Qt::DisplayRole) const { return o->data(x1); }
    Q_INVOKABLE int Mflags(QModelIndex* o) const { return o->flags(); }
    Q_INVOKABLE bool MisValid(QModelIndex* o) const { return o->isValid(); }
    Q_INVOKABLE const QAbstractItemModel* Mmodel(QModelIndex* o) const { return o->model(); }
    Q_INVOKABLE QModelIndex Mparent(QModelIndex* o) const { return o->parent(); }
    Q_INVOKABLE int Mrow(QModelIndex* o) const { return o->row(); }
    Q_INVOKABLE QModelIndex Msibling(QModelIndex* o, int x1, int x2) const { return o->sibling(x1, x2); }
};

class EQL_EXPORT N133 : public QObject { // QOpenGLFramebufferObject
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QSize& x1, GLenum x2 = GL_TEXTURE_2D) { return new LOpenGLFramebufferObject(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, GLenum x3 = GL_TEXTURE_2D) { return new LOpenGLFramebufferObject(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QSize& x1, const QOpenGLFramebufferObjectFormat& x2) { return new LOpenGLFramebufferObject(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, const QOpenGLFramebufferObjectFormat& x3) { return new LOpenGLFramebufferObject(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, QOpenGLFramebufferObject::Attachment x3, GLenum x4 = GL_TEXTURE_2D, GLenum x5 = 0) { return new LOpenGLFramebufferObject(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QSize& x1, QOpenGLFramebufferObject::Attachment x2, GLenum x3 = GL_TEXTURE_2D, GLenum x4 = 0) { return new LOpenGLFramebufferObject(u, x1, x2, x3, x4); }
    Q_INVOKABLE int Mattachment(QOpenGLFramebufferObject* o) const { return o->attachment(); }
    Q_INVOKABLE bool Mbind(QOpenGLFramebufferObject* o) { return o->bind(); }
    Q_INVOKABLE QOpenGLFramebufferObjectFormat Mformat(QOpenGLFramebufferObject* o) const { return o->format(); }
    Q_INVOKABLE GLuint Mhandle(QOpenGLFramebufferObject* o) const { return o->handle(); }
    Q_INVOKABLE int Mheight(QOpenGLFramebufferObject* o) const { return o->height(); }
    Q_INVOKABLE bool MisBound(QOpenGLFramebufferObject* o) const { return o->isBound(); }
    Q_INVOKABLE bool MisValid(QOpenGLFramebufferObject* o) const { return o->isValid(); }
    Q_INVOKABLE bool Mrelease(QOpenGLFramebufferObject* o) { return o->release(); }
    Q_INVOKABLE void MsetAttachment(QOpenGLFramebufferObject* o, QOpenGLFramebufferObject::Attachment x1) { o->setAttachment(x1); }
    Q_INVOKABLE QSize Msize(QOpenGLFramebufferObject* o) const { return o->size(); }
    Q_INVOKABLE GLuint MtakeTexture(QOpenGLFramebufferObject* o) { return o->takeTexture(); }
    Q_INVOKABLE GLuint Mtexture(QOpenGLFramebufferObject* o) const { return o->texture(); }
    Q_INVOKABLE QImage MtoImage(QOpenGLFramebufferObject* o, bool x1) const { return o->toImage(x1); }
    Q_INVOKABLE QImage MtoImage(QOpenGLFramebufferObject* o) const { return o->toImage(); }
    Q_INVOKABLE int Mwidth(QOpenGLFramebufferObject* o) const { return o->width(); }
    Q_INVOKABLE bool SbindDefault() { return QOpenGLFramebufferObject::bindDefault(); }
    Q_INVOKABLE void SblitFramebuffer(QOpenGLFramebufferObject* x1, const QRect& x2, QOpenGLFramebufferObject* x3, const QRect& x4, GLbitfield x5 = GL_COLOR_BUFFER_BIT, GLenum x6 = GL_NEAREST) { QOpenGLFramebufferObject::blitFramebuffer(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void SblitFramebuffer(QOpenGLFramebufferObject* x1, QOpenGLFramebufferObject* x2, GLbitfield x3 = GL_COLOR_BUFFER_BIT, GLenum x4 = GL_NEAREST) { QOpenGLFramebufferObject::blitFramebuffer(x1, x2, x3, x4); }
    Q_INVOKABLE bool ShasOpenGLFramebufferBlit() { return QOpenGLFramebufferObject::hasOpenGLFramebufferBlit(); }
    Q_INVOKABLE bool ShasOpenGLFramebufferObjects() { return QOpenGLFramebufferObject::hasOpenGLFramebufferObjects(); }
};

class EQL_EXPORT N134 : public QObject { // QOpenGLFramebufferObjectFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LOpenGLFramebufferObjectFormat(u); }
    Q_INVOKABLE void* C(uint u, const QOpenGLFramebufferObjectFormat& x1) { return new LOpenGLFramebufferObjectFormat(u, x1); }
    Q_INVOKABLE int Mattachment(QOpenGLFramebufferObjectFormat* o) const { return o->attachment(); }
    Q_INVOKABLE GLenum MinternalTextureFormat(QOpenGLFramebufferObjectFormat* o) const { return o->internalTextureFormat(); }
    Q_INVOKABLE bool Mmipmap(QOpenGLFramebufferObjectFormat* o) const { return o->mipmap(); }
    Q_INVOKABLE int Msamples(QOpenGLFramebufferObjectFormat* o) const { return o->samples(); }
    Q_INVOKABLE void MsetAttachment(QOpenGLFramebufferObjectFormat* o, QOpenGLFramebufferObject::Attachment x1) { o->setAttachment(x1); }
    Q_INVOKABLE void MsetInternalTextureFormat(QOpenGLFramebufferObjectFormat* o, GLenum x1) { o->setInternalTextureFormat(x1); }
    Q_INVOKABLE void MsetMipmap(QOpenGLFramebufferObjectFormat* o, bool x1) { o->setMipmap(x1); }
    Q_INVOKABLE void MsetSamples(QOpenGLFramebufferObjectFormat* o, int x1) { o->setSamples(x1); }
    Q_INVOKABLE void MsetTextureTarget(QOpenGLFramebufferObjectFormat* o, GLenum x1) { o->setTextureTarget(x1); }
    Q_INVOKABLE GLenum MtextureTarget(QOpenGLFramebufferObjectFormat* o) const { return o->textureTarget(); }
};

class EQL_EXPORT N136 : public QObject { // QOpenGLTexture
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QOpenGLTexture::Target x1) { return new LOpenGLTexture(u, x1); }
    Q_INVOKABLE void* C(uint u, const QImage& x1, QOpenGLTexture::MipMapGeneration x2 = QOpenGLTexture::GenerateMipMaps) { return new LOpenGLTexture(u, x1, x2); }
    Q_INVOKABLE void MallocateStorage(QOpenGLTexture* o) { o->allocateStorage(); }
    Q_INVOKABLE void MallocateStorage(QOpenGLTexture* o, QOpenGLTexture::PixelFormat x1, QOpenGLTexture::PixelType x2) { o->allocateStorage(x1, x2); }
    Q_INVOKABLE void Mbind(QOpenGLTexture* o) { o->bind(); }
    Q_INVOKABLE void Mbind(QOpenGLTexture* o, uint x1, QOpenGLTexture::TextureUnitReset x2 = QOpenGLTexture::DontResetTextureUnit) { o->bind(x1, x2); }
    Q_INVOKABLE QColor MborderColor(QOpenGLTexture* o) const { return o->borderColor(); }
    Q_INVOKABLE int McomparisonFunction(QOpenGLTexture* o) const { return o->comparisonFunction(); }
    Q_INVOKABLE int McomparisonMode(QOpenGLTexture* o) const { return o->comparisonMode(); }
    Q_INVOKABLE bool Mcreate(QOpenGLTexture* o) { return o->create(); }
    Q_INVOKABLE QOpenGLTexture* McreateTextureView(QOpenGLTexture* o, QOpenGLTexture::Target x1, QOpenGLTexture::TextureFormat x2, int x3, int x4, int x5, int x6) const { return o->createTextureView(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE int Mdepth(QOpenGLTexture* o) const { return o->depth(); }
    Q_INVOKABLE int MdepthStencilMode(QOpenGLTexture* o) const { return o->depthStencilMode(); }
    Q_INVOKABLE void Mdestroy(QOpenGLTexture* o) { o->destroy(); }
    Q_INVOKABLE int Mfaces(QOpenGLTexture* o) const { return o->faces(); }
    Q_INVOKABLE int Mformat(QOpenGLTexture* o) const { return o->format(); }
    Q_INVOKABLE void MgenerateMipMaps(QOpenGLTexture* o) { o->generateMipMaps(); }
    Q_INVOKABLE void MgenerateMipMaps(QOpenGLTexture* o, int x1, bool x2 = true) { o->generateMipMaps(x1, x2); }
    Q_INVOKABLE int Mheight(QOpenGLTexture* o) const { return o->height(); }
    Q_INVOKABLE bool MisAutoMipMapGenerationEnabled(QOpenGLTexture* o) const { return o->isAutoMipMapGenerationEnabled(); }
    Q_INVOKABLE bool MisBound(QOpenGLTexture* o) const { return o->isBound(); }
    Q_INVOKABLE bool MisBound(QOpenGLTexture* o, uint x1) { return o->isBound(x1); }
    Q_INVOKABLE bool MisCreated(QOpenGLTexture* o) const { return o->isCreated(); }
    Q_INVOKABLE bool MisFixedSamplePositions(QOpenGLTexture* o) const { return o->isFixedSamplePositions(); }
    Q_INVOKABLE bool MisStorageAllocated(QOpenGLTexture* o) const { return o->isStorageAllocated(); }
    Q_INVOKABLE bool MisTextureView(QOpenGLTexture* o) const { return o->isTextureView(); }
    Q_INVOKABLE int Mlayers(QOpenGLTexture* o) const { return o->layers(); }
    Q_INVOKABLE float MlevelofDetailBias(QOpenGLTexture* o) const { return o->levelofDetailBias(); }
    Q_INVOKABLE int MmagnificationFilter(QOpenGLTexture* o) const { return o->magnificationFilter(); }
    Q_INVOKABLE float MmaximumAnisotropy(QOpenGLTexture* o) const { return o->maximumAnisotropy(); }
    Q_INVOKABLE float MmaximumLevelOfDetail(QOpenGLTexture* o) const { return o->maximumLevelOfDetail(); }
    Q_INVOKABLE int MmaximumMipLevels(QOpenGLTexture* o) const { return o->maximumMipLevels(); }
    Q_INVOKABLE int MminificationFilter(QOpenGLTexture* o) const { return o->minificationFilter(); }
    Q_INVOKABLE float MminimumLevelOfDetail(QOpenGLTexture* o) const { return o->minimumLevelOfDetail(); }
    Q_INVOKABLE int MmipBaseLevel(QOpenGLTexture* o) const { return o->mipBaseLevel(); }
    Q_INVOKABLE int MmipLevels(QOpenGLTexture* o) const { return o->mipLevels(); }
    Q_INVOKABLE int MmipMaxLevel(QOpenGLTexture* o) const { return o->mipMaxLevel(); }
    Q_INVOKABLE void Mrelease(QOpenGLTexture* o) { o->release(); }
    Q_INVOKABLE void Mrelease(QOpenGLTexture* o, uint x1, QOpenGLTexture::TextureUnitReset x2 = QOpenGLTexture::DontResetTextureUnit) { o->release(x1, x2); }
    Q_INVOKABLE int Msamples(QOpenGLTexture* o) const { return o->samples(); }
    Q_INVOKABLE void MsetAutoMipMapGenerationEnabled(QOpenGLTexture* o, bool x1) { o->setAutoMipMapGenerationEnabled(x1); }
    Q_INVOKABLE void MsetBorderColor(QOpenGLTexture* o, QColor x1) { o->setBorderColor(x1); }
    Q_INVOKABLE void MsetBorderColor(QOpenGLTexture* o, float x1, float x2, float x3, float x4) { o->setBorderColor(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetBorderColor(QOpenGLTexture* o, int x1, int x2, int x3, int x4) { o->setBorderColor(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetBorderColor(QOpenGLTexture* o, uint x1, uint x2, uint x3, uint x4) { o->setBorderColor(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetComparisonFunction(QOpenGLTexture* o, QOpenGLTexture::ComparisonFunction x1) { o->setComparisonFunction(x1); }
    Q_INVOKABLE void MsetComparisonMode(QOpenGLTexture* o, QOpenGLTexture::ComparisonMode x1) { o->setComparisonMode(x1); }
    Q_INVOKABLE void MsetData(QOpenGLTexture* o, const QImage& x1, QOpenGLTexture::MipMapGeneration x2 = QOpenGLTexture::GenerateMipMaps) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetDepthStencilMode(QOpenGLTexture* o, QOpenGLTexture::DepthStencilMode x1) { o->setDepthStencilMode(x1); }
    Q_INVOKABLE void MsetFixedSamplePositions(QOpenGLTexture* o, bool x1) { o->setFixedSamplePositions(x1); }
    Q_INVOKABLE void MsetFormat(QOpenGLTexture* o, QOpenGLTexture::TextureFormat x1) { o->setFormat(x1); }
    Q_INVOKABLE void MsetLayers(QOpenGLTexture* o, int x1) { o->setLayers(x1); }
    Q_INVOKABLE void MsetLevelOfDetailRange(QOpenGLTexture* o, float x1, float x2) { o->setLevelOfDetailRange(x1, x2); }
    Q_INVOKABLE void MsetLevelofDetailBias(QOpenGLTexture* o, float x1) { o->setLevelofDetailBias(x1); }
    Q_INVOKABLE void MsetMagnificationFilter(QOpenGLTexture* o, QOpenGLTexture::Filter x1) { o->setMagnificationFilter(x1); }
    Q_INVOKABLE void MsetMaximumAnisotropy(QOpenGLTexture* o, float x1) { o->setMaximumAnisotropy(x1); }
    Q_INVOKABLE void MsetMaximumLevelOfDetail(QOpenGLTexture* o, float x1) { o->setMaximumLevelOfDetail(x1); }
    Q_INVOKABLE void MsetMinMagFilters(QOpenGLTexture* o, QOpenGLTexture::Filter x1, QOpenGLTexture::Filter x2) { o->setMinMagFilters(x1, x2); }
    Q_INVOKABLE void MsetMinificationFilter(QOpenGLTexture* o, QOpenGLTexture::Filter x1) { o->setMinificationFilter(x1); }
    Q_INVOKABLE void MsetMinimumLevelOfDetail(QOpenGLTexture* o, float x1) { o->setMinimumLevelOfDetail(x1); }
    Q_INVOKABLE void MsetMipBaseLevel(QOpenGLTexture* o, int x1) { o->setMipBaseLevel(x1); }
    Q_INVOKABLE void MsetMipLevelRange(QOpenGLTexture* o, int x1, int x2) { o->setMipLevelRange(x1, x2); }
    Q_INVOKABLE void MsetMipLevels(QOpenGLTexture* o, int x1) { o->setMipLevels(x1); }
    Q_INVOKABLE void MsetMipMaxLevel(QOpenGLTexture* o, int x1) { o->setMipMaxLevel(x1); }
    Q_INVOKABLE void MsetSamples(QOpenGLTexture* o, int x1) { o->setSamples(x1); }
    Q_INVOKABLE void MsetSize(QOpenGLTexture* o, int x1, int x2 = 1, int x3 = 1) { o->setSize(x1, x2, x3); }
    Q_INVOKABLE void MsetSwizzleMask(QOpenGLTexture* o, QOpenGLTexture::SwizzleComponent x1, QOpenGLTexture::SwizzleValue x2) { o->setSwizzleMask(x1, x2); }
    Q_INVOKABLE void MsetSwizzleMask(QOpenGLTexture* o, QOpenGLTexture::SwizzleValue x1, QOpenGLTexture::SwizzleValue x2, QOpenGLTexture::SwizzleValue x3, QOpenGLTexture::SwizzleValue x4) { o->setSwizzleMask(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetWrapMode(QOpenGLTexture* o, QOpenGLTexture::WrapMode x1) { o->setWrapMode(x1); }
    Q_INVOKABLE void MsetWrapMode(QOpenGLTexture* o, QOpenGLTexture::CoordinateDirection x1, QOpenGLTexture::WrapMode x2) { o->setWrapMode(x1, x2); }
    Q_INVOKABLE int MswizzleMask(QOpenGLTexture* o, QOpenGLTexture::SwizzleComponent x1) const { return o->swizzleMask(x1); }
    Q_INVOKABLE int Mtarget(QOpenGLTexture* o) const { return o->target(); }
    Q_INVOKABLE GLuint MtextureId(QOpenGLTexture* o) const { return o->textureId(); }
    Q_INVOKABLE int Mwidth(QOpenGLTexture* o) const { return o->width(); }
    Q_INVOKABLE int MwrapMode(QOpenGLTexture* o, QOpenGLTexture::CoordinateDirection x1) const { return o->wrapMode(x1); }
    Q_INVOKABLE GLuint SboundTextureId(QOpenGLTexture::BindingTarget x1) { return QOpenGLTexture::boundTextureId(x1); }
    Q_INVOKABLE GLuint SboundTextureId(uint x1, QOpenGLTexture::BindingTarget x2) { return QOpenGLTexture::boundTextureId(x1, x2); }
    Q_INVOKABLE bool ShasFeature(QOpenGLTexture::Feature x1) { return QOpenGLTexture::hasFeature(x1); }
};

class EQL_EXPORT N137 : public QObject { // QPageLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPageLayout(u); }
    Q_INVOKABLE void* C(uint u, const QPageSize& x1, QPageLayout::Orientation x2, const QMarginsF& x3, QPageLayout::Unit x4 = QPageLayout::Point, const QMarginsF& x5 = QMarginsF_DEFAULT) { return new LPageLayout(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QPageLayout& x1) { return new LPageLayout(u, x1); }
    Q_INVOKABLE QRectF MfullRect(QPageLayout* o) const { return o->fullRect(); }
    Q_INVOKABLE QRectF MfullRect(QPageLayout* o, QPageLayout::Unit x1) const { return o->fullRect(x1); }
    Q_INVOKABLE QRect MfullRectPixels(QPageLayout* o, int x1) const { return o->fullRectPixels(x1); }
    Q_INVOKABLE QRect MfullRectPoints(QPageLayout* o) const { return o->fullRectPoints(); }
    Q_INVOKABLE bool MisEquivalentTo(QPageLayout* o, const QPageLayout& x1) const { return o->isEquivalentTo(x1); }
    Q_INVOKABLE bool MisValid(QPageLayout* o) const { return o->isValid(); }
    Q_INVOKABLE QMarginsF Mmargins(QPageLayout* o) const { return o->margins(); }
    Q_INVOKABLE QMarginsF Mmargins(QPageLayout* o, QPageLayout::Unit x1) const { return o->margins(x1); }
    Q_INVOKABLE QMarginsF MmaximumMargins(QPageLayout* o) const { return o->maximumMargins(); }
    Q_INVOKABLE QMarginsF MminimumMargins(QPageLayout* o) const { return o->minimumMargins(); }
    Q_INVOKABLE int Mmode(QPageLayout* o) const { return o->mode(); }
    Q_INVOKABLE int Morientation(QPageLayout* o) const { return o->orientation(); }
    Q_INVOKABLE QPageSize MpageSize(QPageLayout* o) const { return o->pageSize(); }
    Q_INVOKABLE QRectF MpaintRect(QPageLayout* o) const { return o->paintRect(); }
    Q_INVOKABLE QRectF MpaintRect(QPageLayout* o, QPageLayout::Unit x1) const { return o->paintRect(x1); }
    Q_INVOKABLE QRect MpaintRectPixels(QPageLayout* o, int x1) const { return o->paintRectPixels(x1); }
    Q_INVOKABLE QRect MpaintRectPoints(QPageLayout* o) const { return o->paintRectPoints(); }
    Q_INVOKABLE bool MsetBottomMargin(QPageLayout* o, qreal x1) { return o->setBottomMargin(x1); }
    Q_INVOKABLE bool MsetLeftMargin(QPageLayout* o, qreal x1) { return o->setLeftMargin(x1); }
    Q_INVOKABLE bool MsetMargins(QPageLayout* o, const QMarginsF& x1) { return o->setMargins(x1); }
    Q_INVOKABLE void MsetMinimumMargins(QPageLayout* o, const QMarginsF& x1) { o->setMinimumMargins(x1); }
    Q_INVOKABLE void MsetMode(QPageLayout* o, QPageLayout::Mode x1) { o->setMode(x1); }
    Q_INVOKABLE void MsetOrientation(QPageLayout* o, QPageLayout::Orientation x1) { o->setOrientation(x1); }
    Q_INVOKABLE void MsetPageSize(QPageLayout* o, const QPageSize& x1, const QMarginsF& x2 = QMarginsF_DEFAULT) { o->setPageSize(x1, x2); }
    Q_INVOKABLE bool MsetRightMargin(QPageLayout* o, qreal x1) { return o->setRightMargin(x1); }
    Q_INVOKABLE bool MsetTopMargin(QPageLayout* o, qreal x1) { return o->setTopMargin(x1); }
    Q_INVOKABLE void MsetUnits(QPageLayout* o, QPageLayout::Unit x1) { o->setUnits(x1); }
    Q_INVOKABLE void Mswap(QPageLayout* o, QPageLayout& x1) { o->swap(x1); }
    Q_INVOKABLE int Munits(QPageLayout* o) const { return o->units(); }
};

class EQL_EXPORT N138 : public QObject { // QPageSize
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPageSize(u); }
    Q_INVOKABLE void* C(uint u, QPageSize::PageSizeId x1) { return new LPageSize(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSize& x1, const QString& x2 = QString(), QPageSize::SizeMatchPolicy x3 = QPageSize::FuzzyMatch) { return new LPageSize(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QSizeF& x1, QPageSize::Unit x2, const QString& x3 = QString(), QPageSize::SizeMatchPolicy x4 = QPageSize::FuzzyMatch) { return new LPageSize(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QPageSize& x1) { return new LPageSize(u, x1); }
    Q_INVOKABLE QSizeF MdefinitionSize(QPageSize* o) const { return o->definitionSize(); }
    Q_INVOKABLE int MdefinitionUnits(QPageSize* o) const { return o->definitionUnits(); }
    Q_INVOKABLE int Mid(QPageSize* o) const { return o->id(); }
    Q_INVOKABLE bool MisEquivalentTo(QPageSize* o, const QPageSize& x1) const { return o->isEquivalentTo(x1); }
    Q_INVOKABLE bool MisValid(QPageSize* o) const { return o->isValid(); }
    Q_INVOKABLE QString Mkey(QPageSize* o) const { return o->key(); }
    Q_INVOKABLE QString Mname(QPageSize* o) const { return o->name(); }
    Q_INVOKABLE QRectF Mrect(QPageSize* o, QPageSize::Unit x1) const { return o->rect(x1); }
    Q_INVOKABLE QRect MrectPixels(QPageSize* o, int x1) const { return o->rectPixels(x1); }
    Q_INVOKABLE QRect MrectPoints(QPageSize* o) const { return o->rectPoints(); }
    Q_INVOKABLE QSizeF Msize(QPageSize* o, QPageSize::Unit x1) const { return o->size(x1); }
    Q_INVOKABLE QSize MsizePixels(QPageSize* o, int x1) const { return o->sizePixels(x1); }
    Q_INVOKABLE QSize MsizePoints(QPageSize* o) const { return o->sizePoints(); }
    Q_INVOKABLE void Mswap(QPageSize* o, QPageSize& x1) { o->swap(x1); }
    Q_INVOKABLE int MwindowsId(QPageSize* o) const { return o->windowsId(); }
    Q_INVOKABLE QSizeF SdefinitionSize(QPageSize::PageSizeId x1) { return QPageSize::definitionSize(x1); }
    Q_INVOKABLE int SdefinitionUnits(QPageSize::PageSizeId x1) { return QPageSize::definitionUnits(x1); }
    Q_INVOKABLE int Sid(const QSize& x1, QPageSize::SizeMatchPolicy x2 = QPageSize::FuzzyMatch) { return QPageSize::id(x1, x2); }
    Q_INVOKABLE int Sid(const QSizeF& x1, QPageSize::Unit x2, QPageSize::SizeMatchPolicy x3 = QPageSize::FuzzyMatch) { return QPageSize::id(x1, x2, x3); }
    Q_INVOKABLE int Sid(int x1) { return QPageSize::id(x1); }
    Q_INVOKABLE QString Skey(QPageSize::PageSizeId x1) { return QPageSize::key(x1); }
    Q_INVOKABLE QString Sname(QPageSize::PageSizeId x1) { return QPageSize::name(x1); }
    Q_INVOKABLE QSizeF Ssize(QPageSize::PageSizeId x1, QPageSize::Unit x2) { return QPageSize::size(x1, x2); }
    Q_INVOKABLE QSize SsizePixels(QPageSize::PageSizeId x1, int x2) { return QPageSize::sizePixels(x1, x2); }
    Q_INVOKABLE QSize SsizePoints(QPageSize::PageSizeId x1) { return QPageSize::sizePoints(x1); }
    Q_INVOKABLE int SwindowsId(QPageSize::PageSizeId x1) { return QPageSize::windowsId(x1); }
};

class EQL_EXPORT N140 : public QObject { // QPaintDevice
    Q_OBJECT
public:
    Q_INVOKABLE int McolorCount(QPaintDevice* o) const { return o->colorCount(); }
    Q_INVOKABLE int Mdepth(QPaintDevice* o) const { return o->depth(); }
    Q_INVOKABLE int MdevicePixelRatio(QPaintDevice* o) const { return o->devicePixelRatio(); }
    Q_INVOKABLE int Mheight(QPaintDevice* o) const { return o->height(); }
    Q_INVOKABLE int MheightMM(QPaintDevice* o) const { return o->heightMM(); }
    Q_INVOKABLE int MlogicalDpiX(QPaintDevice* o) const { return o->logicalDpiX(); }
    Q_INVOKABLE int MlogicalDpiY(QPaintDevice* o) const { return o->logicalDpiY(); }
    Q_INVOKABLE bool MpaintingActive(QPaintDevice* o) const { return o->paintingActive(); }
    Q_INVOKABLE int MphysicalDpiX(QPaintDevice* o) const { return o->physicalDpiX(); }
    Q_INVOKABLE int MphysicalDpiY(QPaintDevice* o) const { return o->physicalDpiY(); }
    Q_INVOKABLE int Mwidth(QPaintDevice* o) const { return o->width(); }
    Q_INVOKABLE int MwidthMM(QPaintDevice* o) const { return o->widthMM(); }
};

class EQL_EXPORT N142 : public QObject { // QPainter
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QImage* x1) { return new LPainter(u, x1); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QImage* x1) { return o->begin(x1); }
    Q_INVOKABLE void* C(uint u, QPdfWriter* x1) { return new LPainter(u, x1); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QPdfWriter* x1) { return o->begin(x1); }
    Q_INVOKABLE void* C(uint u, QPicture* x1) { return new LPainter(u, x1); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QPicture* x1) { return o->begin(x1); }
    Q_INVOKABLE void* C(uint u, QPixmap* x1) { return new LPainter(u, x1); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QPixmap* x1) { return o->begin(x1); }
    Q_INVOKABLE void* C(uint u, QPrinter* x1) { return new LPainter(u, x1); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QPrinter* x1) { return o->begin(x1); }
    Q_INVOKABLE void* C(uint u, QWidget* x1) { return new LPainter(u, x1); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QWidget* x1) { return o->begin(x1); }
    Q_INVOKABLE void* C(uint u) { return new LPainter(u); }
    Q_INVOKABLE QBrush Mbackground(QPainter* o) const { return o->background(); }
    Q_INVOKABLE int MbackgroundMode(QPainter* o) const { return o->backgroundMode(); }
    Q_INVOKABLE void MbeginNativePainting(QPainter* o) { o->beginNativePainting(); }
    Q_INVOKABLE QRectF MboundingRect(QPainter* o, const QRectF& x1, int x2, const QString& x3) { return o->boundingRect(x1, x2, x3); }
    Q_INVOKABLE QRect MboundingRect(QPainter* o, const QRect& x1, int x2, const QString& x3) { return o->boundingRect(x1, x2, x3); }
    Q_INVOKABLE QRect MboundingRect(QPainter* o, int x1, int x2, int x3, int x4, int x5, const QString& x6) { return o->boundingRect(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QRectF MboundingRect(QPainter* o, const QRectF& x1, const QString& x2, const QTextOption& x3 = QTextOption()) { return o->boundingRect(x1, x2, x3); }
    Q_INVOKABLE QBrush Mbrush(QPainter* o) const { return o->brush(); }
    Q_INVOKABLE QPoint MbrushOrigin(QPainter* o) const { return o->brushOrigin(); }
    Q_INVOKABLE QRectF MclipBoundingRect(QPainter* o) const { return o->clipBoundingRect(); }
    Q_INVOKABLE QPainterPath MclipPath(QPainter* o) const { return o->clipPath(); }
    Q_INVOKABLE QRegion MclipRegion(QPainter* o) const { return o->clipRegion(); }
    Q_INVOKABLE QTransform McombinedTransform(QPainter* o) const { return o->combinedTransform(); }
    Q_INVOKABLE int McompositionMode(QPainter* o) const { return o->compositionMode(); }
    Q_INVOKABLE QTransform MdeviceTransform(QPainter* o) const { return o->deviceTransform(); }
    Q_INVOKABLE void MdrawArc(QPainter* o, const QRectF& x1, int x2, int x3) { o->drawArc(x1, x2, x3); }
    Q_INVOKABLE void MdrawArc(QPainter* o, const QRect& x1, int x2, int x3) { o->drawArc(x1, x2, x3); }
    Q_INVOKABLE void MdrawArc(QPainter* o, int x1, int x2, int x3, int x4, int x5, int x6) { o->drawArc(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MdrawChord(QPainter* o, const QRectF& x1, int x2, int x3) { o->drawChord(x1, x2, x3); }
    Q_INVOKABLE void MdrawChord(QPainter* o, const QRect& x1, int x2, int x3) { o->drawChord(x1, x2, x3); }
    Q_INVOKABLE void MdrawChord(QPainter* o, int x1, int x2, int x3, int x4, int x5, int x6) { o->drawChord(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MdrawConvexPolygon(QPainter* o, const QPointF* x1, int x2) { o->drawConvexPolygon(x1, x2); }
    Q_INVOKABLE void MdrawConvexPolygon(QPainter* o, const QPolygonF& x1) { o->drawConvexPolygon(x1); }
    Q_INVOKABLE void MdrawConvexPolygon(QPainter* o, const QPolygon& x1) { o->drawConvexPolygon(x1); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QRectF& x1) { o->drawEllipse(x1); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QRect& x1) { o->drawEllipse(x1); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, int x1, int x2, int x3, int x4) { o->drawEllipse(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QPointF& x1, qreal x2, qreal x3) { o->drawEllipse(x1, x2, x3); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QPoint& x1, int x2, int x3) { o->drawEllipse(x1, x2, x3); }
    Q_INVOKABLE void MdrawGlyphRun(QPainter* o, const QPointF& x1, const QGlyphRun& x2) { o->drawGlyphRun(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRectF& x1, const QImage& x2, const QRectF& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRect& x1, const QImage& x2, const QRect& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPointF& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPoint& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPointF& x1, const QImage& x2, const QRectF& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPoint& x1, const QImage& x2, const QRect& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRectF& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRect& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, int x1, int x2, const QImage& x3, int x4 = 0, int x5 = 0, int x6 = -1, int x7 = -1, Qt::ImageConversionFlags x8 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4, x5, x6, x7, x8); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QLineF& x1) { o->drawLine(x1); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QLine& x1) { o->drawLine(x1); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QPoint& x1, const QPoint& x2) { o->drawLine(x1, x2); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QPointF& x1, const QPointF& x2) { o->drawLine(x1, x2); }
    Q_INVOKABLE void MdrawLine(QPainter* o, int x1, int x2, int x3, int x4) { o->drawLine(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QLineF* x1, int x2) { o->drawLines(x1, x2); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QLine* x1, int x2) { o->drawLines(x1, x2); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QPointF* x1, int x2) { o->drawLines(x1, x2); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QPointF>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QPoint>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QLineF>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QLine>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawPath(QPainter* o, const QPainterPath& x1) { o->drawPath(x1); }
    Q_INVOKABLE void MdrawPicture(QPainter* o, const QPointF& x1, const QPicture& x2) { o->drawPicture(x1, x2); }
    Q_INVOKABLE void MdrawPicture(QPainter* o, const QPoint& x1, const QPicture& x2) { o->drawPicture(x1, x2); }
    Q_INVOKABLE void MdrawPicture(QPainter* o, int x1, int x2, const QPicture& x3) { o->drawPicture(x1, x2, x3); }
    Q_INVOKABLE void MdrawPie(QPainter* o, const QRectF& x1, int x2, int x3) { o->drawPie(x1, x2, x3); }
    Q_INVOKABLE void MdrawPie(QPainter* o, const QRect& x1, int x2, int x3) { o->drawPie(x1, x2, x3); }
    Q_INVOKABLE void MdrawPie(QPainter* o, int x1, int x2, int x3, int x4, int x5, int x6) { o->drawPie(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QRectF& x1, const QPixmap& x2, const QRectF& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QRect& x1, const QPixmap& x2, const QRect& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPointF& x1, const QPixmap& x2, const QRectF& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPoint& x1, const QPixmap& x2, const QRect& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPointF& x1, const QPixmap& x2) { o->drawPixmap(x1, x2); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPoint& x1, const QPixmap& x2) { o->drawPixmap(x1, x2); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, const QPixmap& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QRect& x1, const QPixmap& x2) { o->drawPixmap(x1, x2); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, int x3, int x4, const QPixmap& x5) { o->drawPixmap(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, int x3, int x4, const QPixmap& x5, int x6, int x7, int x8, int x9) { o->drawPixmap(x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, const QPixmap& x3, int x4, int x5, int x6, int x7) { o->drawPixmap(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MdrawPixmapFragments(QPainter* o, const QPainter::PixmapFragment* x1, int x2, const QPixmap& x3, QPainter::PixmapFragmentHints x4 = 0) { o->drawPixmapFragments(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawPoint(QPainter* o, const QPointF& x1) { o->drawPoint(x1); }
    Q_INVOKABLE void MdrawPoint(QPainter* o, const QPoint& x1) { o->drawPoint(x1); }
    Q_INVOKABLE void MdrawPoint(QPainter* o, int x1, int x2) { o->drawPoint(x1, x2); }
    Q_INVOKABLE void MdrawPoints(QPainter* o, const QPointF* x1, int x2) { o->drawPoints(x1, x2); }
    Q_INVOKABLE void MdrawPoints(QPainter* o, const QPolygonF& x1) { o->drawPoints(x1); }
    Q_INVOKABLE void MdrawPoints(QPainter* o, const QPolygon& x1) { o->drawPoints(x1); }
    Q_INVOKABLE void MdrawPolygon(QPainter* o, const QPointF* x1, int x2, Qt::FillRule x3 = Qt::OddEvenFill) { o->drawPolygon(x1, x2, x3); }
    Q_INVOKABLE void MdrawPolygon(QPainter* o, const QPolygonF& x1, Qt::FillRule x2 = Qt::OddEvenFill) { o->drawPolygon(x1, x2); }
    Q_INVOKABLE void MdrawPolygon(QPainter* o, const QPolygon& x1, Qt::FillRule x2 = Qt::OddEvenFill) { o->drawPolygon(x1, x2); }
    Q_INVOKABLE void MdrawPolyline(QPainter* o, const QPointF* x1, int x2) { o->drawPolyline(x1, x2); }
    Q_INVOKABLE void MdrawPolyline(QPainter* o, const QPolygonF& x1) { o->drawPolyline(x1); }
    Q_INVOKABLE void MdrawPolyline(QPainter* o, const QPolygon& x1) { o->drawPolyline(x1); }
    Q_INVOKABLE void MdrawRect(QPainter* o, const QRectF& x1) { o->drawRect(x1); }
    Q_INVOKABLE void MdrawRect(QPainter* o, const QRect& x1) { o->drawRect(x1); }
    Q_INVOKABLE void MdrawRect(QPainter* o, int x1, int x2, int x3, int x4) { o->drawRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QRectF* x1, int x2) { o->drawRects(x1, x2); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QRect* x1, int x2) { o->drawRects(x1, x2); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QVector<QRectF>& x1) { o->drawRects(x1); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QVector<QRect>& x1) { o->drawRects(x1); }
    Q_INVOKABLE void MdrawRoundedRect(QPainter* o, const QRectF& x1, qreal x2, qreal x3, Qt::SizeMode x4 = Qt::AbsoluteSize) { o->drawRoundedRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawRoundedRect(QPainter* o, const QRect& x1, qreal x2, qreal x3, Qt::SizeMode x4 = Qt::AbsoluteSize) { o->drawRoundedRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawRoundedRect(QPainter* o, int x1, int x2, int x3, int x4, qreal x5, qreal x6, Qt::SizeMode x7 = Qt::AbsoluteSize) { o->drawRoundedRect(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MdrawStaticText(QPainter* o, const QPointF& x1, const QStaticText& x2) { o->drawStaticText(x1, x2); }
    Q_INVOKABLE void MdrawStaticText(QPainter* o, const QPoint& x1, const QStaticText& x2) { o->drawStaticText(x1, x2); }
    Q_INVOKABLE void MdrawStaticText(QPainter* o, int x1, int x2, const QStaticText& x3) { o->drawStaticText(x1, x2, x3); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QPointF& x1, const QString& x2) { o->drawText(x1, x2); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QPoint& x1, const QString& x2) { o->drawText(x1, x2); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QRectF& x1, int x2, const QString& x3, QRectF* x4 = 0) { o->drawText(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QRect& x1, int x2, const QString& x3, QRect* x4 = 0) { o->drawText(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawText(QPainter* o, int x1, int x2, const QString& x3) { o->drawText(x1, x2, x3); }
    Q_INVOKABLE void MdrawText(QPainter* o, int x1, int x2, int x3, int x4, int x5, const QString& x6, QRect* x7 = 0) { o->drawText(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QRectF& x1, const QString& x2, const QTextOption& x3 = QTextOption()) { o->drawText(x1, x2, x3); }
    Q_INVOKABLE void MdrawTiledPixmap(QPainter* o, const QRectF& x1, const QPixmap& x2, const QPointF& x3 = QPointF()) { o->drawTiledPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawTiledPixmap(QPainter* o, const QRect& x1, const QPixmap& x2, const QPoint& x3 = QPoint()) { o->drawTiledPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawTiledPixmap(QPainter* o, int x1, int x2, int x3, int x4, const QPixmap& x5, int x6 = 0, int x7 = 0) { o->drawTiledPixmap(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE bool Mend(QPainter* o) { return o->end(); }
    Q_INVOKABLE void MendNativePainting(QPainter* o) { o->endNativePainting(); }
    Q_INVOKABLE void MeraseRect(QPainter* o, const QRectF& x1) { o->eraseRect(x1); }
    Q_INVOKABLE void MeraseRect(QPainter* o, const QRect& x1) { o->eraseRect(x1); }
    Q_INVOKABLE void MeraseRect(QPainter* o, int x1, int x2, int x3, int x4) { o->eraseRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MfillPath(QPainter* o, const QPainterPath& x1, const QBrush& x2) { o->fillPath(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, const QBrush& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, Qt::BrushStyle x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, Qt::BrushStyle x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, Qt::BrushStyle x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, const QBrush& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, const QColor& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, const QColor& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, const QBrush& x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, const QColor& x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, Qt::GlobalColor x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, Qt::GlobalColor x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, Qt::GlobalColor x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE QFont Mfont(QPainter* o) const { return o->font(); }
    Q_INVOKABLE QFontInfo MfontInfo(QPainter* o) const { return o->fontInfo(); }
    Q_INVOKABLE QFontMetrics MfontMetrics(QPainter* o) const { return o->fontMetrics(); }
    Q_INVOKABLE bool MhasClipping(QPainter* o) const { return o->hasClipping(); }
    Q_INVOKABLE bool MisActive(QPainter* o) const { return o->isActive(); }
    Q_INVOKABLE int MlayoutDirection(QPainter* o) const { return o->layoutDirection(); }
    Q_INVOKABLE qreal Mopacity(QPainter* o) const { return o->opacity(); }
    Q_INVOKABLE QPen Mpen(QPainter* o) const { return o->pen(); }
    Q_INVOKABLE int MrenderHints(QPainter* o) const { return o->renderHints(); }
    Q_INVOKABLE void MresetTransform(QPainter* o) { o->resetTransform(); }
    Q_INVOKABLE void Mrestore(QPainter* o) { o->restore(); }
    Q_INVOKABLE void Mrotate(QPainter* o, qreal x1) { o->rotate(x1); }
    Q_INVOKABLE void Msave(QPainter* o) { o->save(); }
    Q_INVOKABLE void Mscale(QPainter* o, qreal x1, qreal x2) { o->scale(x1, x2); }
    Q_INVOKABLE void MsetBackground(QPainter* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetBackgroundMode(QPainter* o, Qt::BGMode x1) { o->setBackgroundMode(x1); }
    Q_INVOKABLE void MsetBrush(QPainter* o, const QBrush& x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetBrush(QPainter* o, Qt::BrushStyle x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetBrushOrigin(QPainter* o, const QPointF& x1) { o->setBrushOrigin(x1); }
    Q_INVOKABLE void MsetBrushOrigin(QPainter* o, const QPoint& x1) { o->setBrushOrigin(x1); }
    Q_INVOKABLE void MsetBrushOrigin(QPainter* o, int x1, int x2) { o->setBrushOrigin(x1, x2); }
    Q_INVOKABLE void MsetClipPath(QPainter* o, const QPainterPath& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipPath(x1, x2); }
    Q_INVOKABLE void MsetClipRect(QPainter* o, const QRectF& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipRect(x1, x2); }
    Q_INVOKABLE void MsetClipRect(QPainter* o, int x1, int x2, int x3, int x4, Qt::ClipOperation x5 = Qt::ReplaceClip) { o->setClipRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetClipRect(QPainter* o, const QRect& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipRect(x1, x2); }
    Q_INVOKABLE void MsetClipRegion(QPainter* o, const QRegion& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipRegion(x1, x2); }
    Q_INVOKABLE void MsetClipping(QPainter* o, bool x1) { o->setClipping(x1); }
    Q_INVOKABLE void MsetCompositionMode(QPainter* o, QPainter::CompositionMode x1) { o->setCompositionMode(x1); }
    Q_INVOKABLE void MsetFont(QPainter* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetLayoutDirection(QPainter* o, Qt::LayoutDirection x1) { o->setLayoutDirection(x1); }
    Q_INVOKABLE void MsetOpacity(QPainter* o, qreal x1) { o->setOpacity(x1); }
    Q_INVOKABLE void MsetPen(QPainter* o, const QPen& x1) { o->setPen(x1); }
    Q_INVOKABLE void MsetPen(QPainter* o, const QColor& x1) { o->setPen(x1); }
    Q_INVOKABLE void MsetPen(QPainter* o, Qt::PenStyle x1) { o->setPen(x1); }
    Q_INVOKABLE void MsetRenderHint(QPainter* o, QPainter::RenderHint x1, bool x2 = true) { o->setRenderHint(x1, x2); }
    Q_INVOKABLE void MsetRenderHints(QPainter* o, QPainter::RenderHints x1, bool x2 = true) { o->setRenderHints(x1, x2); }
    Q_INVOKABLE void MsetTransform(QPainter* o, const QTransform& x1, bool x2 = false) { o->setTransform(x1, x2); }
    Q_INVOKABLE void MsetViewTransformEnabled(QPainter* o, bool x1) { o->setViewTransformEnabled(x1); }
    Q_INVOKABLE void MsetViewport(QPainter* o, const QRect& x1) { o->setViewport(x1); }
    Q_INVOKABLE void MsetViewport(QPainter* o, int x1, int x2, int x3, int x4) { o->setViewport(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetWindow(QPainter* o, const QRect& x1) { o->setWindow(x1); }
    Q_INVOKABLE void MsetWindow(QPainter* o, int x1, int x2, int x3, int x4) { o->setWindow(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetWorldMatrixEnabled(QPainter* o, bool x1) { o->setWorldMatrixEnabled(x1); }
    Q_INVOKABLE void MsetWorldTransform(QPainter* o, const QTransform& x1, bool x2 = false) { o->setWorldTransform(x1, x2); }
    Q_INVOKABLE void Mshear(QPainter* o, qreal x1, qreal x2) { o->shear(x1, x2); }
    Q_INVOKABLE void MstrokePath(QPainter* o, const QPainterPath& x1, const QPen& x2) { o->strokePath(x1, x2); }
    Q_INVOKABLE bool MtestRenderHint(QPainter* o, QPainter::RenderHint x1) const { return o->testRenderHint(x1); }
    Q_INVOKABLE QTransform Mtransform(QPainter* o) const { return o->transform(); }
    Q_INVOKABLE void Mtranslate(QPainter* o, const QPointF& x1) { o->translate(x1); }
    Q_INVOKABLE void Mtranslate(QPainter* o, const QPoint& x1) { o->translate(x1); }
    Q_INVOKABLE void Mtranslate(QPainter* o, qreal x1, qreal x2) { o->translate(x1, x2); }
    Q_INVOKABLE bool MviewTransformEnabled(QPainter* o) const { return o->viewTransformEnabled(); }
    Q_INVOKABLE QRect Mviewport(QPainter* o) const { return o->viewport(); }
    Q_INVOKABLE QRect Mwindow(QPainter* o) const { return o->window(); }
    Q_INVOKABLE bool MworldMatrixEnabled(QPainter* o) const { return o->worldMatrixEnabled(); }
    Q_INVOKABLE QTransform MworldTransform(QPainter* o) const { return o->worldTransform(); }
};

class EQL_EXPORT N143 : public QObject { // QPainterPath
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPainterPath(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LPainterPath(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPainterPath& x1) { return new LPainterPath(u, x1); }
    Q_INVOKABLE void MaddEllipse(QPainterPath* o, const QRectF& x1) { o->addEllipse(x1); }
    Q_INVOKABLE void MaddEllipse(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->addEllipse(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddEllipse(QPainterPath* o, const QPointF& x1, qreal x2, qreal x3) { o->addEllipse(x1, x2, x3); }
    Q_INVOKABLE void MaddPath(QPainterPath* o, const QPainterPath& x1) { o->addPath(x1); }
    Q_INVOKABLE void MaddPolygon(QPainterPath* o, const QPolygonF& x1) { o->addPolygon(x1); }
    Q_INVOKABLE void MaddRect(QPainterPath* o, const QRectF& x1) { o->addRect(x1); }
    Q_INVOKABLE void MaddRect(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->addRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddRegion(QPainterPath* o, const QRegion& x1) { o->addRegion(x1); }
    Q_INVOKABLE void MaddRoundedRect(QPainterPath* o, const QRectF& x1, qreal x2, qreal x3, Qt::SizeMode x4 = Qt::AbsoluteSize) { o->addRoundedRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddRoundedRect(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, Qt::SizeMode x7 = Qt::AbsoluteSize) { o->addRoundedRect(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MaddText(QPainterPath* o, const QPointF& x1, const QFont& x2, const QString& x3) { o->addText(x1, x2, x3); }
    Q_INVOKABLE void MaddText(QPainterPath* o, qreal x1, qreal x2, const QFont& x3, const QString& x4) { o->addText(x1, x2, x3, x4); }
    Q_INVOKABLE qreal MangleAtPercent(QPainterPath* o, qreal x1) const { return o->angleAtPercent(x1); }
    Q_INVOKABLE void MarcMoveTo(QPainterPath* o, const QRectF& x1, qreal x2) { o->arcMoveTo(x1, x2); }
    Q_INVOKABLE void MarcMoveTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5) { o->arcMoveTo(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MarcTo(QPainterPath* o, const QRectF& x1, qreal x2, qreal x3) { o->arcTo(x1, x2, x3); }
    Q_INVOKABLE void MarcTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->arcTo(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QRectF MboundingRect(QPainterPath* o) const { return o->boundingRect(); }
    Q_INVOKABLE void McloseSubpath(QPainterPath* o) { o->closeSubpath(); }
    Q_INVOKABLE void MconnectPath(QPainterPath* o, const QPainterPath& x1) { o->connectPath(x1); }
    Q_INVOKABLE bool Mcontains(QPainterPath* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QPainterPath* o, const QRectF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QPainterPath* o, const QPainterPath& x1) const { return o->contains(x1); }
    Q_INVOKABLE QRectF McontrolPointRect(QPainterPath* o) const { return o->controlPointRect(); }
    Q_INVOKABLE void McubicTo(QPainterPath* o, const QPointF& x1, const QPointF& x2, const QPointF& x3) { o->cubicTo(x1, x2, x3); }
    Q_INVOKABLE void McubicTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->cubicTo(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QPointF McurrentPosition(QPainterPath* o) const { return o->currentPosition(); }
    Q_INVOKABLE int MelementCount(QPainterPath* o) const { return o->elementCount(); }
    Q_INVOKABLE int MfillRule(QPainterPath* o) const { return o->fillRule(); }
    Q_INVOKABLE QPainterPath Mintersected(QPainterPath* o, const QPainterPath& x1) const { return o->intersected(x1); }
    Q_INVOKABLE bool Mintersects(QPainterPath* o, const QRectF& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool Mintersects(QPainterPath* o, const QPainterPath& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool MisEmpty(QPainterPath* o) const { return o->isEmpty(); }
    Q_INVOKABLE qreal Mlength(QPainterPath* o) const { return o->length(); }
    Q_INVOKABLE void MlineTo(QPainterPath* o, const QPointF& x1) { o->lineTo(x1); }
    Q_INVOKABLE void MlineTo(QPainterPath* o, qreal x1, qreal x2) { o->lineTo(x1, x2); }
    Q_INVOKABLE void MmoveTo(QPainterPath* o, const QPointF& x1) { o->moveTo(x1); }
    Q_INVOKABLE void MmoveTo(QPainterPath* o, qreal x1, qreal x2) { o->moveTo(x1, x2); }
    Q_INVOKABLE qreal MpercentAtLength(QPainterPath* o, qreal x1) const { return o->percentAtLength(x1); }
    Q_INVOKABLE QPointF MpointAtPercent(QPainterPath* o, qreal x1) const { return o->pointAtPercent(x1); }
    Q_INVOKABLE void MquadTo(QPainterPath* o, const QPointF& x1, const QPointF& x2) { o->quadTo(x1, x2); }
    Q_INVOKABLE void MquadTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->quadTo(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetElementPositionAt(QPainterPath* o, int x1, qreal x2, qreal x3) { o->setElementPositionAt(x1, x2, x3); }
    Q_INVOKABLE void MsetFillRule(QPainterPath* o, Qt::FillRule x1) { o->setFillRule(x1); }
    Q_INVOKABLE QPainterPath Msimplified(QPainterPath* o) const { return o->simplified(); }
    Q_INVOKABLE qreal MslopeAtPercent(QPainterPath* o, qreal x1) const { return o->slopeAtPercent(x1); }
    Q_INVOKABLE QPainterPath Msubtracted(QPainterPath* o, const QPainterPath& x1) const { return o->subtracted(x1); }
    Q_INVOKABLE void Mswap(QPainterPath* o, QPainterPath& x1) { o->swap(x1); }
    Q_INVOKABLE QPolygonF MtoFillPolygon(QPainterPath* o, const QTransform& x1) const { return o->toFillPolygon(x1); }
    Q_INVOKABLE QPolygonF MtoFillPolygon(QPainterPath* o, const QMatrix& x1 = QMatrix()) const { return o->toFillPolygon(x1); }
    Q_INVOKABLE QList<QPolygonF> MtoFillPolygons(QPainterPath* o, const QTransform& x1) const { return o->toFillPolygons(x1); }
    Q_INVOKABLE QList<QPolygonF> MtoFillPolygons(QPainterPath* o, const QMatrix& x1 = QMatrix()) const { return o->toFillPolygons(x1); }
    Q_INVOKABLE QPainterPath MtoReversed(QPainterPath* o) const { return o->toReversed(); }
    Q_INVOKABLE QList<QPolygonF> MtoSubpathPolygons(QPainterPath* o, const QTransform& x1) const { return o->toSubpathPolygons(x1); }
    Q_INVOKABLE QList<QPolygonF> MtoSubpathPolygons(QPainterPath* o, const QMatrix& x1 = QMatrix()) const { return o->toSubpathPolygons(x1); }
    Q_INVOKABLE void Mtranslate(QPainterPath* o, qreal x1, qreal x2) { o->translate(x1, x2); }
    Q_INVOKABLE void Mtranslate(QPainterPath* o, const QPointF& x1) { o->translate(x1); }
    Q_INVOKABLE QPainterPath Mtranslated(QPainterPath* o, qreal x1, qreal x2) const { return o->translated(x1, x2); }
    Q_INVOKABLE QPainterPath Mtranslated(QPainterPath* o, const QPointF& x1) const { return o->translated(x1); }
    Q_INVOKABLE QPainterPath Munited(QPainterPath* o, const QPainterPath& x1) const { return o->united(x1); }
};

class EQL_EXPORT N144 : public QObject { // QPainterPathStroker
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPainterPathStroker(u); }
    Q_INVOKABLE void* C(uint u, const QPen& x1) { return new LPainterPathStroker(u, x1); }
    Q_INVOKABLE int McapStyle(QPainterPathStroker* o) const { return o->capStyle(); }
    Q_INVOKABLE QPainterPath McreateStroke(QPainterPathStroker* o, const QPainterPath& x1) const { return o->createStroke(x1); }
    Q_INVOKABLE qreal McurveThreshold(QPainterPathStroker* o) const { return o->curveThreshold(); }
    Q_INVOKABLE qreal MdashOffset(QPainterPathStroker* o) const { return o->dashOffset(); }
    Q_INVOKABLE QVector<qreal> MdashPattern(QPainterPathStroker* o) const { return o->dashPattern(); }
    Q_INVOKABLE int MjoinStyle(QPainterPathStroker* o) const { return o->joinStyle(); }
    Q_INVOKABLE qreal MmiterLimit(QPainterPathStroker* o) const { return o->miterLimit(); }
    Q_INVOKABLE void MsetCapStyle(QPainterPathStroker* o, Qt::PenCapStyle x1) { o->setCapStyle(x1); }
    Q_INVOKABLE void MsetCurveThreshold(QPainterPathStroker* o, qreal x1) { o->setCurveThreshold(x1); }
    Q_INVOKABLE void MsetDashOffset(QPainterPathStroker* o, qreal x1) { o->setDashOffset(x1); }
    Q_INVOKABLE void MsetDashPattern(QPainterPathStroker* o, Qt::PenStyle x1) { o->setDashPattern(x1); }
    Q_INVOKABLE void MsetDashPattern(QPainterPathStroker* o, const QVector<qreal>& x1) { o->setDashPattern(x1); }
    Q_INVOKABLE void MsetJoinStyle(QPainterPathStroker* o, Qt::PenJoinStyle x1) { o->setJoinStyle(x1); }
    Q_INVOKABLE void MsetMiterLimit(QPainterPathStroker* o, qreal x1) { o->setMiterLimit(x1); }
    Q_INVOKABLE void MsetWidth(QPainterPathStroker* o, qreal x1) { o->setWidth(x1); }
    Q_INVOKABLE qreal Mwidth(QPainterPathStroker* o) const { return o->width(); }
};

class EQL_EXPORT N145 : public QObject { // QPalette
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPalette(u); }
    Q_INVOKABLE void* C(uint u, const QColor& x1) { return new LPalette(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1) { return new LPalette(u, x1); }
    Q_INVOKABLE void* C(uint u, const QColor& x1, const QColor& x2) { return new LPalette(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QBrush& x1, const QBrush& x2, const QBrush& x3, const QBrush& x4, const QBrush& x5, const QBrush& x6, const QBrush& x7, const QBrush& x8, const QBrush& x9) { return new LPalette(u, x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE void* C(uint u, const QPalette& x1) { return new LPalette(u, x1); }
    Q_INVOKABLE QBrush MalternateBase(QPalette* o) const { return o->alternateBase(); }
    Q_INVOKABLE QBrush Mbase(QPalette* o) const { return o->base(); }
    Q_INVOKABLE QBrush MbrightText(QPalette* o) const { return o->brightText(); }
    Q_INVOKABLE QBrush Mbrush(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2) const { return o->brush(x1, x2); }
    Q_INVOKABLE QBrush Mbrush(QPalette* o, QPalette::ColorRole x1) const { return o->brush(x1); }
    Q_INVOKABLE QBrush Mbutton(QPalette* o) const { return o->button(); }
    Q_INVOKABLE QBrush MbuttonText(QPalette* o) const { return o->buttonText(); }
    Q_INVOKABLE qlonglong McacheKey(QPalette* o) const { return o->cacheKey(); }
    Q_INVOKABLE QColor Mcolor(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2) const { return o->color(x1, x2); }
    Q_INVOKABLE QColor Mcolor(QPalette* o, QPalette::ColorRole x1) const { return o->color(x1); }
    Q_INVOKABLE int McurrentColorGroup(QPalette* o) const { return o->currentColorGroup(); }
    Q_INVOKABLE QBrush Mdark(QPalette* o) const { return o->dark(); }
    Q_INVOKABLE QBrush Mhighlight(QPalette* o) const { return o->highlight(); }
    Q_INVOKABLE QBrush MhighlightedText(QPalette* o) const { return o->highlightedText(); }
    Q_INVOKABLE bool MisBrushSet(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2) const { return o->isBrushSet(x1, x2); }
    Q_INVOKABLE bool MisCopyOf(QPalette* o, const QPalette& x1) const { return o->isCopyOf(x1); }
    Q_INVOKABLE bool MisEqual(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorGroup x2) const { return o->isEqual(x1, x2); }
    Q_INVOKABLE QBrush Mlight(QPalette* o) const { return o->light(); }
    Q_INVOKABLE QBrush Mlink(QPalette* o) const { return o->link(); }
    Q_INVOKABLE QBrush MlinkVisited(QPalette* o) const { return o->linkVisited(); }
    Q_INVOKABLE QBrush Mmid(QPalette* o) const { return o->mid(); }
    Q_INVOKABLE QBrush Mmidlight(QPalette* o) const { return o->midlight(); }
    Q_INVOKABLE QPalette Mresolve(QPalette* o, const QPalette& x1) const { return o->resolve(x1); }
    Q_INVOKABLE void MsetBrush(QPalette* o, QPalette::ColorRole x1, const QBrush& x2) { o->setBrush(x1, x2); }
    Q_INVOKABLE void MsetBrush(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2, const QBrush& x3) { o->setBrush(x1, x2, x3); }
    Q_INVOKABLE void MsetColor(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2, const QColor& x3) { o->setColor(x1, x2, x3); }
    Q_INVOKABLE void MsetColor(QPalette* o, QPalette::ColorRole x1, const QColor& x2) { o->setColor(x1, x2); }
    Q_INVOKABLE void MsetColorGroup(QPalette* o, QPalette::ColorGroup x1, const QBrush& x2, const QBrush& x3, const QBrush& x4, const QBrush& x5, const QBrush& x6, const QBrush& x7, const QBrush& x8, const QBrush& x9, const QBrush& x10) { o->setColorGroup(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10); }
    Q_INVOKABLE void MsetCurrentColorGroup(QPalette* o, QPalette::ColorGroup x1) { o->setCurrentColorGroup(x1); }
    Q_INVOKABLE QBrush Mshadow(QPalette* o) const { return o->shadow(); }
    Q_INVOKABLE void Mswap(QPalette* o, QPalette& x1) { o->swap(x1); }
    Q_INVOKABLE QBrush Mtext(QPalette* o) const { return o->text(); }
    Q_INVOKABLE QBrush MtoolTipBase(QPalette* o) const { return o->toolTipBase(); }
    Q_INVOKABLE QBrush MtoolTipText(QPalette* o) const { return o->toolTipText(); }
    Q_INVOKABLE QBrush Mwindow(QPalette* o) const { return o->window(); }
    Q_INVOKABLE QBrush MwindowText(QPalette* o) const { return o->windowText(); }
};

class EQL_EXPORT N146 : public QObject { // QPen
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPen(u); }
    Q_INVOKABLE void* C(uint u, Qt::PenStyle x1) { return new LPen(u, x1); }
    Q_INVOKABLE void* C(uint u, const QColor& x1) { return new LPen(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBrush& x1, qreal x2, Qt::PenStyle x3 = Qt::SolidLine, Qt::PenCapStyle x4 = Qt::SquareCap, Qt::PenJoinStyle x5 = Qt::BevelJoin) { return new LPen(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QPen& x1) { return new LPen(u, x1); }
    Q_INVOKABLE QBrush Mbrush(QPen* o) const { return o->brush(); }
    Q_INVOKABLE int McapStyle(QPen* o) const { return o->capStyle(); }
    Q_INVOKABLE QColor Mcolor(QPen* o) const { return o->color(); }
    Q_INVOKABLE qreal MdashOffset(QPen* o) const { return o->dashOffset(); }
    Q_INVOKABLE QVector<qreal> MdashPattern(QPen* o) const { return o->dashPattern(); }
    Q_INVOKABLE bool MisCosmetic(QPen* o) const { return o->isCosmetic(); }
    Q_INVOKABLE bool MisSolid(QPen* o) const { return o->isSolid(); }
    Q_INVOKABLE int MjoinStyle(QPen* o) const { return o->joinStyle(); }
    Q_INVOKABLE qreal MmiterLimit(QPen* o) const { return o->miterLimit(); }
    Q_INVOKABLE void MsetBrush(QPen* o, const QBrush& x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetCapStyle(QPen* o, Qt::PenCapStyle x1) { o->setCapStyle(x1); }
    Q_INVOKABLE void MsetColor(QPen* o, const QColor& x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetCosmetic(QPen* o, bool x1) { o->setCosmetic(x1); }
    Q_INVOKABLE void MsetDashOffset(QPen* o, qreal x1) { o->setDashOffset(x1); }
    Q_INVOKABLE void MsetDashPattern(QPen* o, const QVector<qreal>& x1) { o->setDashPattern(x1); }
    Q_INVOKABLE void MsetJoinStyle(QPen* o, Qt::PenJoinStyle x1) { o->setJoinStyle(x1); }
    Q_INVOKABLE void MsetMiterLimit(QPen* o, qreal x1) { o->setMiterLimit(x1); }
    Q_INVOKABLE void MsetStyle(QPen* o, Qt::PenStyle x1) { o->setStyle(x1); }
    Q_INVOKABLE void MsetWidth(QPen* o, int x1) { o->setWidth(x1); }
    Q_INVOKABLE void MsetWidthF(QPen* o, qreal x1) { o->setWidthF(x1); }
    Q_INVOKABLE int Mstyle(QPen* o) const { return o->style(); }
    Q_INVOKABLE void Mswap(QPen* o, QPen& x1) { o->swap(x1); }
    Q_INVOKABLE int Mwidth(QPen* o) const { return o->width(); }
    Q_INVOKABLE qreal MwidthF(QPen* o) const { return o->widthF(); }
};

class EQL_EXPORT N147 : public QObject { // QPersistentModelIndex
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1) { return new LPersistentModelIndex(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPersistentModelIndex& x1) { return new LPersistentModelIndex(u, x1); }
    Q_INVOKABLE QModelIndex Mchild(QPersistentModelIndex* o, int x1, int x2) const { return o->child(x1, x2); }
    Q_INVOKABLE int Mcolumn(QPersistentModelIndex* o) const { return o->column(); }
    Q_INVOKABLE QVariant Mdata(QPersistentModelIndex* o, int x1 = Qt::DisplayRole) const { return o->data(x1); }
    Q_INVOKABLE int Mflags(QPersistentModelIndex* o) const { return o->flags(); }
    Q_INVOKABLE bool MisValid(QPersistentModelIndex* o) const { return o->isValid(); }
    Q_INVOKABLE const QAbstractItemModel* Mmodel(QPersistentModelIndex* o) const { return o->model(); }
    Q_INVOKABLE QModelIndex Mparent(QPersistentModelIndex* o) const { return o->parent(); }
    Q_INVOKABLE int Mrow(QPersistentModelIndex* o) const { return o->row(); }
    Q_INVOKABLE QModelIndex Msibling(QPersistentModelIndex* o, int x1, int x2) const { return o->sibling(x1, x2); }
    Q_INVOKABLE void Mswap(QPersistentModelIndex* o, QPersistentModelIndex& x1) { o->swap(x1); }
};

class EQL_EXPORT N150 : public QObject { // QPixmapCache
    Q_OBJECT
public:
    Q_INVOKABLE int ScacheLimit() { return QPixmapCache::cacheLimit(); }
    Q_INVOKABLE void Sclear() { QPixmapCache::clear(); }
    Q_INVOKABLE bool Sfind(const QString& x1, QPixmap* x2) { return QPixmapCache::find(x1, x2); }
    Q_INVOKABLE bool Sinsert(const QString& x1, const QPixmap& x2) { return QPixmapCache::insert(x1, x2); }
    Q_INVOKABLE void Sremove(const QString& x1) { QPixmapCache::remove(x1); }
    Q_INVOKABLE void SsetCacheLimit(int x1) { QPixmapCache::setCacheLimit(x1); }
};

class EQL_EXPORT N152 : public QObject { // QPrinterInfo
    Q_OBJECT
public:
    Q_INVOKABLE int MdefaultDuplexMode(QPrinterInfo* o) const { return o->defaultDuplexMode(); }
    Q_INVOKABLE QPageSize MdefaultPageSize(QPrinterInfo* o) const { return o->defaultPageSize(); }
    Q_INVOKABLE QString Mdescription(QPrinterInfo* o) const { return o->description(); }
    Q_INVOKABLE bool MisDefault(QPrinterInfo* o) const { return o->isDefault(); }
    Q_INVOKABLE bool MisNull(QPrinterInfo* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisRemote(QPrinterInfo* o) const { return o->isRemote(); }
    Q_INVOKABLE QString Mlocation(QPrinterInfo* o) const { return o->location(); }
    Q_INVOKABLE QString MmakeAndModel(QPrinterInfo* o) const { return o->makeAndModel(); }
    Q_INVOKABLE QPageSize MmaximumPhysicalPageSize(QPrinterInfo* o) const { return o->maximumPhysicalPageSize(); }
    Q_INVOKABLE QPageSize MminimumPhysicalPageSize(QPrinterInfo* o) const { return o->minimumPhysicalPageSize(); }
    Q_INVOKABLE QString MprinterName(QPrinterInfo* o) const { return o->printerName(); }
    Q_INVOKABLE int Mstate(QPrinterInfo* o) const { return o->state(); }
    Q_INVOKABLE QList<QPrinter::DuplexMode> MsupportedDuplexModes(QPrinterInfo* o) const { return o->supportedDuplexModes(); }
    Q_INVOKABLE QList<QPageSize> MsupportedPageSizes(QPrinterInfo* o) const { return o->supportedPageSizes(); }
    Q_INVOKABLE QList<int> MsupportedResolutions(QPrinterInfo* o) const { return o->supportedResolutions(); }
    Q_INVOKABLE bool MsupportsCustomPageSizes(QPrinterInfo* o) const { return o->supportsCustomPageSizes(); }
    Q_INVOKABLE QStringList SavailablePrinterNames() { return QPrinterInfo::availablePrinterNames(); }
    Q_INVOKABLE QString SdefaultPrinterName() { return QPrinterInfo::defaultPrinterName(); }
};

class EQL_EXPORT N153 : public QObject { // QProcessEnvironment
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LProcessEnvironment(u); }
    Q_INVOKABLE void* C(uint u, const QProcessEnvironment& x1) { return new LProcessEnvironment(u, x1); }
    Q_INVOKABLE void Mclear(QProcessEnvironment* o) { o->clear(); }
    Q_INVOKABLE bool Mcontains(QProcessEnvironment* o, const QString& x1) const { return o->contains(x1); }
    Q_INVOKABLE void Minsert(QProcessEnvironment* o, const QString& x1, const QString& x2) { o->insert(x1, x2); }
    Q_INVOKABLE void Minsert(QProcessEnvironment* o, const QProcessEnvironment& x1) { o->insert(x1); }
    Q_INVOKABLE bool MisEmpty(QProcessEnvironment* o) const { return o->isEmpty(); }
    Q_INVOKABLE QStringList Mkeys(QProcessEnvironment* o) const { return o->keys(); }
    Q_INVOKABLE void Mremove(QProcessEnvironment* o, const QString& x1) { o->remove(x1); }
    Q_INVOKABLE void Mswap(QProcessEnvironment* o, QProcessEnvironment& x1) { o->swap(x1); }
    Q_INVOKABLE QStringList MtoStringList(QProcessEnvironment* o) const { return o->toStringList(); }
    Q_INVOKABLE QString Mvalue(QProcessEnvironment* o, const QString& x1, const QString& x2 = QString()) const { return o->value(x1, x2); }
    Q_INVOKABLE QProcessEnvironment SsystemEnvironment() { return QProcessEnvironment::systemEnvironment(); }
};

class EQL_EXPORT N164 : public QObject { // QQuaternion
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQuaternion(u); }
    Q_INVOKABLE void* C(uint u, float x1, float x2, float x3, float x4) { return new LQuaternion(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, float x1, const QVector3D& x2) { return new LQuaternion(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QVector4D& x1) { return new LQuaternion(u, x1); }
    Q_INVOKABLE QQuaternion Mconjugated(QQuaternion* o) const { return o->conjugated(); }
    Q_INVOKABLE QQuaternion Minverted(QQuaternion* o) const { return o->inverted(); }
    Q_INVOKABLE bool MisIdentity(QQuaternion* o) const { return o->isIdentity(); }
    Q_INVOKABLE bool MisNull(QQuaternion* o) const { return o->isNull(); }
    Q_INVOKABLE float Mlength(QQuaternion* o) const { return o->length(); }
    Q_INVOKABLE float MlengthSquared(QQuaternion* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QQuaternion* o) { o->normalize(); }
    Q_INVOKABLE QQuaternion Mnormalized(QQuaternion* o) const { return o->normalized(); }
    Q_INVOKABLE QVector3D MrotatedVector(QQuaternion* o, const QVector3D& x1) const { return o->rotatedVector(x1); }
    Q_INVOKABLE float Mscalar(QQuaternion* o) const { return o->scalar(); }
    Q_INVOKABLE void MsetScalar(QQuaternion* o, float x1) { o->setScalar(x1); }
    Q_INVOKABLE void MsetVector(QQuaternion* o, const QVector3D& x1) { o->setVector(x1); }
    Q_INVOKABLE void MsetVector(QQuaternion* o, float x1, float x2, float x3) { o->setVector(x1, x2, x3); }
    Q_INVOKABLE void MsetX(QQuaternion* o, float x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QQuaternion* o, float x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZ(QQuaternion* o, float x1) { o->setZ(x1); }
    Q_INVOKABLE QVector3D MtoEulerAngles(QQuaternion* o) const { return o->toEulerAngles(); }
    Q_INVOKABLE QVector4D MtoVector4D(QQuaternion* o) const { return o->toVector4D(); }
    Q_INVOKABLE QVector3D Mvector(QQuaternion* o) const { return o->vector(); }
    Q_INVOKABLE float Mx(QQuaternion* o) const { return o->x(); }
    Q_INVOKABLE float My(QQuaternion* o) const { return o->y(); }
    Q_INVOKABLE float Mz(QQuaternion* o) const { return o->z(); }
    Q_INVOKABLE float SdotProduct(const QQuaternion& x1, const QQuaternion& x2) { return QQuaternion::dotProduct(x1, x2); }
    Q_INVOKABLE QQuaternion SfromAxes(const QVector3D& x1, const QVector3D& x2, const QVector3D& x3) { return QQuaternion::fromAxes(x1, x2, x3); }
    Q_INVOKABLE QQuaternion SfromAxisAndAngle(const QVector3D& x1, float x2) { return QQuaternion::fromAxisAndAngle(x1, x2); }
    Q_INVOKABLE QQuaternion SfromAxisAndAngle(float x1, float x2, float x3, float x4) { return QQuaternion::fromAxisAndAngle(x1, x2, x3, x4); }
    Q_INVOKABLE QQuaternion SfromDirection(const QVector3D& x1, const QVector3D& x2) { return QQuaternion::fromDirection(x1, x2); }
    Q_INVOKABLE QQuaternion SfromEulerAngles(float x1, float x2, float x3) { return QQuaternion::fromEulerAngles(x1, x2, x3); }
    Q_INVOKABLE QQuaternion SfromEulerAngles(const QVector3D& x1) { return QQuaternion::fromEulerAngles(x1); }
    Q_INVOKABLE QQuaternion Snlerp(const QQuaternion& x1, const QQuaternion& x2, float x3) { return QQuaternion::nlerp(x1, x2, x3); }
    Q_INVOKABLE QQuaternion SrotationTo(const QVector3D& x1, const QVector3D& x2) { return QQuaternion::rotationTo(x1, x2); }
    Q_INVOKABLE QQuaternion Sslerp(const QQuaternion& x1, const QQuaternion& x2, float x3) { return QQuaternion::slerp(x1, x2, x3); }
};

class EQL_EXPORT N167 : public QObject { // QRegExp
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRegExp(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1, Qt::CaseSensitivity x2 = Qt::CaseSensitive, QRegExp::PatternSyntax x3 = QRegExp::RegExp) { return new LRegExp(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QRegExp& x1) { return new LRegExp(u, x1); }
    Q_INVOKABLE QString Mcap(QRegExp* o, int x1 = 0) const { return o->cap(x1); }
    Q_INVOKABLE int McaptureCount(QRegExp* o) const { return o->captureCount(); }
    Q_INVOKABLE QStringList McapturedTexts(QRegExp* o) const { return o->capturedTexts(); }
    Q_INVOKABLE int McaseSensitivity(QRegExp* o) const { return o->caseSensitivity(); }
    Q_INVOKABLE QString MerrorString(QRegExp* o) const { return o->errorString(); }
    Q_INVOKABLE bool MexactMatch(QRegExp* o, const QString& x1) const { return o->exactMatch(x1); }
    Q_INVOKABLE int MindexIn(QRegExp* o, const QString& x1, int x2 = 0, QRegExp::CaretMode x3 = QRegExp::CaretAtZero) const { return o->indexIn(x1, x2, x3); }
    Q_INVOKABLE bool MisEmpty(QRegExp* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisMinimal(QRegExp* o) const { return o->isMinimal(); }
    Q_INVOKABLE bool MisValid(QRegExp* o) const { return o->isValid(); }
    Q_INVOKABLE int MlastIndexIn(QRegExp* o, const QString& x1, int x2 = -1, QRegExp::CaretMode x3 = QRegExp::CaretAtZero) const { return o->lastIndexIn(x1, x2, x3); }
    Q_INVOKABLE int MmatchedLength(QRegExp* o) const { return o->matchedLength(); }
    Q_INVOKABLE QString Mpattern(QRegExp* o) const { return o->pattern(); }
    Q_INVOKABLE int MpatternSyntax(QRegExp* o) const { return o->patternSyntax(); }
    Q_INVOKABLE int Mpos(QRegExp* o, int x1 = 0) const { return o->pos(x1); }
    Q_INVOKABLE void MsetCaseSensitivity(QRegExp* o, Qt::CaseSensitivity x1) { o->setCaseSensitivity(x1); }
    Q_INVOKABLE void MsetMinimal(QRegExp* o, bool x1) { o->setMinimal(x1); }
    Q_INVOKABLE void MsetPattern(QRegExp* o, const QString& x1) { o->setPattern(x1); }
    Q_INVOKABLE void MsetPatternSyntax(QRegExp* o, QRegExp::PatternSyntax x1) { o->setPatternSyntax(x1); }
    Q_INVOKABLE void Mswap(QRegExp* o, QRegExp& x1) { o->swap(x1); }
    Q_INVOKABLE QString Sescape(const QString& x1) { return QRegExp::escape(x1); }
};

class EQL_EXPORT N168 : public QObject { // QRegion
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRegion(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3, int x4, QRegion::RegionType x5 = QRegion::Rectangle) { return new LRegion(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QPolygon& x1, Qt::FillRule x2 = Qt::OddEvenFill) { return new LRegion(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QRegion& x1) { return new LRegion(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBitmap& x1) { return new LRegion(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRect& x1, QRegion::RegionType x2 = QRegion::Rectangle) { return new LRegion(u, x1, x2); }
    Q_INVOKABLE QRect MboundingRect(QRegion* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QRegion* o, const QPoint& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QRegion* o, const QRect& x1) const { return o->contains(x1); }
    Q_INVOKABLE QRegion Mintersected(QRegion* o, const QRegion& x1) const { return o->intersected(x1); }
    Q_INVOKABLE QRegion Mintersected(QRegion* o, const QRect& x1) const { return o->intersected(x1); }
    Q_INVOKABLE bool Mintersects(QRegion* o, const QRegion& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool Mintersects(QRegion* o, const QRect& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool MisEmpty(QRegion* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisNull(QRegion* o) const { return o->isNull(); }
    Q_INVOKABLE int MrectCount(QRegion* o) const { return o->rectCount(); }
    Q_INVOKABLE QVector<QRect> Mrects(QRegion* o) const { return o->rects(); }
    Q_INVOKABLE void MsetRects(QRegion* o, const QRect* x1, int x2) { o->setRects(x1, x2); }
    Q_INVOKABLE QRegion Msubtracted(QRegion* o, const QRegion& x1) const { return o->subtracted(x1); }
    Q_INVOKABLE void Mswap(QRegion* o, QRegion& x1) { o->swap(x1); }
    Q_INVOKABLE void Mtranslate(QRegion* o, int x1, int x2) { o->translate(x1, x2); }
    Q_INVOKABLE void Mtranslate(QRegion* o, const QPoint& x1) { o->translate(x1); }
    Q_INVOKABLE QRegion Mtranslated(QRegion* o, int x1, int x2) const { return o->translated(x1, x2); }
    Q_INVOKABLE QRegion Mtranslated(QRegion* o, const QPoint& x1) const { return o->translated(x1); }
    Q_INVOKABLE QRegion Munited(QRegion* o, const QRegion& x1) const { return o->united(x1); }
    Q_INVOKABLE QRegion Munited(QRegion* o, const QRect& x1) const { return o->united(x1); }
    Q_INVOKABLE QRegion Mxored(QRegion* o, const QRegion& x1) const { return o->xored(x1); }
};

class EQL_EXPORT N169 : public QObject { // QRegularExpression
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRegularExpression(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QRegularExpression::PatternOptions x2 = QRegularExpression::NoPatternOption) { return new LRegularExpression(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QRegularExpression& x1) { return new LRegularExpression(u, x1); }
    Q_INVOKABLE int McaptureCount(QRegularExpression* o) const { return o->captureCount(); }
    Q_INVOKABLE QString MerrorString(QRegularExpression* o) const { return o->errorString(); }
    Q_INVOKABLE QRegularExpressionMatchIterator MglobalMatch(QRegularExpression* o, const QString& x1, int x2 = 0, QRegularExpression::MatchType x3 = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions x4 = QRegularExpression::NoMatchOption) const { return o->globalMatch(x1, x2, x3, x4); }
    Q_INVOKABLE QRegularExpressionMatchIterator MglobalMatch(QRegularExpression* o, const QStringRef& x1, int x2 = 0, QRegularExpression::MatchType x3 = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions x4 = QRegularExpression::NoMatchOption) const { return o->globalMatch(x1, x2, x3, x4); }
    Q_INVOKABLE bool MisValid(QRegularExpression* o) const { return o->isValid(); }
    Q_INVOKABLE QRegularExpressionMatch Mmatch(QRegularExpression* o, const QString& x1, int x2 = 0, QRegularExpression::MatchType x3 = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions x4 = QRegularExpression::NoMatchOption) const { return o->match(x1, x2, x3, x4); }
    Q_INVOKABLE QRegularExpressionMatch Mmatch(QRegularExpression* o, const QStringRef& x1, int x2 = 0, QRegularExpression::MatchType x3 = QRegularExpression::NormalMatch, QRegularExpression::MatchOptions x4 = QRegularExpression::NoMatchOption) const { return o->match(x1, x2, x3, x4); }
    Q_INVOKABLE QStringList MnamedCaptureGroups(QRegularExpression* o) const { return o->namedCaptureGroups(); }
    Q_INVOKABLE void Moptimize(QRegularExpression* o) const { o->optimize(); }
    Q_INVOKABLE QString Mpattern(QRegularExpression* o) const { return o->pattern(); }
    Q_INVOKABLE int MpatternErrorOffset(QRegularExpression* o) const { return o->patternErrorOffset(); }
    Q_INVOKABLE int MpatternOptions(QRegularExpression* o) const { return o->patternOptions(); }
    Q_INVOKABLE void MsetPattern(QRegularExpression* o, const QString& x1) { o->setPattern(x1); }
    Q_INVOKABLE void MsetPatternOptions(QRegularExpression* o, QRegularExpression::PatternOptions x1) { o->setPatternOptions(x1); }
    Q_INVOKABLE void Mswap(QRegularExpression* o, QRegularExpression& x1) { o->swap(x1); }
    Q_INVOKABLE QString Sescape(const QString& x1) { return QRegularExpression::escape(x1); }
};

class EQL_EXPORT N171 : public QObject { // QResource
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1 = QString(), const QLocale& x2 = QLocale()) { return new LResource(u, x1, x2); }
    Q_INVOKABLE QString MabsoluteFilePath(QResource* o) const { return o->absoluteFilePath(); }
    Q_INVOKABLE QString MfileName(QResource* o) const { return o->fileName(); }
    Q_INVOKABLE bool MisCompressed(QResource* o) const { return o->isCompressed(); }
    Q_INVOKABLE bool MisValid(QResource* o) const { return o->isValid(); }
    Q_INVOKABLE QLocale Mlocale(QResource* o) const { return o->locale(); }
    Q_INVOKABLE void MsetFileName(QResource* o, const QString& x1) { o->setFileName(x1); }
    Q_INVOKABLE void MsetLocale(QResource* o, const QLocale& x1) { o->setLocale(x1); }
    Q_INVOKABLE qlonglong Msize(QResource* o) const { return o->size(); }
    Q_INVOKABLE QStringList Mchildren(QResource* o) const { return ((LResource*)o)->children(); }
    Q_INVOKABLE bool MisDir(QResource* o) const { return ((LResource*)o)->isDir(); }
    Q_INVOKABLE bool MisFile(QResource* o) const { return ((LResource*)o)->isFile(); }
    Q_INVOKABLE bool SregisterResource(const QString& x1, const QString& x2 = QString()) { return QResource::registerResource(x1, x2); }
    Q_INVOKABLE bool SunregisterResource(const QString& x1, const QString& x2 = QString()) { return QResource::unregisterResource(x1, x2); }
};

class EQL_EXPORT N172 : public QObject { // QRunnable
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRunnable(u); }
    Q_INVOKABLE bool MautoDelete(QRunnable* o) const { return o->autoDelete(); }
    Q_INVOKABLE void Mrun(QRunnable* o) { o->run(); }
    Q_INVOKABLE void MsetAutoDelete(QRunnable* o, bool x1) { o->setAutoDelete(x1); }
};

class EQL_EXPORT N191 : public QObject { // QSemaphore
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = 0) { return new LSemaphore(u, x1); }
    Q_INVOKABLE void Macquire(QSemaphore* o, int x1 = 1) { o->acquire(x1); }
    Q_INVOKABLE int Mavailable(QSemaphore* o) const { return o->available(); }
    Q_INVOKABLE void Mrelease(QSemaphore* o, int x1 = 1) { o->release(x1); }
    Q_INVOKABLE bool MtryAcquire(QSemaphore* o, int x1 = 1) { return o->tryAcquire(x1); }
    Q_INVOKABLE bool MtryAcquire(QSemaphore* o, int x1, int x2) { return o->tryAcquire(x1, x2); }
};

class EQL_EXPORT N194 : public QObject { // QSizePolicy
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSizePolicy(u); }
    Q_INVOKABLE void* C(uint u, QSizePolicy::Policy x1, QSizePolicy::Policy x2, QSizePolicy::ControlType x3 = QSizePolicy::DefaultType) { return new LSizePolicy(u, x1, x2, x3); }
    Q_INVOKABLE int McontrolType(QSizePolicy* o) const { return o->controlType(); }
    Q_INVOKABLE int MexpandingDirections(QSizePolicy* o) const { return o->expandingDirections(); }
    Q_INVOKABLE bool MhasHeightForWidth(QSizePolicy* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE bool MhasWidthForHeight(QSizePolicy* o) const { return o->hasWidthForHeight(); }
    Q_INVOKABLE int MhorizontalPolicy(QSizePolicy* o) const { return o->horizontalPolicy(); }
    Q_INVOKABLE int MhorizontalStretch(QSizePolicy* o) const { return o->horizontalStretch(); }
    Q_INVOKABLE bool MretainSizeWhenHidden(QSizePolicy* o) const { return o->retainSizeWhenHidden(); }
    Q_INVOKABLE void MsetControlType(QSizePolicy* o, QSizePolicy::ControlType x1) { o->setControlType(x1); }
    Q_INVOKABLE void MsetHeightForWidth(QSizePolicy* o, bool x1) { o->setHeightForWidth(x1); }
    Q_INVOKABLE void MsetHorizontalPolicy(QSizePolicy* o, QSizePolicy::Policy x1) { o->setHorizontalPolicy(x1); }
    Q_INVOKABLE void MsetHorizontalStretch(QSizePolicy* o, int x1) { o->setHorizontalStretch(x1); }
    Q_INVOKABLE void MsetRetainSizeWhenHidden(QSizePolicy* o, bool x1) { o->setRetainSizeWhenHidden(x1); }
    Q_INVOKABLE void MsetVerticalPolicy(QSizePolicy* o, QSizePolicy::Policy x1) { o->setVerticalPolicy(x1); }
    Q_INVOKABLE void MsetVerticalStretch(QSizePolicy* o, int x1) { o->setVerticalStretch(x1); }
    Q_INVOKABLE void MsetWidthForHeight(QSizePolicy* o, bool x1) { o->setWidthForHeight(x1); }
    Q_INVOKABLE void Mtranspose(QSizePolicy* o) { o->transpose(); }
    Q_INVOKABLE int MverticalPolicy(QSizePolicy* o) const { return o->verticalPolicy(); }
    Q_INVOKABLE int MverticalStretch(QSizePolicy* o) const { return o->verticalStretch(); }
};

class EQL_EXPORT N209 : public QObject { // QStandardItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LStandardItem(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LStandardItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2) { return new LStandardItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2 = 1) { return new LStandardItem(u, x1, x2); }
    Q_INVOKABLE QString MaccessibleDescription(QStandardItem* o) const { return o->accessibleDescription(); }
    Q_INVOKABLE QString MaccessibleText(QStandardItem* o) const { return o->accessibleText(); }
    Q_INVOKABLE void MappendColumn(QStandardItem* o, const QList<QStandardItem*>& x1) { o->appendColumn(x1); }
    Q_INVOKABLE void MappendRow(QStandardItem* o, const QList<QStandardItem*>& x1) { o->appendRow(x1); }
    Q_INVOKABLE void MappendRow(QStandardItem* o, QStandardItem* x1) { o->appendRow(x1); }
    Q_INVOKABLE void MappendRows(QStandardItem* o, const QList<QStandardItem*>& x1) { o->appendRows(x1); }
    Q_INVOKABLE QBrush Mbackground(QStandardItem* o) const { return o->background(); }
    Q_INVOKABLE int McheckState(QStandardItem* o) const { return o->checkState(); }
    Q_INVOKABLE QStandardItem* Mchild(QStandardItem* o, int x1, int x2 = 0) const { return o->child(x1, x2); }
    Q_INVOKABLE QStandardItem* Mclone(QStandardItem* o) const { return o->clone(); }
    Q_INVOKABLE int Mcolumn(QStandardItem* o) const { return o->column(); }
    Q_INVOKABLE int McolumnCount(QStandardItem* o) const { return o->columnCount(); }
    Q_INVOKABLE QVariant Mdata(QStandardItem* o, int x1 = Qt::UserRole+1) const { return o->data(x1); }
    Q_INVOKABLE int Mflags(QStandardItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QStandardItem* o) const { return o->font(); }
    Q_INVOKABLE QBrush Mforeground(QStandardItem* o) const { return o->foreground(); }
    Q_INVOKABLE bool MhasChildren(QStandardItem* o) const { return o->hasChildren(); }
    Q_INVOKABLE QIcon Micon(QStandardItem* o) const { return o->icon(); }
    Q_INVOKABLE QModelIndex Mindex(QStandardItem* o) const { return o->index(); }
    Q_INVOKABLE void MinsertColumn(QStandardItem* o, int x1, const QList<QStandardItem*>& x2) { o->insertColumn(x1, x2); }
    Q_INVOKABLE void MinsertColumns(QStandardItem* o, int x1, int x2) { o->insertColumns(x1, x2); }
    Q_INVOKABLE void MinsertRow(QStandardItem* o, int x1, const QList<QStandardItem*>& x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE void MinsertRow(QStandardItem* o, int x1, QStandardItem* x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE void MinsertRows(QStandardItem* o, int x1, const QList<QStandardItem*>& x2) { o->insertRows(x1, x2); }
    Q_INVOKABLE void MinsertRows(QStandardItem* o, int x1, int x2) { o->insertRows(x1, x2); }
    Q_INVOKABLE bool MisCheckable(QStandardItem* o) const { return o->isCheckable(); }
    Q_INVOKABLE bool MisDragEnabled(QStandardItem* o) const { return o->isDragEnabled(); }
    Q_INVOKABLE bool MisDropEnabled(QStandardItem* o) const { return o->isDropEnabled(); }
    Q_INVOKABLE bool MisEditable(QStandardItem* o) const { return o->isEditable(); }
    Q_INVOKABLE bool MisEnabled(QStandardItem* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisSelectable(QStandardItem* o) const { return o->isSelectable(); }
    Q_INVOKABLE bool MisTristate(QStandardItem* o) const { return o->isTristate(); }
    Q_INVOKABLE QStandardItemModel* Mmodel(QStandardItem* o) const { return o->model(); }
    Q_INVOKABLE QStandardItem* Mparent(QStandardItem* o) const { return o->parent(); }
    Q_INVOKABLE void MremoveColumn(QStandardItem* o, int x1) { o->removeColumn(x1); }
    Q_INVOKABLE void MremoveColumns(QStandardItem* o, int x1, int x2) { o->removeColumns(x1, x2); }
    Q_INVOKABLE void MremoveRow(QStandardItem* o, int x1) { o->removeRow(x1); }
    Q_INVOKABLE void MremoveRows(QStandardItem* o, int x1, int x2) { o->removeRows(x1, x2); }
    Q_INVOKABLE int Mrow(QStandardItem* o) const { return o->row(); }
    Q_INVOKABLE int MrowCount(QStandardItem* o) const { return o->rowCount(); }
    Q_INVOKABLE void MsetAccessibleDescription(QStandardItem* o, const QString& x1) { o->setAccessibleDescription(x1); }
    Q_INVOKABLE void MsetAccessibleText(QStandardItem* o, const QString& x1) { o->setAccessibleText(x1); }
    Q_INVOKABLE void MsetBackground(QStandardItem* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetCheckState(QStandardItem* o, Qt::CheckState x1) { o->setCheckState(x1); }
    Q_INVOKABLE void MsetCheckable(QStandardItem* o, bool x1) { o->setCheckable(x1); }
    Q_INVOKABLE void MsetChild(QStandardItem* o, int x1, int x2, QStandardItem* x3) { o->setChild(x1, x2, x3); }
    Q_INVOKABLE void MsetChild(QStandardItem* o, int x1, QStandardItem* x2) { o->setChild(x1, x2); }
    Q_INVOKABLE void MsetColumnCount(QStandardItem* o, int x1) { o->setColumnCount(x1); }
    Q_INVOKABLE void MsetData(QStandardItem* o, const QVariant& x1, int x2 = Qt::UserRole+1) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetDragEnabled(QStandardItem* o, bool x1) { o->setDragEnabled(x1); }
    Q_INVOKABLE void MsetDropEnabled(QStandardItem* o, bool x1) { o->setDropEnabled(x1); }
    Q_INVOKABLE void MsetEditable(QStandardItem* o, bool x1) { o->setEditable(x1); }
    Q_INVOKABLE void MsetEnabled(QStandardItem* o, bool x1) { o->setEnabled(x1); }
    Q_INVOKABLE void MsetFlags(QStandardItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QStandardItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForeground(QStandardItem* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetIcon(QStandardItem* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetRowCount(QStandardItem* o, int x1) { o->setRowCount(x1); }
    Q_INVOKABLE void MsetSelectable(QStandardItem* o, bool x1) { o->setSelectable(x1); }
    Q_INVOKABLE void MsetSizeHint(QStandardItem* o, const QSize& x1) { o->setSizeHint(x1); }
    Q_INVOKABLE void MsetStatusTip(QStandardItem* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetText(QStandardItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextAlignment(QStandardItem* o, Qt::Alignment x1) { o->setTextAlignment(x1); }
    Q_INVOKABLE void MsetToolTip(QStandardItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetTristate(QStandardItem* o, bool x1) { o->setTristate(x1); }
    Q_INVOKABLE void MsetWhatsThis(QStandardItem* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE QSize MsizeHint(QStandardItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE void MsortChildren(QStandardItem* o, int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { o->sortChildren(x1, x2); }
    Q_INVOKABLE QString MstatusTip(QStandardItem* o) const { return o->statusTip(); }
    Q_INVOKABLE QStandardItem* MtakeChild(QStandardItem* o, int x1, int x2 = 0) { return o->takeChild(x1, x2); }
    Q_INVOKABLE QList<QStandardItem*> MtakeColumn(QStandardItem* o, int x1) { return o->takeColumn(x1); }
    Q_INVOKABLE QList<QStandardItem*> MtakeRow(QStandardItem* o, int x1) { return o->takeRow(x1); }
    Q_INVOKABLE QString Mtext(QStandardItem* o) const { return o->text(); }
    Q_INVOKABLE int MtextAlignment(QStandardItem* o) const { return o->textAlignment(); }
    Q_INVOKABLE QString MtoolTip(QStandardItem* o) const { return o->toolTip(); }
    Q_INVOKABLE int Mtype(QStandardItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QStandardItem* o) const { return o->whatsThis(); }
    Q_INVOKABLE void MemitDataChanged(QStandardItem* o) { ((LStandardItem*)o)->emitDataChanged(); }
};

class EQL_EXPORT N210 : public QObject { // QStandardPaths
    Q_OBJECT
public:
    Q_INVOKABLE QString SdisplayName(QStandardPaths::StandardLocation x1) { return QStandardPaths::displayName(x1); }
    Q_INVOKABLE QString SfindExecutable(const QString& x1, const QStringList& x2 = QStringList()) { return QStandardPaths::findExecutable(x1, x2); }
    Q_INVOKABLE QString Slocate(QStandardPaths::StandardLocation x1, const QString& x2, QStandardPaths::LocateOptions x3 = QStandardPaths::LocateFile) { return QStandardPaths::locate(x1, x2, x3); }
    Q_INVOKABLE QStringList SlocateAll(QStandardPaths::StandardLocation x1, const QString& x2, QStandardPaths::LocateOptions x3 = QStandardPaths::LocateFile) { return QStandardPaths::locateAll(x1, x2, x3); }
    Q_INVOKABLE void SsetTestModeEnabled(bool x1) { QStandardPaths::setTestModeEnabled(x1); }
    Q_INVOKABLE QStringList SstandardLocations(QStandardPaths::StandardLocation x1) { return QStandardPaths::standardLocations(x1); }
    Q_INVOKABLE QString SwritableLocation(QStandardPaths::StandardLocation x1) { return QStandardPaths::writableLocation(x1); }
};

class EQL_EXPORT N212 : public QObject { // QStorageInfo
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LStorageInfo(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LStorageInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDir& x1) { return new LStorageInfo(u, x1); }
    Q_INVOKABLE void* C(uint u, const QStorageInfo& x1) { return new LStorageInfo(u, x1); }
    Q_INVOKABLE qlonglong MbytesAvailable(QStorageInfo* o) const { return o->bytesAvailable(); }
    Q_INVOKABLE qlonglong MbytesFree(QStorageInfo* o) const { return o->bytesFree(); }
    Q_INVOKABLE qlonglong MbytesTotal(QStorageInfo* o) const { return o->bytesTotal(); }
    Q_INVOKABLE QByteArray Mdevice(QStorageInfo* o) const { return o->device(); }
    Q_INVOKABLE QString MdisplayName(QStorageInfo* o) const { return o->displayName(); }
    Q_INVOKABLE QByteArray MfileSystemType(QStorageInfo* o) const { return o->fileSystemType(); }
    Q_INVOKABLE bool MisReadOnly(QStorageInfo* o) const { return o->isReadOnly(); }
    Q_INVOKABLE bool MisReady(QStorageInfo* o) const { return o->isReady(); }
    Q_INVOKABLE bool MisRoot(QStorageInfo* o) const { return o->isRoot(); }
    Q_INVOKABLE bool MisValid(QStorageInfo* o) const { return o->isValid(); }
    Q_INVOKABLE QString Mname(QStorageInfo* o) const { return o->name(); }
    Q_INVOKABLE void Mrefresh(QStorageInfo* o) { o->refresh(); }
    Q_INVOKABLE QString MrootPath(QStorageInfo* o) const { return o->rootPath(); }
    Q_INVOKABLE void MsetPath(QStorageInfo* o, const QString& x1) { o->setPath(x1); }
    Q_INVOKABLE QList<QStorageInfo> SmountedVolumes() { return QStorageInfo::mountedVolumes(); }
    Q_INVOKABLE QStorageInfo Sroot() { return QStorageInfo::root(); }
};

class EQL_EXPORT N213 : public QObject { // QStyleOption
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = QStyleOption::Version, int x2 = QStyleOption::SO_Default) { return new LStyleOption(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QStyleOption& x1) { return new LStyleOption(u, x1); }
    Q_INVOKABLE void MinitFrom(QStyleOption* o, const QWidget* x1) { o->initFrom(x1); }
};

class EQL_EXPORT N215 : public QObject { // QSurface
    Q_OBJECT
public:
    Q_INVOKABLE QSurfaceFormat Mformat(QSurface* o) const { return o->format(); }
    Q_INVOKABLE QSize Msize(QSurface* o) const { return o->size(); }
    Q_INVOKABLE bool MsupportsOpenGL(QSurface* o) const { return o->supportsOpenGL(); }
    Q_INVOKABLE int MsurfaceClass(QSurface* o) const { return o->surfaceClass(); }
    Q_INVOKABLE int MsurfaceType(QSurface* o) const { return o->surfaceType(); }
};

class EQL_EXPORT N216 : public QObject { // QSurfaceFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSurfaceFormat(u); }
    Q_INVOKABLE void* C(uint u, QSurfaceFormat::FormatOptions x1) { return new LSurfaceFormat(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSurfaceFormat& x1) { return new LSurfaceFormat(u, x1); }
    Q_INVOKABLE int MalphaBufferSize(QSurfaceFormat* o) const { return o->alphaBufferSize(); }
    Q_INVOKABLE int MblueBufferSize(QSurfaceFormat* o) const { return o->blueBufferSize(); }
    Q_INVOKABLE int MdepthBufferSize(QSurfaceFormat* o) const { return o->depthBufferSize(); }
    Q_INVOKABLE int MgreenBufferSize(QSurfaceFormat* o) const { return o->greenBufferSize(); }
    Q_INVOKABLE bool MhasAlpha(QSurfaceFormat* o) const { return o->hasAlpha(); }
    Q_INVOKABLE int MmajorVersion(QSurfaceFormat* o) const { return o->majorVersion(); }
    Q_INVOKABLE int MminorVersion(QSurfaceFormat* o) const { return o->minorVersion(); }
    Q_INVOKABLE int Moptions(QSurfaceFormat* o) const { return o->options(); }
    Q_INVOKABLE int Mprofile(QSurfaceFormat* o) const { return o->profile(); }
    Q_INVOKABLE int MredBufferSize(QSurfaceFormat* o) const { return o->redBufferSize(); }
    Q_INVOKABLE int MrenderableType(QSurfaceFormat* o) const { return o->renderableType(); }
    Q_INVOKABLE int Msamples(QSurfaceFormat* o) const { return o->samples(); }
    Q_INVOKABLE void MsetAlphaBufferSize(QSurfaceFormat* o, int x1) { o->setAlphaBufferSize(x1); }
    Q_INVOKABLE void MsetBlueBufferSize(QSurfaceFormat* o, int x1) { o->setBlueBufferSize(x1); }
    Q_INVOKABLE void MsetDepthBufferSize(QSurfaceFormat* o, int x1) { o->setDepthBufferSize(x1); }
    Q_INVOKABLE void MsetGreenBufferSize(QSurfaceFormat* o, int x1) { o->setGreenBufferSize(x1); }
    Q_INVOKABLE void MsetMajorVersion(QSurfaceFormat* o, int x1) { o->setMajorVersion(x1); }
    Q_INVOKABLE void MsetMinorVersion(QSurfaceFormat* o, int x1) { o->setMinorVersion(x1); }
    Q_INVOKABLE void MsetOption(QSurfaceFormat* o, QSurfaceFormat::FormatOption x1, bool x2 = true) { o->setOption(x1, x2); }
    Q_INVOKABLE void MsetOptions(QSurfaceFormat* o, QSurfaceFormat::FormatOptions x1) { o->setOptions(x1); }
    Q_INVOKABLE void MsetProfile(QSurfaceFormat* o, QSurfaceFormat::OpenGLContextProfile x1) { o->setProfile(x1); }
    Q_INVOKABLE void MsetRedBufferSize(QSurfaceFormat* o, int x1) { o->setRedBufferSize(x1); }
    Q_INVOKABLE void MsetRenderableType(QSurfaceFormat* o, QSurfaceFormat::RenderableType x1) { o->setRenderableType(x1); }
    Q_INVOKABLE void MsetSamples(QSurfaceFormat* o, int x1) { o->setSamples(x1); }
    Q_INVOKABLE void MsetStencilBufferSize(QSurfaceFormat* o, int x1) { o->setStencilBufferSize(x1); }
    Q_INVOKABLE void MsetStereo(QSurfaceFormat* o, bool x1) { o->setStereo(x1); }
    Q_INVOKABLE void MsetSwapBehavior(QSurfaceFormat* o, QSurfaceFormat::SwapBehavior x1) { o->setSwapBehavior(x1); }
    Q_INVOKABLE void MsetSwapInterval(QSurfaceFormat* o, int x1) { o->setSwapInterval(x1); }
    Q_INVOKABLE void MsetVersion(QSurfaceFormat* o, int x1, int x2) { o->setVersion(x1, x2); }
    Q_INVOKABLE int MstencilBufferSize(QSurfaceFormat* o) const { return o->stencilBufferSize(); }
    Q_INVOKABLE bool Mstereo(QSurfaceFormat* o) const { return o->stereo(); }
    Q_INVOKABLE int MswapBehavior(QSurfaceFormat* o) const { return o->swapBehavior(); }
    Q_INVOKABLE int MswapInterval(QSurfaceFormat* o) const { return o->swapInterval(); }
    Q_INVOKABLE bool MtestOption(QSurfaceFormat* o, QSurfaceFormat::FormatOption x1) const { return o->testOption(x1); }
    Q_INVOKABLE QSurfaceFormat SdefaultFormat() { return QSurfaceFormat::defaultFormat(); }
    Q_INVOKABLE void SsetDefaultFormat(const QSurfaceFormat& x1) { QSurfaceFormat::setDefaultFormat(x1); }
};

class EQL_EXPORT N218 : public QObject { // QSysInfo
    Q_OBJECT
public:
    Q_INVOKABLE QString SbuildAbi() { return QSysInfo::buildAbi(); }
    Q_INVOKABLE QString SbuildCpuArchitecture() { return QSysInfo::buildCpuArchitecture(); }
    Q_INVOKABLE QString ScurrentCpuArchitecture() { return QSysInfo::currentCpuArchitecture(); }
    Q_INVOKABLE QString SkernelType() { return QSysInfo::kernelType(); }
    Q_INVOKABLE QString SkernelVersion() { return QSysInfo::kernelVersion(); }
    Q_INVOKABLE int SmacVersion() { return QSysInfo::macVersion(); }
    Q_INVOKABLE QString SprettyProductName() { return QSysInfo::prettyProductName(); }
    Q_INVOKABLE QString SproductType() { return QSysInfo::productType(); }
    Q_INVOKABLE QString SproductVersion() { return QSysInfo::productVersion(); }
    Q_INVOKABLE int SwindowsVersion() { return QSysInfo::windowsVersion(); }
};

class EQL_EXPORT N219 : public QObject { // QSystemSemaphore
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1, int x2 = 0, QSystemSemaphore::AccessMode x3 = QSystemSemaphore::Open) { return new LSystemSemaphore(u, x1, x2, x3); }
    Q_INVOKABLE bool Macquire(QSystemSemaphore* o) { return o->acquire(); }
    Q_INVOKABLE int Merror(QSystemSemaphore* o) const { return o->error(); }
    Q_INVOKABLE QString MerrorString(QSystemSemaphore* o) const { return o->errorString(); }
    Q_INVOKABLE QString Mkey(QSystemSemaphore* o) const { return o->key(); }
    Q_INVOKABLE bool Mrelease(QSystemSemaphore* o, int x1 = 1) { return o->release(x1); }
    Q_INVOKABLE void MsetKey(QSystemSemaphore* o, const QString& x1, int x2 = 0, QSystemSemaphore::AccessMode x3 = QSystemSemaphore::Open) { o->setKey(x1, x2, x3); }
};

class EQL_EXPORT N220 : public QObject { // QTableWidgetItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = QTableWidgetItem::Type) { return new LTableWidgetItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, int x2 = QTableWidgetItem::Type) { return new LTableWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2, int x3 = QTableWidgetItem::Type) { return new LTableWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QTableWidgetItem& x1) { return new LTableWidgetItem(u, x1); }
    Q_INVOKABLE QBrush Mbackground(QTableWidgetItem* o) const { return o->background(); }
    Q_INVOKABLE int McheckState(QTableWidgetItem* o) const { return o->checkState(); }
    Q_INVOKABLE QTableWidgetItem* Mclone(QTableWidgetItem* o) const { return o->clone(); }
    Q_INVOKABLE int Mcolumn(QTableWidgetItem* o) const { return o->column(); }
    Q_INVOKABLE QVariant Mdata(QTableWidgetItem* o, int x1) const { return o->data(x1); }
    Q_INVOKABLE int Mflags(QTableWidgetItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QTableWidgetItem* o) const { return o->font(); }
    Q_INVOKABLE QBrush Mforeground(QTableWidgetItem* o) const { return o->foreground(); }
    Q_INVOKABLE QIcon Micon(QTableWidgetItem* o) const { return o->icon(); }
    Q_INVOKABLE bool MisSelected(QTableWidgetItem* o) const { return o->isSelected(); }
    Q_INVOKABLE int Mrow(QTableWidgetItem* o) const { return o->row(); }
    Q_INVOKABLE void MsetBackground(QTableWidgetItem* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetCheckState(QTableWidgetItem* o, Qt::CheckState x1) { o->setCheckState(x1); }
    Q_INVOKABLE void MsetData(QTableWidgetItem* o, int x1, const QVariant& x2) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetFlags(QTableWidgetItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QTableWidgetItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForeground(QTableWidgetItem* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetIcon(QTableWidgetItem* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetSelected(QTableWidgetItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetSizeHint(QTableWidgetItem* o, const QSize& x1) { o->setSizeHint(x1); }
    Q_INVOKABLE void MsetStatusTip(QTableWidgetItem* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetText(QTableWidgetItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextAlignment(QTableWidgetItem* o, int x1) { o->setTextAlignment(x1); }
    Q_INVOKABLE void MsetToolTip(QTableWidgetItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetWhatsThis(QTableWidgetItem* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE QSize MsizeHint(QTableWidgetItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QString MstatusTip(QTableWidgetItem* o) const { return o->statusTip(); }
    Q_INVOKABLE QTableWidget* MtableWidget(QTableWidgetItem* o) const { return o->tableWidget(); }
    Q_INVOKABLE QString Mtext(QTableWidgetItem* o) const { return o->text(); }
    Q_INVOKABLE int MtextAlignment(QTableWidgetItem* o) const { return o->textAlignment(); }
    Q_INVOKABLE QString MtoolTip(QTableWidgetItem* o) const { return o->toolTip(); }
    Q_INVOKABLE int Mtype(QTableWidgetItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QTableWidgetItem* o) const { return o->whatsThis(); }
};

class EQL_EXPORT N221 : public QObject { // QTableWidgetSelectionRange
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTableWidgetSelectionRange(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3, int x4) { return new LTableWidgetSelectionRange(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QTableWidgetSelectionRange& x1) { return new LTableWidgetSelectionRange(u, x1); }
    Q_INVOKABLE int MbottomRow(QTableWidgetSelectionRange* o) const { return o->bottomRow(); }
    Q_INVOKABLE int McolumnCount(QTableWidgetSelectionRange* o) const { return o->columnCount(); }
    Q_INVOKABLE int MleftColumn(QTableWidgetSelectionRange* o) const { return o->leftColumn(); }
    Q_INVOKABLE int MrightColumn(QTableWidgetSelectionRange* o) const { return o->rightColumn(); }
    Q_INVOKABLE int MrowCount(QTableWidgetSelectionRange* o) const { return o->rowCount(); }
    Q_INVOKABLE int MtopRow(QTableWidgetSelectionRange* o) const { return o->topRow(); }
};

class EQL_EXPORT N223 : public QObject { // QTextBlock
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QTextBlock& x1) { return new LTextBlock(u, x1); }
    Q_INVOKABLE QTextBlockFormat MblockFormat(QTextBlock* o) const { return o->blockFormat(); }
    Q_INVOKABLE int MblockFormatIndex(QTextBlock* o) const { return o->blockFormatIndex(); }
    Q_INVOKABLE int MblockNumber(QTextBlock* o) const { return o->blockNumber(); }
    Q_INVOKABLE QTextCharFormat McharFormat(QTextBlock* o) const { return o->charFormat(); }
    Q_INVOKABLE int McharFormatIndex(QTextBlock* o) const { return o->charFormatIndex(); }
    Q_INVOKABLE void MclearLayout(QTextBlock* o) { o->clearLayout(); }
    Q_INVOKABLE bool Mcontains(QTextBlock* o, int x1) const { return o->contains(x1); }
    Q_INVOKABLE const QTextDocument* Mdocument(QTextBlock* o) const { return o->document(); }
    Q_INVOKABLE int MfirstLineNumber(QTextBlock* o) const { return o->firstLineNumber(); }
    Q_INVOKABLE bool MisValid(QTextBlock* o) const { return o->isValid(); }
    Q_INVOKABLE bool MisVisible(QTextBlock* o) const { return o->isVisible(); }
    Q_INVOKABLE QTextLayout* Mlayout(QTextBlock* o) const { return o->layout(); }
    Q_INVOKABLE int Mlength(QTextBlock* o) const { return o->length(); }
    Q_INVOKABLE int MlineCount(QTextBlock* o) const { return o->lineCount(); }
    Q_INVOKABLE QTextBlock Mnext(QTextBlock* o) const { return o->next(); }
    Q_INVOKABLE int Mposition(QTextBlock* o) const { return o->position(); }
    Q_INVOKABLE QTextBlock Mprevious(QTextBlock* o) const { return o->previous(); }
    Q_INVOKABLE int Mrevision(QTextBlock* o) const { return o->revision(); }
    Q_INVOKABLE void MsetLineCount(QTextBlock* o, int x1) { o->setLineCount(x1); }
    Q_INVOKABLE void MsetRevision(QTextBlock* o, int x1) { o->setRevision(x1); }
    Q_INVOKABLE void MsetUserData(QTextBlock* o, QTextBlockUserData* x1) { o->setUserData(x1); }
    Q_INVOKABLE void MsetUserState(QTextBlock* o, int x1) { o->setUserState(x1); }
    Q_INVOKABLE void MsetVisible(QTextBlock* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE QString Mtext(QTextBlock* o) const { return o->text(); }
    Q_INVOKABLE int MtextDirection(QTextBlock* o) const { return o->textDirection(); }
    Q_INVOKABLE QVector<QTextLayout::FormatRange> MtextFormats(QTextBlock* o) const { return o->textFormats(); }
    Q_INVOKABLE QTextList* MtextList(QTextBlock* o) const { return o->textList(); }
    Q_INVOKABLE QTextBlockUserData* MuserData(QTextBlock* o) const { return o->userData(); }
    Q_INVOKABLE int MuserState(QTextBlock* o) const { return o->userState(); }
};

class EQL_EXPORT N225 : public QObject { // QTextBlockUserData
    Q_OBJECT
public:
};

class EQL_EXPORT N226 : public QObject { // QTextBoundaryFinder
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextBoundaryFinder(u); }
    Q_INVOKABLE void* C(uint u, const QTextBoundaryFinder& x1) { return new LTextBoundaryFinder(u, x1); }
    Q_INVOKABLE void* C(uint u, QTextBoundaryFinder::BoundaryType x1, const QString& x2) { return new LTextBoundaryFinder(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QTextBoundaryFinder::BoundaryType x1, const QChar* x2, int x3, uchar* x4 = 0, int x5 = 0) { return new LTextBoundaryFinder(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE int MboundaryReasons(QTextBoundaryFinder* o) const { return o->boundaryReasons(); }
    Q_INVOKABLE bool MisAtBoundary(QTextBoundaryFinder* o) const { return o->isAtBoundary(); }
    Q_INVOKABLE bool MisValid(QTextBoundaryFinder* o) const { return o->isValid(); }
    Q_INVOKABLE int Mposition(QTextBoundaryFinder* o) const { return o->position(); }
    Q_INVOKABLE void MsetPosition(QTextBoundaryFinder* o, int x1) { o->setPosition(x1); }
    Q_INVOKABLE QString Mstring(QTextBoundaryFinder* o) const { return o->string(); }
    Q_INVOKABLE void MtoEnd(QTextBoundaryFinder* o) { o->toEnd(); }
    Q_INVOKABLE int MtoNextBoundary(QTextBoundaryFinder* o) { return o->toNextBoundary(); }
    Q_INVOKABLE int MtoPreviousBoundary(QTextBoundaryFinder* o) { return o->toPreviousBoundary(); }
    Q_INVOKABLE void MtoStart(QTextBoundaryFinder* o) { o->toStart(); }
    Q_INVOKABLE int Mtype(QTextBoundaryFinder* o) const { return o->type(); }
};

class EQL_EXPORT N228 : public QObject { // QTextCodec
    Q_OBJECT
public:
    Q_INVOKABLE QList<QByteArray> Maliases(QTextCodec* o) const { return o->aliases(); }
    Q_INVOKABLE bool McanEncode(QTextCodec* o, QChar x1) const { return o->canEncode(x1); }
    Q_INVOKABLE bool McanEncode(QTextCodec* o, const QString& x1) const { return o->canEncode(x1); }
    Q_INVOKABLE QByteArray MfromUnicode(QTextCodec* o, const QString& x1) const { return o->fromUnicode(x1); }
    Q_INVOKABLE QByteArray MfromUnicode(QTextCodec* o, const QChar* x1, int x2, QTextCodec::ConverterState* x3 = 0) const { return o->fromUnicode(x1, x2, x3); }
    Q_INVOKABLE QTextDecoder* MmakeDecoder(QTextCodec* o, QTextCodec::ConversionFlags x1 = QTextCodec::DefaultConversion) const { return o->makeDecoder(x1); }
    Q_INVOKABLE QTextEncoder* MmakeEncoder(QTextCodec* o, QTextCodec::ConversionFlags x1 = QTextCodec::DefaultConversion) const { return o->makeEncoder(x1); }
    Q_INVOKABLE int MmibEnum(QTextCodec* o) const { return o->mibEnum(); }
    Q_INVOKABLE QByteArray Mname(QTextCodec* o) const { return o->name(); }
    Q_INVOKABLE QString MtoUnicode(QTextCodec* o, const QByteArray& x1) const { return o->toUnicode(x1); }
    Q_INVOKABLE QString MtoUnicode(QTextCodec* o, const char* x1, int x2, QTextCodec::ConverterState* x3 = 0) const { return o->toUnicode(x1, x2, x3); }
    Q_INVOKABLE QString MtoUnicode(QTextCodec* o, const char* x1) const { return o->toUnicode(x1); }
    Q_INVOKABLE QList<QByteArray> SavailableCodecs() { return QTextCodec::availableCodecs(); }
    Q_INVOKABLE QList<int> SavailableMibs() { return QTextCodec::availableMibs(); }
    Q_INVOKABLE QTextCodec* ScodecForHtml(const QByteArray& x1, QTextCodec* x2) { return QTextCodec::codecForHtml(x1, x2); }
    Q_INVOKABLE QTextCodec* ScodecForHtml(const QByteArray& x1) { return QTextCodec::codecForHtml(x1); }
    Q_INVOKABLE QTextCodec* ScodecForLocale() { return QTextCodec::codecForLocale(); }
    Q_INVOKABLE QTextCodec* ScodecForMib(int x1) { return QTextCodec::codecForMib(x1); }
    Q_INVOKABLE QTextCodec* ScodecForName(const QByteArray& x1) { return QTextCodec::codecForName(x1); }
    Q_INVOKABLE QTextCodec* ScodecForName(const char* x1) { return QTextCodec::codecForName(x1); }
    Q_INVOKABLE QTextCodec* ScodecForUtfText(const QByteArray& x1, QTextCodec* x2) { return QTextCodec::codecForUtfText(x1, x2); }
    Q_INVOKABLE QTextCodec* ScodecForUtfText(const QByteArray& x1) { return QTextCodec::codecForUtfText(x1); }
    Q_INVOKABLE void SsetCodecForLocale(QTextCodec* x1) { QTextCodec::setCodecForLocale(x1); }
};

class EQL_EXPORT N229 : public QObject { // QTextCursor
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextCursor(u); }
    Q_INVOKABLE void* C(uint u, QTextDocument* x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE void* C(uint u, QTextFrame* x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextBlock& x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextCursor& x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE int Manchor(QTextCursor* o) const { return o->anchor(); }
    Q_INVOKABLE bool MatBlockEnd(QTextCursor* o) const { return o->atBlockEnd(); }
    Q_INVOKABLE bool MatBlockStart(QTextCursor* o) const { return o->atBlockStart(); }
    Q_INVOKABLE bool MatEnd(QTextCursor* o) const { return o->atEnd(); }
    Q_INVOKABLE bool MatStart(QTextCursor* o) const { return o->atStart(); }
    Q_INVOKABLE void MbeginEditBlock(QTextCursor* o) { o->beginEditBlock(); }
    Q_INVOKABLE QTextBlock Mblock(QTextCursor* o) const { return o->block(); }
    Q_INVOKABLE QTextCharFormat MblockCharFormat(QTextCursor* o) const { return o->blockCharFormat(); }
    Q_INVOKABLE QTextBlockFormat MblockFormat(QTextCursor* o) const { return o->blockFormat(); }
    Q_INVOKABLE int MblockNumber(QTextCursor* o) const { return o->blockNumber(); }
    Q_INVOKABLE QTextCharFormat McharFormat(QTextCursor* o) const { return o->charFormat(); }
    Q_INVOKABLE void MclearSelection(QTextCursor* o) { o->clearSelection(); }
    Q_INVOKABLE int McolumnNumber(QTextCursor* o) const { return o->columnNumber(); }
    Q_INVOKABLE QTextList* McreateList(QTextCursor* o, const QTextListFormat& x1) { return o->createList(x1); }
    Q_INVOKABLE QTextList* McreateList(QTextCursor* o, QTextListFormat::Style x1) { return o->createList(x1); }
    Q_INVOKABLE QTextFrame* McurrentFrame(QTextCursor* o) const { return o->currentFrame(); }
    Q_INVOKABLE QTextList* McurrentList(QTextCursor* o) const { return o->currentList(); }
    Q_INVOKABLE QTextTable* McurrentTable(QTextCursor* o) const { return o->currentTable(); }
    Q_INVOKABLE void MdeleteChar(QTextCursor* o) { o->deleteChar(); }
    Q_INVOKABLE void MdeletePreviousChar(QTextCursor* o) { o->deletePreviousChar(); }
    Q_INVOKABLE QTextDocument* Mdocument(QTextCursor* o) const { return o->document(); }
    Q_INVOKABLE void MendEditBlock(QTextCursor* o) { o->endEditBlock(); }
    Q_INVOKABLE bool MhasComplexSelection(QTextCursor* o) const { return o->hasComplexSelection(); }
    Q_INVOKABLE bool MhasSelection(QTextCursor* o) const { return o->hasSelection(); }
    Q_INVOKABLE void MinsertBlock(QTextCursor* o) { o->insertBlock(); }
    Q_INVOKABLE void MinsertBlock(QTextCursor* o, const QTextBlockFormat& x1) { o->insertBlock(x1); }
    Q_INVOKABLE void MinsertBlock(QTextCursor* o, const QTextBlockFormat& x1, const QTextCharFormat& x2) { o->insertBlock(x1, x2); }
    Q_INVOKABLE void MinsertFragment(QTextCursor* o, const QTextDocumentFragment& x1) { o->insertFragment(x1); }
    Q_INVOKABLE QTextFrame* MinsertFrame(QTextCursor* o, const QTextFrameFormat& x1) { return o->insertFrame(x1); }
    Q_INVOKABLE void MinsertHtml(QTextCursor* o, const QString& x1) { o->insertHtml(x1); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QTextImageFormat& x1) { o->insertImage(x1); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QTextImageFormat& x1, QTextFrameFormat::Position x2) { o->insertImage(x1, x2); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QString& x1) { o->insertImage(x1); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QImage& x1, const QString& x2 = QString()) { o->insertImage(x1, x2); }
    Q_INVOKABLE QTextList* MinsertList(QTextCursor* o, const QTextListFormat& x1) { return o->insertList(x1); }
    Q_INVOKABLE QTextList* MinsertList(QTextCursor* o, QTextListFormat::Style x1) { return o->insertList(x1); }
    Q_INVOKABLE QTextTable* MinsertTable(QTextCursor* o, int x1, int x2, const QTextTableFormat& x3) { return o->insertTable(x1, x2, x3); }
    Q_INVOKABLE QTextTable* MinsertTable(QTextCursor* o, int x1, int x2) { return o->insertTable(x1, x2); }
    Q_INVOKABLE void MinsertText(QTextCursor* o, const QString& x1) { o->insertText(x1); }
    Q_INVOKABLE void MinsertText(QTextCursor* o, const QString& x1, const QTextCharFormat& x2) { o->insertText(x1, x2); }
    Q_INVOKABLE bool MisCopyOf(QTextCursor* o, const QTextCursor& x1) const { return o->isCopyOf(x1); }
    Q_INVOKABLE bool MisNull(QTextCursor* o) const { return o->isNull(); }
    Q_INVOKABLE void MjoinPreviousEditBlock(QTextCursor* o) { o->joinPreviousEditBlock(); }
    Q_INVOKABLE bool MkeepPositionOnInsert(QTextCursor* o) const { return o->keepPositionOnInsert(); }
    Q_INVOKABLE void MmergeBlockCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->mergeBlockCharFormat(x1); }
    Q_INVOKABLE void MmergeBlockFormat(QTextCursor* o, const QTextBlockFormat& x1) { o->mergeBlockFormat(x1); }
    Q_INVOKABLE void MmergeCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->mergeCharFormat(x1); }
    Q_INVOKABLE bool MmovePosition(QTextCursor* o, QTextCursor::MoveOperation x1, QTextCursor::MoveMode x2 = QTextCursor::MoveAnchor, int x3 = 1) { return o->movePosition(x1, x2, x3); }
    Q_INVOKABLE int Mposition(QTextCursor* o) const { return o->position(); }
    Q_INVOKABLE int MpositionInBlock(QTextCursor* o) const { return o->positionInBlock(); }
    Q_INVOKABLE void MremoveSelectedText(QTextCursor* o) { o->removeSelectedText(); }
    Q_INVOKABLE void Mselect(QTextCursor* o, QTextCursor::SelectionType x1) { o->select(x1); }
    Q_INVOKABLE QString MselectedText(QTextCursor* o) const { return o->selectedText(); }
    Q_INVOKABLE QTextDocumentFragment Mselection(QTextCursor* o) const { return o->selection(); }
    Q_INVOKABLE int MselectionEnd(QTextCursor* o) const { return o->selectionEnd(); }
    Q_INVOKABLE int MselectionStart(QTextCursor* o) const { return o->selectionStart(); }
    Q_INVOKABLE void MsetBlockCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->setBlockCharFormat(x1); }
    Q_INVOKABLE void MsetBlockFormat(QTextCursor* o, const QTextBlockFormat& x1) { o->setBlockFormat(x1); }
    Q_INVOKABLE void MsetCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->setCharFormat(x1); }
    Q_INVOKABLE void MsetKeepPositionOnInsert(QTextCursor* o, bool x1) { o->setKeepPositionOnInsert(x1); }
    Q_INVOKABLE void MsetPosition(QTextCursor* o, int x1, QTextCursor::MoveMode x2 = QTextCursor::MoveAnchor) { o->setPosition(x1, x2); }
    Q_INVOKABLE void MsetVerticalMovementX(QTextCursor* o, int x1) { o->setVerticalMovementX(x1); }
    Q_INVOKABLE void MsetVisualNavigation(QTextCursor* o, bool x1) { o->setVisualNavigation(x1); }
    Q_INVOKABLE void Mswap(QTextCursor* o, QTextCursor& x1) { o->swap(x1); }
    Q_INVOKABLE int MverticalMovementX(QTextCursor* o) const { return o->verticalMovementX(); }
    Q_INVOKABLE bool MvisualNavigation(QTextCursor* o) const { return o->visualNavigation(); }
};

class EQL_EXPORT N230 : public QObject { // QTextDecoder
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QTextCodec* x1) { return new LTextDecoder(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextCodec* x1, QTextCodec::ConversionFlags x2) { return new LTextDecoder(u, x1, x2); }
    Q_INVOKABLE QString MtoUnicode(QTextDecoder* o, const char* x1, int x2) { return o->toUnicode(x1, x2); }
    Q_INVOKABLE void MtoUnicode(QTextDecoder* o, QString* x1, const char* x2, int x3) { o->toUnicode(x1, x2, x3); }
    Q_INVOKABLE QString MtoUnicode(QTextDecoder* o, const QByteArray& x1) { return o->toUnicode(x1); }
};

class EQL_EXPORT N231 : public QObject { // QTextDocumentFragment
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextDocumentFragment(u); }
    Q_INVOKABLE void* C(uint u, const QTextDocument* x1) { return new LTextDocumentFragment(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextCursor& x1) { return new LTextDocumentFragment(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextDocumentFragment& x1) { return new LTextDocumentFragment(u, x1); }
    Q_INVOKABLE bool MisEmpty(QTextDocumentFragment* o) const { return o->isEmpty(); }
    Q_INVOKABLE QString MtoHtml(QTextDocumentFragment* o, const QByteArray& x1 = QByteArray()) const { return o->toHtml(x1); }
    Q_INVOKABLE QString MtoPlainText(QTextDocumentFragment* o) const { return o->toPlainText(); }
    Q_INVOKABLE QTextDocumentFragment SfromHtml(const QString& x1) { return QTextDocumentFragment::fromHtml(x1); }
    Q_INVOKABLE QTextDocumentFragment SfromHtml(const QString& x1, const QTextDocument* x2) { return QTextDocumentFragment::fromHtml(x1, x2); }
    Q_INVOKABLE QTextDocumentFragment SfromPlainText(const QString& x1) { return QTextDocumentFragment::fromPlainText(x1); }
};

class EQL_EXPORT N232 : public QObject { // QTextDocumentWriter
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextDocumentWriter(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QByteArray& x2 = QByteArray()) { return new LTextDocumentWriter(u, x1, x2); }
    Q_INVOKABLE QTextCodec* Mcodec(QTextDocumentWriter* o) const { return o->codec(); }
    Q_INVOKABLE QString MfileName(QTextDocumentWriter* o) const { return o->fileName(); }
    Q_INVOKABLE QByteArray Mformat(QTextDocumentWriter* o) const { return o->format(); }
    Q_INVOKABLE void MsetCodec(QTextDocumentWriter* o, QTextCodec* x1) { o->setCodec(x1); }
    Q_INVOKABLE void MsetFileName(QTextDocumentWriter* o, const QString& x1) { o->setFileName(x1); }
    Q_INVOKABLE void MsetFormat(QTextDocumentWriter* o, const QByteArray& x1) { o->setFormat(x1); }
    Q_INVOKABLE bool Mwrite(QTextDocumentWriter* o, const QTextDocument* x1) { return o->write(x1); }
    Q_INVOKABLE bool Mwrite(QTextDocumentWriter* o, const QTextDocumentFragment& x1) { return o->write(x1); }
    Q_INVOKABLE QList<QByteArray> SsupportedDocumentFormats() { return QTextDocumentWriter::supportedDocumentFormats(); }
};

class EQL_EXPORT N233 : public QObject { // QTextEncoder
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QTextCodec* x1) { return new LTextEncoder(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextCodec* x1, QTextCodec::ConversionFlags x2) { return new LTextEncoder(u, x1, x2); }
    Q_INVOKABLE QByteArray MfromUnicode(QTextEncoder* o, const QString& x1) { return o->fromUnicode(x1); }
    Q_INVOKABLE QByteArray MfromUnicode(QTextEncoder* o, const QChar* x1, int x2) { return o->fromUnicode(x1, x2); }
};

class EQL_EXPORT N234 : public QObject { // QTextFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextFormat(u); }
    Q_INVOKABLE void* C(uint u, int x1) { return new LTextFormat(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextFormat& x1) { return new LTextFormat(u, x1); }
    Q_INVOKABLE QBrush Mbackground(QTextFormat* o) const { return o->background(); }
    Q_INVOKABLE bool MboolProperty(QTextFormat* o, int x1) const { return o->boolProperty(x1); }
    Q_INVOKABLE QBrush MbrushProperty(QTextFormat* o, int x1) const { return o->brushProperty(x1); }
    Q_INVOKABLE void MclearBackground(QTextFormat* o) { o->clearBackground(); }
    Q_INVOKABLE void MclearForeground(QTextFormat* o) { o->clearForeground(); }
    Q_INVOKABLE void MclearProperty(QTextFormat* o, int x1) { o->clearProperty(x1); }
    Q_INVOKABLE QColor McolorProperty(QTextFormat* o, int x1) const { return o->colorProperty(x1); }
    Q_INVOKABLE qreal MdoubleProperty(QTextFormat* o, int x1) const { return o->doubleProperty(x1); }
    Q_INVOKABLE QBrush Mforeground(QTextFormat* o) const { return o->foreground(); }
    Q_INVOKABLE bool MhasProperty(QTextFormat* o, int x1) const { return o->hasProperty(x1); }
    Q_INVOKABLE int MintProperty(QTextFormat* o, int x1) const { return o->intProperty(x1); }
    Q_INVOKABLE bool MisBlockFormat(QTextFormat* o) const { return o->isBlockFormat(); }
    Q_INVOKABLE bool MisCharFormat(QTextFormat* o) const { return o->isCharFormat(); }
    Q_INVOKABLE bool MisEmpty(QTextFormat* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisFrameFormat(QTextFormat* o) const { return o->isFrameFormat(); }
    Q_INVOKABLE bool MisImageFormat(QTextFormat* o) const { return o->isImageFormat(); }
    Q_INVOKABLE bool MisListFormat(QTextFormat* o) const { return o->isListFormat(); }
    Q_INVOKABLE bool MisTableCellFormat(QTextFormat* o) const { return o->isTableCellFormat(); }
    Q_INVOKABLE bool MisTableFormat(QTextFormat* o) const { return o->isTableFormat(); }
    Q_INVOKABLE bool MisValid(QTextFormat* o) const { return o->isValid(); }
    Q_INVOKABLE int MlayoutDirection(QTextFormat* o) const { return o->layoutDirection(); }
    Q_INVOKABLE QTextLength MlengthProperty(QTextFormat* o, int x1) const { return o->lengthProperty(x1); }
    Q_INVOKABLE QVector<QTextLength> MlengthVectorProperty(QTextFormat* o, int x1) const { return o->lengthVectorProperty(x1); }
    Q_INVOKABLE void Mmerge(QTextFormat* o, const QTextFormat& x1) { o->merge(x1); }
    Q_INVOKABLE int MobjectIndex(QTextFormat* o) const { return o->objectIndex(); }
    Q_INVOKABLE int MobjectType(QTextFormat* o) const { return o->objectType(); }
    Q_INVOKABLE QPen MpenProperty(QTextFormat* o, int x1) const { return o->penProperty(x1); }
    Q_INVOKABLE QVariant Mproperty(QTextFormat* o, int x1) const { return o->property(x1); }
    Q_INVOKABLE int MpropertyCount(QTextFormat* o) const { return o->propertyCount(); }
    Q_INVOKABLE void MsetBackground(QTextFormat* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetForeground(QTextFormat* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetLayoutDirection(QTextFormat* o, Qt::LayoutDirection x1) { o->setLayoutDirection(x1); }
    Q_INVOKABLE void MsetObjectIndex(QTextFormat* o, int x1) { o->setObjectIndex(x1); }
    Q_INVOKABLE void MsetObjectType(QTextFormat* o, int x1) { o->setObjectType(x1); }
    Q_INVOKABLE void MsetProperty(QTextFormat* o, int x1, const QVariant& x2) { o->setProperty(x1, x2); }
    Q_INVOKABLE void MsetProperty(QTextFormat* o, int x1, const QVector<QTextLength>& x2) { o->setProperty(x1, x2); }
    Q_INVOKABLE QString MstringProperty(QTextFormat* o, int x1) const { return o->stringProperty(x1); }
    Q_INVOKABLE void Mswap(QTextFormat* o, QTextFormat& x1) { o->swap(x1); }
    Q_INVOKABLE QTextBlockFormat MtoBlockFormat(QTextFormat* o) const { return o->toBlockFormat(); }
    Q_INVOKABLE QTextCharFormat MtoCharFormat(QTextFormat* o) const { return o->toCharFormat(); }
    Q_INVOKABLE QTextFrameFormat MtoFrameFormat(QTextFormat* o) const { return o->toFrameFormat(); }
    Q_INVOKABLE QTextImageFormat MtoImageFormat(QTextFormat* o) const { return o->toImageFormat(); }
    Q_INVOKABLE QTextListFormat MtoListFormat(QTextFormat* o) const { return o->toListFormat(); }
    Q_INVOKABLE QTextTableCellFormat MtoTableCellFormat(QTextFormat* o) const { return o->toTableCellFormat(); }
    Q_INVOKABLE QTextTableFormat MtoTableFormat(QTextFormat* o) const { return o->toTableFormat(); }
    Q_INVOKABLE int Mtype(QTextFormat* o) const { return o->type(); }
};

class EQL_EXPORT N235 : public QObject { // QTextFragment
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextFragment(u); }
    Q_INVOKABLE void* C(uint u, const QTextFragment& x1) { return new LTextFragment(u, x1); }
    Q_INVOKABLE QTextCharFormat McharFormat(QTextFragment* o) const { return o->charFormat(); }
    Q_INVOKABLE int McharFormatIndex(QTextFragment* o) const { return o->charFormatIndex(); }
    Q_INVOKABLE bool Mcontains(QTextFragment* o, int x1) const { return o->contains(x1); }
    Q_INVOKABLE QList<QGlyphRun> MglyphRuns(QTextFragment* o, int x1 = -1, int x2 = -1) const { return o->glyphRuns(x1, x2); }
    Q_INVOKABLE bool MisValid(QTextFragment* o) const { return o->isValid(); }
    Q_INVOKABLE int Mlength(QTextFragment* o) const { return o->length(); }
    Q_INVOKABLE int Mposition(QTextFragment* o) const { return o->position(); }
    Q_INVOKABLE QString Mtext(QTextFragment* o) const { return o->text(); }
};

class EQL_EXPORT N238 : public QObject { // QTextLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextLayout(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LTextLayout(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QFont& x2, QPaintDevice* x3 = 0) { return new LTextLayout(u, x1, x2, x3); }
    Q_INVOKABLE void MbeginLayout(QTextLayout* o) { o->beginLayout(); }
    Q_INVOKABLE QRectF MboundingRect(QTextLayout* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool McacheEnabled(QTextLayout* o) const { return o->cacheEnabled(); }
    Q_INVOKABLE void MclearAdditionalFormats(QTextLayout* o) { o->clearAdditionalFormats(); }
    Q_INVOKABLE void MclearLayout(QTextLayout* o) { o->clearLayout(); }
    Q_INVOKABLE QTextLine McreateLine(QTextLayout* o) { return o->createLine(); }
    Q_INVOKABLE int McursorMoveStyle(QTextLayout* o) const { return o->cursorMoveStyle(); }
    Q_INVOKABLE void MdrawCursor(QTextLayout* o, QPainter* x1, const QPointF& x2, int x3, int x4) const { o->drawCursor(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawCursor(QTextLayout* o, QPainter* x1, const QPointF& x2, int x3) const { o->drawCursor(x1, x2, x3); }
    Q_INVOKABLE void MendLayout(QTextLayout* o) { o->endLayout(); }
    Q_INVOKABLE QFont Mfont(QTextLayout* o) const { return o->font(); }
    Q_INVOKABLE QList<QGlyphRun> MglyphRuns(QTextLayout* o, int x1 = -1, int x2 = -1) const { return o->glyphRuns(x1, x2); }
    Q_INVOKABLE bool MisValidCursorPosition(QTextLayout* o, int x1) const { return o->isValidCursorPosition(x1); }
    Q_INVOKABLE int MleftCursorPosition(QTextLayout* o, int x1) const { return o->leftCursorPosition(x1); }
    Q_INVOKABLE QTextLine MlineAt(QTextLayout* o, int x1) const { return o->lineAt(x1); }
    Q_INVOKABLE int MlineCount(QTextLayout* o) const { return o->lineCount(); }
    Q_INVOKABLE QTextLine MlineForTextPosition(QTextLayout* o, int x1) const { return o->lineForTextPosition(x1); }
    Q_INVOKABLE qreal MmaximumWidth(QTextLayout* o) const { return o->maximumWidth(); }
    Q_INVOKABLE qreal MminimumWidth(QTextLayout* o) const { return o->minimumWidth(); }
    Q_INVOKABLE int MnextCursorPosition(QTextLayout* o, int x1, QTextLayout::CursorMode x2 = QTextLayout::SkipCharacters) const { return o->nextCursorPosition(x1, x2); }
    Q_INVOKABLE QPointF Mposition(QTextLayout* o) const { return o->position(); }
    Q_INVOKABLE int MpreeditAreaPosition(QTextLayout* o) const { return o->preeditAreaPosition(); }
    Q_INVOKABLE QString MpreeditAreaText(QTextLayout* o) const { return o->preeditAreaText(); }
    Q_INVOKABLE int MpreviousCursorPosition(QTextLayout* o, int x1, QTextLayout::CursorMode x2 = QTextLayout::SkipCharacters) const { return o->previousCursorPosition(x1, x2); }
    Q_INVOKABLE int MrightCursorPosition(QTextLayout* o, int x1) const { return o->rightCursorPosition(x1); }
    Q_INVOKABLE void MsetCacheEnabled(QTextLayout* o, bool x1) { o->setCacheEnabled(x1); }
    Q_INVOKABLE void MsetCursorMoveStyle(QTextLayout* o, Qt::CursorMoveStyle x1) { o->setCursorMoveStyle(x1); }
    Q_INVOKABLE void MsetFont(QTextLayout* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetPosition(QTextLayout* o, const QPointF& x1) { o->setPosition(x1); }
    Q_INVOKABLE void MsetPreeditArea(QTextLayout* o, int x1, const QString& x2) { o->setPreeditArea(x1, x2); }
    Q_INVOKABLE void MsetText(QTextLayout* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextOption(QTextLayout* o, const QTextOption& x1) { o->setTextOption(x1); }
    Q_INVOKABLE QString Mtext(QTextLayout* o) const { return o->text(); }
    Q_INVOKABLE QTextOption MtextOption(QTextLayout* o) const { return o->textOption(); }
};

class EQL_EXPORT N239 : public QObject { // QTextLength
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextLength(u); }
    Q_INVOKABLE void* C(uint u, QTextLength::Type x1, qreal x2) { return new LTextLength(u, x1, x2); }
    Q_INVOKABLE qreal MrawValue(QTextLength* o) const { return o->rawValue(); }
    Q_INVOKABLE int Mtype(QTextLength* o) const { return o->type(); }
    Q_INVOKABLE qreal Mvalue(QTextLength* o, qreal x1) const { return o->value(x1); }
};

class EQL_EXPORT N240 : public QObject { // QTextLine
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextLine(u); }
    Q_INVOKABLE qreal Mascent(QTextLine* o) const { return o->ascent(); }
    Q_INVOKABLE qreal McursorToX(QTextLine* o, int x1, QTextLine::Edge x2 = QTextLine::Leading) const { return o->cursorToX(x1, x2); }
    Q_INVOKABLE qreal Mdescent(QTextLine* o) const { return o->descent(); }
    Q_INVOKABLE void Mdraw(QTextLine* o, QPainter* x1, const QPointF& x2, const QTextLayout::FormatRange* x3 = 0) const { o->draw(x1, x2, x3); }
    Q_INVOKABLE QList<QGlyphRun> MglyphRuns(QTextLine* o, int x1 = -1, int x2 = -1) const { return o->glyphRuns(x1, x2); }
    Q_INVOKABLE qreal Mheight(QTextLine* o) const { return o->height(); }
    Q_INVOKABLE qreal MhorizontalAdvance(QTextLine* o) const { return o->horizontalAdvance(); }
    Q_INVOKABLE bool MisValid(QTextLine* o) const { return o->isValid(); }
    Q_INVOKABLE qreal Mleading(QTextLine* o) const { return o->leading(); }
    Q_INVOKABLE bool MleadingIncluded(QTextLine* o) const { return o->leadingIncluded(); }
    Q_INVOKABLE int MlineNumber(QTextLine* o) const { return o->lineNumber(); }
    Q_INVOKABLE QRectF MnaturalTextRect(QTextLine* o) const { return o->naturalTextRect(); }
    Q_INVOKABLE qreal MnaturalTextWidth(QTextLine* o) const { return o->naturalTextWidth(); }
    Q_INVOKABLE QPointF Mposition(QTextLine* o) const { return o->position(); }
    Q_INVOKABLE QRectF Mrect(QTextLine* o) const { return o->rect(); }
    Q_INVOKABLE void MsetLeadingIncluded(QTextLine* o, bool x1) { o->setLeadingIncluded(x1); }
    Q_INVOKABLE void MsetLineWidth(QTextLine* o, qreal x1) { o->setLineWidth(x1); }
    Q_INVOKABLE void MsetNumColumns(QTextLine* o, int x1) { o->setNumColumns(x1); }
    Q_INVOKABLE void MsetNumColumns(QTextLine* o, int x1, qreal x2) { o->setNumColumns(x1, x2); }
    Q_INVOKABLE void MsetPosition(QTextLine* o, const QPointF& x1) { o->setPosition(x1); }
    Q_INVOKABLE int MtextLength(QTextLine* o) const { return o->textLength(); }
    Q_INVOKABLE int MtextStart(QTextLine* o) const { return o->textStart(); }
    Q_INVOKABLE qreal Mwidth(QTextLine* o) const { return o->width(); }
    Q_INVOKABLE qreal Mx(QTextLine* o) const { return o->x(); }
    Q_INVOKABLE int MxToCursor(QTextLine* o, qreal x1, QTextLine::CursorPosition x2 = QTextLine::CursorBetweenCharacters) const { return o->xToCursor(x1, x2); }
    Q_INVOKABLE qreal My(QTextLine* o) const { return o->y(); }
};

class EQL_EXPORT N242 : public QObject { // QTextOption
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextOption(u); }
    Q_INVOKABLE void* C(uint u, Qt::Alignment x1) { return new LTextOption(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextOption& x1) { return new LTextOption(u, x1); }
    Q_INVOKABLE int Malignment(QTextOption* o) const { return o->alignment(); }
    Q_INVOKABLE int Mflags(QTextOption* o) const { return o->flags(); }
    Q_INVOKABLE void MsetAlignment(QTextOption* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetFlags(QTextOption* o, QTextOption::Flags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetTabArray(QTextOption* o, const QList<qreal>& x1) { o->setTabArray(x1); }
    Q_INVOKABLE void MsetTabStop(QTextOption* o, qreal x1) { o->setTabStop(x1); }
    Q_INVOKABLE void MsetTextDirection(QTextOption* o, Qt::LayoutDirection x1) { o->setTextDirection(x1); }
    Q_INVOKABLE void MsetUseDesignMetrics(QTextOption* o, bool x1) { o->setUseDesignMetrics(x1); }
    Q_INVOKABLE void MsetWrapMode(QTextOption* o, QTextOption::WrapMode x1) { o->setWrapMode(x1); }
    Q_INVOKABLE QList<qreal> MtabArray(QTextOption* o) const { return o->tabArray(); }
    Q_INVOKABLE qreal MtabStop(QTextOption* o) const { return o->tabStop(); }
    Q_INVOKABLE int MtextDirection(QTextOption* o) const { return o->textDirection(); }
    Q_INVOKABLE bool MuseDesignMetrics(QTextOption* o) const { return o->useDesignMetrics(); }
    Q_INVOKABLE int MwrapMode(QTextOption* o) const { return o->wrapMode(); }
};

class EQL_EXPORT N243 : public QObject { // QTextTableCell
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextTableCell(u); }
    Q_INVOKABLE void* C(uint u, const QTextTableCell& x1) { return new LTextTableCell(u, x1); }
    Q_INVOKABLE int Mcolumn(QTextTableCell* o) const { return o->column(); }
    Q_INVOKABLE int McolumnSpan(QTextTableCell* o) const { return o->columnSpan(); }
    Q_INVOKABLE QTextCursor MfirstCursorPosition(QTextTableCell* o) const { return o->firstCursorPosition(); }
    Q_INVOKABLE QTextCharFormat Mformat(QTextTableCell* o) const { return o->format(); }
    Q_INVOKABLE bool MisValid(QTextTableCell* o) const { return o->isValid(); }
    Q_INVOKABLE QTextCursor MlastCursorPosition(QTextTableCell* o) const { return o->lastCursorPosition(); }
    Q_INVOKABLE int Mrow(QTextTableCell* o) const { return o->row(); }
    Q_INVOKABLE int MrowSpan(QTextTableCell* o) const { return o->rowSpan(); }
    Q_INVOKABLE void MsetFormat(QTextTableCell* o, const QTextCharFormat& x1) { o->setFormat(x1); }
    Q_INVOKABLE int MtableCellFormatIndex(QTextTableCell* o) const { return o->tableCellFormatIndex(); }
};

class EQL_EXPORT N246 : public QObject { // QTime
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTime(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3 = 0, int x4 = 0) { return new LTime(u, x1, x2, x3, x4); }
    Q_INVOKABLE QTime MaddMSecs(QTime* o, int x1) const { return o->addMSecs(x1); }
    Q_INVOKABLE QTime MaddSecs(QTime* o, int x1) const { return o->addSecs(x1); }
    Q_INVOKABLE int Melapsed(QTime* o) const { return o->elapsed(); }
    Q_INVOKABLE int Mhour(QTime* o) const { return o->hour(); }
    Q_INVOKABLE bool MisNull(QTime* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QTime* o) const { return o->isValid(); }
    Q_INVOKABLE int Mminute(QTime* o) const { return o->minute(); }
    Q_INVOKABLE int Mmsec(QTime* o) const { return o->msec(); }
    Q_INVOKABLE int MmsecsSinceStartOfDay(QTime* o) const { return o->msecsSinceStartOfDay(); }
    Q_INVOKABLE int MmsecsTo(QTime* o, const QTime& x1) const { return o->msecsTo(x1); }
    Q_INVOKABLE int Mrestart(QTime* o) { return o->restart(); }
    Q_INVOKABLE int Msecond(QTime* o) const { return o->second(); }
    Q_INVOKABLE int MsecsTo(QTime* o, const QTime& x1) const { return o->secsTo(x1); }
    Q_INVOKABLE bool MsetHMS(QTime* o, int x1, int x2, int x3, int x4 = 0) { return o->setHMS(x1, x2, x3, x4); }
    Q_INVOKABLE void Mstart(QTime* o) { o->start(); }
    Q_INVOKABLE QString MtoString(QTime* o, const QString& x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QTime* o, Qt::DateFormat x1 = Qt::TextDate) const { return o->toString(x1); }
    Q_INVOKABLE QTime ScurrentTime() { return QTime::currentTime(); }
    Q_INVOKABLE QTime SfromMSecsSinceStartOfDay(int x1) { return QTime::fromMSecsSinceStartOfDay(x1); }
    Q_INVOKABLE QTime SfromString(const QString& x1, Qt::DateFormat x2 = Qt::TextDate) { return QTime::fromString(x1, x2); }
    Q_INVOKABLE QTime SfromString(const QString& x1, const QString& x2) { return QTime::fromString(x1, x2); }
    Q_INVOKABLE bool SisValid(int x1, int x2, int x3, int x4 = 0) { return QTime::isValid(x1, x2, x3, x4); }
};

class EQL_EXPORT N247 : public QObject { // QTimeZone
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTimeZone(u); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1) { return new LTimeZone(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1) { return new LTimeZone(u, x1); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1, int x2, const QString& x3, const QString& x4, QLocale::Country x5 = QLocale::AnyCountry, const QString& x6 = QString()) { return new LTimeZone(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void* C(uint u, const QTimeZone& x1) { return new LTimeZone(u, x1); }
    Q_INVOKABLE QString Mabbreviation(QTimeZone* o, const QDateTime& x1) const { return o->abbreviation(x1); }
    Q_INVOKABLE QString Mcomment(QTimeZone* o) const { return o->comment(); }
    Q_INVOKABLE int Mcountry(QTimeZone* o) const { return o->country(); }
    Q_INVOKABLE int MdaylightTimeOffset(QTimeZone* o, const QDateTime& x1) const { return o->daylightTimeOffset(x1); }
    Q_INVOKABLE QString MdisplayName(QTimeZone* o, const QDateTime& x1, QTimeZone::NameType x2 = QTimeZone::DefaultName, const QLocale& x3 = QLocale()) const { return o->displayName(x1, x2, x3); }
    Q_INVOKABLE QString MdisplayName(QTimeZone* o, QTimeZone::TimeType x1, QTimeZone::NameType x2 = QTimeZone::DefaultName, const QLocale& x3 = QLocale()) const { return o->displayName(x1, x2, x3); }
    Q_INVOKABLE bool MhasDaylightTime(QTimeZone* o) const { return o->hasDaylightTime(); }
    Q_INVOKABLE bool MhasTransitions(QTimeZone* o) const { return o->hasTransitions(); }
    Q_INVOKABLE QByteArray Mid(QTimeZone* o) const { return o->id(); }
    Q_INVOKABLE bool MisDaylightTime(QTimeZone* o, const QDateTime& x1) const { return o->isDaylightTime(x1); }
    Q_INVOKABLE bool MisValid(QTimeZone* o) const { return o->isValid(); }
    Q_INVOKABLE int MoffsetFromUtc(QTimeZone* o, const QDateTime& x1) const { return o->offsetFromUtc(x1); }
    Q_INVOKABLE int MstandardTimeOffset(QTimeZone* o, const QDateTime& x1) const { return o->standardTimeOffset(x1); }
    Q_INVOKABLE void Mswap(QTimeZone* o, QTimeZone& x1) { o->swap(x1); }
    Q_INVOKABLE QList<QByteArray> SavailableTimeZoneIds() { return QTimeZone::availableTimeZoneIds(); }
    Q_INVOKABLE QList<QByteArray> SavailableTimeZoneIds(QLocale::Country x1) { return QTimeZone::availableTimeZoneIds(x1); }
    Q_INVOKABLE QList<QByteArray> SavailableTimeZoneIds(int x1) { return QTimeZone::availableTimeZoneIds(x1); }
    Q_INVOKABLE QByteArray SianaIdToWindowsId(const QByteArray& x1) { return QTimeZone::ianaIdToWindowsId(x1); }
    Q_INVOKABLE bool SisTimeZoneIdAvailable(const QByteArray& x1) { return QTimeZone::isTimeZoneIdAvailable(x1); }
    Q_INVOKABLE QTimeZone SsystemTimeZone() { return QTimeZone::systemTimeZone(); }
    Q_INVOKABLE QByteArray SsystemTimeZoneId() { return QTimeZone::systemTimeZoneId(); }
    Q_INVOKABLE QTimeZone Sutc() { return QTimeZone::utc(); }
    Q_INVOKABLE QByteArray SwindowsIdToDefaultIanaId(const QByteArray& x1) { return QTimeZone::windowsIdToDefaultIanaId(x1); }
    Q_INVOKABLE QByteArray SwindowsIdToDefaultIanaId(const QByteArray& x1, QLocale::Country x2) { return QTimeZone::windowsIdToDefaultIanaId(x1, x2); }
    Q_INVOKABLE QList<QByteArray> SwindowsIdToIanaIds(const QByteArray& x1) { return QTimeZone::windowsIdToIanaIds(x1); }
    Q_INVOKABLE QList<QByteArray> SwindowsIdToIanaIds(const QByteArray& x1, QLocale::Country x2) { return QTimeZone::windowsIdToIanaIds(x1, x2); }
};

class EQL_EXPORT N249 : public QObject { // QToolTip
    Q_OBJECT
public:
    Q_INVOKABLE QFont Sfont() { return QToolTip::font(); }
    Q_INVOKABLE void ShideText() { QToolTip::hideText(); }
    Q_INVOKABLE bool SisVisible() { return QToolTip::isVisible(); }
    Q_INVOKABLE QPalette Spalette() { return QToolTip::palette(); }
    Q_INVOKABLE void SsetFont(const QFont& x1) { QToolTip::setFont(x1); }
    Q_INVOKABLE void SsetPalette(const QPalette& x1) { QToolTip::setPalette(x1); }
    Q_INVOKABLE void SshowText(const QPoint& x1, const QString& x2, QWidget* x3, const QRect& x4) { QToolTip::showText(x1, x2, x3, x4); }
    Q_INVOKABLE void SshowText(const QPoint& x1, const QString& x2, QWidget* x3, const QRect& x4, int x5) { QToolTip::showText(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void SshowText(const QPoint& x1, const QString& x2, QWidget* x3 = 0) { QToolTip::showText(x1, x2, x3); }
    Q_INVOKABLE QString Stext() { return QToolTip::text(); }
};

class EQL_EXPORT N250 : public QObject { // QTouchDevice
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTouchDevice(u); }
    Q_INVOKABLE int Mcapabilities(QTouchDevice* o) const { return o->capabilities(); }
    Q_INVOKABLE int MmaximumTouchPoints(QTouchDevice* o) const { return o->maximumTouchPoints(); }
    Q_INVOKABLE QString Mname(QTouchDevice* o) const { return o->name(); }
    Q_INVOKABLE void MsetCapabilities(QTouchDevice* o, QTouchDevice::Capabilities x1) { o->setCapabilities(x1); }
    Q_INVOKABLE void MsetMaximumTouchPoints(QTouchDevice* o, int x1) { o->setMaximumTouchPoints(x1); }
    Q_INVOKABLE void MsetName(QTouchDevice* o, const QString& x1) { o->setName(x1); }
    Q_INVOKABLE void MsetType(QTouchDevice* o, QTouchDevice::DeviceType x1) { o->setType(x1); }
    Q_INVOKABLE int Mtype(QTouchDevice* o) const { return o->type(); }
    Q_INVOKABLE QList<const QTouchDevice*> Sdevices() { return QTouchDevice::devices(); }
};

class EQL_EXPORT N252 : public QObject { // QTransform
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTransform(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9 = 1.0) { return new LTransform(u, x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { return new LTransform(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void* C(uint u, const QMatrix& x1) { return new LTransform(u, x1); }
    Q_INVOKABLE qreal Mm11(QTransform* o) const { return o->m11(); }
    Q_INVOKABLE qreal Mm12(QTransform* o) const { return o->m12(); }
    Q_INVOKABLE qreal Mm13(QTransform* o) const { return o->m13(); }
    Q_INVOKABLE qreal Mm21(QTransform* o) const { return o->m21(); }
    Q_INVOKABLE qreal Mm22(QTransform* o) const { return o->m22(); }
    Q_INVOKABLE qreal Mm23(QTransform* o) const { return o->m23(); }
    Q_INVOKABLE qreal Mm31(QTransform* o) const { return o->m31(); }
    Q_INVOKABLE qreal Mm32(QTransform* o) const { return o->m32(); }
    Q_INVOKABLE qreal Mm33(QTransform* o) const { return o->m33(); }
    Q_INVOKABLE QTransform Madjoint(QTransform* o) const { return o->adjoint(); }
    Q_INVOKABLE qreal Mdeterminant(QTransform* o) const { return o->determinant(); }
    Q_INVOKABLE qreal Mdx(QTransform* o) const { return o->dx(); }
    Q_INVOKABLE qreal Mdy(QTransform* o) const { return o->dy(); }
    Q_INVOKABLE QTransform Minverted(QTransform* o, bool* x1 = 0) const { return o->inverted(x1); }
    Q_INVOKABLE bool MisAffine(QTransform* o) const { return o->isAffine(); }
    Q_INVOKABLE bool MisIdentity(QTransform* o) const { return o->isIdentity(); }
    Q_INVOKABLE bool MisInvertible(QTransform* o) const { return o->isInvertible(); }
    Q_INVOKABLE bool MisRotating(QTransform* o) const { return o->isRotating(); }
    Q_INVOKABLE bool MisScaling(QTransform* o) const { return o->isScaling(); }
    Q_INVOKABLE bool MisTranslating(QTransform* o) const { return o->isTranslating(); }
    Q_INVOKABLE QPointF Mmap(QTransform* o, const QPointF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPoint Mmap(QTransform* o, const QPoint& x1) const { return o->map(x1); }
    Q_INVOKABLE QLine Mmap(QTransform* o, const QLine& x1) const { return o->map(x1); }
    Q_INVOKABLE QLineF Mmap(QTransform* o, const QLineF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygonF Mmap(QTransform* o, const QPolygonF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygon Mmap(QTransform* o, const QPolygon& x1) const { return o->map(x1); }
    Q_INVOKABLE QRegion Mmap(QTransform* o, const QRegion& x1) const { return o->map(x1); }
    Q_INVOKABLE QPainterPath Mmap(QTransform* o, const QPainterPath& x1) const { return o->map(x1); }
    Q_INVOKABLE QRectF MmapRect(QTransform* o, const QRectF& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QRect MmapRect(QTransform* o, const QRect& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QPolygon MmapToPolygon(QTransform* o, const QRect& x1) const { return o->mapToPolygon(x1); }
    Q_INVOKABLE void Mreset(QTransform* o) { o->reset(); }
    Q_INVOKABLE QTransform Mrotate(QTransform* o, qreal x1, Qt::Axis x2 = Qt::ZAxis) { return o->rotate(x1, x2); }
    Q_INVOKABLE QTransform MrotateRadians(QTransform* o, qreal x1, Qt::Axis x2 = Qt::ZAxis) { return o->rotateRadians(x1, x2); }
    Q_INVOKABLE QTransform Mscale(QTransform* o, qreal x1, qreal x2) { return o->scale(x1, x2); }
    Q_INVOKABLE void MsetMatrix(QTransform* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9) { o->setMatrix(x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE QTransform Mshear(QTransform* o, qreal x1, qreal x2) { return o->shear(x1, x2); }
    Q_INVOKABLE QMatrix MtoAffine(QTransform* o) const { return o->toAffine(); }
    Q_INVOKABLE QTransform Mtranslate(QTransform* o, qreal x1, qreal x2) { return o->translate(x1, x2); }
    Q_INVOKABLE QTransform Mtransposed(QTransform* o) const { return o->transposed(); }
    Q_INVOKABLE int Mtype(QTransform* o) const { return o->type(); }
    Q_INVOKABLE QTransform SfromScale(qreal x1, qreal x2) { return QTransform::fromScale(x1, x2); }
    Q_INVOKABLE QTransform SfromTranslate(qreal x1, qreal x2) { return QTransform::fromTranslate(x1, x2); }
    Q_INVOKABLE bool SquadToQuad(const QPolygonF& x1, const QPolygonF& x2, QTransform& x3) { return QTransform::quadToQuad(x1, x2, x3); }
    Q_INVOKABLE bool SquadToSquare(const QPolygonF& x1, QTransform& x2) { return QTransform::quadToSquare(x1, x2); }
    Q_INVOKABLE bool SsquareToQuad(const QPolygonF& x1, QTransform& x2) { return QTransform::squareToQuad(x1, x2); }
};

class EQL_EXPORT N253 : public QObject { // QTreeWidgetItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QStringList& x1, int x2 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QTreeWidget* x1, int x2 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QTreeWidget* x1, const QStringList& x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QTreeWidget* x1, QTreeWidgetItem* x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QTreeWidgetItem* x1, int x2 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QTreeWidgetItem* x1, const QStringList& x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QTreeWidgetItem* x1, QTreeWidgetItem* x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QTreeWidgetItem& x1) { return new LTreeWidgetItem(u, x1); }
    Q_INVOKABLE void MaddChild(QTreeWidgetItem* o, QTreeWidgetItem* x1) { o->addChild(x1); }
    Q_INVOKABLE void MaddChildren(QTreeWidgetItem* o, const QList<QTreeWidgetItem*>& x1) { o->addChildren(x1); }
    Q_INVOKABLE QBrush Mbackground(QTreeWidgetItem* o, int x1) const { return o->background(x1); }
    Q_INVOKABLE int McheckState(QTreeWidgetItem* o, int x1) const { return o->checkState(x1); }
    Q_INVOKABLE QTreeWidgetItem* Mchild(QTreeWidgetItem* o, int x1) const { return o->child(x1); }
    Q_INVOKABLE int MchildCount(QTreeWidgetItem* o) const { return o->childCount(); }
    Q_INVOKABLE int MchildIndicatorPolicy(QTreeWidgetItem* o) const { return o->childIndicatorPolicy(); }
    Q_INVOKABLE QTreeWidgetItem* Mclone(QTreeWidgetItem* o) const { return o->clone(); }
    Q_INVOKABLE int McolumnCount(QTreeWidgetItem* o) const { return o->columnCount(); }
    Q_INVOKABLE QVariant Mdata(QTreeWidgetItem* o, int x1, int x2) const { return o->data(x1, x2); }
    Q_INVOKABLE int Mflags(QTreeWidgetItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QTreeWidgetItem* o, int x1) const { return o->font(x1); }
    Q_INVOKABLE QBrush Mforeground(QTreeWidgetItem* o, int x1) const { return o->foreground(x1); }
    Q_INVOKABLE QIcon Micon(QTreeWidgetItem* o, int x1) const { return o->icon(x1); }
    Q_INVOKABLE int MindexOfChild(QTreeWidgetItem* o, QTreeWidgetItem* x1) const { return o->indexOfChild(x1); }
    Q_INVOKABLE void MinsertChild(QTreeWidgetItem* o, int x1, QTreeWidgetItem* x2) { o->insertChild(x1, x2); }
    Q_INVOKABLE void MinsertChildren(QTreeWidgetItem* o, int x1, const QList<QTreeWidgetItem*>& x2) { o->insertChildren(x1, x2); }
    Q_INVOKABLE bool MisDisabled(QTreeWidgetItem* o) const { return o->isDisabled(); }
    Q_INVOKABLE bool MisExpanded(QTreeWidgetItem* o) const { return o->isExpanded(); }
    Q_INVOKABLE bool MisFirstColumnSpanned(QTreeWidgetItem* o) const { return o->isFirstColumnSpanned(); }
    Q_INVOKABLE bool MisHidden(QTreeWidgetItem* o) const { return o->isHidden(); }
    Q_INVOKABLE bool MisSelected(QTreeWidgetItem* o) const { return o->isSelected(); }
    Q_INVOKABLE QTreeWidgetItem* Mparent(QTreeWidgetItem* o) const { return o->parent(); }
    Q_INVOKABLE void MremoveChild(QTreeWidgetItem* o, QTreeWidgetItem* x1) { o->removeChild(x1); }
    Q_INVOKABLE void MsetBackground(QTreeWidgetItem* o, int x1, const QBrush& x2) { o->setBackground(x1, x2); }
    Q_INVOKABLE void MsetCheckState(QTreeWidgetItem* o, int x1, Qt::CheckState x2) { o->setCheckState(x1, x2); }
    Q_INVOKABLE void MsetChildIndicatorPolicy(QTreeWidgetItem* o, QTreeWidgetItem::ChildIndicatorPolicy x1) { o->setChildIndicatorPolicy(x1); }
    Q_INVOKABLE void MsetData(QTreeWidgetItem* o, int x1, int x2, const QVariant& x3) { o->setData(x1, x2, x3); }
    Q_INVOKABLE void MsetDisabled(QTreeWidgetItem* o, bool x1) { o->setDisabled(x1); }
    Q_INVOKABLE void MsetExpanded(QTreeWidgetItem* o, bool x1) { o->setExpanded(x1); }
    Q_INVOKABLE void MsetFirstColumnSpanned(QTreeWidgetItem* o, bool x1) { o->setFirstColumnSpanned(x1); }
    Q_INVOKABLE void MsetFlags(QTreeWidgetItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QTreeWidgetItem* o, int x1, const QFont& x2) { o->setFont(x1, x2); }
    Q_INVOKABLE void MsetForeground(QTreeWidgetItem* o, int x1, const QBrush& x2) { o->setForeground(x1, x2); }
    Q_INVOKABLE void MsetHidden(QTreeWidgetItem* o, bool x1) { o->setHidden(x1); }
    Q_INVOKABLE void MsetIcon(QTreeWidgetItem* o, int x1, const QIcon& x2) { o->setIcon(x1, x2); }
    Q_INVOKABLE void MsetSelected(QTreeWidgetItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetSizeHint(QTreeWidgetItem* o, int x1, const QSize& x2) { o->setSizeHint(x1, x2); }
    Q_INVOKABLE void MsetStatusTip(QTreeWidgetItem* o, int x1, const QString& x2) { o->setStatusTip(x1, x2); }
    Q_INVOKABLE void MsetText(QTreeWidgetItem* o, int x1, const QString& x2) { o->setText(x1, x2); }
    Q_INVOKABLE void MsetTextAlignment(QTreeWidgetItem* o, int x1, int x2) { o->setTextAlignment(x1, x2); }
    Q_INVOKABLE void MsetToolTip(QTreeWidgetItem* o, int x1, const QString& x2) { o->setToolTip(x1, x2); }
    Q_INVOKABLE void MsetWhatsThis(QTreeWidgetItem* o, int x1, const QString& x2) { o->setWhatsThis(x1, x2); }
    Q_INVOKABLE QSize MsizeHint(QTreeWidgetItem* o, int x1) const { return o->sizeHint(x1); }
    Q_INVOKABLE void MsortChildren(QTreeWidgetItem* o, int x1, Qt::SortOrder x2) { o->sortChildren(x1, x2); }
    Q_INVOKABLE QString MstatusTip(QTreeWidgetItem* o, int x1) const { return o->statusTip(x1); }
    Q_INVOKABLE QTreeWidgetItem* MtakeChild(QTreeWidgetItem* o, int x1) { return o->takeChild(x1); }
    Q_INVOKABLE QList<QTreeWidgetItem*> MtakeChildren(QTreeWidgetItem* o) { return o->takeChildren(); }
    Q_INVOKABLE QString Mtext(QTreeWidgetItem* o, int x1) const { return o->text(x1); }
    Q_INVOKABLE int MtextAlignment(QTreeWidgetItem* o, int x1) const { return o->textAlignment(x1); }
    Q_INVOKABLE QString MtoolTip(QTreeWidgetItem* o, int x1) const { return o->toolTip(x1); }
    Q_INVOKABLE QTreeWidget* MtreeWidget(QTreeWidgetItem* o) const { return o->treeWidget(); }
    Q_INVOKABLE int Mtype(QTreeWidgetItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QTreeWidgetItem* o, int x1) const { return o->whatsThis(x1); }
    Q_INVOKABLE void MemitDataChanged(QTreeWidgetItem* o) { ((LTreeWidgetItem*)o)->emitDataChanged(); }
};

class EQL_EXPORT N254 : public QObject { // QUndoCommand
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QUndoCommand* x1 = 0) { return new LUndoCommand(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QUndoCommand* x2 = 0) { return new LUndoCommand(u, x1, x2); }
    Q_INVOKABLE QString MactionText(QUndoCommand* o) const { return o->actionText(); }
    Q_INVOKABLE const QUndoCommand* Mchild(QUndoCommand* o, int x1) const { return o->child(x1); }
    Q_INVOKABLE int MchildCount(QUndoCommand* o) const { return o->childCount(); }
    Q_INVOKABLE int Mid(QUndoCommand* o) const { return o->id(); }
    Q_INVOKABLE bool MmergeWith(QUndoCommand* o, const QUndoCommand* x1) { return o->mergeWith(x1); }
    Q_INVOKABLE void Mredo(QUndoCommand* o) { o->redo(); }
    Q_INVOKABLE void MsetText(QUndoCommand* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE QString Mtext(QUndoCommand* o) const { return o->text(); }
    Q_INVOKABLE void Mundo(QUndoCommand* o) { o->undo(); }
};

class EQL_EXPORT N255 : public QObject { // QUrl
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LUrl(u); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1) { return new LUrl(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { return new LUrl(u, x1, x2); }
    Q_INVOKABLE QUrl Madjusted(QUrl* o, QUrl::FormattingOptions x1) const { return o->adjusted(x1); }
    Q_INVOKABLE QString Mauthority(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::PrettyDecoded) const { return o->authority(x1); }
    Q_INVOKABLE void Mclear(QUrl* o) { o->clear(); }
    Q_INVOKABLE QString MerrorString(QUrl* o) const { return o->errorString(); }
    Q_INVOKABLE QString MfileName(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::FullyDecoded) const { return o->fileName(x1); }
    Q_INVOKABLE QString Mfragment(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::PrettyDecoded) const { return o->fragment(x1); }
    Q_INVOKABLE bool MhasFragment(QUrl* o) const { return o->hasFragment(); }
    Q_INVOKABLE bool MhasQuery(QUrl* o) const { return o->hasQuery(); }
    Q_INVOKABLE QString Mhost(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::FullyDecoded) const { return o->host(x1); }
    Q_INVOKABLE bool MisEmpty(QUrl* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisLocalFile(QUrl* o) const { return o->isLocalFile(); }
    Q_INVOKABLE bool MisParentOf(QUrl* o, const QUrl& x1) const { return o->isParentOf(x1); }
    Q_INVOKABLE bool MisRelative(QUrl* o) const { return o->isRelative(); }
    Q_INVOKABLE bool MisValid(QUrl* o) const { return o->isValid(); }
    Q_INVOKABLE bool Mmatches(QUrl* o, const QUrl& x1, QUrl::FormattingOptions x2) const { return o->matches(x1, x2); }
    Q_INVOKABLE QString Mpassword(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::FullyDecoded) const { return o->password(x1); }
    Q_INVOKABLE QString Mpath(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::FullyDecoded) const { return o->path(x1); }
    Q_INVOKABLE int Mport(QUrl* o, int x1 = -1) const { return o->port(x1); }
    Q_INVOKABLE QString Mquery(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::PrettyDecoded) const { return o->query(x1); }
    Q_INVOKABLE QUrl Mresolved(QUrl* o, const QUrl& x1) const { return o->resolved(x1); }
    Q_INVOKABLE QString Mscheme(QUrl* o) const { return o->scheme(); }
    Q_INVOKABLE void MsetAuthority(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { o->setAuthority(x1, x2); }
    Q_INVOKABLE void MsetFragment(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { o->setFragment(x1, x2); }
    Q_INVOKABLE void MsetHost(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::DecodedMode) { o->setHost(x1, x2); }
    Q_INVOKABLE void MsetPassword(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::DecodedMode) { o->setPassword(x1, x2); }
    Q_INVOKABLE void MsetPath(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::DecodedMode) { o->setPath(x1, x2); }
    Q_INVOKABLE void MsetPort(QUrl* o, int x1) { o->setPort(x1); }
    Q_INVOKABLE void MsetQuery(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { o->setQuery(x1, x2); }
    Q_INVOKABLE void MsetQuery(QUrl* o, const QUrlQuery& x1) { o->setQuery(x1); }
    Q_INVOKABLE void MsetScheme(QUrl* o, const QString& x1) { o->setScheme(x1); }
    Q_INVOKABLE void MsetUrl(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { o->setUrl(x1, x2); }
    Q_INVOKABLE void MsetUserInfo(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { o->setUserInfo(x1, x2); }
    Q_INVOKABLE void MsetUserName(QUrl* o, const QString& x1, QUrl::ParsingMode x2 = QUrl::DecodedMode) { o->setUserName(x1, x2); }
    Q_INVOKABLE void Mswap(QUrl* o, QUrl& x1) { o->swap(x1); }
    Q_INVOKABLE QString MtoDisplayString(QUrl* o, QUrl::FormattingOptions x1 = QUrl::PrettyDecoded) const { return o->toDisplayString(x1); }
    Q_INVOKABLE QByteArray MtoEncoded(QUrl* o, QUrl::FormattingOptions x1 = QUrl::FullyEncoded) const { return o->toEncoded(x1); }
    Q_INVOKABLE QString MtoLocalFile(QUrl* o) const { return o->toLocalFile(); }
    Q_INVOKABLE QString MtoString(QUrl* o, QUrl::FormattingOptions x1 = QUrl::PrettyDecoded) const { return o->toString(x1); }
    Q_INVOKABLE QString MtopLevelDomain(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::FullyDecoded) const { return o->topLevelDomain(x1); }
    Q_INVOKABLE QString Murl(QUrl* o, QUrl::FormattingOptions x1 = QUrl::PrettyDecoded) const { return o->url(x1); }
    Q_INVOKABLE QString MuserInfo(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::PrettyDecoded) const { return o->userInfo(x1); }
    Q_INVOKABLE QString MuserName(QUrl* o, QUrl::ComponentFormattingOptions x1 = QUrl::FullyDecoded) const { return o->userName(x1); }
    Q_INVOKABLE QString SfromAce(const QByteArray& x1) { return QUrl::fromAce(x1); }
    Q_INVOKABLE QUrl SfromEncoded(const QByteArray& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { return QUrl::fromEncoded(x1, x2); }
    Q_INVOKABLE QUrl SfromLocalFile(const QString& x1) { return QUrl::fromLocalFile(x1); }
    Q_INVOKABLE QString SfromPercentEncoding(const QByteArray& x1) { return QUrl::fromPercentEncoding(x1); }
    Q_INVOKABLE QList<QUrl> SfromStringList(const QStringList& x1, QUrl::ParsingMode x2 = QUrl::TolerantMode) { return QUrl::fromStringList(x1, x2); }
    Q_INVOKABLE QUrl SfromUserInput(const QString& x1) { return QUrl::fromUserInput(x1); }
    Q_INVOKABLE QUrl SfromUserInput(const QString& x1, const QString& x2, QUrl::UserInputResolutionOptions x3 = QUrl::DefaultResolution) { return QUrl::fromUserInput(x1, x2, x3); }
    Q_INVOKABLE QStringList SidnWhitelist() { return QUrl::idnWhitelist(); }
    Q_INVOKABLE void SsetIdnWhitelist(const QStringList& x1) { QUrl::setIdnWhitelist(x1); }
    Q_INVOKABLE QByteArray StoAce(const QString& x1) { return QUrl::toAce(x1); }
    Q_INVOKABLE QByteArray StoPercentEncoding(const QString& x1, const QByteArray& x2 = QByteArray(), const QByteArray& x3 = QByteArray()) { return QUrl::toPercentEncoding(x1, x2, x3); }
    Q_INVOKABLE QStringList StoStringList(const QList<QUrl>& x1, QUrl::FormattingOptions x2 = QUrl::PrettyDecoded) { return QUrl::toStringList(x1, x2); }
};

class EQL_EXPORT N256 : public QObject { // QUuid
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LUuid(u); }
    Q_INVOKABLE void* C(uint u, uint x1, ushort x2, ushort x3, uchar x4, uchar x5, uchar x6, uchar x7, uchar x8, uchar x9, uchar x10, uchar x11) { return new LUuid(u, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LUuid(u, x1); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1) { return new LUuid(u, x1); }
    Q_INVOKABLE bool MisNull(QUuid* o) const { return o->isNull(); }
    Q_INVOKABLE QByteArray MtoByteArray(QUuid* o) const { return o->toByteArray(); }
    Q_INVOKABLE QByteArray MtoRfc4122(QUuid* o) const { return o->toRfc4122(); }
    Q_INVOKABLE QString MtoString(QUuid* o) const { return o->toString(); }
    Q_INVOKABLE int Mvariant(QUuid* o) const { return o->variant(); }
    Q_INVOKABLE int Mversion(QUuid* o) const { return o->version(); }
    Q_INVOKABLE QUuid ScreateUuid() { return QUuid::createUuid(); }
    Q_INVOKABLE QUuid ScreateUuidV3(const QUuid& x1, const QByteArray& x2) { return QUuid::createUuidV3(x1, x2); }
    Q_INVOKABLE QUuid ScreateUuidV3(const QUuid& x1, const QString& x2) { return QUuid::createUuidV3(x1, x2); }
    Q_INVOKABLE QUuid ScreateUuidV5(const QUuid& x1, const QByteArray& x2) { return QUuid::createUuidV5(x1, x2); }
    Q_INVOKABLE QUuid ScreateUuidV5(const QUuid& x1, const QString& x2) { return QUuid::createUuidV5(x1, x2); }
    Q_INVOKABLE QUuid SfromRfc4122(const QByteArray& x1) { return QUuid::fromRfc4122(x1); }
};

class EQL_EXPORT N257 : public QObject { // QVariant
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QCursor& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u) { return new LVariant(u); }
    Q_INVOKABLE void* C(uint u, const QRegExp& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRegularExpression& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QEasingCurve& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QUuid& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPersistentModelIndex& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QJsonValue& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QJsonObject& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QJsonArray& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QJsonDocument& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, QVariant::Type x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVariant& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, uint x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, qlonglong x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, qulonglong x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, bool x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, double x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, float x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const char* x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBitArray& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, QLatin1String x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QStringList& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, QChar x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDate& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTime& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDateTime& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSize& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSizeF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLine& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLineF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRect& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRectF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLocale& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE bool McanConvert(QVariant* o, int x1) const { return o->canConvert(x1); }
    Q_INVOKABLE void Mclear(QVariant* o) { o->clear(); }
    Q_INVOKABLE bool Mconvert(QVariant* o, int x1) { return o->convert(x1); }
    Q_INVOKABLE bool MisNull(QVariant* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QVariant* o) const { return o->isValid(); }
    Q_INVOKABLE void Mswap(QVariant* o, QVariant& x1) { o->swap(x1); }
    Q_INVOKABLE QBitArray MtoBitArray(QVariant* o) const { return o->toBitArray(); }
    Q_INVOKABLE bool MtoBool(QVariant* o) const { return o->toBool(); }
    Q_INVOKABLE QByteArray MtoByteArray(QVariant* o) const { return o->toByteArray(); }
    Q_INVOKABLE QChar MtoChar(QVariant* o) const { return o->toChar(); }
    Q_INVOKABLE QDate MtoDate(QVariant* o) const { return o->toDate(); }
    Q_INVOKABLE QDateTime MtoDateTime(QVariant* o) const { return o->toDateTime(); }
    Q_INVOKABLE double MtoDouble(QVariant* o, bool* x1 = 0) const { return o->toDouble(x1); }
    Q_INVOKABLE QEasingCurve MtoEasingCurve(QVariant* o) const { return o->toEasingCurve(); }
    Q_INVOKABLE float MtoFloat(QVariant* o, bool* x1 = 0) const { return o->toFloat(x1); }
    Q_INVOKABLE int MtoInt(QVariant* o, bool* x1 = 0) const { return o->toInt(x1); }
    Q_INVOKABLE QJsonArray MtoJsonArray(QVariant* o) const { return o->toJsonArray(); }
    Q_INVOKABLE QJsonDocument MtoJsonDocument(QVariant* o) const { return o->toJsonDocument(); }
    Q_INVOKABLE QJsonObject MtoJsonObject(QVariant* o) const { return o->toJsonObject(); }
    Q_INVOKABLE QJsonValue MtoJsonValue(QVariant* o) const { return o->toJsonValue(); }
    Q_INVOKABLE QLine MtoLine(QVariant* o) const { return o->toLine(); }
    Q_INVOKABLE QLineF MtoLineF(QVariant* o) const { return o->toLineF(); }
    Q_INVOKABLE QLocale MtoLocale(QVariant* o) const { return o->toLocale(); }
    Q_INVOKABLE qlonglong MtoLongLong(QVariant* o, bool* x1 = 0) const { return o->toLongLong(x1); }
    Q_INVOKABLE QModelIndex MtoModelIndex(QVariant* o) const { return o->toModelIndex(); }
    Q_INVOKABLE QPersistentModelIndex MtoPersistentModelIndex(QVariant* o) const { return o->toPersistentModelIndex(); }
    Q_INVOKABLE QPoint MtoPoint(QVariant* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVariant* o) const { return o->toPointF(); }
    Q_INVOKABLE qreal MtoReal(QVariant* o, bool* x1 = 0) const { return o->toReal(x1); }
    Q_INVOKABLE QRect MtoRect(QVariant* o) const { return o->toRect(); }
    Q_INVOKABLE QRectF MtoRectF(QVariant* o) const { return o->toRectF(); }
    Q_INVOKABLE QRegExp MtoRegExp(QVariant* o) const { return o->toRegExp(); }
    Q_INVOKABLE QRegularExpression MtoRegularExpression(QVariant* o) const { return o->toRegularExpression(); }
    Q_INVOKABLE QSize MtoSize(QVariant* o) const { return o->toSize(); }
    Q_INVOKABLE QSizeF MtoSizeF(QVariant* o) const { return o->toSizeF(); }
    Q_INVOKABLE QString MtoString(QVariant* o) const { return o->toString(); }
    Q_INVOKABLE QStringList MtoStringList(QVariant* o) const { return o->toStringList(); }
    Q_INVOKABLE QTime MtoTime(QVariant* o) const { return o->toTime(); }
    Q_INVOKABLE uint MtoUInt(QVariant* o, bool* x1 = 0) const { return o->toUInt(x1); }
    Q_INVOKABLE qulonglong MtoULongLong(QVariant* o, bool* x1 = 0) const { return o->toULongLong(x1); }
    Q_INVOKABLE QUrl MtoUrl(QVariant* o) const { return o->toUrl(); }
    Q_INVOKABLE QUuid MtoUuid(QVariant* o) const { return o->toUuid(); }
    Q_INVOKABLE int Mtype(QVariant* o) const { return o->type(); }
    Q_INVOKABLE const char* MtypeName(QVariant* o) const { return o->typeName(); }
    Q_INVOKABLE int MuserType(QVariant* o) const { return o->userType(); }
    Q_INVOKABLE int SnameToType(const char* x1) { return QVariant::nameToType(x1); }
    Q_INVOKABLE const char* StypeToName(int x1) { return QVariant::typeToName(x1); }
};

class EQL_EXPORT N258 : public QObject { // QVector2D
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVector2D(u); }
    Q_INVOKABLE void* C(uint u, float x1, float x2) { return new LVector2D(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector3D& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector4D& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE float MdistanceToLine(QVector2D* o, const QVector2D& x1, const QVector2D& x2) const { return o->distanceToLine(x1, x2); }
    Q_INVOKABLE float MdistanceToPoint(QVector2D* o, const QVector2D& x1) const { return o->distanceToPoint(x1); }
    Q_INVOKABLE bool MisNull(QVector2D* o) const { return o->isNull(); }
    Q_INVOKABLE float Mlength(QVector2D* o) const { return o->length(); }
    Q_INVOKABLE float MlengthSquared(QVector2D* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QVector2D* o) { o->normalize(); }
    Q_INVOKABLE QVector2D Mnormalized(QVector2D* o) const { return o->normalized(); }
    Q_INVOKABLE void MsetX(QVector2D* o, float x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QVector2D* o, float x1) { o->setY(x1); }
    Q_INVOKABLE QPoint MtoPoint(QVector2D* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVector2D* o) const { return o->toPointF(); }
    Q_INVOKABLE QVector3D MtoVector3D(QVector2D* o) const { return o->toVector3D(); }
    Q_INVOKABLE QVector4D MtoVector4D(QVector2D* o) const { return o->toVector4D(); }
    Q_INVOKABLE float Mx(QVector2D* o) const { return o->x(); }
    Q_INVOKABLE float My(QVector2D* o) const { return o->y(); }
    Q_INVOKABLE float SdotProduct(const QVector2D& x1, const QVector2D& x2) { return QVector2D::dotProduct(x1, x2); }
};

class EQL_EXPORT N259 : public QObject { // QVector3D
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVector3D(u); }
    Q_INVOKABLE void* C(uint u, float x1, float x2, float x3) { return new LVector3D(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1, float x2) { return new LVector3D(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QVector4D& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE float MdistanceToLine(QVector3D* o, const QVector3D& x1, const QVector3D& x2) const { return o->distanceToLine(x1, x2); }
    Q_INVOKABLE float MdistanceToPlane(QVector3D* o, const QVector3D& x1, const QVector3D& x2) const { return o->distanceToPlane(x1, x2); }
    Q_INVOKABLE float MdistanceToPlane(QVector3D* o, const QVector3D& x1, const QVector3D& x2, const QVector3D& x3) const { return o->distanceToPlane(x1, x2, x3); }
    Q_INVOKABLE float MdistanceToPoint(QVector3D* o, const QVector3D& x1) const { return o->distanceToPoint(x1); }
    Q_INVOKABLE bool MisNull(QVector3D* o) const { return o->isNull(); }
    Q_INVOKABLE float Mlength(QVector3D* o) const { return o->length(); }
    Q_INVOKABLE float MlengthSquared(QVector3D* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QVector3D* o) { o->normalize(); }
    Q_INVOKABLE QVector3D Mnormalized(QVector3D* o) const { return o->normalized(); }
    Q_INVOKABLE QVector3D Mproject(QVector3D* o, const QMatrix4x4& x1, const QMatrix4x4& x2, const QRect& x3) const { return o->project(x1, x2, x3); }
    Q_INVOKABLE void MsetX(QVector3D* o, float x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QVector3D* o, float x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZ(QVector3D* o, float x1) { o->setZ(x1); }
    Q_INVOKABLE QPoint MtoPoint(QVector3D* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVector3D* o) const { return o->toPointF(); }
    Q_INVOKABLE QVector2D MtoVector2D(QVector3D* o) const { return o->toVector2D(); }
    Q_INVOKABLE QVector4D MtoVector4D(QVector3D* o) const { return o->toVector4D(); }
    Q_INVOKABLE QVector3D Munproject(QVector3D* o, const QMatrix4x4& x1, const QMatrix4x4& x2, const QRect& x3) const { return o->unproject(x1, x2, x3); }
    Q_INVOKABLE float Mx(QVector3D* o) const { return o->x(); }
    Q_INVOKABLE float My(QVector3D* o) const { return o->y(); }
    Q_INVOKABLE float Mz(QVector3D* o) const { return o->z(); }
    Q_INVOKABLE QVector3D ScrossProduct(const QVector3D& x1, const QVector3D& x2) { return QVector3D::crossProduct(x1, x2); }
    Q_INVOKABLE float SdotProduct(const QVector3D& x1, const QVector3D& x2) { return QVector3D::dotProduct(x1, x2); }
    Q_INVOKABLE QVector3D Snormal(const QVector3D& x1, const QVector3D& x2) { return QVector3D::normal(x1, x2); }
    Q_INVOKABLE QVector3D Snormal(const QVector3D& x1, const QVector3D& x2, const QVector3D& x3) { return QVector3D::normal(x1, x2, x3); }
};

class EQL_EXPORT N260 : public QObject { // QVector4D
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVector4D(u); }
    Q_INVOKABLE void* C(uint u, float x1, float x2, float x3, float x4) { return new LVector4D(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1, float x2, float x3) { return new LVector4D(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QVector3D& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector3D& x1, float x2) { return new LVector4D(u, x1, x2); }
    Q_INVOKABLE bool MisNull(QVector4D* o) const { return o->isNull(); }
    Q_INVOKABLE float Mlength(QVector4D* o) const { return o->length(); }
    Q_INVOKABLE float MlengthSquared(QVector4D* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QVector4D* o) { o->normalize(); }
    Q_INVOKABLE QVector4D Mnormalized(QVector4D* o) const { return o->normalized(); }
    Q_INVOKABLE void MsetW(QVector4D* o, float x1) { o->setW(x1); }
    Q_INVOKABLE void MsetX(QVector4D* o, float x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QVector4D* o, float x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZ(QVector4D* o, float x1) { o->setZ(x1); }
    Q_INVOKABLE QPoint MtoPoint(QVector4D* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVector4D* o) const { return o->toPointF(); }
    Q_INVOKABLE QVector2D MtoVector2D(QVector4D* o) const { return o->toVector2D(); }
    Q_INVOKABLE QVector2D MtoVector2DAffine(QVector4D* o) const { return o->toVector2DAffine(); }
    Q_INVOKABLE QVector3D MtoVector3D(QVector4D* o) const { return o->toVector3D(); }
    Q_INVOKABLE QVector3D MtoVector3DAffine(QVector4D* o) const { return o->toVector3DAffine(); }
    Q_INVOKABLE float Mw(QVector4D* o) const { return o->w(); }
    Q_INVOKABLE float Mx(QVector4D* o) const { return o->x(); }
    Q_INVOKABLE float My(QVector4D* o) const { return o->y(); }
    Q_INVOKABLE float Mz(QVector4D* o) const { return o->z(); }
    Q_INVOKABLE float SdotProduct(const QVector4D& x1, const QVector4D& x2) { return QVector4D::dotProduct(x1, x2); }
};

class EQL_EXPORT N272 : public QObject { // QWhatsThis
    Q_OBJECT
public:
    Q_INVOKABLE QAction* ScreateAction(QObject* x1 = 0) { return QWhatsThis::createAction(x1); }
    Q_INVOKABLE void SenterWhatsThisMode() { QWhatsThis::enterWhatsThisMode(); }
    Q_INVOKABLE void ShideText() { QWhatsThis::hideText(); }
    Q_INVOKABLE bool SinWhatsThisMode() { return QWhatsThis::inWhatsThisMode(); }
    Q_INVOKABLE void SleaveWhatsThisMode() { QWhatsThis::leaveWhatsThisMode(); }
    Q_INVOKABLE void SshowText(const QPoint& x1, const QString& x2, QWidget* x3 = 0) { QWhatsThis::showText(x1, x2, x3); }
};

class EQL_EXPORT N1 : public N66 { // QAbstractGraphicsShapeItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LAbstractGraphicsShapeItem(u, x1); }
    Q_INVOKABLE QBrush Mbrush(QAbstractGraphicsShapeItem* o) const { return o->brush(); }
    Q_INVOKABLE QPen Mpen(QAbstractGraphicsShapeItem* o) const { return o->pen(); }
    Q_INVOKABLE void MsetBrush(QAbstractGraphicsShapeItem* o, const QBrush& x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetPen(QAbstractGraphicsShapeItem* o, const QPen& x1) { o->setPen(x1); }
    Q_INVOKABLE bool MisObscuredBy(QAbstractGraphicsShapeItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QAbstractGraphicsShapeItem* o) const { return o->opaqueArea(); }
};

class EQL_EXPORT N6 : public N5 { // QAccessibleObject
    Q_OBJECT
public:
    Q_INVOKABLE QAccessibleInterface* MchildAt(QAccessibleObject* o, int x1, int x2) const { return o->childAt(x1, x2); }
    Q_INVOKABLE bool MisValid(QAccessibleObject* o) const { return o->isValid(); }
    Q_INVOKABLE QObject* Mobject(QAccessibleObject* o) const { return o->object(); }
    Q_INVOKABLE QRect Mrect(QAccessibleObject* o) const { return o->rect(); }
    Q_INVOKABLE void MsetText(QAccessibleObject* o, QAccessible::Text x1, const QString& x2) { o->setText(x1, x2); }
};

class EQL_EXPORT N7 : public N4 { // QAccessibleStateChangeEvent
    Q_OBJECT
public:
};

class EQL_EXPORT N8 : public N4 { // QAccessibleTextCursorEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1, int x2) { return new LAccessibleTextCursorEvent(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QAccessibleInterface* x1, int x2) { return new LAccessibleTextCursorEvent(u, x1, x2); }
    Q_INVOKABLE int McursorPosition(QAccessibleTextCursorEvent* o) const { return o->cursorPosition(); }
    Q_INVOKABLE void MsetCursorPosition(QAccessibleTextCursorEvent* o, int x1) { o->setCursorPosition(x1); }
};

class EQL_EXPORT N9 : public N8 { // QAccessibleTextInsertEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1, int x2, const QString& x3) { return new LAccessibleTextInsertEvent(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QAccessibleInterface* x1, int x2, const QString& x3) { return new LAccessibleTextInsertEvent(u, x1, x2, x3); }
    Q_INVOKABLE int MchangePosition(QAccessibleTextInsertEvent* o) const { return o->changePosition(); }
    Q_INVOKABLE QString MtextInserted(QAccessibleTextInsertEvent* o) const { return o->textInserted(); }
};

class EQL_EXPORT N11 : public N8 { // QAccessibleTextRemoveEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1, int x2, const QString& x3) { return new LAccessibleTextRemoveEvent(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QAccessibleInterface* x1, int x2, const QString& x3) { return new LAccessibleTextRemoveEvent(u, x1, x2, x3); }
    Q_INVOKABLE int MchangePosition(QAccessibleTextRemoveEvent* o) const { return o->changePosition(); }
    Q_INVOKABLE QString MtextRemoved(QAccessibleTextRemoveEvent* o) const { return o->textRemoved(); }
};

class EQL_EXPORT N12 : public N8 { // QAccessibleTextSelectionEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1, int x2, int x3) { return new LAccessibleTextSelectionEvent(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QAccessibleInterface* x1, int x2, int x3) { return new LAccessibleTextSelectionEvent(u, x1, x2, x3); }
    Q_INVOKABLE int MselectionEnd(QAccessibleTextSelectionEvent* o) const { return o->selectionEnd(); }
    Q_INVOKABLE int MselectionStart(QAccessibleTextSelectionEvent* o) const { return o->selectionStart(); }
    Q_INVOKABLE void MsetSelection(QAccessibleTextSelectionEvent* o, int x1, int x2) { o->setSelection(x1, x2); }
};

class EQL_EXPORT N13 : public N8 { // QAccessibleTextUpdateEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1, int x2, const QString& x3, const QString& x4) { return new LAccessibleTextUpdateEvent(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, QAccessibleInterface* x1, int x2, const QString& x3, const QString& x4) { return new LAccessibleTextUpdateEvent(u, x1, x2, x3, x4); }
    Q_INVOKABLE int MchangePosition(QAccessibleTextUpdateEvent* o) const { return o->changePosition(); }
    Q_INVOKABLE QString MtextInserted(QAccessibleTextUpdateEvent* o) const { return o->textInserted(); }
    Q_INVOKABLE QString MtextRemoved(QAccessibleTextUpdateEvent* o) const { return o->textRemoved(); }
};

class EQL_EXPORT N14 : public N4 { // QAccessibleValueChangeEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1, const QVariant& x2) { return new LAccessibleValueChangeEvent(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QAccessibleInterface* x1, const QVariant& x2) { return new LAccessibleValueChangeEvent(u, x1, x2); }
    Q_INVOKABLE void MsetValue(QAccessibleValueChangeEvent* o, const QVariant& x1) { o->setValue(x1); }
    Q_INVOKABLE QVariant Mvalue(QAccessibleValueChangeEvent* o) const { return o->value(); }
};

class EQL_EXPORT N16 : public N6 { // QAccessibleWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1, QAccessible::Role x2 = QAccessible::Client, const QString& x3 = QString()) { return new LAccessibleWidget(u, x1, x2, x3); }
    Q_INVOKABLE void MaddControllingSignal(QAccessibleWidget* o, const QString& x1) { ((LAccessibleWidget*)o)->addControllingSignal(x1); }
    Q_INVOKABLE QObject* MparentObject(QAccessibleWidget* o) const { return ((LAccessibleWidget*)o)->parentObject(); }
    Q_INVOKABLE QWidget* Mwidget(QAccessibleWidget* o) const { return ((LAccessibleWidget*)o)->widget(); }
    Q_INVOKABLE QStringList MactionNames(QAccessibleWidget* o) const { return o->actionNames(); }
    Q_INVOKABLE QColor MbackgroundColor(QAccessibleWidget* o) const { return o->backgroundColor(); }
    Q_INVOKABLE QAccessibleInterface* Mchild(QAccessibleWidget* o, int x1) const { return o->child(x1); }
    Q_INVOKABLE int MchildCount(QAccessibleWidget* o) const { return o->childCount(); }
    Q_INVOKABLE void MdoAction(QAccessibleWidget* o, const QString& x1) { o->doAction(x1); }
    Q_INVOKABLE QAccessibleInterface* MfocusChild(QAccessibleWidget* o) const { return o->focusChild(); }
    Q_INVOKABLE QColor MforegroundColor(QAccessibleWidget* o) const { return o->foregroundColor(); }
    Q_INVOKABLE int MindexOfChild(QAccessibleWidget* o, const QAccessibleInterface* x1) const { return o->indexOfChild(x1); }
    Q_INVOKABLE bool MisValid(QAccessibleWidget* o) const { return o->isValid(); }
    Q_INVOKABLE QStringList MkeyBindingsForAction(QAccessibleWidget* o, const QString& x1) const { return o->keyBindingsForAction(x1); }
    Q_INVOKABLE QAccessibleInterface* Mparent(QAccessibleWidget* o) const { return o->parent(); }
    Q_INVOKABLE QRect Mrect(QAccessibleWidget* o) const { return o->rect(); }
    Q_INVOKABLE int Mrole(QAccessibleWidget* o) const { return o->role(); }
    Q_INVOKABLE QString Mtext(QAccessibleWidget* o, QAccessible::Text x1) const { return o->text(x1); }
    Q_INVOKABLE QWindow* Mwindow(QAccessibleWidget* o) const { return o->window(); }
};

class EQL_EXPORT N17 : public N49 { // QActionEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1, QAction* x2, QAction* x3 = 0) { return new LActionEvent(u, x1, x2, x3); }
    Q_INVOKABLE QAction* Maction(QActionEvent* o) const { return o->action(); }
    Q_INVOKABLE QAction* Mbefore(QActionEvent* o) const { return o->before(); }
};

class EQL_EXPORT N29 : public N49 { // QChildEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QChildEvent::Type x1, QObject* x2) { return new LChildEvent(u, x1, x2); }
    Q_INVOKABLE bool Madded(QChildEvent* o) const { return o->added(); }
    Q_INVOKABLE QObject* Mchild(QChildEvent* o) const { return o->child(); }
    Q_INVOKABLE bool Mpolished(QChildEvent* o) const { return o->polished(); }
    Q_INVOKABLE bool Mremoved(QChildEvent* o) const { return o->removed(); }
};

class EQL_EXPORT N30 : public N49 { // QCloseEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LCloseEvent(u); }
};

class EQL_EXPORT N32 : public N62 { // QConicalGradient
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LConicalGradient(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, qreal x2) { return new LConicalGradient(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3) { return new LConicalGradient(u, x1, x2, x3); }
    Q_INVOKABLE qreal Mangle(QConicalGradient* o) const { return o->angle(); }
    Q_INVOKABLE QPointF Mcenter(QConicalGradient* o) const { return o->center(); }
    Q_INVOKABLE void MsetAngle(QConicalGradient* o, qreal x1) { o->setAngle(x1); }
    Q_INVOKABLE void MsetCenter(QConicalGradient* o, const QPointF& x1) { o->setCenter(x1); }
    Q_INVOKABLE void MsetCenter(QConicalGradient* o, qreal x1, qreal x2) { o->setCenter(x1, x2); }
};

class EQL_EXPORT N42 : public N49 { // QDragLeaveEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LDragLeaveEvent(u); }
};

class EQL_EXPORT N44 : public N49 { // QDropEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPointF& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, QDropEvent::Type x6 = QDropEvent::Drop) { return new LDropEvent(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MacceptProposedAction(QDropEvent* o) { o->acceptProposedAction(); }
    Q_INVOKABLE int MdropAction(QDropEvent* o) const { return o->dropAction(); }
    Q_INVOKABLE int MkeyboardModifiers(QDropEvent* o) const { return o->keyboardModifiers(); }
    Q_INVOKABLE const QMimeData* MmimeData(QDropEvent* o) const { return o->mimeData(); }
    Q_INVOKABLE int MmouseButtons(QDropEvent* o) const { return o->mouseButtons(); }
    Q_INVOKABLE QPoint Mpos(QDropEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MposF(QDropEvent* o) const { return o->posF(); }
    Q_INVOKABLE int MpossibleActions(QDropEvent* o) const { return o->possibleActions(); }
    Q_INVOKABLE int MproposedAction(QDropEvent* o) const { return o->proposedAction(); }
    Q_INVOKABLE void MsetDropAction(QDropEvent* o, Qt::DropAction x1) { o->setDropAction(x1); }
    Q_INVOKABLE QObject* Msource(QDropEvent* o) const { return o->source(); }
};

class EQL_EXPORT N45 : public N49 { // QDynamicPropertyChangeEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QByteArray& x1) { return new LDynamicPropertyChangeEvent(u, x1); }
    Q_INVOKABLE QByteArray MpropertyName(QDynamicPropertyChangeEvent* o) const { return o->propertyName(); }
};

class EQL_EXPORT N48 : public N49 { // QEnterEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPointF& x1, const QPointF& x2, const QPointF& x3) { return new LEnterEvent(u, x1, x2, x3); }
    Q_INVOKABLE QPoint MglobalPos(QEnterEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QEnterEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QEnterEvent* o) const { return o->globalY(); }
    Q_INVOKABLE QPointF MlocalPos(QEnterEvent* o) const { return o->localPos(); }
    Q_INVOKABLE QPoint Mpos(QEnterEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscreenPos(QEnterEvent* o) const { return o->screenPos(); }
    Q_INVOKABLE QPointF MwindowPos(QEnterEvent* o) const { return o->windowPos(); }
    Q_INVOKABLE int Mx(QEnterEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QEnterEvent* o) const { return o->y(); }
};

class EQL_EXPORT N51 : public N49 { // QExposeEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QRegion& x1) { return new LExposeEvent(u, x1); }
    Q_INVOKABLE QRegion Mregion(QExposeEvent* o) const { return o->region(); }
};

class EQL_EXPORT N54 : public N49 { // QFileOpenEvent
    Q_OBJECT
public:
    Q_INVOKABLE QString Mfile(QFileOpenEvent* o) const { return o->file(); }
    Q_INVOKABLE QUrl Murl(QFileOpenEvent* o) const { return o->url(); }
};

class EQL_EXPORT N55 : public N49 { // QFocusEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QFocusEvent::Type x1, Qt::FocusReason x2 = Qt::OtherFocusReason) { return new LFocusEvent(u, x1, x2); }
    Q_INVOKABLE bool MgotFocus(QFocusEvent* o) const { return o->gotFocus(); }
    Q_INVOKABLE bool MlostFocus(QFocusEvent* o) const { return o->lostFocus(); }
    Q_INVOKABLE int Mreason(QFocusEvent* o) const { return o->reason(); }
};

class EQL_EXPORT N61 : public N49 { // QGestureEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QList<QGesture*>& x1) { return new LGestureEvent(u, x1); }
    Q_INVOKABLE void Maccept(QGestureEvent* o, QGesture* x1) { o->accept(x1); }
    Q_INVOKABLE void Maccept(QGestureEvent* o, Qt::GestureType x1) { o->accept(x1); }
    Q_INVOKABLE QList<QGesture*> MactiveGestures(QGestureEvent* o) const { return o->activeGestures(); }
    Q_INVOKABLE QList<QGesture*> McanceledGestures(QGestureEvent* o) const { return o->canceledGestures(); }
    Q_INVOKABLE QGesture* Mgesture(QGestureEvent* o, Qt::GestureType x1) const { return o->gesture(x1); }
    Q_INVOKABLE QList<QGesture*> Mgestures(QGestureEvent* o) const { return o->gestures(); }
    Q_INVOKABLE void Mignore(QGestureEvent* o, QGesture* x1) { o->ignore(x1); }
    Q_INVOKABLE void Mignore(QGestureEvent* o, Qt::GestureType x1) { o->ignore(x1); }
    Q_INVOKABLE bool MisAccepted(QGestureEvent* o, QGesture* x1) const { return o->isAccepted(x1); }
    Q_INVOKABLE bool MisAccepted(QGestureEvent* o, Qt::GestureType x1) const { return o->isAccepted(x1); }
    Q_INVOKABLE QPointF MmapToGraphicsScene(QGestureEvent* o, const QPointF& x1) const { return o->mapToGraphicsScene(x1); }
    Q_INVOKABLE void MsetAccepted(QGestureEvent* o, QGesture* x1, bool x2) { o->setAccepted(x1, x2); }
    Q_INVOKABLE void MsetAccepted(QGestureEvent* o, Qt::GestureType x1, bool x2) { o->setAccepted(x1, x2); }
    Q_INVOKABLE QWidget* Mwidget(QGestureEvent* o) const { return o->widget(); }
};

class EQL_EXPORT N64 : public N1 { // QGraphicsEllipseItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsEllipseItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsEllipseItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) { return new LGraphicsEllipseItem(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF Mrect(QGraphicsEllipseItem* o) const { return o->rect(); }
    Q_INVOKABLE void MsetRect(QGraphicsEllipseItem* o, const QRectF& x1) { o->setRect(x1); }
    Q_INVOKABLE void MsetRect(QGraphicsEllipseItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetSpanAngle(QGraphicsEllipseItem* o, int x1) { o->setSpanAngle(x1); }
    Q_INVOKABLE void MsetStartAngle(QGraphicsEllipseItem* o, int x1) { o->setStartAngle(x1); }
    Q_INVOKABLE int MspanAngle(QGraphicsEllipseItem* o) const { return o->spanAngle(); }
    Q_INVOKABLE int MstartAngle(QGraphicsEllipseItem* o) const { return o->startAngle(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsEllipseItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsEllipseItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsEllipseItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsEllipseItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsEllipseItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsEllipseItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsEllipseItem* o) const { return o->type(); }
};

class EQL_EXPORT N67 : public N66 { // QGraphicsItemGroup
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsItemGroup(u, x1); }
    Q_INVOKABLE void MaddToGroup(QGraphicsItemGroup* o, QGraphicsItem* x1) { o->addToGroup(x1); }
    Q_INVOKABLE void MremoveFromGroup(QGraphicsItemGroup* o, QGraphicsItem* x1) { o->removeFromGroup(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsItemGroup* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsItemGroup* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsItemGroup* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsItemGroup* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE int Mtype(QGraphicsItemGroup* o) const { return o->type(); }
};

class EQL_EXPORT N68 : public N69 { // QGraphicsLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsLayoutItem* x1 = 0) { return new LGraphicsLayout(u, x1); }
    Q_INVOKABLE void Mactivate(QGraphicsLayout* o) { o->activate(); }
    Q_INVOKABLE int Mcount(QGraphicsLayout* o) const { return o->count(); }
    Q_INVOKABLE void Minvalidate(QGraphicsLayout* o) { o->invalidate(); }
    Q_INVOKABLE bool MisActivated(QGraphicsLayout* o) const { return o->isActivated(); }
    Q_INVOKABLE QGraphicsLayoutItem* MitemAt(QGraphicsLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE void MremoveAt(QGraphicsLayout* o, int x1) { o->removeAt(x1); }
    Q_INVOKABLE void MsetContentsMargins(QGraphicsLayout* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setContentsMargins(x1, x2, x3, x4); }
    Q_INVOKABLE void MwidgetEvent(QGraphicsLayout* o, QEvent* x1) { o->widgetEvent(x1); }
    Q_INVOKABLE void MaddChildLayoutItem(QGraphicsLayout* o, QGraphicsLayoutItem* x1) { ((LGraphicsLayout*)o)->addChildLayoutItem(x1); }
    Q_INVOKABLE void MupdateGeometry(QGraphicsLayout* o) { o->updateGeometry(); }
};

class EQL_EXPORT N70 : public N66 { // QGraphicsLineItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsLineItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLineF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsLineItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) { return new LGraphicsLineItem(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QLineF Mline(QGraphicsLineItem* o) const { return o->line(); }
    Q_INVOKABLE QPen Mpen(QGraphicsLineItem* o) const { return o->pen(); }
    Q_INVOKABLE void MsetLine(QGraphicsLineItem* o, const QLineF& x1) { o->setLine(x1); }
    Q_INVOKABLE void MsetLine(QGraphicsLineItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setLine(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetPen(QGraphicsLineItem* o, const QPen& x1) { o->setPen(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsLineItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsLineItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsLineItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsLineItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsLineItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsLineItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsLineItem* o) const { return o->type(); }
};

class EQL_EXPORT N71 : public N68 { // QGraphicsLinearLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsLayoutItem* x1 = 0) { return new LGraphicsLinearLayout(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::Orientation x1, QGraphicsLayoutItem* x2 = 0) { return new LGraphicsLinearLayout(u, x1, x2); }
    Q_INVOKABLE void MaddItem(QGraphicsLinearLayout* o, QGraphicsLayoutItem* x1) { o->addItem(x1); }
    Q_INVOKABLE void MaddStretch(QGraphicsLinearLayout* o, int x1 = 1) { o->addStretch(x1); }
    Q_INVOKABLE int Malignment(QGraphicsLinearLayout* o, QGraphicsLayoutItem* x1) const { return o->alignment(x1); }
    Q_INVOKABLE void MinsertItem(QGraphicsLinearLayout* o, int x1, QGraphicsLayoutItem* x2) { o->insertItem(x1, x2); }
    Q_INVOKABLE void MinsertStretch(QGraphicsLinearLayout* o, int x1, int x2 = 1) { o->insertStretch(x1, x2); }
    Q_INVOKABLE qreal MitemSpacing(QGraphicsLinearLayout* o, int x1) const { return o->itemSpacing(x1); }
    Q_INVOKABLE int Morientation(QGraphicsLinearLayout* o) const { return o->orientation(); }
    Q_INVOKABLE void MremoveItem(QGraphicsLinearLayout* o, QGraphicsLayoutItem* x1) { o->removeItem(x1); }
    Q_INVOKABLE void MsetAlignment(QGraphicsLinearLayout* o, QGraphicsLayoutItem* x1, Qt::Alignment x2) { o->setAlignment(x1, x2); }
    Q_INVOKABLE void MsetItemSpacing(QGraphicsLinearLayout* o, int x1, qreal x2) { o->setItemSpacing(x1, x2); }
    Q_INVOKABLE void MsetOrientation(QGraphicsLinearLayout* o, Qt::Orientation x1) { o->setOrientation(x1); }
    Q_INVOKABLE void MsetSpacing(QGraphicsLinearLayout* o, qreal x1) { o->setSpacing(x1); }
    Q_INVOKABLE void MsetStretchFactor(QGraphicsLinearLayout* o, QGraphicsLayoutItem* x1, int x2) { o->setStretchFactor(x1, x2); }
    Q_INVOKABLE qreal Mspacing(QGraphicsLinearLayout* o) const { return o->spacing(); }
    Q_INVOKABLE int MstretchFactor(QGraphicsLinearLayout* o, QGraphicsLayoutItem* x1) const { return o->stretchFactor(x1); }
    Q_INVOKABLE int Mcount(QGraphicsLinearLayout* o) const { return o->count(); }
    Q_INVOKABLE void Minvalidate(QGraphicsLinearLayout* o) { o->invalidate(); }
    Q_INVOKABLE QGraphicsLayoutItem* MitemAt(QGraphicsLinearLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE void MremoveAt(QGraphicsLinearLayout* o, int x1) { o->removeAt(x1); }
    Q_INVOKABLE void MsetGeometry(QGraphicsLinearLayout* o, const QRectF& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSizeF MsizeHint(QGraphicsLinearLayout* o, Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { return o->sizeHint(x1, x2); }
};

class EQL_EXPORT N72 : public N1 { // QGraphicsPathItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsPathItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPainterPath& x1, QGraphicsItem* x2 = 0) { return new LGraphicsPathItem(u, x1, x2); }
    Q_INVOKABLE QPainterPath Mpath(QGraphicsPathItem* o) const { return o->path(); }
    Q_INVOKABLE void MsetPath(QGraphicsPathItem* o, const QPainterPath& x1) { o->setPath(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsPathItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsPathItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsPathItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsPathItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsPathItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsPathItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsPathItem* o) const { return o->type(); }
};

class EQL_EXPORT N73 : public N66 { // QGraphicsPixmapItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsPixmapItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1, QGraphicsItem* x2 = 0) { return new LGraphicsPixmapItem(u, x1, x2); }
    Q_INVOKABLE QPointF Moffset(QGraphicsPixmapItem* o) const { return o->offset(); }
    Q_INVOKABLE QPixmap Mpixmap(QGraphicsPixmapItem* o) const { return o->pixmap(); }
    Q_INVOKABLE void MsetOffset(QGraphicsPixmapItem* o, const QPointF& x1) { o->setOffset(x1); }
    Q_INVOKABLE void MsetOffset(QGraphicsPixmapItem* o, qreal x1, qreal x2) { o->setOffset(x1, x2); }
    Q_INVOKABLE void MsetPixmap(QGraphicsPixmapItem* o, const QPixmap& x1) { o->setPixmap(x1); }
    Q_INVOKABLE void MsetShapeMode(QGraphicsPixmapItem* o, QGraphicsPixmapItem::ShapeMode x1) { o->setShapeMode(x1); }
    Q_INVOKABLE void MsetTransformationMode(QGraphicsPixmapItem* o, Qt::TransformationMode x1) { o->setTransformationMode(x1); }
    Q_INVOKABLE int MshapeMode(QGraphicsPixmapItem* o) const { return o->shapeMode(); }
    Q_INVOKABLE int MtransformationMode(QGraphicsPixmapItem* o) const { return o->transformationMode(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsPixmapItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsPixmapItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsPixmapItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsPixmapItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsPixmapItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsPixmapItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsPixmapItem* o) const { return o->type(); }
};

class EQL_EXPORT N74 : public N1 { // QGraphicsPolygonItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsPolygonItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPolygonF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsPolygonItem(u, x1, x2); }
    Q_INVOKABLE int MfillRule(QGraphicsPolygonItem* o) const { return o->fillRule(); }
    Q_INVOKABLE QPolygonF Mpolygon(QGraphicsPolygonItem* o) const { return o->polygon(); }
    Q_INVOKABLE void MsetFillRule(QGraphicsPolygonItem* o, Qt::FillRule x1) { o->setFillRule(x1); }
    Q_INVOKABLE void MsetPolygon(QGraphicsPolygonItem* o, const QPolygonF& x1) { o->setPolygon(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsPolygonItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsPolygonItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsPolygonItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsPolygonItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsPolygonItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsPolygonItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsPolygonItem* o) const { return o->type(); }
};

class EQL_EXPORT N75 : public N1 { // QGraphicsRectItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsRectItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsRectItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) { return new LGraphicsRectItem(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF Mrect(QGraphicsRectItem* o) const { return o->rect(); }
    Q_INVOKABLE void MsetRect(QGraphicsRectItem* o, const QRectF& x1) { o->setRect(x1); }
    Q_INVOKABLE void MsetRect(QGraphicsRectItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setRect(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsRectItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsRectItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsRectItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsRectItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsRectItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsRectItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsRectItem* o) const { return o->type(); }
};

class EQL_EXPORT N78 : public N49 { // QGraphicsSceneEvent
    Q_OBJECT
public:
    Q_INVOKABLE QWidget* Mwidget(QGraphicsSceneEvent* o) const { return o->widget(); }
};

class EQL_EXPORT N79 : public N78 { // QGraphicsSceneHelpEvent
    Q_OBJECT
public:
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneHelpEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneHelpEvent* o) const { return o->screenPos(); }
};

class EQL_EXPORT N80 : public N78 { // QGraphicsSceneHoverEvent
    Q_OBJECT
public:
    Q_INVOKABLE QPointF MlastPos(QGraphicsSceneHoverEvent* o) const { return o->lastPos(); }
    Q_INVOKABLE QPointF MlastScenePos(QGraphicsSceneHoverEvent* o) const { return o->lastScenePos(); }
    Q_INVOKABLE QPoint MlastScreenPos(QGraphicsSceneHoverEvent* o) const { return o->lastScreenPos(); }
    Q_INVOKABLE int Mmodifiers(QGraphicsSceneHoverEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneHoverEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneHoverEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneHoverEvent* o) const { return o->screenPos(); }
};

class EQL_EXPORT N81 : public N78 { // QGraphicsSceneMouseEvent
    Q_OBJECT
public:
    Q_INVOKABLE int Mbutton(QGraphicsSceneMouseEvent* o) const { return o->button(); }
    Q_INVOKABLE QPointF MbuttonDownPos(QGraphicsSceneMouseEvent* o, Qt::MouseButton x1) const { return o->buttonDownPos(x1); }
    Q_INVOKABLE QPointF MbuttonDownScenePos(QGraphicsSceneMouseEvent* o, Qt::MouseButton x1) const { return o->buttonDownScenePos(x1); }
    Q_INVOKABLE QPoint MbuttonDownScreenPos(QGraphicsSceneMouseEvent* o, Qt::MouseButton x1) const { return o->buttonDownScreenPos(x1); }
    Q_INVOKABLE int Mbuttons(QGraphicsSceneMouseEvent* o) const { return o->buttons(); }
    Q_INVOKABLE int Mflags(QGraphicsSceneMouseEvent* o) const { return o->flags(); }
    Q_INVOKABLE QPointF MlastPos(QGraphicsSceneMouseEvent* o) const { return o->lastPos(); }
    Q_INVOKABLE QPointF MlastScenePos(QGraphicsSceneMouseEvent* o) const { return o->lastScenePos(); }
    Q_INVOKABLE QPoint MlastScreenPos(QGraphicsSceneMouseEvent* o) const { return o->lastScreenPos(); }
    Q_INVOKABLE int Mmodifiers(QGraphicsSceneMouseEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneMouseEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneMouseEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneMouseEvent* o) const { return o->screenPos(); }
    Q_INVOKABLE int Msource(QGraphicsSceneMouseEvent* o) const { return o->source(); }
};

class EQL_EXPORT N82 : public N78 { // QGraphicsSceneMoveEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LGraphicsSceneMoveEvent(u); }
    Q_INVOKABLE QPointF MnewPos(QGraphicsSceneMoveEvent* o) const { return o->newPos(); }
    Q_INVOKABLE QPointF MoldPos(QGraphicsSceneMoveEvent* o) const { return o->oldPos(); }
};

class EQL_EXPORT N83 : public N78 { // QGraphicsSceneResizeEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LGraphicsSceneResizeEvent(u); }
    Q_INVOKABLE QSizeF MnewSize(QGraphicsSceneResizeEvent* o) const { return o->newSize(); }
    Q_INVOKABLE QSizeF MoldSize(QGraphicsSceneResizeEvent* o) const { return o->oldSize(); }
};

class EQL_EXPORT N84 : public N78 { // QGraphicsSceneWheelEvent
    Q_OBJECT
public:
    Q_INVOKABLE int Mbuttons(QGraphicsSceneWheelEvent* o) const { return o->buttons(); }
    Q_INVOKABLE int Mdelta(QGraphicsSceneWheelEvent* o) const { return o->delta(); }
    Q_INVOKABLE int Mmodifiers(QGraphicsSceneWheelEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE int Morientation(QGraphicsSceneWheelEvent* o) const { return o->orientation(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneWheelEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneWheelEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneWheelEvent* o) const { return o->screenPos(); }
};

class EQL_EXPORT N85 : public N1 { // QGraphicsSimpleTextItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsSimpleTextItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QGraphicsItem* x2 = 0) { return new LGraphicsSimpleTextItem(u, x1, x2); }
    Q_INVOKABLE QFont Mfont(QGraphicsSimpleTextItem* o) const { return o->font(); }
    Q_INVOKABLE void MsetFont(QGraphicsSimpleTextItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetText(QGraphicsSimpleTextItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE QString Mtext(QGraphicsSimpleTextItem* o) const { return o->text(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsSimpleTextItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsSimpleTextItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsSimpleTextItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsSimpleTextItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsSimpleTextItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsSimpleTextItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsSimpleTextItem* o) const { return o->type(); }
};

class EQL_EXPORT N87 : public N49 { // QHelpEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QHelpEvent::Type x1, const QPoint& x2, const QPoint& x3) { return new LHelpEvent(u, x1, x2, x3); }
    Q_INVOKABLE QPoint MglobalPos(QHelpEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QHelpEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QHelpEvent* o) const { return o->globalY(); }
    Q_INVOKABLE QPoint Mpos(QHelpEvent* o) const { return o->pos(); }
    Q_INVOKABLE int Mx(QHelpEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QHelpEvent* o) const { return o->y(); }
};

class EQL_EXPORT N89 : public N49 { // QHideEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LHideEvent(u); }
};

class EQL_EXPORT N95 : public N49 { // QIconDragEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LIconDragEvent(u); }
};

class EQL_EXPORT N96 : public N140 { // QImage
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LImage(u); }
    Q_INVOKABLE void* C(uint u, const QSize& x1, QImage::Format x2) { return new LImage(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, QImage::Format x3) { return new LImage(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const char* x2 = 0) { return new LImage(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QImage& x1) { return new LImage(u, x1); }
    Q_INVOKABLE bool MallGray(QImage* o) const { return o->allGray(); }
    Q_INVOKABLE int MbitPlaneCount(QImage* o) const { return o->bitPlaneCount(); }
    Q_INVOKABLE int MbyteCount(QImage* o) const { return o->byteCount(); }
    Q_INVOKABLE int MbytesPerLine(QImage* o) const { return o->bytesPerLine(); }
    Q_INVOKABLE qlonglong McacheKey(QImage* o) const { return o->cacheKey(); }
    Q_INVOKABLE QRgb Mcolor(QImage* o, int x1) const { return o->color(x1); }
    Q_INVOKABLE int McolorCount(QImage* o) const { return o->colorCount(); }
    Q_INVOKABLE QVector<QRgb> McolorTable(QImage* o) const { return o->colorTable(); }
    Q_INVOKABLE QImage MconvertToFormat(QImage* o, QImage::Format x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) const { return o->convertToFormat(x1, x2); }
    Q_INVOKABLE QImage MconvertToFormat(QImage* o, QImage::Format x1, const QVector<QRgb>& x2, Qt::ImageConversionFlags x3 = Qt::AutoColor) const { return o->convertToFormat(x1, x2, x3); }
    Q_INVOKABLE QImage Mcopy(QImage* o, const QRect& x1 = QRect()) const { return o->copy(x1); }
    Q_INVOKABLE QImage Mcopy(QImage* o, int x1, int x2, int x3, int x4) const { return o->copy(x1, x2, x3, x4); }
    Q_INVOKABLE QImage McreateAlphaMask(QImage* o, Qt::ImageConversionFlags x1 = Qt::AutoColor) const { return o->createAlphaMask(x1); }
    Q_INVOKABLE QImage McreateHeuristicMask(QImage* o, bool x1 = true) const { return o->createHeuristicMask(x1); }
    Q_INVOKABLE QImage McreateMaskFromColor(QImage* o, QRgb x1, Qt::MaskMode x2 = Qt::MaskInColor) const { return o->createMaskFromColor(x1, x2); }
    Q_INVOKABLE int Mdepth(QImage* o) const { return o->depth(); }
    Q_INVOKABLE qreal MdevicePixelRatio(QImage* o) const { return o->devicePixelRatio(); }
    Q_INVOKABLE int MdotsPerMeterX(QImage* o) const { return o->dotsPerMeterX(); }
    Q_INVOKABLE int MdotsPerMeterY(QImage* o) const { return o->dotsPerMeterY(); }
    Q_INVOKABLE void Mfill(QImage* o, uint x1) { o->fill(x1); }
    Q_INVOKABLE void Mfill(QImage* o, Qt::GlobalColor x1) { o->fill(x1); }
    Q_INVOKABLE void Mfill(QImage* o, const QColor& x1) { o->fill(x1); }
    Q_INVOKABLE int Mformat(QImage* o) const { return o->format(); }
    Q_INVOKABLE bool MhasAlphaChannel(QImage* o) const { return o->hasAlphaChannel(); }
    Q_INVOKABLE int Mheight(QImage* o) const { return o->height(); }
    Q_INVOKABLE void MinvertPixels(QImage* o, QImage::InvertMode x1 = QImage::InvertRgb) { o->invertPixels(x1); }
    Q_INVOKABLE bool MisGrayscale(QImage* o) const { return o->isGrayscale(); }
    Q_INVOKABLE bool MisNull(QImage* o) const { return o->isNull(); }
    Q_INVOKABLE bool Mload(QImage* o, const QString& x1, const char* x2 = 0) { return o->load(x1, x2); }
    Q_INVOKABLE bool MloadFromData(QImage* o, const QByteArray& x1, const char* x2 = 0) { return o->loadFromData(x1, x2); }
    Q_INVOKABLE QImage Mmirrored(QImage* o, bool x1 = false, bool x2 = true) const { return o->mirrored(x1, x2); }
    Q_INVOKABLE QPoint Moffset(QImage* o) const { return o->offset(); }
    Q_INVOKABLE QRgb Mpixel(QImage* o, const QPoint& x1) const { return o->pixel(x1); }
    Q_INVOKABLE QRgb Mpixel(QImage* o, int x1, int x2) const { return o->pixel(x1, x2); }
    Q_INVOKABLE QPixelFormat MpixelFormat(QImage* o) const { return o->pixelFormat(); }
    Q_INVOKABLE int MpixelIndex(QImage* o, const QPoint& x1) const { return o->pixelIndex(x1); }
    Q_INVOKABLE int MpixelIndex(QImage* o, int x1, int x2) const { return o->pixelIndex(x1, x2); }
    Q_INVOKABLE QRect Mrect(QImage* o) const { return o->rect(); }
    Q_INVOKABLE QImage MrgbSwapped(QImage* o) const { return o->rgbSwapped(); }
    Q_INVOKABLE bool Msave(QImage* o, const QString& x1, const char* x2 = 0, int x3 = -1) const { return o->save(x1, x2, x3); }
    Q_INVOKABLE QImage Mscaled(QImage* o, const QSize& x1, Qt::AspectRatioMode x2 = Qt::IgnoreAspectRatio, Qt::TransformationMode x3 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3); }
    Q_INVOKABLE QImage Mscaled(QImage* o, int x1, int x2, Qt::AspectRatioMode x3 = Qt::IgnoreAspectRatio, Qt::TransformationMode x4 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3, x4); }
    Q_INVOKABLE QImage MscaledToHeight(QImage* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToHeight(x1, x2); }
    Q_INVOKABLE QImage MscaledToWidth(QImage* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToWidth(x1, x2); }
    Q_INVOKABLE void MsetColor(QImage* o, int x1, QRgb x2) { o->setColor(x1, x2); }
    Q_INVOKABLE void MsetColorCount(QImage* o, int x1) { o->setColorCount(x1); }
    Q_INVOKABLE void MsetColorTable(QImage* o, const QVector<QRgb>& x1) { o->setColorTable(x1); }
    Q_INVOKABLE void MsetDevicePixelRatio(QImage* o, qreal x1) { o->setDevicePixelRatio(x1); }
    Q_INVOKABLE void MsetDotsPerMeterX(QImage* o, int x1) { o->setDotsPerMeterX(x1); }
    Q_INVOKABLE void MsetDotsPerMeterY(QImage* o, int x1) { o->setDotsPerMeterY(x1); }
    Q_INVOKABLE void MsetOffset(QImage* o, const QPoint& x1) { o->setOffset(x1); }
    Q_INVOKABLE void MsetPixel(QImage* o, const QPoint& x1, uint x2) { o->setPixel(x1, x2); }
    Q_INVOKABLE void MsetPixel(QImage* o, int x1, int x2, uint x3) { o->setPixel(x1, x2, x3); }
    Q_INVOKABLE void MsetText(QImage* o, const QString& x1, const QString& x2) { o->setText(x1, x2); }
    Q_INVOKABLE QSize Msize(QImage* o) const { return o->size(); }
    Q_INVOKABLE void Mswap(QImage* o, QImage& x1) { o->swap(x1); }
    Q_INVOKABLE QString Mtext(QImage* o, const QString& x1 = QString()) const { return o->text(x1); }
    Q_INVOKABLE QStringList MtextKeys(QImage* o) const { return o->textKeys(); }
    Q_INVOKABLE QImage Mtransformed(QImage* o, const QMatrix& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE QImage Mtransformed(QImage* o, const QTransform& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE bool Mvalid(QImage* o, const QPoint& x1) const { return o->valid(x1); }
    Q_INVOKABLE bool Mvalid(QImage* o, int x1, int x2) const { return o->valid(x1, x2); }
    Q_INVOKABLE int Mwidth(QImage* o) const { return o->width(); }
    Q_INVOKABLE QImage MsmoothScaled(QImage* o, int x1, int x2) const { return ((LImage*)o)->smoothScaled(x1, x2); }
    Q_INVOKABLE QImage SfromData(const QByteArray& x1, const char* x2 = 0) { return QImage::fromData(x1, x2); }
    Q_INVOKABLE int StoImageFormat(QPixelFormat x1) { return QImage::toImageFormat(x1); }
    Q_INVOKABLE QPixelFormat StoPixelFormat(QImage::Format x1) { return QImage::toPixelFormat(x1); }
    Q_INVOKABLE QMatrix StrueMatrix(const QMatrix& x1, int x2, int x3) { return QImage::trueMatrix(x1, x2, x3); }
    Q_INVOKABLE QTransform StrueMatrix(const QTransform& x1, int x2, int x3) { return QImage::trueMatrix(x1, x2, x3); }
    // see src/extras.cpp
    Q_INVOKABLE QImage MchangeBrightness(QImage* o, int x1) { return QImage_changeBrightness(*o, x1); }
    Q_INVOKABLE QImage MchangeContrast(QImage* o, int x1) { return QImage_changeContrast(*o, x1); }
    Q_INVOKABLE QImage MchangeGamma(QImage* o, int x1) { return QImage_changeGamma(*o, x1); }
};

class EQL_EXPORT N98 : public N49 { // QInputEvent
    Q_OBJECT
public:
    Q_INVOKABLE int Mmodifiers(QInputEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE ulong Mtimestamp(QInputEvent* o) const { return o->timestamp(); }
};

class EQL_EXPORT N99 : public N49 { // QInputMethodEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LInputMethodEvent(u); }
    Q_INVOKABLE void* C(uint u, const QInputMethodEvent& x1) { return new LInputMethodEvent(u, x1); }
    Q_INVOKABLE QString McommitString(QInputMethodEvent* o) const { return o->commitString(); }
    Q_INVOKABLE QString MpreeditString(QInputMethodEvent* o) const { return o->preeditString(); }
    Q_INVOKABLE int MreplacementLength(QInputMethodEvent* o) const { return o->replacementLength(); }
    Q_INVOKABLE int MreplacementStart(QInputMethodEvent* o) const { return o->replacementStart(); }
    Q_INVOKABLE void MsetCommitString(QInputMethodEvent* o, const QString& x1, int x2 = 0, int x3 = 0) { o->setCommitString(x1, x2, x3); }
};

class EQL_EXPORT N100 : public N49 { // QInputMethodQueryEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, Qt::InputMethodQueries x1) { return new LInputMethodQueryEvent(u, x1); }
    Q_INVOKABLE int Mqueries(QInputMethodQueryEvent* o) const { return o->queries(); }
    Q_INVOKABLE void MsetValue(QInputMethodQueryEvent* o, Qt::InputMethodQuery x1, const QVariant& x2) { o->setValue(x1, x2); }
    Q_INVOKABLE QVariant Mvalue(QInputMethodQueryEvent* o, Qt::InputMethodQuery x1) const { return o->value(x1); }
};

class EQL_EXPORT N106 : public N98 { // QKeyEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QKeyEvent::Type x1, int x2, Qt::KeyboardModifiers x3, const QString& x4 = QString(), bool x5 = false, ushort x6 = 1) { return new LKeyEvent(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void* C(uint u, QKeyEvent::Type x1, int x2, Qt::KeyboardModifiers x3, quint32 x4, quint32 x5, quint32 x6, const QString& x7 = QString(), bool x8 = false, ushort x9 = 1) { return new LKeyEvent(u, x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE int Mcount(QKeyEvent* o) const { return o->count(); }
    Q_INVOKABLE bool MisAutoRepeat(QKeyEvent* o) const { return o->isAutoRepeat(); }
    Q_INVOKABLE int Mkey(QKeyEvent* o) const { return o->key(); }
    Q_INVOKABLE bool Mmatches(QKeyEvent* o, QKeySequence::StandardKey x1) const { return o->matches(x1); }
    Q_INVOKABLE int Mmodifiers(QKeyEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE quint32 MnativeModifiers(QKeyEvent* o) const { return o->nativeModifiers(); }
    Q_INVOKABLE quint32 MnativeScanCode(QKeyEvent* o) const { return o->nativeScanCode(); }
    Q_INVOKABLE quint32 MnativeVirtualKey(QKeyEvent* o) const { return o->nativeVirtualKey(); }
    Q_INVOKABLE QString Mtext(QKeyEvent* o) const { return o->text(); }
};

class EQL_EXPORT N110 : public N62 { // QLinearGradient
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LLinearGradient(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, const QPointF& x2) { return new LLinearGradient(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4) { return new LLinearGradient(u, x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MfinalStop(QLinearGradient* o) const { return o->finalStop(); }
    Q_INVOKABLE void MsetFinalStop(QLinearGradient* o, const QPointF& x1) { o->setFinalStop(x1); }
    Q_INVOKABLE void MsetFinalStop(QLinearGradient* o, qreal x1, qreal x2) { o->setFinalStop(x1, x2); }
    Q_INVOKABLE void MsetStart(QLinearGradient* o, const QPointF& x1) { o->setStart(x1); }
    Q_INVOKABLE void MsetStart(QLinearGradient* o, qreal x1, qreal x2) { o->setStart(x1, x2); }
    Q_INVOKABLE QPointF Mstart(QLinearGradient* o) const { return o->start(); }
};

class EQL_EXPORT N122 : public N98 { // QMouseEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QMouseEvent::Type x1, const QPointF& x2, Qt::MouseButton x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5) { return new LMouseEvent(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, QMouseEvent::Type x1, const QPointF& x2, const QPointF& x3, Qt::MouseButton x4, Qt::MouseButtons x5, Qt::KeyboardModifiers x6) { return new LMouseEvent(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void* C(uint u, QMouseEvent::Type x1, const QPointF& x2, const QPointF& x3, const QPointF& x4, Qt::MouseButton x5, Qt::MouseButtons x6, Qt::KeyboardModifiers x7) { return new LMouseEvent(u, x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE int Mbutton(QMouseEvent* o) const { return o->button(); }
    Q_INVOKABLE int Mbuttons(QMouseEvent* o) const { return o->buttons(); }
    Q_INVOKABLE int Mflags(QMouseEvent* o) const { return o->flags(); }
    Q_INVOKABLE QPoint MglobalPos(QMouseEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QMouseEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QMouseEvent* o) const { return o->globalY(); }
    Q_INVOKABLE QPointF MlocalPos(QMouseEvent* o) const { return o->localPos(); }
    Q_INVOKABLE QPoint Mpos(QMouseEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscreenPos(QMouseEvent* o) const { return o->screenPos(); }
    Q_INVOKABLE int Msource(QMouseEvent* o) const { return o->source(); }
    Q_INVOKABLE QPointF MwindowPos(QMouseEvent* o) const { return o->windowPos(); }
    Q_INVOKABLE int Mx(QMouseEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QMouseEvent* o) const { return o->y(); }
};

class EQL_EXPORT N123 : public N49 { // QMoveEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPoint& x1, const QPoint& x2) { return new LMoveEvent(u, x1, x2); }
    Q_INVOKABLE QPoint MoldPos(QMoveEvent* o) const { return o->oldPos(); }
    Q_INVOKABLE QPoint Mpos(QMoveEvent* o) const { return o->pos(); }
};

class EQL_EXPORT N135 : public N140 { // QOpenGLPaintDevice
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LOpenGLPaintDevice(u); }
    Q_INVOKABLE void* C(uint u, const QSize& x1) { return new LOpenGLPaintDevice(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1, int x2) { return new LOpenGLPaintDevice(u, x1, x2); }
    Q_INVOKABLE QOpenGLContext* Mcontext(QOpenGLPaintDevice* o) const { return o->context(); }
    Q_INVOKABLE qreal MdotsPerMeterX(QOpenGLPaintDevice* o) const { return o->dotsPerMeterX(); }
    Q_INVOKABLE qreal MdotsPerMeterY(QOpenGLPaintDevice* o) const { return o->dotsPerMeterY(); }
    Q_INVOKABLE void MensureActiveTarget(QOpenGLPaintDevice* o) { o->ensureActiveTarget(); }
    Q_INVOKABLE bool MpaintFlipped(QOpenGLPaintDevice* o) const { return o->paintFlipped(); }
    Q_INVOKABLE void MsetDevicePixelRatio(QOpenGLPaintDevice* o, qreal x1) { o->setDevicePixelRatio(x1); }
    Q_INVOKABLE void MsetDotsPerMeterX(QOpenGLPaintDevice* o, qreal x1) { o->setDotsPerMeterX(x1); }
    Q_INVOKABLE void MsetDotsPerMeterY(QOpenGLPaintDevice* o, qreal x1) { o->setDotsPerMeterY(x1); }
    Q_INVOKABLE void MsetPaintFlipped(QOpenGLPaintDevice* o, bool x1) { o->setPaintFlipped(x1); }
    Q_INVOKABLE void MsetSize(QOpenGLPaintDevice* o, const QSize& x1) { o->setSize(x1); }
    Q_INVOKABLE QSize Msize(QOpenGLPaintDevice* o) const { return o->size(); }
};

class EQL_EXPORT N139 : public N140 { // QPagedPaintDevice
    Q_OBJECT
public:
    Q_INVOKABLE bool MnewPage(QPagedPaintDevice* o) { return o->newPage(); }
    Q_INVOKABLE QPageLayout MpageLayout(QPagedPaintDevice* o) const { return o->pageLayout(); }
    Q_INVOKABLE int MpageSize(QPagedPaintDevice* o) const { return o->pageSize(); }
    Q_INVOKABLE QSizeF MpageSizeMM(QPagedPaintDevice* o) const { return o->pageSizeMM(); }
    Q_INVOKABLE bool MsetPageLayout(QPagedPaintDevice* o, const QPageLayout& x1) { return o->setPageLayout(x1); }
    Q_INVOKABLE bool MsetPageMargins(QPagedPaintDevice* o, const QMarginsF& x1) { return o->setPageMargins(x1); }
    Q_INVOKABLE bool MsetPageMargins(QPagedPaintDevice* o, const QMarginsF& x1, QPageLayout::Unit x2) { return o->setPageMargins(x1, x2); }
    Q_INVOKABLE bool MsetPageOrientation(QPagedPaintDevice* o, QPageLayout::Orientation x1) { return o->setPageOrientation(x1); }
    Q_INVOKABLE bool MsetPageSize(QPagedPaintDevice* o, const QPageSize& x1) { return o->setPageSize(x1); }
    Q_INVOKABLE void MsetPageSize(QPagedPaintDevice* o, QPagedPaintDevice::PageSize x1) { o->setPageSize(x1); }
    Q_INVOKABLE void MsetPageSizeMM(QPagedPaintDevice* o, const QSizeF& x1) { o->setPageSizeMM(x1); }
};

class EQL_EXPORT N141 : public N49 { // QPaintEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QRegion& x1) { return new LPaintEvent(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRect& x1) { return new LPaintEvent(u, x1); }
    Q_INVOKABLE QRect Mrect(QPaintEvent* o) const { return o->rect(); }
    Q_INVOKABLE QRegion Mregion(QPaintEvent* o) const { return o->region(); }
};

class EQL_EXPORT N148 : public N140 { // QPicture
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = -1) { return new LPicture(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPicture& x1) { return new LPicture(u, x1); }
    Q_INVOKABLE QRect MboundingRect(QPicture* o) const { return o->boundingRect(); }
    Q_INVOKABLE const char* Mdata(QPicture* o) const { return o->data(); }
    Q_INVOKABLE bool MisNull(QPicture* o) const { return o->isNull(); }
    Q_INVOKABLE bool Mload(QPicture* o, const QString& x1, const char* x2 = 0) { return o->load(x1, x2); }
    Q_INVOKABLE bool Mplay(QPicture* o, QPainter* x1) { return o->play(x1); }
    Q_INVOKABLE bool Msave(QPicture* o, const QString& x1, const char* x2 = 0) { return o->save(x1, x2); }
    Q_INVOKABLE void MsetBoundingRect(QPicture* o, const QRect& x1) { o->setBoundingRect(x1); }
    Q_INVOKABLE void MsetData(QPicture* o, const char* x1, uint x2) { o->setData(x1, x2); }
    Q_INVOKABLE uint Msize(QPicture* o) const { return o->size(); }
    Q_INVOKABLE void Mswap(QPicture* o, QPicture& x1) { o->swap(x1); }
};

class EQL_EXPORT N149 : public N140 { // QPixmap
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPixmap(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2) { return new LPixmap(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) { return new LPixmap(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LPixmap(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSize& x1) { return new LPixmap(u, x1); }
    Q_INVOKABLE qlonglong McacheKey(QPixmap* o) const { return o->cacheKey(); }
    Q_INVOKABLE bool MconvertFromImage(QPixmap* o, const QImage& x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) { return o->convertFromImage(x1, x2); }
    Q_INVOKABLE QPixmap Mcopy(QPixmap* o, const QRect& x1 = QRect()) const { return o->copy(x1); }
    Q_INVOKABLE QPixmap Mcopy(QPixmap* o, int x1, int x2, int x3, int x4) const { return o->copy(x1, x2, x3, x4); }
    Q_INVOKABLE QBitmap McreateHeuristicMask(QPixmap* o, bool x1 = true) const { return o->createHeuristicMask(x1); }
    Q_INVOKABLE QBitmap McreateMaskFromColor(QPixmap* o, const QColor& x1, Qt::MaskMode x2 = Qt::MaskInColor) const { return o->createMaskFromColor(x1, x2); }
    Q_INVOKABLE int Mdepth(QPixmap* o) const { return o->depth(); }
    Q_INVOKABLE void Mdetach(QPixmap* o) { o->detach(); }
    Q_INVOKABLE qreal MdevicePixelRatio(QPixmap* o) const { return o->devicePixelRatio(); }
    Q_INVOKABLE void Mfill(QPixmap* o, const QColor& x1 = Qt::white) { o->fill(x1); }
    Q_INVOKABLE bool MhasAlpha(QPixmap* o) const { return o->hasAlpha(); }
    Q_INVOKABLE bool MhasAlphaChannel(QPixmap* o) const { return o->hasAlphaChannel(); }
    Q_INVOKABLE int Mheight(QPixmap* o) const { return o->height(); }
    Q_INVOKABLE bool MisNull(QPixmap* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisQBitmap(QPixmap* o) const { return o->isQBitmap(); }
    Q_INVOKABLE bool Mload(QPixmap* o, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) { return o->load(x1, x2, x3); }
    Q_INVOKABLE bool MloadFromData(QPixmap* o, const QByteArray& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) { return o->loadFromData(x1, x2, x3); }
    Q_INVOKABLE QBitmap Mmask(QPixmap* o) const { return o->mask(); }
    Q_INVOKABLE QRect Mrect(QPixmap* o) const { return o->rect(); }
    Q_INVOKABLE bool Msave(QPixmap* o, const QString& x1, const char* x2 = 0, int x3 = -1) const { return o->save(x1, x2, x3); }
    Q_INVOKABLE QPixmap Mscaled(QPixmap* o, const QSize& x1, Qt::AspectRatioMode x2 = Qt::IgnoreAspectRatio, Qt::TransformationMode x3 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3); }
    Q_INVOKABLE QPixmap Mscaled(QPixmap* o, int x1, int x2, Qt::AspectRatioMode x3 = Qt::IgnoreAspectRatio, Qt::TransformationMode x4 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3, x4); }
    Q_INVOKABLE QPixmap MscaledToHeight(QPixmap* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToHeight(x1, x2); }
    Q_INVOKABLE QPixmap MscaledToWidth(QPixmap* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToWidth(x1, x2); }
    Q_INVOKABLE void Mscroll(QPixmap* o, int x1, int x2, int x3, int x4, int x5, int x6, QRegion* x7 = 0) { o->scroll(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void Mscroll(QPixmap* o, int x1, int x2, const QRect& x3, QRegion* x4 = 0) { o->scroll(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetDevicePixelRatio(QPixmap* o, qreal x1) { o->setDevicePixelRatio(x1); }
    Q_INVOKABLE void MsetMask(QPixmap* o, const QBitmap& x1) { o->setMask(x1); }
    Q_INVOKABLE QSize Msize(QPixmap* o) const { return o->size(); }
    Q_INVOKABLE void Mswap(QPixmap* o, QPixmap& x1) { o->swap(x1); }
    Q_INVOKABLE QImage MtoImage(QPixmap* o) const { return o->toImage(); }
    Q_INVOKABLE QPixmap Mtransformed(QPixmap* o, const QTransform& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE QPixmap Mtransformed(QPixmap* o, const QMatrix& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE int Mwidth(QPixmap* o) const { return o->width(); }
    Q_INVOKABLE int SdefaultDepth() { return QPixmap::defaultDepth(); }
    Q_INVOKABLE QPixmap SfromImage(const QImage& x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) { return QPixmap::fromImage(x1, x2); }
    Q_INVOKABLE QPixmap SfromImageReader(QImageReader* x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) { return QPixmap::fromImageReader(x1, x2); }
    Q_INVOKABLE QTransform StrueMatrix(const QTransform& x1, int x2, int x3) { return QPixmap::trueMatrix(x1, x2, x3); }
    Q_INVOKABLE QMatrix StrueMatrix(const QMatrix& x1, int x2, int x3) { return QPixmap::trueMatrix(x1, x2, x3); }
};

class EQL_EXPORT N151 : public N139 { // QPrinter
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QPrinter::PrinterMode x1 = QPrinter::ScreenResolution) { return new LPrinter(u, x1); }
    Q_INVOKABLE bool Mabort(QPrinter* o) { return o->abort(); }
    Q_INVOKABLE bool McollateCopies(QPrinter* o) const { return o->collateCopies(); }
    Q_INVOKABLE int McolorMode(QPrinter* o) const { return o->colorMode(); }
    Q_INVOKABLE int McopyCount(QPrinter* o) const { return o->copyCount(); }
    Q_INVOKABLE QString Mcreator(QPrinter* o) const { return o->creator(); }
    Q_INVOKABLE QString MdocName(QPrinter* o) const { return o->docName(); }
    Q_INVOKABLE int Mduplex(QPrinter* o) const { return o->duplex(); }
    Q_INVOKABLE bool MfontEmbeddingEnabled(QPrinter* o) const { return o->fontEmbeddingEnabled(); }
    Q_INVOKABLE int MfromPage(QPrinter* o) const { return o->fromPage(); }
    Q_INVOKABLE bool MfullPage(QPrinter* o) const { return o->fullPage(); }
    Q_INVOKABLE bool MisValid(QPrinter* o) const { return o->isValid(); }
    Q_INVOKABLE QString MoutputFileName(QPrinter* o) const { return o->outputFileName(); }
    Q_INVOKABLE int MoutputFormat(QPrinter* o) const { return o->outputFormat(); }
    Q_INVOKABLE QPageLayout MpageLayout(QPrinter* o) const { return o->pageLayout(); }
    Q_INVOKABLE int MpageOrder(QPrinter* o) const { return o->pageOrder(); }
    Q_INVOKABLE QRectF MpageRect(QPrinter* o, QPrinter::Unit x1) const { return o->pageRect(x1); }
    Q_INVOKABLE QRectF MpaperRect(QPrinter* o, QPrinter::Unit x1) const { return o->paperRect(x1); }
    Q_INVOKABLE int MpaperSource(QPrinter* o) const { return o->paperSource(); }
    Q_INVOKABLE QString MprintProgram(QPrinter* o) const { return o->printProgram(); }
    Q_INVOKABLE int MprintRange(QPrinter* o) const { return o->printRange(); }
    Q_INVOKABLE QString MprinterName(QPrinter* o) const { return o->printerName(); }
    Q_INVOKABLE int MprinterState(QPrinter* o) const { return o->printerState(); }
    Q_INVOKABLE int Mresolution(QPrinter* o) const { return o->resolution(); }
    Q_INVOKABLE void MsetCollateCopies(QPrinter* o, bool x1) { o->setCollateCopies(x1); }
    Q_INVOKABLE void MsetColorMode(QPrinter* o, QPrinter::ColorMode x1) { o->setColorMode(x1); }
    Q_INVOKABLE void MsetCopyCount(QPrinter* o, int x1) { o->setCopyCount(x1); }
    Q_INVOKABLE void MsetCreator(QPrinter* o, const QString& x1) { o->setCreator(x1); }
    Q_INVOKABLE void MsetDocName(QPrinter* o, const QString& x1) { o->setDocName(x1); }
    Q_INVOKABLE void MsetDuplex(QPrinter* o, QPrinter::DuplexMode x1) { o->setDuplex(x1); }
    Q_INVOKABLE void MsetFontEmbeddingEnabled(QPrinter* o, bool x1) { o->setFontEmbeddingEnabled(x1); }
    Q_INVOKABLE void MsetFromTo(QPrinter* o, int x1, int x2) { o->setFromTo(x1, x2); }
    Q_INVOKABLE void MsetFullPage(QPrinter* o, bool x1) { o->setFullPage(x1); }
    Q_INVOKABLE void MsetOutputFileName(QPrinter* o, const QString& x1) { o->setOutputFileName(x1); }
    Q_INVOKABLE void MsetOutputFormat(QPrinter* o, QPrinter::OutputFormat x1) { o->setOutputFormat(x1); }
    Q_INVOKABLE bool MsetPageLayout(QPrinter* o, const QPageLayout& x1) { return o->setPageLayout(x1); }
    Q_INVOKABLE bool MsetPageMargins(QPrinter* o, const QMarginsF& x1) { return o->setPageMargins(x1); }
    Q_INVOKABLE bool MsetPageMargins(QPrinter* o, const QMarginsF& x1, QPageLayout::Unit x2) { return o->setPageMargins(x1, x2); }
    Q_INVOKABLE void MsetPageOrder(QPrinter* o, QPrinter::PageOrder x1) { o->setPageOrder(x1); }
    Q_INVOKABLE bool MsetPageOrientation(QPrinter* o, QPageLayout::Orientation x1) { return o->setPageOrientation(x1); }
    Q_INVOKABLE bool MsetPageSize(QPrinter* o, const QPageSize& x1) { return o->setPageSize(x1); }
    Q_INVOKABLE void MsetPaperSource(QPrinter* o, QPrinter::PaperSource x1) { o->setPaperSource(x1); }
    Q_INVOKABLE void MsetPrintProgram(QPrinter* o, const QString& x1) { o->setPrintProgram(x1); }
    Q_INVOKABLE void MsetPrintRange(QPrinter* o, QPrinter::PrintRange x1) { o->setPrintRange(x1); }
    Q_INVOKABLE void MsetPrinterName(QPrinter* o, const QString& x1) { o->setPrinterName(x1); }
    Q_INVOKABLE void MsetResolution(QPrinter* o, int x1) { o->setResolution(x1); }
    Q_INVOKABLE QList<int> MsupportedResolutions(QPrinter* o) const { return o->supportedResolutions(); }
    Q_INVOKABLE bool MsupportsMultipleCopies(QPrinter* o) const { return o->supportsMultipleCopies(); }
    Q_INVOKABLE int MtoPage(QPrinter* o) const { return o->toPage(); }
    Q_INVOKABLE bool MnewPage(QPrinter* o) { return o->newPage(); }
};

class EQL_EXPORT N166 : public N62 { // QRadialGradient
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRadialGradient(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, qreal x2, const QPointF& x3) { return new LRadialGradient(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5) { return new LRadialGradient(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, qreal x2) { return new LRadialGradient(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3) { return new LRadialGradient(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, qreal x2, const QPointF& x3, qreal x4) { return new LRadialGradient(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { return new LRadialGradient(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QPointF Mcenter(QRadialGradient* o) const { return o->center(); }
    Q_INVOKABLE qreal McenterRadius(QRadialGradient* o) const { return o->centerRadius(); }
    Q_INVOKABLE QPointF MfocalPoint(QRadialGradient* o) const { return o->focalPoint(); }
    Q_INVOKABLE qreal MfocalRadius(QRadialGradient* o) const { return o->focalRadius(); }
    Q_INVOKABLE qreal Mradius(QRadialGradient* o) const { return o->radius(); }
    Q_INVOKABLE void MsetCenter(QRadialGradient* o, const QPointF& x1) { o->setCenter(x1); }
    Q_INVOKABLE void MsetCenter(QRadialGradient* o, qreal x1, qreal x2) { o->setCenter(x1, x2); }
    Q_INVOKABLE void MsetCenterRadius(QRadialGradient* o, qreal x1) { o->setCenterRadius(x1); }
    Q_INVOKABLE void MsetFocalPoint(QRadialGradient* o, const QPointF& x1) { o->setFocalPoint(x1); }
    Q_INVOKABLE void MsetFocalPoint(QRadialGradient* o, qreal x1, qreal x2) { o->setFocalPoint(x1, x2); }
    Q_INVOKABLE void MsetFocalRadius(QRadialGradient* o, qreal x1) { o->setFocalRadius(x1); }
    Q_INVOKABLE void MsetRadius(QRadialGradient* o, qreal x1) { o->setRadius(x1); }
};

class EQL_EXPORT N170 : public N49 { // QResizeEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QSize& x1, const QSize& x2) { return new LResizeEvent(u, x1, x2); }
    Q_INVOKABLE QSize MoldSize(QResizeEvent* o) const { return o->oldSize(); }
    Q_INVOKABLE QSize Msize(QResizeEvent* o) const { return o->size(); }
};

class EQL_EXPORT N189 : public N49 { // QScrollEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPointF& x1, const QPointF& x2, QScrollEvent::ScrollState x3) { return new LScrollEvent(u, x1, x2, x3); }
    Q_INVOKABLE QPointF McontentPos(QScrollEvent* o) const { return o->contentPos(); }
    Q_INVOKABLE QPointF MovershootDistance(QScrollEvent* o) const { return o->overshootDistance(); }
    Q_INVOKABLE int MscrollState(QScrollEvent* o) const { return o->scrollState(); }
};

class EQL_EXPORT N190 : public N49 { // QScrollPrepareEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LScrollPrepareEvent(u, x1); }
    Q_INVOKABLE QPointF McontentPos(QScrollPrepareEvent* o) const { return o->contentPos(); }
    Q_INVOKABLE QRectF McontentPosRange(QScrollPrepareEvent* o) const { return o->contentPosRange(); }
    Q_INVOKABLE void MsetContentPos(QScrollPrepareEvent* o, const QPointF& x1) { o->setContentPos(x1); }
    Q_INVOKABLE void MsetContentPosRange(QScrollPrepareEvent* o, const QRectF& x1) { o->setContentPosRange(x1); }
    Q_INVOKABLE void MsetViewportSize(QScrollPrepareEvent* o, const QSizeF& x1) { o->setViewportSize(x1); }
    Q_INVOKABLE QPointF MstartPos(QScrollPrepareEvent* o) const { return o->startPos(); }
    Q_INVOKABLE QSizeF MviewportSize(QScrollPrepareEvent* o) const { return o->viewportSize(); }
};

class EQL_EXPORT N192 : public N49 { // QShortcutEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QKeySequence& x1, int x2, bool x3 = false) { return new LShortcutEvent(u, x1, x2, x3); }
    Q_INVOKABLE bool MisAmbiguous(QShortcutEvent* o) const { return o->isAmbiguous(); }
    Q_INVOKABLE QKeySequence Mkey(QShortcutEvent* o) const { return o->key(); }
    Q_INVOKABLE int MshortcutId(QShortcutEvent* o) const { return o->shortcutId(); }
};

class EQL_EXPORT N193 : public N49 { // QShowEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LShowEvent(u); }
};

class EQL_EXPORT N195 : public N108 { // QSpacerItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) { return new LSpacerItem(u, x1, x2, x3, x4); }
    Q_INVOKABLE void MchangeSize(QSpacerItem* o, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) { o->changeSize(x1, x2, x3, x4); }
    Q_INVOKABLE QSizePolicy MsizePolicy(QSpacerItem* o) const { return o->sizePolicy(); }
    Q_INVOKABLE int MexpandingDirections(QSpacerItem* o) const { return o->expandingDirections(); }
    Q_INVOKABLE QRect Mgeometry(QSpacerItem* o) const { return o->geometry(); }
    Q_INVOKABLE bool MisEmpty(QSpacerItem* o) const { return o->isEmpty(); }
    Q_INVOKABLE QSize MmaximumSize(QSpacerItem* o) const { return o->maximumSize(); }
    Q_INVOKABLE QSize MminimumSize(QSpacerItem* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QSpacerItem* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QSpacerItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QSpacerItem* MspacerItem(QSpacerItem* o) { return o->spacerItem(); }
};

class EQL_EXPORT N211 : public N49 { // QStatusTipEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LStatusTipEvent(u, x1); }
    Q_INVOKABLE QString Mtip(QStatusTipEvent* o) const { return o->tip(); }
};

class EQL_EXPORT N214 : public N213 { // QStyleOptionGraphicsItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LStyleOptionGraphicsItem(u); }
    Q_INVOKABLE void* C(uint u, const QStyleOptionGraphicsItem& x1) { return new LStyleOptionGraphicsItem(u, x1); }
    Q_INVOKABLE qreal SlevelOfDetailFromTransform(const QTransform& x1) { return QStyleOptionGraphicsItem::levelOfDetailFromTransform(x1); }
};

class EQL_EXPORT N222 : public N98 { // QTabletEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QTabletEvent::Type x1, const QPointF& x2, const QPointF& x3, int x4, int x5, qreal x6, int x7, int x8, qreal x9, qreal x10, int x11, Qt::KeyboardModifiers x12, qint64 x13, Qt::MouseButton x14, Qt::MouseButtons x15) { return new LTabletEvent(u, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15); }
    Q_INVOKABLE int Mbutton(QTabletEvent* o) const { return o->button(); }
    Q_INVOKABLE int Mbuttons(QTabletEvent* o) const { return o->buttons(); }
    Q_INVOKABLE int Mdevice(QTabletEvent* o) const { return o->device(); }
    Q_INVOKABLE QPoint MglobalPos(QTabletEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE QPointF MglobalPosF(QTabletEvent* o) const { return o->globalPosF(); }
    Q_INVOKABLE int MglobalX(QTabletEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QTabletEvent* o) const { return o->globalY(); }
    Q_INVOKABLE qreal MhiResGlobalX(QTabletEvent* o) const { return o->hiResGlobalX(); }
    Q_INVOKABLE qreal MhiResGlobalY(QTabletEvent* o) const { return o->hiResGlobalY(); }
    Q_INVOKABLE int MpointerType(QTabletEvent* o) const { return o->pointerType(); }
    Q_INVOKABLE QPoint Mpos(QTabletEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MposF(QTabletEvent* o) const { return o->posF(); }
    Q_INVOKABLE qreal Mpressure(QTabletEvent* o) const { return o->pressure(); }
    Q_INVOKABLE qreal Mrotation(QTabletEvent* o) const { return o->rotation(); }
    Q_INVOKABLE qreal MtangentialPressure(QTabletEvent* o) const { return o->tangentialPressure(); }
    Q_INVOKABLE qlonglong MuniqueId(QTabletEvent* o) const { return o->uniqueId(); }
    Q_INVOKABLE int Mx(QTabletEvent* o) const { return o->x(); }
    Q_INVOKABLE int MxTilt(QTabletEvent* o) const { return o->xTilt(); }
    Q_INVOKABLE int My(QTabletEvent* o) const { return o->y(); }
    Q_INVOKABLE int MyTilt(QTabletEvent* o) const { return o->yTilt(); }
    Q_INVOKABLE int Mz(QTabletEvent* o) const { return o->z(); }
};

class EQL_EXPORT N224 : public N234 { // QTextBlockFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextBlockFormat(u); }
    Q_INVOKABLE int Malignment(QTextBlockFormat* o) const { return o->alignment(); }
    Q_INVOKABLE qreal MbottomMargin(QTextBlockFormat* o) const { return o->bottomMargin(); }
    Q_INVOKABLE int Mindent(QTextBlockFormat* o) const { return o->indent(); }
    Q_INVOKABLE bool MisValid(QTextBlockFormat* o) const { return o->isValid(); }
    Q_INVOKABLE qreal MleftMargin(QTextBlockFormat* o) const { return o->leftMargin(); }
    Q_INVOKABLE qreal MlineHeight(QTextBlockFormat* o, qreal x1, qreal x2) const { return o->lineHeight(x1, x2); }
    Q_INVOKABLE qreal MlineHeight(QTextBlockFormat* o) const { return o->lineHeight(); }
    Q_INVOKABLE int MlineHeightType(QTextBlockFormat* o) const { return o->lineHeightType(); }
    Q_INVOKABLE bool MnonBreakableLines(QTextBlockFormat* o) const { return o->nonBreakableLines(); }
    Q_INVOKABLE int MpageBreakPolicy(QTextBlockFormat* o) const { return o->pageBreakPolicy(); }
    Q_INVOKABLE qreal MrightMargin(QTextBlockFormat* o) const { return o->rightMargin(); }
    Q_INVOKABLE void MsetAlignment(QTextBlockFormat* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetBottomMargin(QTextBlockFormat* o, qreal x1) { o->setBottomMargin(x1); }
    Q_INVOKABLE void MsetIndent(QTextBlockFormat* o, int x1) { o->setIndent(x1); }
    Q_INVOKABLE void MsetLeftMargin(QTextBlockFormat* o, qreal x1) { o->setLeftMargin(x1); }
    Q_INVOKABLE void MsetLineHeight(QTextBlockFormat* o, qreal x1, int x2) { o->setLineHeight(x1, x2); }
    Q_INVOKABLE void MsetNonBreakableLines(QTextBlockFormat* o, bool x1) { o->setNonBreakableLines(x1); }
    Q_INVOKABLE void MsetPageBreakPolicy(QTextBlockFormat* o, QTextBlockFormat::PageBreakFlags x1) { o->setPageBreakPolicy(x1); }
    Q_INVOKABLE void MsetRightMargin(QTextBlockFormat* o, qreal x1) { o->setRightMargin(x1); }
    Q_INVOKABLE void MsetTabPositions(QTextBlockFormat* o, const QList<QTextOption::Tab>& x1) { o->setTabPositions(x1); }
    Q_INVOKABLE void MsetTextIndent(QTextBlockFormat* o, qreal x1) { o->setTextIndent(x1); }
    Q_INVOKABLE void MsetTopMargin(QTextBlockFormat* o, qreal x1) { o->setTopMargin(x1); }
    Q_INVOKABLE QList<QTextOption::Tab> MtabPositions(QTextBlockFormat* o) const { return o->tabPositions(); }
    Q_INVOKABLE qreal MtextIndent(QTextBlockFormat* o) const { return o->textIndent(); }
    Q_INVOKABLE qreal MtopMargin(QTextBlockFormat* o) const { return o->topMargin(); }
};

class EQL_EXPORT N227 : public N234 { // QTextCharFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextCharFormat(u); }
    Q_INVOKABLE QString ManchorHref(QTextCharFormat* o) const { return o->anchorHref(); }
    Q_INVOKABLE QStringList ManchorNames(QTextCharFormat* o) const { return o->anchorNames(); }
    Q_INVOKABLE QFont Mfont(QTextCharFormat* o) const { return o->font(); }
    Q_INVOKABLE int MfontCapitalization(QTextCharFormat* o) const { return o->fontCapitalization(); }
    Q_INVOKABLE QString MfontFamily(QTextCharFormat* o) const { return o->fontFamily(); }
    Q_INVOKABLE bool MfontFixedPitch(QTextCharFormat* o) const { return o->fontFixedPitch(); }
    Q_INVOKABLE int MfontHintingPreference(QTextCharFormat* o) const { return o->fontHintingPreference(); }
    Q_INVOKABLE bool MfontItalic(QTextCharFormat* o) const { return o->fontItalic(); }
    Q_INVOKABLE bool MfontKerning(QTextCharFormat* o) const { return o->fontKerning(); }
    Q_INVOKABLE qreal MfontLetterSpacing(QTextCharFormat* o) const { return o->fontLetterSpacing(); }
    Q_INVOKABLE int MfontLetterSpacingType(QTextCharFormat* o) const { return o->fontLetterSpacingType(); }
    Q_INVOKABLE bool MfontOverline(QTextCharFormat* o) const { return o->fontOverline(); }
    Q_INVOKABLE qreal MfontPointSize(QTextCharFormat* o) const { return o->fontPointSize(); }
    Q_INVOKABLE int MfontStretch(QTextCharFormat* o) const { return o->fontStretch(); }
    Q_INVOKABLE bool MfontStrikeOut(QTextCharFormat* o) const { return o->fontStrikeOut(); }
    Q_INVOKABLE int MfontStyleHint(QTextCharFormat* o) const { return o->fontStyleHint(); }
    Q_INVOKABLE int MfontStyleStrategy(QTextCharFormat* o) const { return o->fontStyleStrategy(); }
    Q_INVOKABLE bool MfontUnderline(QTextCharFormat* o) const { return o->fontUnderline(); }
    Q_INVOKABLE int MfontWeight(QTextCharFormat* o) const { return o->fontWeight(); }
    Q_INVOKABLE qreal MfontWordSpacing(QTextCharFormat* o) const { return o->fontWordSpacing(); }
    Q_INVOKABLE bool MisAnchor(QTextCharFormat* o) const { return o->isAnchor(); }
    Q_INVOKABLE bool MisValid(QTextCharFormat* o) const { return o->isValid(); }
    Q_INVOKABLE void MsetAnchor(QTextCharFormat* o, bool x1) { o->setAnchor(x1); }
    Q_INVOKABLE void MsetAnchorHref(QTextCharFormat* o, const QString& x1) { o->setAnchorHref(x1); }
    Q_INVOKABLE void MsetAnchorNames(QTextCharFormat* o, const QStringList& x1) { o->setAnchorNames(x1); }
    Q_INVOKABLE void MsetFont(QTextCharFormat* o, const QFont& x1, QTextCharFormat::FontPropertiesInheritanceBehavior x2) { o->setFont(x1, x2); }
    Q_INVOKABLE void MsetFont(QTextCharFormat* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetFontCapitalization(QTextCharFormat* o, QFont::Capitalization x1) { o->setFontCapitalization(x1); }
    Q_INVOKABLE void MsetFontFamily(QTextCharFormat* o, const QString& x1) { o->setFontFamily(x1); }
    Q_INVOKABLE void MsetFontFixedPitch(QTextCharFormat* o, bool x1) { o->setFontFixedPitch(x1); }
    Q_INVOKABLE void MsetFontHintingPreference(QTextCharFormat* o, QFont::HintingPreference x1) { o->setFontHintingPreference(x1); }
    Q_INVOKABLE void MsetFontItalic(QTextCharFormat* o, bool x1) { o->setFontItalic(x1); }
    Q_INVOKABLE void MsetFontKerning(QTextCharFormat* o, bool x1) { o->setFontKerning(x1); }
    Q_INVOKABLE void MsetFontLetterSpacing(QTextCharFormat* o, qreal x1) { o->setFontLetterSpacing(x1); }
    Q_INVOKABLE void MsetFontLetterSpacingType(QTextCharFormat* o, QFont::SpacingType x1) { o->setFontLetterSpacingType(x1); }
    Q_INVOKABLE void MsetFontOverline(QTextCharFormat* o, bool x1) { o->setFontOverline(x1); }
    Q_INVOKABLE void MsetFontPointSize(QTextCharFormat* o, qreal x1) { o->setFontPointSize(x1); }
    Q_INVOKABLE void MsetFontStretch(QTextCharFormat* o, int x1) { o->setFontStretch(x1); }
    Q_INVOKABLE void MsetFontStrikeOut(QTextCharFormat* o, bool x1) { o->setFontStrikeOut(x1); }
    Q_INVOKABLE void MsetFontStyleHint(QTextCharFormat* o, QFont::StyleHint x1, QFont::StyleStrategy x2 = QFont::PreferDefault) { o->setFontStyleHint(x1, x2); }
    Q_INVOKABLE void MsetFontStyleStrategy(QTextCharFormat* o, QFont::StyleStrategy x1) { o->setFontStyleStrategy(x1); }
    Q_INVOKABLE void MsetFontUnderline(QTextCharFormat* o, bool x1) { o->setFontUnderline(x1); }
    Q_INVOKABLE void MsetFontWeight(QTextCharFormat* o, int x1) { o->setFontWeight(x1); }
    Q_INVOKABLE void MsetFontWordSpacing(QTextCharFormat* o, qreal x1) { o->setFontWordSpacing(x1); }
    Q_INVOKABLE void MsetTextOutline(QTextCharFormat* o, const QPen& x1) { o->setTextOutline(x1); }
    Q_INVOKABLE void MsetToolTip(QTextCharFormat* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetUnderlineColor(QTextCharFormat* o, const QColor& x1) { o->setUnderlineColor(x1); }
    Q_INVOKABLE void MsetUnderlineStyle(QTextCharFormat* o, QTextCharFormat::UnderlineStyle x1) { o->setUnderlineStyle(x1); }
    Q_INVOKABLE void MsetVerticalAlignment(QTextCharFormat* o, QTextCharFormat::VerticalAlignment x1) { o->setVerticalAlignment(x1); }
    Q_INVOKABLE QPen MtextOutline(QTextCharFormat* o) const { return o->textOutline(); }
    Q_INVOKABLE QString MtoolTip(QTextCharFormat* o) const { return o->toolTip(); }
    Q_INVOKABLE QColor MunderlineColor(QTextCharFormat* o) const { return o->underlineColor(); }
    Q_INVOKABLE int MunderlineStyle(QTextCharFormat* o) const { return o->underlineStyle(); }
    Q_INVOKABLE int MverticalAlignment(QTextCharFormat* o) const { return o->verticalAlignment(); }
};

class EQL_EXPORT N236 : public N234 { // QTextFrameFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextFrameFormat(u); }
    Q_INVOKABLE qreal Mborder(QTextFrameFormat* o) const { return o->border(); }
    Q_INVOKABLE QBrush MborderBrush(QTextFrameFormat* o) const { return o->borderBrush(); }
    Q_INVOKABLE int MborderStyle(QTextFrameFormat* o) const { return o->borderStyle(); }
    Q_INVOKABLE qreal MbottomMargin(QTextFrameFormat* o) const { return o->bottomMargin(); }
    Q_INVOKABLE QTextLength Mheight(QTextFrameFormat* o) const { return o->height(); }
    Q_INVOKABLE bool MisValid(QTextFrameFormat* o) const { return o->isValid(); }
    Q_INVOKABLE qreal MleftMargin(QTextFrameFormat* o) const { return o->leftMargin(); }
    Q_INVOKABLE qreal Mmargin(QTextFrameFormat* o) const { return o->margin(); }
    Q_INVOKABLE qreal Mpadding(QTextFrameFormat* o) const { return o->padding(); }
    Q_INVOKABLE int MpageBreakPolicy(QTextFrameFormat* o) const { return o->pageBreakPolicy(); }
    Q_INVOKABLE int Mposition(QTextFrameFormat* o) const { return o->position(); }
    Q_INVOKABLE qreal MrightMargin(QTextFrameFormat* o) const { return o->rightMargin(); }
    Q_INVOKABLE void MsetBorder(QTextFrameFormat* o, qreal x1) { o->setBorder(x1); }
    Q_INVOKABLE void MsetBorderBrush(QTextFrameFormat* o, const QBrush& x1) { o->setBorderBrush(x1); }
    Q_INVOKABLE void MsetBorderStyle(QTextFrameFormat* o, QTextFrameFormat::BorderStyle x1) { o->setBorderStyle(x1); }
    Q_INVOKABLE void MsetBottomMargin(QTextFrameFormat* o, qreal x1) { o->setBottomMargin(x1); }
    Q_INVOKABLE void MsetHeight(QTextFrameFormat* o, const QTextLength& x1) { o->setHeight(x1); }
    Q_INVOKABLE void MsetHeight(QTextFrameFormat* o, qreal x1) { o->setHeight(x1); }
    Q_INVOKABLE void MsetLeftMargin(QTextFrameFormat* o, qreal x1) { o->setLeftMargin(x1); }
    Q_INVOKABLE void MsetMargin(QTextFrameFormat* o, qreal x1) { o->setMargin(x1); }
    Q_INVOKABLE void MsetPadding(QTextFrameFormat* o, qreal x1) { o->setPadding(x1); }
    Q_INVOKABLE void MsetPageBreakPolicy(QTextFrameFormat* o, QTextFrameFormat::PageBreakFlags x1) { o->setPageBreakPolicy(x1); }
    Q_INVOKABLE void MsetPosition(QTextFrameFormat* o, QTextFrameFormat::Position x1) { o->setPosition(x1); }
    Q_INVOKABLE void MsetRightMargin(QTextFrameFormat* o, qreal x1) { o->setRightMargin(x1); }
    Q_INVOKABLE void MsetTopMargin(QTextFrameFormat* o, qreal x1) { o->setTopMargin(x1); }
    Q_INVOKABLE void MsetWidth(QTextFrameFormat* o, const QTextLength& x1) { o->setWidth(x1); }
    Q_INVOKABLE void MsetWidth(QTextFrameFormat* o, qreal x1) { o->setWidth(x1); }
    Q_INVOKABLE qreal MtopMargin(QTextFrameFormat* o) const { return o->topMargin(); }
    Q_INVOKABLE QTextLength Mwidth(QTextFrameFormat* o) const { return o->width(); }
};

class EQL_EXPORT N237 : public N227 { // QTextImageFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextImageFormat(u); }
    Q_INVOKABLE qreal Mheight(QTextImageFormat* o) const { return o->height(); }
    Q_INVOKABLE bool MisValid(QTextImageFormat* o) const { return o->isValid(); }
    Q_INVOKABLE QString Mname(QTextImageFormat* o) const { return o->name(); }
    Q_INVOKABLE void MsetHeight(QTextImageFormat* o, qreal x1) { o->setHeight(x1); }
    Q_INVOKABLE void MsetName(QTextImageFormat* o, const QString& x1) { o->setName(x1); }
    Q_INVOKABLE void MsetWidth(QTextImageFormat* o, qreal x1) { o->setWidth(x1); }
    Q_INVOKABLE qreal Mwidth(QTextImageFormat* o) const { return o->width(); }
};

class EQL_EXPORT N241 : public N234 { // QTextListFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextListFormat(u); }
    Q_INVOKABLE int Mindent(QTextListFormat* o) const { return o->indent(); }
    Q_INVOKABLE bool MisValid(QTextListFormat* o) const { return o->isValid(); }
    Q_INVOKABLE QString MnumberPrefix(QTextListFormat* o) const { return o->numberPrefix(); }
    Q_INVOKABLE QString MnumberSuffix(QTextListFormat* o) const { return o->numberSuffix(); }
    Q_INVOKABLE void MsetIndent(QTextListFormat* o, int x1) { o->setIndent(x1); }
    Q_INVOKABLE void MsetNumberPrefix(QTextListFormat* o, const QString& x1) { o->setNumberPrefix(x1); }
    Q_INVOKABLE void MsetNumberSuffix(QTextListFormat* o, const QString& x1) { o->setNumberSuffix(x1); }
    Q_INVOKABLE void MsetStyle(QTextListFormat* o, QTextListFormat::Style x1) { o->setStyle(x1); }
    Q_INVOKABLE int Mstyle(QTextListFormat* o) const { return o->style(); }
};

class EQL_EXPORT N244 : public N227 { // QTextTableCellFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextTableCellFormat(u); }
    Q_INVOKABLE qreal MbottomPadding(QTextTableCellFormat* o) const { return o->bottomPadding(); }
    Q_INVOKABLE bool MisValid(QTextTableCellFormat* o) const { return o->isValid(); }
    Q_INVOKABLE qreal MleftPadding(QTextTableCellFormat* o) const { return o->leftPadding(); }
    Q_INVOKABLE qreal MrightPadding(QTextTableCellFormat* o) const { return o->rightPadding(); }
    Q_INVOKABLE void MsetBottomPadding(QTextTableCellFormat* o, qreal x1) { o->setBottomPadding(x1); }
    Q_INVOKABLE void MsetLeftPadding(QTextTableCellFormat* o, qreal x1) { o->setLeftPadding(x1); }
    Q_INVOKABLE void MsetPadding(QTextTableCellFormat* o, qreal x1) { o->setPadding(x1); }
    Q_INVOKABLE void MsetRightPadding(QTextTableCellFormat* o, qreal x1) { o->setRightPadding(x1); }
    Q_INVOKABLE void MsetTopPadding(QTextTableCellFormat* o, qreal x1) { o->setTopPadding(x1); }
    Q_INVOKABLE qreal MtopPadding(QTextTableCellFormat* o) const { return o->topPadding(); }
};

class EQL_EXPORT N245 : public N236 { // QTextTableFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextTableFormat(u); }
    Q_INVOKABLE int Malignment(QTextTableFormat* o) const { return o->alignment(); }
    Q_INVOKABLE qreal McellPadding(QTextTableFormat* o) const { return o->cellPadding(); }
    Q_INVOKABLE qreal McellSpacing(QTextTableFormat* o) const { return o->cellSpacing(); }
    Q_INVOKABLE void MclearColumnWidthConstraints(QTextTableFormat* o) { o->clearColumnWidthConstraints(); }
    Q_INVOKABLE QVector<QTextLength> McolumnWidthConstraints(QTextTableFormat* o) const { return o->columnWidthConstraints(); }
    Q_INVOKABLE int Mcolumns(QTextTableFormat* o) const { return o->columns(); }
    Q_INVOKABLE int MheaderRowCount(QTextTableFormat* o) const { return o->headerRowCount(); }
    Q_INVOKABLE bool MisValid(QTextTableFormat* o) const { return o->isValid(); }
    Q_INVOKABLE void MsetAlignment(QTextTableFormat* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetCellPadding(QTextTableFormat* o, qreal x1) { o->setCellPadding(x1); }
    Q_INVOKABLE void MsetCellSpacing(QTextTableFormat* o, qreal x1) { o->setCellSpacing(x1); }
    Q_INVOKABLE void MsetColumnWidthConstraints(QTextTableFormat* o, const QVector<QTextLength>& x1) { o->setColumnWidthConstraints(x1); }
    Q_INVOKABLE void MsetHeaderRowCount(QTextTableFormat* o, int x1) { o->setHeaderRowCount(x1); }
};

class EQL_EXPORT N248 : public N49 { // QTimerEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1) { return new LTimerEvent(u, x1); }
    Q_INVOKABLE int MtimerId(QTimerEvent* o) const { return o->timerId(); }
};

class EQL_EXPORT N251 : public N98 { // QTouchEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QEvent::Type x1, QTouchDevice* x2 = 0, Qt::KeyboardModifiers x3 = Qt::NoModifier, Qt::TouchPointStates x4 = 0, const QList<QTouchEvent::TouchPoint>& x5 = QList<QTouchEvent::TouchPoint>()) { return new LTouchEvent(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QTouchDevice* Mdevice(QTouchEvent* o) const { return o->device(); }
    Q_INVOKABLE QObject* Mtarget(QTouchEvent* o) const { return o->target(); }
    Q_INVOKABLE int MtouchPointStates(QTouchEvent* o) const { return o->touchPointStates(); }
    Q_INVOKABLE QList<QTouchEvent::TouchPoint> MtouchPoints(QTouchEvent* o) const { return o->touchPoints(); }
    Q_INVOKABLE QWindow* Mwindow(QTouchEvent* o) const { return o->window(); }
};

class EQL_EXPORT N273 : public N49 { // QWhatsThisClickedEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LWhatsThisClickedEvent(u, x1); }
    Q_INVOKABLE QString Mhref(QWhatsThisClickedEvent* o) const { return o->href(); }
};

class EQL_EXPORT N274 : public N98 { // QWheelEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPointF& x1, const QPointF& x2, QPoint x3, QPoint x4, int x5, Qt::Orientation x6, Qt::MouseButtons x7, Qt::KeyboardModifiers x8) { return new LWheelEvent(u, x1, x2, x3, x4, x5, x6, x7, x8); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, const QPointF& x2, QPoint x3, QPoint x4, int x5, Qt::Orientation x6, Qt::MouseButtons x7, Qt::KeyboardModifiers x8, Qt::ScrollPhase x9) { return new LWheelEvent(u, x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, const QPointF& x2, QPoint x3, QPoint x4, int x5, Qt::Orientation x6, Qt::MouseButtons x7, Qt::KeyboardModifiers x8, Qt::ScrollPhase x9, Qt::MouseEventSource x10) { return new LWheelEvent(u, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10); }
    Q_INVOKABLE QPoint MangleDelta(QWheelEvent* o) const { return o->angleDelta(); }
    Q_INVOKABLE int Mbuttons(QWheelEvent* o) const { return o->buttons(); }
    Q_INVOKABLE QPoint MglobalPos(QWheelEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE QPointF MglobalPosF(QWheelEvent* o) const { return o->globalPosF(); }
    Q_INVOKABLE int MglobalX(QWheelEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QWheelEvent* o) const { return o->globalY(); }
    Q_INVOKABLE int Mphase(QWheelEvent* o) const { return o->phase(); }
    Q_INVOKABLE QPoint MpixelDelta(QWheelEvent* o) const { return o->pixelDelta(); }
    Q_INVOKABLE QPoint Mpos(QWheelEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MposF(QWheelEvent* o) const { return o->posF(); }
    Q_INVOKABLE int Msource(QWheelEvent* o) const { return o->source(); }
    Q_INVOKABLE int Mx(QWheelEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QWheelEvent* o) const { return o->y(); }
};

class EQL_EXPORT N275 : public N108 { // QWidgetItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1) { return new LWidgetItem(u, x1); }
    Q_INVOKABLE int McontrolTypes(QWidgetItem* o) const { return o->controlTypes(); }
    Q_INVOKABLE int MexpandingDirections(QWidgetItem* o) const { return o->expandingDirections(); }
    Q_INVOKABLE QRect Mgeometry(QWidgetItem* o) const { return o->geometry(); }
    Q_INVOKABLE bool MhasHeightForWidth(QWidgetItem* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE int MheightForWidth(QWidgetItem* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE bool MisEmpty(QWidgetItem* o) const { return o->isEmpty(); }
    Q_INVOKABLE QSize MmaximumSize(QWidgetItem* o) const { return o->maximumSize(); }
    Q_INVOKABLE QSize MminimumSize(QWidgetItem* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QWidgetItem* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QWidgetItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QWidget* Mwidget(QWidgetItem* o) { return o->widget(); }
};

class EQL_EXPORT N276 : public N49 { // QWindowStateChangeEvent
    Q_OBJECT
public:
    Q_INVOKABLE int MoldState(QWindowStateChangeEvent* o) const { return o->oldState(); }
};

class EQL_EXPORT N25 : public N149 { // QBitmap
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBitmap(u); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LBitmap(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1, int x2) { return new LBitmap(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QSize& x1) { return new LBitmap(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const char* x2 = 0) { return new LBitmap(u, x1, x2); }
    Q_INVOKABLE void Mclear(QBitmap* o) { o->clear(); }
    Q_INVOKABLE void Mswap(QBitmap* o, QBitmap& x1) { o->swap(x1); }
    Q_INVOKABLE QBitmap Mtransformed(QBitmap* o, const QTransform& x1) const { return o->transformed(x1); }
    Q_INVOKABLE QBitmap SfromImage(const QImage& x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) { return QBitmap::fromImage(x1, x2); }
};

class EQL_EXPORT N33 : public N98 { // QContextMenuEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QContextMenuEvent::Reason x1, const QPoint& x2, const QPoint& x3, Qt::KeyboardModifiers x4) { return new LContextMenuEvent(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, QContextMenuEvent::Reason x1, const QPoint& x2, const QPoint& x3) { return new LContextMenuEvent(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QContextMenuEvent::Reason x1, const QPoint& x2) { return new LContextMenuEvent(u, x1, x2); }
    Q_INVOKABLE QPoint MglobalPos(QContextMenuEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QContextMenuEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QContextMenuEvent* o) const { return o->globalY(); }
    Q_INVOKABLE QPoint Mpos(QContextMenuEvent* o) const { return o->pos(); }
    Q_INVOKABLE int Mreason(QContextMenuEvent* o) const { return o->reason(); }
    Q_INVOKABLE int Mx(QContextMenuEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QContextMenuEvent* o) const { return o->y(); }
};

class EQL_EXPORT N43 : public N44 { // QDragMoveEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, QDragMoveEvent::Type x6 = QDragMoveEvent::DragMove) { return new LDragMoveEvent(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void Maccept(QDragMoveEvent* o, const QRect& x1) { o->accept(x1); }
    Q_INVOKABLE void Maccept(QDragMoveEvent* o) { o->accept(); }
    Q_INVOKABLE QRect ManswerRect(QDragMoveEvent* o) const { return o->answerRect(); }
    Q_INVOKABLE void Mignore(QDragMoveEvent* o, const QRect& x1) { o->ignore(x1); }
    Q_INVOKABLE void Mignore(QDragMoveEvent* o) { o->ignore(); }
};

class EQL_EXPORT N63 : public N68 { // QGraphicsAnchorLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsLayoutItem* x1 = 0) { return new LGraphicsAnchorLayout(u, x1); }
    Q_INVOKABLE QGraphicsAnchor* MaddAnchor(QGraphicsAnchorLayout* o, QGraphicsLayoutItem* x1, Qt::AnchorPoint x2, QGraphicsLayoutItem* x3, Qt::AnchorPoint x4) { return o->addAnchor(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddAnchors(QGraphicsAnchorLayout* o, QGraphicsLayoutItem* x1, QGraphicsLayoutItem* x2, Qt::Orientations x3 = Qt::Horizontal|Qt::Vertical) { o->addAnchors(x1, x2, x3); }
    Q_INVOKABLE void MaddCornerAnchors(QGraphicsAnchorLayout* o, QGraphicsLayoutItem* x1, Qt::Corner x2, QGraphicsLayoutItem* x3, Qt::Corner x4) { o->addCornerAnchors(x1, x2, x3, x4); }
    Q_INVOKABLE QGraphicsAnchor* Manchor(QGraphicsAnchorLayout* o, QGraphicsLayoutItem* x1, Qt::AnchorPoint x2, QGraphicsLayoutItem* x3, Qt::AnchorPoint x4) { return o->anchor(x1, x2, x3, x4); }
    Q_INVOKABLE qreal MhorizontalSpacing(QGraphicsAnchorLayout* o) const { return o->horizontalSpacing(); }
    Q_INVOKABLE void MsetHorizontalSpacing(QGraphicsAnchorLayout* o, qreal x1) { o->setHorizontalSpacing(x1); }
    Q_INVOKABLE void MsetSpacing(QGraphicsAnchorLayout* o, qreal x1) { o->setSpacing(x1); }
    Q_INVOKABLE void MsetVerticalSpacing(QGraphicsAnchorLayout* o, qreal x1) { o->setVerticalSpacing(x1); }
    Q_INVOKABLE qreal MverticalSpacing(QGraphicsAnchorLayout* o) const { return o->verticalSpacing(); }
    Q_INVOKABLE int Mcount(QGraphicsAnchorLayout* o) const { return o->count(); }
    Q_INVOKABLE void Minvalidate(QGraphicsAnchorLayout* o) { o->invalidate(); }
    Q_INVOKABLE QGraphicsLayoutItem* MitemAt(QGraphicsAnchorLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE void MremoveAt(QGraphicsAnchorLayout* o, int x1) { o->removeAt(x1); }
    Q_INVOKABLE void MsetGeometry(QGraphicsAnchorLayout* o, const QRectF& x1) { o->setGeometry(x1); }
};

class EQL_EXPORT N65 : public N68 { // QGraphicsGridLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsLayoutItem* x1 = 0) { return new LGraphicsGridLayout(u, x1); }
    Q_INVOKABLE void MaddItem(QGraphicsGridLayout* o, QGraphicsLayoutItem* x1, int x2, int x3, int x4, int x5, Qt::Alignment x6 = 0) { o->addItem(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MaddItem(QGraphicsGridLayout* o, QGraphicsLayoutItem* x1, int x2, int x3, Qt::Alignment x4 = 0) { o->addItem(x1, x2, x3, x4); }
    Q_INVOKABLE int Malignment(QGraphicsGridLayout* o, QGraphicsLayoutItem* x1) const { return o->alignment(x1); }
    Q_INVOKABLE int McolumnAlignment(QGraphicsGridLayout* o, int x1) const { return o->columnAlignment(x1); }
    Q_INVOKABLE int McolumnCount(QGraphicsGridLayout* o) const { return o->columnCount(); }
    Q_INVOKABLE qreal McolumnMaximumWidth(QGraphicsGridLayout* o, int x1) const { return o->columnMaximumWidth(x1); }
    Q_INVOKABLE qreal McolumnMinimumWidth(QGraphicsGridLayout* o, int x1) const { return o->columnMinimumWidth(x1); }
    Q_INVOKABLE qreal McolumnPreferredWidth(QGraphicsGridLayout* o, int x1) const { return o->columnPreferredWidth(x1); }
    Q_INVOKABLE qreal McolumnSpacing(QGraphicsGridLayout* o, int x1) const { return o->columnSpacing(x1); }
    Q_INVOKABLE int McolumnStretchFactor(QGraphicsGridLayout* o, int x1) const { return o->columnStretchFactor(x1); }
    Q_INVOKABLE qreal MhorizontalSpacing(QGraphicsGridLayout* o) const { return o->horizontalSpacing(); }
    Q_INVOKABLE QGraphicsLayoutItem* MitemAt(QGraphicsGridLayout* o, int x1, int x2) const { return o->itemAt(x1, x2); }
    Q_INVOKABLE void MremoveItem(QGraphicsGridLayout* o, QGraphicsLayoutItem* x1) { o->removeItem(x1); }
    Q_INVOKABLE int MrowAlignment(QGraphicsGridLayout* o, int x1) const { return o->rowAlignment(x1); }
    Q_INVOKABLE int MrowCount(QGraphicsGridLayout* o) const { return o->rowCount(); }
    Q_INVOKABLE qreal MrowMaximumHeight(QGraphicsGridLayout* o, int x1) const { return o->rowMaximumHeight(x1); }
    Q_INVOKABLE qreal MrowMinimumHeight(QGraphicsGridLayout* o, int x1) const { return o->rowMinimumHeight(x1); }
    Q_INVOKABLE qreal MrowPreferredHeight(QGraphicsGridLayout* o, int x1) const { return o->rowPreferredHeight(x1); }
    Q_INVOKABLE qreal MrowSpacing(QGraphicsGridLayout* o, int x1) const { return o->rowSpacing(x1); }
    Q_INVOKABLE int MrowStretchFactor(QGraphicsGridLayout* o, int x1) const { return o->rowStretchFactor(x1); }
    Q_INVOKABLE void MsetAlignment(QGraphicsGridLayout* o, QGraphicsLayoutItem* x1, Qt::Alignment x2) { o->setAlignment(x1, x2); }
    Q_INVOKABLE void MsetColumnAlignment(QGraphicsGridLayout* o, int x1, Qt::Alignment x2) { o->setColumnAlignment(x1, x2); }
    Q_INVOKABLE void MsetColumnFixedWidth(QGraphicsGridLayout* o, int x1, qreal x2) { o->setColumnFixedWidth(x1, x2); }
    Q_INVOKABLE void MsetColumnMaximumWidth(QGraphicsGridLayout* o, int x1, qreal x2) { o->setColumnMaximumWidth(x1, x2); }
    Q_INVOKABLE void MsetColumnMinimumWidth(QGraphicsGridLayout* o, int x1, qreal x2) { o->setColumnMinimumWidth(x1, x2); }
    Q_INVOKABLE void MsetColumnPreferredWidth(QGraphicsGridLayout* o, int x1, qreal x2) { o->setColumnPreferredWidth(x1, x2); }
    Q_INVOKABLE void MsetColumnSpacing(QGraphicsGridLayout* o, int x1, qreal x2) { o->setColumnSpacing(x1, x2); }
    Q_INVOKABLE void MsetColumnStretchFactor(QGraphicsGridLayout* o, int x1, int x2) { o->setColumnStretchFactor(x1, x2); }
    Q_INVOKABLE void MsetHorizontalSpacing(QGraphicsGridLayout* o, qreal x1) { o->setHorizontalSpacing(x1); }
    Q_INVOKABLE void MsetRowAlignment(QGraphicsGridLayout* o, int x1, Qt::Alignment x2) { o->setRowAlignment(x1, x2); }
    Q_INVOKABLE void MsetRowFixedHeight(QGraphicsGridLayout* o, int x1, qreal x2) { o->setRowFixedHeight(x1, x2); }
    Q_INVOKABLE void MsetRowMaximumHeight(QGraphicsGridLayout* o, int x1, qreal x2) { o->setRowMaximumHeight(x1, x2); }
    Q_INVOKABLE void MsetRowMinimumHeight(QGraphicsGridLayout* o, int x1, qreal x2) { o->setRowMinimumHeight(x1, x2); }
    Q_INVOKABLE void MsetRowPreferredHeight(QGraphicsGridLayout* o, int x1, qreal x2) { o->setRowPreferredHeight(x1, x2); }
    Q_INVOKABLE void MsetRowSpacing(QGraphicsGridLayout* o, int x1, qreal x2) { o->setRowSpacing(x1, x2); }
    Q_INVOKABLE void MsetRowStretchFactor(QGraphicsGridLayout* o, int x1, int x2) { o->setRowStretchFactor(x1, x2); }
    Q_INVOKABLE void MsetSpacing(QGraphicsGridLayout* o, qreal x1) { o->setSpacing(x1); }
    Q_INVOKABLE void MsetVerticalSpacing(QGraphicsGridLayout* o, qreal x1) { o->setVerticalSpacing(x1); }
    Q_INVOKABLE qreal MverticalSpacing(QGraphicsGridLayout* o) const { return o->verticalSpacing(); }
    Q_INVOKABLE int Mcount(QGraphicsGridLayout* o) const { return o->count(); }
    Q_INVOKABLE void Minvalidate(QGraphicsGridLayout* o) { o->invalidate(); }
    Q_INVOKABLE QGraphicsLayoutItem* MitemAt(QGraphicsGridLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE void MremoveAt(QGraphicsGridLayout* o, int x1) { o->removeAt(x1); }
    Q_INVOKABLE void MsetGeometry(QGraphicsGridLayout* o, const QRectF& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSizeF MsizeHint(QGraphicsGridLayout* o, Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { return o->sizeHint(x1, x2); }
};

class EQL_EXPORT N76 : public N78 { // QGraphicsSceneContextMenuEvent
    Q_OBJECT
public:
    Q_INVOKABLE int Mmodifiers(QGraphicsSceneContextMenuEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneContextMenuEvent* o) const { return o->pos(); }
    Q_INVOKABLE int Mreason(QGraphicsSceneContextMenuEvent* o) const { return o->reason(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneContextMenuEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneContextMenuEvent* o) const { return o->screenPos(); }
};

class EQL_EXPORT N77 : public N78 { // QGraphicsSceneDragDropEvent
    Q_OBJECT
public:
    Q_INVOKABLE void MacceptProposedAction(QGraphicsSceneDragDropEvent* o) { o->acceptProposedAction(); }
    Q_INVOKABLE int Mbuttons(QGraphicsSceneDragDropEvent* o) const { return o->buttons(); }
    Q_INVOKABLE int MdropAction(QGraphicsSceneDragDropEvent* o) const { return o->dropAction(); }
    Q_INVOKABLE const QMimeData* MmimeData(QGraphicsSceneDragDropEvent* o) const { return o->mimeData(); }
    Q_INVOKABLE int Mmodifiers(QGraphicsSceneDragDropEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneDragDropEvent* o) const { return o->pos(); }
    Q_INVOKABLE int MpossibleActions(QGraphicsSceneDragDropEvent* o) const { return o->possibleActions(); }
    Q_INVOKABLE int MproposedAction(QGraphicsSceneDragDropEvent* o) const { return o->proposedAction(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneDragDropEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneDragDropEvent* o) const { return o->screenPos(); }
    Q_INVOKABLE void MsetDropAction(QGraphicsSceneDragDropEvent* o, Qt::DropAction x1) { o->setDropAction(x1); }
    Q_INVOKABLE QWidget* Msource(QGraphicsSceneDragDropEvent* o) const { return o->source(); }
};

class EQL_EXPORT N92 : public N98 { // QHoverEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QHoverEvent::Type x1, const QPointF& x2, const QPointF& x3, Qt::KeyboardModifiers x4 = Qt::NoModifier) { return new LHoverEvent(u, x1, x2, x3, x4); }
    Q_INVOKABLE QPoint MoldPos(QHoverEvent* o) const { return o->oldPos(); }
    Q_INVOKABLE QPointF MoldPosF(QHoverEvent* o) const { return o->oldPosF(); }
    Q_INVOKABLE QPoint Mpos(QHoverEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MposF(QHoverEvent* o) const { return o->posF(); }
};

class EQL_EXPORT N41 : public N43 { // QDragEnterEvent
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5) { return new LDragEnterEvent(u, x1, x2, x3, x4, x5); }
};

QT_END_NAMESPACE

#endif
