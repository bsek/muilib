#include "include/Pendisplay.h"
#include "include/ZuneObject.h"

Zune::Pendisplay::Pendisplay() {

}

Zune::Pendisplay::Pendisplay(Object *reference, struct MUI_RGBcolor *color, struct MUI_PenSpec *spec) {
    object = MUI_NewObject(MUIC_Pendisplay, MUIA_Pendisplay_Reference, reference,
            MUIA_Pendisplay_RGBcolor, color, MUIA_Pendisplay_Spec, spec, TAG_END);
}

Zune::Pendisplay::Pendisplay(Object* obj)
: Area() {
    object = obj;
}

Zune::Pendisplay& Zune::Pendisplay::operator=(Object* obj) {
    object = obj;
    return *this;
}

Object * Zune::Pendisplay::pen(void) const {
    return (Object *) mGetAttr(MUIA_Pendisplay_Pen);
}

Object * Zune::Pendisplay::reference(void) const {
    return (Object *) mGetAttr(MUIA_Pendisplay_Reference);
}

void Zune::Pendisplay::setReference(Object *value) {
    setAttr(MUIA_Pendisplay_Reference, (IPTR) value);
}

struct MUI_RGBcolor * Zune::Pendisplay::getRGBcolor(void) const {
    return (struct MUI_RGBcolor *) mGetAttr(MUIA_Pendisplay_RGBcolor);
}

void Zune::Pendisplay::setRGBcolor(struct MUI_RGBcolor *value) {
    setAttr(MUIA_Pendisplay_RGBcolor, (IPTR) value);
}

struct MUI_PenSpec * Zune::Pendisplay::spec(void) const {
    return (struct MUI_PenSpec *) mGetAttr(MUIA_Pendisplay_Spec);
}

void Zune::Pendisplay::setSpec(struct MUI_PenSpec *value) {
    setAttr(MUIA_Pendisplay_Spec, (IPTR) value);
}

IPTR Zune::Pendisplay::setColormap(LONG colormap) {
    return DoMethod(object,MUIM_Pendisplay_SetColormap, colormap);
}

IPTR Zune::Pendisplay::setMUIPen(LONG muipen) {
    return DoMethod(object,MUIM_Pendisplay_SetMUIPen, muipen);
}

IPTR Zune::Pendisplay::setRGB(IPTR red, IPTR green, IPTR blue) {
    return DoMethod(object,MUIM_Pendisplay_SetRGB, red, green, blue);
}

