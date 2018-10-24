#include "include/CMUI_Pendisplay.h"

CMUI_Pendisplay::CMUI_Pendisplay() {

}

CMUI_Pendisplay::CMUI_Pendisplay(Object *reference, struct MUI_RGBcolor *color, struct MUI_PenSpec *spec) {
    object = MUI_NewObject(MUIC_Pendisplay, MUIA_Pendisplay_Reference, reference,
            MUIA_Pendisplay_RGBcolor, color, MUIA_Pendisplay_Spec, spec, TAG_END);
}

CMUI_Pendisplay::CMUI_Pendisplay(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Pendisplay& CMUI_Pendisplay::operator=(Object* obj) {
    object = obj;
    return *this;
}

Object * CMUI_Pendisplay::pen(void) const {
    return (Object *) mGetAttr(MUIA_Pendisplay_Pen);
}

Object * CMUI_Pendisplay::reference(void) const {
    return (Object *) mGetAttr(MUIA_Pendisplay_Reference);
}

void CMUI_Pendisplay::setReference(Object *value) {
    setAttr(MUIA_Pendisplay_Reference, (IPTR) value);
}

struct MUI_RGBcolor * CMUI_Pendisplay::getRGBcolor(void) const {
    return (struct MUI_RGBcolor *) mGetAttr(MUIA_Pendisplay_RGBcolor);
}

void CMUI_Pendisplay::setRGBcolor(struct MUI_RGBcolor *value) {
    setAttr(MUIA_Pendisplay_RGBcolor, (IPTR) value);
}

struct MUI_PenSpec * CMUI_Pendisplay::spec(void) const {
    return (struct MUI_PenSpec *) mGetAttr(MUIA_Pendisplay_Spec);
}

void CMUI_Pendisplay::setSpec(struct MUI_PenSpec *value) {
    setAttr(MUIA_Pendisplay_Spec, (IPTR) value);
}

IPTR CMUI_Pendisplay::setColormap(LONG colormap) {
    return DoMethod(object,MUIM_Pendisplay_SetColormap, colormap);
}

IPTR CMUI_Pendisplay::setMUIPen(LONG muipen) {
    return DoMethod(object,MUIM_Pendisplay_SetMUIPen, muipen);
}

IPTR CMUI_Pendisplay::setRGB(IPTR red, IPTR green, IPTR blue) {
    return DoMethod(object,MUIM_Pendisplay_SetRGB, red, green, blue);
}

