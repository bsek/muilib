#include "include/Popstring.h"
#include "include/Group.h"
#include "include/ZuneObject.h"

Zune::Popstring::Popstring()
        : Group() {
}

Zune::Popstring::Popstring(Object *button, struct Hook *closeHook, struct Hook *openHook, Object *string,
                           BOOL toggle) {
    object = MUI_NewObject(MUIC_Popstring, MUIA_Popstring_Button, (IPTR) button, MUIA_Popstring_CloseHook,
                           (IPTR) closeHook,
                           MUIA_Popstring_OpenHook, (IPTR) openHook, MUIA_Popstring_String, (IPTR) string,
                           MUIA_Popstring_Toggle, (IPTR) toggle, TAG_END);
}

Zune::Popstring::Popstring(Object *obj)
        : Group() {
    object = obj;
}

Zune::Popstring &Zune::Popstring::operator=(Object *obj) {
    object = obj;
    return *this;
}

Object *Zune::Popstring::button() const {
    return (Object *) mGetAttr(MUIA_Popstring_Button);
}

struct Hook *Zune::Popstring::closeHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popstring_CloseHook);
}

void Zune::Popstring::setCloseHook(struct Hook *value) {
    setAttr(MUIA_Popstring_CloseHook, (IPTR) value);
}

struct Hook *Zune::Popstring::openHook() const {
    return (struct Hook *) mGetAttr(MUIA_Popstring_OpenHook);
}

void Zune::Popstring::setOpenHook(struct Hook *value) {
    setAttr(MUIA_Popstring_OpenHook, (IPTR) value);
}

Object *Zune::Popstring::getString() const {
    return (Object *) mGetAttr(MUIA_Popstring_String);
}

BOOL Zune::Popstring::toggle() const {
    return (BOOL) mGetAttr(MUIA_Popstring_Toggle);
}

void Zune::Popstring::setToggle(BOOL value) {
    setAttr(MUIA_Popstring_Toggle, (IPTR) value);
}

IPTR Zune::Popstring::close(LONG result) {
    return DoMethod(object, MUIM_Popstring_Close, result);
}

IPTR Zune::Popstring::open() {
    return DoMethod(object, MUIM_Popstring_Open);
}


