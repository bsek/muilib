#include "include/Popstring.h"

Popstring::Popstring()
: Group() {
}

Popstring::Popstring(Object *button, struct Hook *closeHook, struct Hook *openHook, Object *string,
                               BOOL toggle) {
    object = MUI_NewObject(MUIC_Popstring, MUIA_Popstring_Button, (IPTR) button, MUIA_Popstring_CloseHook, (IPTR) closeHook,
            MUIA_Popstring_OpenHook, (IPTR) openHook, MUIA_Popstring_String, (IPTR) string,
            MUIA_Popstring_Toggle, (IPTR) toggle, TAG_END);
}

Popstring::Popstring(Object* obj)
: Group() {
    object = obj;
}

Popstring& Popstring::operator=(Object* obj) {
    object = obj;
    return *this;
}

Object * Popstring::button() const {
    return (Object *) mGetAttr(MUIA_Popstring_Button);
}

struct Hook * Popstring::closeHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popstring_CloseHook);
}

void Popstring::setCloseHook(struct Hook *value) {
    setAttr(MUIA_Popstring_CloseHook, (IPTR) value);
}

struct Hook * Popstring::openHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popstring_OpenHook);
}

void Popstring::setOpenHook(struct Hook *value) {
    setAttr(MUIA_Popstring_OpenHook, (IPTR) value);
}

Object * Popstring::getString() const {
    return (Object *) mGetAttr(MUIA_Popstring_String);
}

BOOL Popstring::toggle() const {
    return (BOOL) mGetAttr(MUIA_Popstring_Toggle);
}

void Popstring::setToggle(BOOL value) {
    setAttr(MUIA_Popstring_Toggle, (IPTR) value);
}

IPTR Popstring::close(LONG result) {
    return DoMethod(object,MUIM_Popstring_Close, result);
}

IPTR Popstring::open() {
    return DoMethod(object,MUIM_Popstring_Open);
}


