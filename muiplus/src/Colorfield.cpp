#include "include/Colorfield.h"
#include "include/ZuneObject.h"

Zune::Colorfield::Colorfield(ULONG red, ULONG green, ULONG blue)
        : Area() {
    object = MUI_NewObject(MUIC_Colorfield, MUIA_Colorfield_Red, red, MUIA_Colorfield_Green, green,
                           MUIA_Colorfield_Blue, blue);
}

Zune::Colorfield::Colorfield(Object *obj)
        : Area() {
    object = obj;
}

Zune::Colorfield &Zune::Colorfield::operator=(Object *obj) {
    object = obj;
    return *this;
}

IPTR Zune::Colorfield::blue() const {
    return (IPTR) mGetAttr(MUIA_Colorfield_Blue);
}

void Zune::Colorfield::setBlue(IPTR value) {
    setAttr(MUIA_Colorfield_Blue, (IPTR) value);
}

IPTR Zune::Colorfield::green() const {
    return (IPTR) mGetAttr(MUIA_Colorfield_Green);
}

void Zune::Colorfield::setGreen(IPTR value) {
    setAttr(MUIA_Colorfield_Green, (IPTR) value);
}

IPTR Zune::Colorfield::pen() const {
    return (IPTR) mGetAttr(MUIA_Colorfield_Pen);
}

IPTR Zune::Colorfield::red() const {
    return (IPTR) mGetAttr(MUIA_Colorfield_Red);
}

void Zune::Colorfield::setRed(IPTR value) {
    setAttr(MUIA_Colorfield_Red, (IPTR) value);
}

IPTR *Zune::Colorfield::rgb() const {
    return (IPTR *) mGetAttr(MUIA_Colorfield_RGB);
}

void Zune::Colorfield::setRgb(IPTR *value) {
    setAttr(MUIA_Colorfield_RGB, (IPTR) value);
}

Zune::Colorfield::Colorfield() {}
