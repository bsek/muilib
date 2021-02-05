#include "include/Popobject.h"

Popobject::Popobject()
: Popstring() {
}

Popobject::Popobject(struct Hook *objStrHook, struct Hook *strObjHook, BOOL follow, BOOL light,
                               Object *object, BOOL isVolatile, struct Hook *windowHook) {
    object = MUI_NewObject(MUIC_Popobject, MUIA_Popobject_ObjStrHook, (IPTR) objStrHook,
            MUIA_Popobject_StrObjHook, (IPTR) strObjHook, MUIA_Popobject_Follow, (IPTR) follow,
            MUIA_Popobject_Light, (IPTR) light, MUIA_Popobject_Object, (IPTR) object,
            MUIA_Popobject_Volatile, (IPTR) isVolatile, MUIA_Popobject_WindowHook, (IPTR) windowHook, TAG_END);
}

Popobject::Popobject(Object* obj)
: Popstring() {
    object = obj;
}

Popobject& Popobject::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Popobject::follow(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Follow);
}

void Popobject::setFollow(BOOL value) {
    setAttr(MUIA_Popobject_Follow, (IPTR) value);
}

BOOL Popobject::light(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Light);
}

void Popobject::setLight(BOOL value) {
    setAttr(MUIA_Popobject_Light, (IPTR) value);
}

Object * Popobject::popObject(void) const {
    return (Object *) mGetAttr(MUIA_Popobject_Object);
}

struct Hook * Popobject::objStrHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_ObjStrHook);
}

void Popobject::setObjStrHook(struct Hook *value) {
    setAttr(MUIA_Popobject_ObjStrHook, (IPTR) value);
}

struct Hook * Popobject::strObjHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_StrObjHook);
}

void Popobject::setStrObjHook(struct Hook *value) {
    setAttr(MUIA_Popobject_StrObjHook, (IPTR) value);
}

BOOL Popobject::getVolatile(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Volatile);
}

void Popobject::setVolatile(BOOL value) {
    setAttr(MUIA_Popobject_Volatile, (IPTR) value);
}

struct Hook * Popobject::windowHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_WindowHook);
}

void Popobject::SetWindowHook(struct Hook * value) {
    setAttr(MUIA_Popobject_WindowHook, (IPTR) value);
}

