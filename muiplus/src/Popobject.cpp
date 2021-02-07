#include "include/Popobject.h"
#include "include/ZuneObject.h"
#include "include/Popstring.h"

Zune::Popobject::Popobject()
        : Popstring() {
}

Zune::Popobject::Popobject(struct Hook *objStrHook, struct Hook *strObjHook, BOOL follow, BOOL light,
                           Object *object, BOOL isVolatile, struct Hook *windowHook) {
    object = MUI_NewObject(MUIC_Popobject, MUIA_Popobject_ObjStrHook, (IPTR) objStrHook,
                           MUIA_Popobject_StrObjHook, (IPTR) strObjHook, MUIA_Popobject_Follow, (IPTR) follow,
                           MUIA_Popobject_Light, (IPTR) light, MUIA_Popobject_Object, (IPTR) object,
                           MUIA_Popobject_Volatile, (IPTR) isVolatile, MUIA_Popobject_WindowHook, (IPTR) windowHook,
                           TAG_END);
}

Zune::Popobject::Popobject(Object *obj)
        : Popstring() {
    object = obj;
}

Zune::Popobject &Zune::Popobject::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Popobject::follow(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Follow);
}

void Zune::Popobject::setFollow(BOOL value) {
    setAttr(MUIA_Popobject_Follow, (IPTR) value);
}

BOOL Zune::Popobject::light(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Light);
}

void Zune::Popobject::setLight(BOOL value) {
    setAttr(MUIA_Popobject_Light, (IPTR) value);
}

Object *Zune::Popobject::popObject(void) const {
    return (Object *) mGetAttr(MUIA_Popobject_Object);
}

struct Hook *Zune::Popobject::objStrHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_ObjStrHook);
}

void Zune::Popobject::setObjStrHook(struct Hook *value) {
    setAttr(MUIA_Popobject_ObjStrHook, (IPTR) value);
}

struct Hook *Zune::Popobject::strObjHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_StrObjHook);
}

void Zune::Popobject::setStrObjHook(struct Hook *value) {
    setAttr(MUIA_Popobject_StrObjHook, (IPTR) value);
}

BOOL Zune::Popobject::getVolatile(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Volatile);
}

void Zune::Popobject::setVolatile(BOOL value) {
    setAttr(MUIA_Popobject_Volatile, (IPTR) value);
}

struct Hook *Zune::Popobject::windowHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_WindowHook);
}

void Zune::Popobject::SetWindowHook(struct Hook *value) {
    setAttr(MUIA_Popobject_WindowHook, (IPTR) value);
}

