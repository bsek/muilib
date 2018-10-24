#include "include/CMUI_Popstring.h"

CMUI_Popstring::CMUI_Popstring()
: CMUI_Group() {
}

CMUI_Popstring::CMUI_Popstring(Object *button, struct Hook *closeHook, struct Hook *openHook, Object *string,
                               BOOL toggle) {
    object = MUI_NewObject(MUIC_Popstring, MUIA_Popstring_Button, (IPTR) button, MUIA_Popstring_CloseHook, (IPTR) closeHook,
            MUIA_Popstring_OpenHook, (IPTR) openHook, MUIA_Popstring_String, (IPTR) string,
            MUIA_Popstring_Toggle, (IPTR) toggle, TAG_END);
}

CMUI_Popstring::CMUI_Popstring(Object* obj)
: CMUI_Group() {
    object = obj;
}

CMUI_Popstring& CMUI_Popstring::operator=(Object* obj) {
    object = obj;
    return *this;
}

Object * CMUI_Popstring::button() const {
    return (Object *) mGetAttr(MUIA_Popstring_Button);
}

struct Hook * CMUI_Popstring::closeHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popstring_CloseHook);
}

void CMUI_Popstring::setCloseHook(struct Hook *value) {
    setAttr(MUIA_Popstring_CloseHook, (IPTR) value);
}

struct Hook * CMUI_Popstring::openHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popstring_OpenHook);
}

void CMUI_Popstring::setOpenHook(struct Hook *value) {
    setAttr(MUIA_Popstring_OpenHook, (IPTR) value);
}

Object * CMUI_Popstring::getString() const {
    return (Object *) mGetAttr(MUIA_Popstring_String);
}

BOOL CMUI_Popstring::toggle() const {
    return (BOOL) mGetAttr(MUIA_Popstring_Toggle);
}

void CMUI_Popstring::setToggle(BOOL value) {
    setAttr(MUIA_Popstring_Toggle, (IPTR) value);
}

IPTR CMUI_Popstring::close(LONG result) {
    return DoMethod(object,MUIM_Popstring_Close, result);
}

IPTR CMUI_Popstring::open() {
    return DoMethod(object,MUIM_Popstring_Open);
}


