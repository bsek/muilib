#include "include/CMUI_Boopsi.h"

CMUI_Boopsi::CMUI_Boopsi(Object* obj)
: CMUI_Gadget() {
    object = obj;
}

CMUI_Boopsi& CMUI_Boopsi::operator=(Object* obj) {
    object = obj;
    return *this;
}

struct IClass * CMUI_Boopsi::iClass() const {
    return (struct IClass *) mGetAttr(MUIA_Boopsi_Class);
}

void CMUI_Boopsi::setClass(struct IClass * value) {
    setAttr(MUIA_Boopsi_Class, (IPTR) value);
}

char * CMUI_Boopsi::classID() const {
    return (char *) mGetAttr(MUIA_Boopsi_ClassID);
}

void CMUI_Boopsi::setClassID(char * value) {
    setAttr(MUIA_Boopsi_ClassID, (IPTR) value);
}

IPTR CMUI_Boopsi::maxHeight() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MaxHeight);
}

void CMUI_Boopsi::setMaxHeight(IPTR value) {
    setAttr(MUIA_Boopsi_MaxHeight, (IPTR) value);
}

IPTR CMUI_Boopsi::maxWidth() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MaxWidth);
}

void CMUI_Boopsi::setMaxWidth(IPTR value) {
    setAttr(MUIA_Boopsi_MaxWidth, (IPTR) value);
}

IPTR CMUI_Boopsi::minHeight() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MinHeight);
}

void CMUI_Boopsi::setMinHeight(IPTR value) {
    setAttr(MUIA_Boopsi_MinHeight, (IPTR) value);
}

IPTR CMUI_Boopsi::minWidth() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_MinWidth);
}

void CMUI_Boopsi::setMinWidth(IPTR value) {
    setAttr(MUIA_Boopsi_MinWidth, (IPTR) value);
}

Object * CMUI_Boopsi::mBoopsiObject() const {
    return (Object *) mGetAttr(MUIA_Boopsi_Object);
}

IPTR CMUI_Boopsi::tagDrawInfo() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagDrawInfo);
}

void CMUI_Boopsi::setTagDrawInfo(IPTR value) {
    setAttr(MUIA_Boopsi_TagDrawInfo, (IPTR) value);
}

IPTR CMUI_Boopsi::tagScreen() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagScreen);
}

void CMUI_Boopsi::setTagScreen(IPTR value) {
    setAttr(MUIA_Boopsi_TagScreen, (IPTR) value);
}

IPTR CMUI_Boopsi::tagWindow() const {
    return (IPTR) mGetAttr(MUIA_Boopsi_TagWindow);
}

void CMUI_Boopsi::setTagWindow(IPTR value) {
    setAttr(MUIA_Boopsi_TagWindow, (IPTR) value);
}

CMUI_Boopsi::CMUI_Boopsi() {

}
