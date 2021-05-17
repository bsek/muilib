#include "include/Colorfield.h"
#include "include/RootClass.h"

Zune::Colorfield::Colorfield(Object *obj)
        : Area() {
    object = obj;
}

IPTR Zune::Colorfield::blue() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Colorfield_Blue));
}

void Zune::Colorfield::setBlue(IPTR value) {
    setOrStore(MUIA_Colorfield_Blue, static_cast<IPTR>(value));
}

IPTR Zune::Colorfield::green() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Colorfield_Green));
}

void Zune::Colorfield::setGreen(IPTR value) {
    setOrStore(MUIA_Colorfield_Green, static_cast<IPTR>(value));
}

IPTR Zune::Colorfield::pen() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Colorfield_Pen));
}

IPTR Zune::Colorfield::red() const {
    return static_cast<IPTR>(mGetAttr(MUIA_Colorfield_Red));
}

void Zune::Colorfield::setRed(IPTR value) {
    setOrStore(MUIA_Colorfield_Red, static_cast<IPTR>(value));
}

IPTR *Zune::Colorfield::rgb() const {
    return reinterpret_cast<IPTR *>(mGetAttr(MUIA_Colorfield_RGB));
}

void Zune::Colorfield::setRgb(IPTR *value) {
    setOrStore(MUIA_Colorfield_RGB, reinterpret_cast<IPTR>(value));
}

void Zune::Colorfield::build() {
    RootClass::createObject(MUIC_Colorfield);
}

Zune::Colorfield::Colorfield() = default;
