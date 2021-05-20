#include "include/Pendisplay.h"
#include "include/RootClass.h"

Zune::Pendisplay::Pendisplay() = default;

Zune::Pendisplay::Pendisplay(Object *obj) {
    object = obj;
}

Object *Zune::Pendisplay::pen() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Pendisplay_Pen));
}

Object *Zune::Pendisplay::reference() const {
    return reinterpret_cast<Object*>(mGetAttr(MUIA_Pendisplay_Reference));
}

void Zune::Pendisplay::setReference(Object *value) {
    setOrStore(MUIA_Pendisplay_Reference, reinterpret_cast<IPTR>(value));
}

struct MUI_RGBcolor *Zune::Pendisplay::getRGBcolor() const {
    return reinterpret_cast<struct MUI_RGBcolor *>(mGetAttr(MUIA_Pendisplay_RGBcolor));
}

void Zune::Pendisplay::setRGBcolor(struct MUI_RGBcolor *value) {
    setOrStore(MUIA_Pendisplay_RGBcolor, reinterpret_cast<IPTR>(value));
}

struct MUI_PenSpec *Zune::Pendisplay::spec() const {
    return reinterpret_cast<struct MUI_PenSpec *>(mGetAttr(MUIA_Pendisplay_Spec));
}

void Zune::Pendisplay::setSpec(struct MUI_PenSpec *value) {
    setOrStore(MUIA_Pendisplay_Spec, reinterpret_cast<IPTR>(value));
}

IPTR Zune::Pendisplay::setColormap(LONG colormap) {
    return DoMethod(object, MUIM_Pendisplay_SetColormap, static_cast<IPTR>(colormap));
}

IPTR Zune::Pendisplay::setMUIPen(LONG muipen) {
    return DoMethod(object, MUIM_Pendisplay_SetMUIPen, static_cast<IPTR>(muipen));
}

IPTR Zune::Pendisplay::setRGB(ULONG red, ULONG green, ULONG blue) {
    return DoMethod(object, MUIM_Pendisplay_SetRGB, static_cast<IPTR>(red), static_cast<IPTR>(green), static_cast<IPTR>(blue));
}

void Zune::Pendisplay::build() {
    RootClass::createObject(MUIC_Pendisplay);
}

