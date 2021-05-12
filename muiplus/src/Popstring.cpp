#include "include/Popstring.h"
#include "include/RootClass.h"

Zune::Popstring::Popstring() = default;

Zune::Popstring::Popstring(Object *obj) {
    object = obj;
}

Object *Zune::Popstring::button() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Popstring_Button));
}

struct Hook *Zune::Popstring::closeHook() const {
    return reinterpret_cast<struct Hook*>(mGetAttr(MUIA_Popstring_CloseHook));
}

void Zune::Popstring::setCloseHook(struct Hook *value) {
    setOrStore(MUIA_Popstring_CloseHook, reinterpret_cast<IPTR>(value));
}

struct Hook *Zune::Popstring::openHook() const {
    return reinterpret_cast<struct Hook*>(mGetAttr(MUIA_Popstring_OpenHook));
}

void Zune::Popstring::setOpenHook(struct Hook *value) {
    setOrStore(MUIA_Popstring_OpenHook, reinterpret_cast<IPTR>(value));
}

Object *Zune::Popstring::getString() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Popstring_String));
}

BOOL Zune::Popstring::toggle() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Popstring_Toggle));
}

void Zune::Popstring::setToggle(BOOL value) {
    setOrStore(MUIA_Popstring_Toggle, static_cast<IPTR>(value));
}

IPTR Zune::Popstring::close(LONG result) {
    return DoMethod(object, MUIM_Popstring_Close, result);
}

IPTR Zune::Popstring::open() {
    return DoMethod(object, MUIM_Popstring_Open);
}

void Zune::Popstring::build() {
    RootClass::createObject(MUIC_Popstring);
}

void Zune::Popstring::setButton(Object *button) {
    configmap[MUIA_Popstring_Button] = reinterpret_cast<IPTR>(button);
}

void Zune::Popstring::setString(Object *string) {
    configmap[MUIA_Popstring_String] = reinterpret_cast<IPTR> (string);
}


