#include "include/Boopsi.h"
#include "include/ZuneObject.h"

Zune::Boopsi::Boopsi(Object* obj) : Area() {
    object = obj;
}

Zune::Boopsi& Zune::Boopsi::operator=(Object* obj) {
    object = obj;
    return *this;
}

struct IClass * Zune::Boopsi::iClass() const {
    return (struct IClass *) mGetAttr(MUIA_Boopsi_Class);
}

void Zune::Boopsi::setClass(struct IClass * value) {
    setAttr(MUIA_Boopsi_Class, (IPTR) value);
}

char * Zune::Boopsi::classID() const {
    return (char *) mGetAttr(MUIA_Boopsi_ClassID);
}

void Zune::Boopsi::setClassID(char * value) {
    setAttr(MUIA_Boopsi_ClassID, (IPTR) value);
}

IPTR Zune::Boopsi::maxHeight() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MaxHeight);
}

void Zune::Boopsi::setMaxHeight(IPTR value) {
    setAttr(MUIA_Boopsi_MaxHeight, (IPTR) value);
}

IPTR Zune::Boopsi::maxWidth() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MaxWidth);
}

void Zune::Boopsi::setMaxWidth(IPTR value) {
    setAttr(MUIA_Boopsi_MaxWidth, (IPTR) value);
}

IPTR Zune::Boopsi::minHeight() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MinHeight);
}

void Zune::Boopsi::setMinHeight(IPTR value) {
    setAttr(MUIA_Boopsi_MinHeight, (IPTR) value);
}

IPTR Zune::Boopsi::minWidth() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MinWidth);
}

void Zune::Boopsi::setMinWidth(IPTR value) {
    setAttr(MUIA_Boopsi_MinWidth, (IPTR) value);
}

Object * Zune::Boopsi::mBoopsiObject() const {
    return (Object *) mGetAttr(MUIA_Boopsi_Object);
}

IPTR Zune::Boopsi::tagDrawInfo() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagDrawInfo);
}

void Zune::Boopsi::setTagDrawInfo(IPTR value) {
    setAttr(MUIA_Boopsi_TagDrawInfo, (IPTR) value);
}

IPTR Zune::Boopsi::tagScreen() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagScreen);
}

void Zune::Boopsi::setTagScreen(IPTR value) {
    setAttr(MUIA_Boopsi_TagScreen, (IPTR) value);
}

IPTR Zune::Boopsi::tagWindow() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagWindow);
}

void Zune::Boopsi::setTagWindow(IPTR value) {
    setAttr(MUIA_Boopsi_TagWindow, (IPTR) value);
}

Zune::Boopsi::Boopsi() {

}
