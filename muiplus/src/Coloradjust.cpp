#include "include/Coloradjust.h"

Coloradjust::Coloradjust(ULONG red, ULONG green, ULONG blue)
: Group() {
    object = MUI_NewObject(MUIC_Coloradjust, MUIA_Coloradjust_Red, red, MUIA_Coloradjust_Green, green, MUIA_Coloradjust_Blue, blue, TAG_END);
}

Coloradjust& Coloradjust::operator=(Object* obj) {
    object = obj;
    return *this;
}

Coloradjust::Coloradjust(Object* obj)
: Group() {
    object = obj;
}

IPTR Coloradjust::blue(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Blue);
}

void Coloradjust::setBlue(IPTR value) {
    setAttr(MUIA_Coloradjust_Blue, (IPTR) value);
}

IPTR Coloradjust::green(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Green);
}

void Coloradjust::setGreen(IPTR value) {
    setAttr(MUIA_Coloradjust_Green, (IPTR) value);
}

IPTR Coloradjust::modeID(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_ModeID);
}

void Coloradjust::setModeID(IPTR value) {
    setAttr(MUIA_Coloradjust_ModeID, (IPTR) value);
}

IPTR Coloradjust::red(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Red);
}

void Coloradjust::setRed(IPTR value) {
    setAttr(MUIA_Coloradjust_Red, (IPTR) value);
}

IPTR * Coloradjust::rgb(void) const {
    return (IPTR *) mGetAttr(MUIA_Coloradjust_RGB);
}

void Coloradjust::setRgb(IPTR * value) {
    setAttr(MUIA_Coloradjust_RGB, (IPTR) value);
}

Coloradjust::Coloradjust() {}
