#include "include/Popobject.h"
#include "include/RootClass.h"

Zune::Popobject::Popobject() = default;

Zune::Popobject::Popobject(Object *obj) {
    object = obj;
}

BOOL Zune::Popobject::follow() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Popobject_Follow));
}

void Zune::Popobject::setFollow(BOOL value) {
    setOrStore(MUIA_Popobject_Follow, (IPTR) value);
}

BOOL Zune::Popobject::light() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Popobject_Light));
}

void Zune::Popobject::setLight(BOOL value) {
    setOrStore(MUIA_Popobject_Light, static_cast<IPTR>(value));
}

Object *Zune::Popobject::popObject() const {
    return reinterpret_cast<Object *>(mGetAttr(MUIA_Popobject_Object));
}

struct Hook *Zune::Popobject::objStrHook() const {
    return reinterpret_cast<struct Hook *>(mGetAttr(MUIA_Popobject_ObjStrHook));
}

void Zune::Popobject::setObjStrHook(struct Hook *value) {
    setOrStore(MUIA_Popobject_ObjStrHook, reinterpret_cast<IPTR>(value));
}

struct Hook *Zune::Popobject::strObjHook() const {
    return reinterpret_cast<struct Hook *>(mGetAttr(MUIA_Popobject_StrObjHook));
}

void Zune::Popobject::setStrObjHook(struct Hook *value) {
    setOrStore(MUIA_Popobject_StrObjHook, reinterpret_cast<IPTR>(value));
}

BOOL Zune::Popobject::getVolatile() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Popobject_Volatile));
}

void Zune::Popobject::setVolatile(BOOL value) {
    setOrStore(MUIA_Popobject_Volatile, static_cast<IPTR>(value));
}

struct Hook *Zune::Popobject::windowHook() const {
    return reinterpret_cast<struct Hook *>(mGetAttr(MUIA_Popobject_WindowHook));
}

void Zune::Popobject::setWindowHook(struct Hook *value) {
    setOrStore(MUIA_Popobject_WindowHook, reinterpret_cast<IPTR>(value));
}

void Zune::Popobject::setPopObject(Object *obj) {
    configmap[MUIA_Popobject_Object] = reinterpret_cast<IPTR>(obj);
}

void Zune::Popobject::build() {
    RootClass::createObject(MUIC_Popobject);
}

