#include "include/Coloradjust.h"
#include "include/Group.h"
#include "include/ZuneObject.h"

Zune::Coloradjust::Coloradjust(ULONG red, ULONG green, ULONG blue)
: Group() {
    object = MUI_NewObject(MUIC_Coloradjust, MUIA_Coloradjust_Red, red, MUIA_Coloradjust_Green, green, MUIA_Coloradjust_Blue, blue, TAG_END);
}

Zune::Coloradjust& Zune::Coloradjust::operator=(Object* obj) {
    object = obj;
    return *this;
}

Zune::Coloradjust::Coloradjust(Object* obj)
: Group() {
    object = obj;
}

IPTR Zune::Coloradjust::blue(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Blue);
}

void Zune::Coloradjust::setBlue(IPTR value) {
    setAttr(MUIA_Coloradjust_Blue, (IPTR) value);
}

IPTR Zune::Coloradjust::green(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Green);
}

void Zune::Coloradjust::setGreen(IPTR value) {
    setAttr(MUIA_Coloradjust_Green, (IPTR) value);
}

IPTR Zune::Coloradjust::modeID(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_ModeID);
}

void Zune::Coloradjust::setModeID(IPTR value) {
    setAttr(MUIA_Coloradjust_ModeID, (IPTR) value);
}

IPTR Zune::Coloradjust::red(void) const {
    return (IPTR) mGetAttr(MUIA_Coloradjust_Red);
}

void Zune::Coloradjust::setRed(IPTR value) {
    setAttr(MUIA_Coloradjust_Red, (IPTR) value);
}

IPTR * Zune::Coloradjust::rgb(void) const {
    return (IPTR *) mGetAttr(MUIA_Coloradjust_RGB);
}

void Zune::Coloradjust::setRgb(IPTR * value) {
    setAttr(MUIA_Coloradjust_RGB, (IPTR) value);
}

Zune::Coloradjust::Coloradjust() {}
