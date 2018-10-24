#include "include/CMUI_Popobject.h"

CMUI_Popobject::CMUI_Popobject()
: CMUI_Popstring() {
}

CMUI_Popobject::CMUI_Popobject(struct Hook *objStrHook, struct Hook *strObjHook, BOOL follow, BOOL light,
                               Object *object, BOOL isVolatile, struct Hook *windowHook) {
    object = MUI_NewObject(MUIC_Popobject, MUIA_Popobject_ObjStrHook, (IPTR) objStrHook,
            MUIA_Popobject_StrObjHook, (IPTR) strObjHook, MUIA_Popobject_Follow, (IPTR) follow,
            MUIA_Popobject_Light, (IPTR) light, MUIA_Popobject_Object, (IPTR) object,
            MUIA_Popobject_Volatile, (IPTR) isVolatile, MUIA_Popobject_WindowHook, (IPTR) windowHook, TAG_END);
}

CMUI_Popobject::CMUI_Popobject(Object* obj)
: CMUI_Popstring() {
    object = obj;
}

CMUI_Popobject& CMUI_Popobject::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Popobject::follow(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Follow);
}

void CMUI_Popobject::setFollow(BOOL value) {
    setAttr(MUIA_Popobject_Follow, (IPTR) value);
}

BOOL CMUI_Popobject::light(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Light);
}

void CMUI_Popobject::setLight(BOOL value) {
    setAttr(MUIA_Popobject_Light, (IPTR) value);
}

Object * CMUI_Popobject::popObject(void) const {
    return (Object *) mGetAttr(MUIA_Popobject_Object);
}

struct Hook * CMUI_Popobject::objStrHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_ObjStrHook);
}

void CMUI_Popobject::setObjStrHook(struct Hook *value) {
    setAttr(MUIA_Popobject_ObjStrHook, (IPTR) value);
}

struct Hook * CMUI_Popobject::strObjHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_StrObjHook);
}

void CMUI_Popobject::setStrObjHook(struct Hook *value) {
    setAttr(MUIA_Popobject_StrObjHook, (IPTR) value);
}

BOOL CMUI_Popobject::getVolatile(void) const {
    return (BOOL) mGetAttr(MUIA_Popobject_Volatile);
}

void CMUI_Popobject::setVolatile(BOOL value) {
    setAttr(MUIA_Popobject_Volatile, (IPTR) value);
}

struct Hook * CMUI_Popobject::windowHook(void) const {
    return (struct Hook *) mGetAttr(MUIA_Popobject_WindowHook);
}

void CMUI_Popobject::SetWindowHook(struct Hook * value) {
    setAttr(MUIA_Popobject_WindowHook, (IPTR) value);
}

