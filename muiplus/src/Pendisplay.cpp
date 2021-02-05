#include "include/Pendisplay.h"

Pendisplay::Pendisplay() {

}

Pendisplay::Pendisplay(Object *reference, struct MUI_RGBcolor *color, struct MUI_PenSpec *spec) {
    object = MUI_NewObject(MUIC_Pendisplay, MUIA_Pendisplay_Reference, reference,
            MUIA_Pendisplay_RGBcolor, color, MUIA_Pendisplay_Spec, spec, TAG_END);
}

Pendisplay::Pendisplay(Object* obj)
: Area() {
    object = obj;
}

Pendisplay& Pendisplay::operator=(Object* obj) {
    object = obj;
    return *this;
}

Object * Pendisplay::pen(void) const {
    return (Object *) mGetAttr(MUIA_Pendisplay_Pen);
}

Object * Pendisplay::reference(void) const {
    return (Object *) mGetAttr(MUIA_Pendisplay_Reference);
}

void Pendisplay::setReference(Object *value) {
    setAttr(MUIA_Pendisplay_Reference, (IPTR) value);
}

struct MUI_RGBcolor * Pendisplay::getRGBcolor(void) const {
    return (struct MUI_RGBcolor *) mGetAttr(MUIA_Pendisplay_RGBcolor);
}

void Pendisplay::setRGBcolor(struct MUI_RGBcolor *value) {
    setAttr(MUIA_Pendisplay_RGBcolor, (IPTR) value);
}

struct MUI_PenSpec * Pendisplay::spec(void) const {
    return (struct MUI_PenSpec *) mGetAttr(MUIA_Pendisplay_Spec);
}

void Pendisplay::setSpec(struct MUI_PenSpec *value) {
    setAttr(MUIA_Pendisplay_Spec, (IPTR) value);
}

IPTR Pendisplay::setColormap(LONG colormap) {
    return DoMethod(object,MUIM_Pendisplay_SetColormap, colormap);
}

IPTR Pendisplay::setMUIPen(LONG muipen) {
    return DoMethod(object,MUIM_Pendisplay_SetMUIPen, muipen);
}

IPTR Pendisplay::setRGB(IPTR red, IPTR green, IPTR blue) {
    return DoMethod(object,MUIM_Pendisplay_SetRGB, red, green, blue);
}

