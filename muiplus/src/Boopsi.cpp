#include "include/Boopsi.h"

Boopsi::Boopsi(Object* obj)
: Gadget() {
    object = obj;
}

Boopsi& Boopsi::operator=(Object* obj) {
    object = obj;
    return *this;
}

struct IClass * Boopsi::iClass() const {
    return (struct IClass *) mGetAttr(MUIA_Boopsi_Class);
}

void Boopsi::setClass(struct IClass * value) {
    setAttr(MUIA_Boopsi_Class, (IPTR) value);
}

char * Boopsi::classID() const {
    return (char *) mGetAttr(MUIA_Boopsi_ClassID);
}

void Boopsi::setClassID(char * value) {
    setAttr(MUIA_Boopsi_ClassID, (IPTR) value);
}

IPTR Boopsi::maxHeight() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MaxHeight);
}

void Boopsi::setMaxHeight(IPTR value) {
    setAttr(MUIA_Boopsi_MaxHeight, (IPTR) value);
}

IPTR Boopsi::maxWidth() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MaxWidth);
}

void Boopsi::setMaxWidth(IPTR value) {
    setAttr(MUIA_Boopsi_MaxWidth, (IPTR) value);
}

IPTR Boopsi::minHeight() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MinHeight);
}

void Boopsi::setMinHeight(IPTR value) {
    setAttr(MUIA_Boopsi_MinHeight, (IPTR) value);
}

IPTR Boopsi::minWidth() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MinWidth);
}

void Boopsi::setMinWidth(IPTR value) {
    setAttr(MUIA_Boopsi_MinWidth, (IPTR) value);
}

Object * Boopsi::mBoopsiObject() const {
    return (Object *) mGetAttr(MUIA_Boopsi_Object);
}

IPTR Boopsi::tagDrawInfo() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagDrawInfo);
}

void Boopsi::setTagDrawInfo(IPTR value) {
    setAttr(MUIA_Boopsi_TagDrawInfo, (IPTR) value);
}

IPTR Boopsi::tagScreen() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagScreen);
}

void Boopsi::setTagScreen(IPTR value) {
    setAttr(MUIA_Boopsi_TagScreen, (IPTR) value);
}

IPTR Boopsi::tagWindow() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagWindow);
}

void Boopsi::setTagWindow(IPTR value) {
    setAttr(MUIA_Boopsi_TagWindow, (IPTR) value);
}

Boopsi::Boopsi() {

}
