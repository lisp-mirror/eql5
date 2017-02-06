// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtWidgets>
#include <QtPrintSupport>

QT_BEGIN_NAMESPACE

class LJSValue : public QJSValue {
    friend class N104;
public:
    LJSValue(uint u, SpecialValue x1 = UndefinedValue) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, const QJSValue& x1) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, bool x1) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, int x1) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, uint x1) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, double x1) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, const QString& x1) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, const QLatin1String& x1) : QJSValue(x1), unique(u) {}
    LJSValue(uint u, const char* x1) : QJSValue(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LJSValueIterator : public QJSValueIterator {
    friend class N105;
public:
    LJSValueIterator(uint u, const QJSValue& x1) : QJSValueIterator(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor {
    friend class N154;
public:
    LQmlAbstractUrlInterceptor(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QUrl intercept(const QUrl& x1, DataType x2) { quint64 id = LObjects::override_id(unique, 522); void* fun = LObjects::overrideFun(id); QUrl ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 522, args, id).value<QUrl>(); } return ret; }
};

class LQmlError : public QQmlError {
    friend class N155;
public:
    LQmlError(uint u) : unique(u) {}
    LQmlError(uint u, const QQmlError& x1) : QQmlError(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LQmlImageProviderBase : public QQmlImageProviderBase {
    friend class N156;
public:

    static NumList overrideIds;
    uint unique;

    Flags flags() const { quint64 id = LObjects::override_id(unique, 523); void* fun = LObjects::overrideFun(id); Flags ret = (Flags)0; if(fun && (LObjects::calling != id)) { ret = (Flags)callOverrideFun(fun, 523, 0, id).toInt(); } return ret; }
    ImageType imageType() const { quint64 id = LObjects::override_id(unique, 524); void* fun = LObjects::overrideFun(id); ImageType ret = (ImageType)0; if(fun && (LObjects::calling != id)) { ret = (ImageType)callOverrideFun(fun, 524, 0, id).toInt(); } return ret; }
};

class LQmlIncubationController : public QQmlIncubationController {
    friend class N157;
public:
    LQmlIncubationController(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    void incubatingObjectCountChanged(int x1) { quint64 id = LObjects::override_id(unique, 525); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 525, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlIncubationController::incubatingObjectCountChanged(x1); }}
};

class LQmlIncubator : public QQmlIncubator {
    friend class N158;
public:
    LQmlIncubator(uint u, IncubationMode x1 = Asynchronous) : QQmlIncubator(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setInitialState(QObject* x1) { quint64 id = LObjects::override_id(unique, 526); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 526, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlIncubator::setInitialState(x1); }}
    void statusChanged(Status x1) { quint64 id = LObjects::override_id(unique, 527); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 527, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QQmlIncubator::statusChanged(x1); }}
};

class LQmlNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory {
    friend class N159;
public:

    static NumList overrideIds;
    uint unique;

    QNetworkAccessManager* create(QObject* x1) { quint64 id = LObjects::override_id(unique, 528); void* fun = LObjects::overrideFun(id); QNetworkAccessManager* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = (QNetworkAccessManager*)callOverrideFun(fun, 528, args, id).value<void*>(); } return ret; }
};

class LQmlParserStatus : public QQmlParserStatus {
    friend class N160;
public:

    static NumList overrideIds;
    uint unique;

    void classBegin() { quint64 id = LObjects::override_id(unique, 529); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 529, 0, id); }}
    void componentComplete() { quint64 id = LObjects::override_id(unique, 530); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 530, 0, id); }}
};

class LQmlProperty : public QQmlProperty {
    friend class N161;
public:
    LQmlProperty(uint u) : unique(u) {}
    LQmlProperty(uint u, QObject* x1) : QQmlProperty(x1), unique(u) {}
    LQmlProperty(uint u, QObject* x1, QQmlContext* x2) : QQmlProperty(x1, x2), unique(u) {}
    LQmlProperty(uint u, QObject* x1, QQmlEngine* x2) : QQmlProperty(x1, x2), unique(u) {}
    LQmlProperty(uint u, QObject* x1, const QString& x2) : QQmlProperty(x1, x2), unique(u) {}
    LQmlProperty(uint u, QObject* x1, const QString& x2, QQmlContext* x3) : QQmlProperty(x1, x2, x3), unique(u) {}
    LQmlProperty(uint u, QObject* x1, const QString& x2, QQmlEngine* x3) : QQmlProperty(x1, x2, x3), unique(u) {}
    LQmlProperty(uint u, const QQmlProperty& x1) : QQmlProperty(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LQmlPropertyValueSource : public QQmlPropertyValueSource {
    friend class N162;
public:
    LQmlPropertyValueSource(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setTarget(const QQmlProperty& x1) { quint64 id = LObjects::override_id(unique, 531); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 531, args, id); }}
};

class LQmlScriptString : public QQmlScriptString {
    friend class N163;
public:
    LQmlScriptString(uint u) : unique(u) {}
    LQmlScriptString(uint u, const QQmlScriptString& x1) : QQmlScriptString(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LQuickImageProvider : public QQuickImageProvider {
    friend class N165;
public:
    LQuickImageProvider(uint u, ImageType x1, Flags x2 = 0) : QQuickImageProvider(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QImage requestImage(const QString& x1, QSize* x2, const QSize& x3) { quint64 id = LObjects::override_id(unique, 532); void* fun = LObjects::overrideFun(id); QImage ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 532, args, id).value<QImage>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickImageProvider::requestImage(x1, x2, x3); } return ret; }
    QPixmap requestPixmap(const QString& x1, QSize* x2, const QSize& x3) { quint64 id = LObjects::override_id(unique, 533); void* fun = LObjects::overrideFun(id); QPixmap ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 533, args, id).value<QPixmap>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickImageProvider::requestPixmap(x1, x2, x3); } return ret; }
    QQuickTextureFactory* requestTexture(const QString& x1, QSize* x2, const QSize& x3) { quint64 id = LObjects::override_id(unique, 534); void* fun = LObjects::overrideFun(id); QQuickTextureFactory* ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; ret = (QQuickTextureFactory*)callOverrideFun(fun, 534, args, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickImageProvider::requestTexture(x1, x2, x3); } return ret; }
    Flags flags() const { quint64 id = LObjects::override_id(unique, 523); void* fun = LObjects::overrideFun(id); Flags ret = (Flags)0; if(fun && (LObjects::calling != id)) { ret = (Flags)callOverrideFun(fun, 523, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickImageProvider::flags(); } return ret; }
    ImageType imageType() const { quint64 id = LObjects::override_id(unique, 524); void* fun = LObjects::overrideFun(id); ImageType ret = (ImageType)0; if(fun && (LObjects::calling != id)) { ret = (ImageType)callOverrideFun(fun, 524, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QQuickImageProvider::imageType(); } return ret; }
};

class LSGBasicGeometryNode : public QSGBasicGeometryNode {
    friend class N173;
public:

    static NumList overrideIds;
    uint unique;

    bool isSubtreeBlocked() const { quint64 id = LObjects::override_id(unique, 536); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 536, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGBasicGeometryNode::isSubtreeBlocked(); } return ret; }
    void preprocess() { quint64 id = LObjects::override_id(unique, 537); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 537, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGBasicGeometryNode::preprocess(); }}
};

class LSGClipNode : public QSGClipNode {
    friend class N174;
public:
    LSGClipNode(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSGFlatColorMaterial : public QSGFlatColorMaterial {
    friend class N175;
public:
    LSGFlatColorMaterial(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int compare(const QSGMaterial* x1) const { quint64 id = LObjects::override_id(unique, 538); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 538, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGFlatColorMaterial::compare(x1); } return ret; }
    QSGMaterialShader* createShader() const { quint64 id = LObjects::override_id(unique, 539); void* fun = LObjects::overrideFun(id); QSGMaterialShader* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialShader*)callOverrideFun(fun, 539, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGFlatColorMaterial::createShader(); } return ret; }
    QSGMaterialType* type() const { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); QSGMaterialType* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialType*)callOverrideFun(fun, 234, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGFlatColorMaterial::type(); } return ret; }
};

class LSGGeometry : public QSGGeometry {
    friend class N176;
public:

    static NumList overrideIds;
    uint unique;
};

class LSGGeometryNode : public QSGGeometryNode {
    friend class N177;
public:
    LSGGeometryNode(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSGMaterial : public QSGMaterial {
    friend class N178;
public:

    static NumList overrideIds;
    uint unique;

    int compare(const QSGMaterial* x1) const { quint64 id = LObjects::override_id(unique, 538); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 538, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGMaterial::compare(x1); } return ret; }
    QSGMaterialShader* createShader() const { quint64 id = LObjects::override_id(unique, 539); void* fun = LObjects::overrideFun(id); QSGMaterialShader* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialShader*)callOverrideFun(fun, 539, 0, id).value<void*>(); } return ret; }
    QSGMaterialType* type() const { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); QSGMaterialType* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialType*)callOverrideFun(fun, 234, 0, id).value<void*>(); } return ret; }
};

class LSGMaterialType : public QSGMaterialType {
    friend class N180;
public:

    static NumList overrideIds;
    uint unique;
};

class LSGNode : public QSGNode {
    friend class N181;
public:
    LSGNode(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool isSubtreeBlocked() const { quint64 id = LObjects::override_id(unique, 536); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 536, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGNode::isSubtreeBlocked(); } return ret; }
    void preprocess() { quint64 id = LObjects::override_id(unique, 537); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 537, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGNode::preprocess(); }}
};

class LSGOpacityNode : public QSGOpacityNode {
    friend class N182;
public:
    LSGOpacityNode(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool isSubtreeBlocked() const { quint64 id = LObjects::override_id(unique, 536); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 536, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGOpacityNode::isSubtreeBlocked(); } return ret; }
    void preprocess() { quint64 id = LObjects::override_id(unique, 537); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 537, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGOpacityNode::preprocess(); }}
};

class LSGOpaqueTextureMaterial : public QSGOpaqueTextureMaterial {
    friend class N183;
public:
    LSGOpaqueTextureMaterial(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int compare(const QSGMaterial* x1) const { quint64 id = LObjects::override_id(unique, 538); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 538, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGOpaqueTextureMaterial::compare(x1); } return ret; }
    QSGMaterialShader* createShader() const { quint64 id = LObjects::override_id(unique, 539); void* fun = LObjects::overrideFun(id); QSGMaterialShader* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialShader*)callOverrideFun(fun, 539, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGOpaqueTextureMaterial::createShader(); } return ret; }
    QSGMaterialType* type() const { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); QSGMaterialType* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialType*)callOverrideFun(fun, 234, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGOpaqueTextureMaterial::type(); } return ret; }
};

class LSGSimpleRectNode : public QSGSimpleRectNode {
    friend class N184;
public:
    LSGSimpleRectNode(uint u, const QRectF& x1, const QColor& x2) : QSGSimpleRectNode(x1, x2), unique(u) {}
    LSGSimpleRectNode(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSGSimpleTextureNode : public QSGSimpleTextureNode {
    friend class N185;
public:
    LSGSimpleTextureNode(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSGTextureMaterial : public QSGTextureMaterial {
    friend class N186;
public:

    static NumList overrideIds;
    uint unique;
};

class LSGTransformNode : public QSGTransformNode {
    friend class N187;
public:
    LSGTransformNode(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool isSubtreeBlocked() const { quint64 id = LObjects::override_id(unique, 536); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 536, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGTransformNode::isSubtreeBlocked(); } return ret; }
    void preprocess() { quint64 id = LObjects::override_id(unique, 537); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 537, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSGTransformNode::preprocess(); }}
};

class LSGVertexColorMaterial : public QSGVertexColorMaterial {
    friend class N188;
public:
    LSGVertexColorMaterial(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int compare(const QSGMaterial* x1) const { quint64 id = LObjects::override_id(unique, 538); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 538, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGVertexColorMaterial::compare(x1); } return ret; }
    QSGMaterialShader* createShader() const { quint64 id = LObjects::override_id(unique, 539); void* fun = LObjects::overrideFun(id); QSGMaterialShader* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialShader*)callOverrideFun(fun, 539, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGVertexColorMaterial::createShader(); } return ret; }
    QSGMaterialType* type() const { quint64 id = LObjects::override_id(unique, 234); void* fun = LObjects::overrideFun(id); QSGMaterialType* ret = 0; if(fun && (LObjects::calling != id)) { ret = (QSGMaterialType*)callOverrideFun(fun, 234, 0, id).value<void*>(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSGVertexColorMaterial::type(); } return ret; }
};

QT_END_NAMESPACE

#endif
