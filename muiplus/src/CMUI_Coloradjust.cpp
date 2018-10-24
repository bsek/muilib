#include "include/CMUI_Coloradjust.h"

CMUI_Coloradjust::CMUI_Coloradjust(ULONG red, ULONG green, ULONG blue)
: CMUI_Group() {
    object = MUI_NewObject(MUIC_Coloradjust, MUIA_Coloradjust_Red, red, MUIA_Coloradjust_Green, green, MUIA_Coloradjust_Blue, blue, TAG_END);
}

CMUI_Coloradjust& CMUI_Coloradjust::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Coloradjust::CMUI_Coloradjust(Object* obj)
: CMUI_Group() {
    object = obj;
}

IPTR CMUI_Coloradjust::blue(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Blue);
}

void CMUI_Coloradjust::setBlue(IPTR value) {
    setAttr(MUIA_Coloradjust_Blue, (IPTR) value);
}

IPTR CMUI_Coloradjust::green(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Green);
}

void CMUI_Coloradjust::setGreen(IPTR value) {
    setAttr(MUIA_Coloradjust_Green, (IPTR) value);
}

IPTR CMUI_Coloradjust::modeID(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_ModeID);
}

void CMUI_Coloradjust::setModeID(IPTR value) {
    setAttr(MUIA_Coloradjust_ModeID, (IPTR) value);
}

IPTR CMUI_Coloradjust::red(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Red);
}

void CMUI_Coloradjust::setRed(IPTR value) {
    setAttr(MUIA_Coloradjust_Red, (IPTR) value);
}

IPTR * CMUI_Coloradjust::rgb(void) const {
    return (IPTR *) mGetAttr(MUIA_Coloradjust_RGB);
}

void CMUI_Coloradjust::setRgb(IPTR * value) {
    setAttr(MUIA_Coloradjust_RGB, (IPTR) value);
}

CMUI_Coloradjust::CMUI_Coloradjust() {}
