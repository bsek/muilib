#include "include/Coloradjust.h"
#include "include/RootClass.h"

Zune::Coloradjust::Coloradjust(Object *obj) {
    object = obj;
}

IPTR Zune::Coloradjust::blue(void) const {
    return static_cast<IPTR>(mGetAttr(MUIA_Coloradjust_Blue));
}

void Zune::Coloradjust::setBlue(IPTR value) {
    setOrStore(MUIA_Coloradjust_Blue, static_cast<IPTR>(value));
}

IPTR Zune::Coloradjust::green(void) const {
    return static_cast<IPTR>(mGetAttr(MUIA_Coloradjust_Green));
}

void Zune::Coloradjust::setGreen(IPTR value) {
    setOrStore(MUIA_Coloradjust_Green, static_cast<IPTR>(value));
}

IPTR Zune::Coloradjust::modeID(void) const {
    return static_cast<IPTR>(mGetAttr(MUIA_Coloradjust_ModeID));
}

void Zune::Coloradjust::setModeID(IPTR value) {
    setOrStore(MUIA_Coloradjust_ModeID, static_cast<IPTR>(value));
}

IPTR Zune::Coloradjust::red(void) const {
    return static_cast<IPTR>(mGetAttr(MUIA_Coloradjust_Red));
}

void Zune::Coloradjust::setRed(IPTR value) {
    setOrStore(MUIA_Coloradjust_Red, static_cast<IPTR>(value));
}

IPTR *Zune::Coloradjust::rgb(void) const {
    return reinterpret_cast<IPTR *>(mGetAttr(MUIA_Coloradjust_RGB));
}

void Zune::Coloradjust::setRgb(IPTR *value) {
    setOrStore(MUIA_Coloradjust_RGB, reinterpret_cast<IPTR>(value));
}

void Zune::Coloradjust::build() {
    RootClass::createObject(MUIC_Coloradjust);
}

Zune::Coloradjust::Coloradjust() = default;
