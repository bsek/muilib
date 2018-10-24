#include "include/CMUI_Image.h"

CMUI_Image::CMUI_Image()
: CMUI_Area() {
}

CMUI_Image::CMUI_Image(LONG state, BOOL fontMatch, BOOL fontMatchHeight, BOOL fontMatchWidth, BOOL freeHoriz,
                       BOOL freeVert, std::string spec, struct Image *oldImage, BOOL copySpec) : CMUI_Area() {
    object = MUI_NewObject(MUIC_Image, MUIA_Image_Spec, spec.c_str(), MUIA_Image_FontMatch, fontMatch,
            MUIA_Image_FontMatchHeight, fontMatchHeight, MUIA_Image_FontMatchWidth, fontMatchWidth,
            MUIA_Image_FreeHoriz, freeHoriz, MUIA_Image_FreeVert, freeVert, MUIA_Image_Spec, spec.c_str(),
            MUIA_Image_State, state);
}

CMUI_Image::CMUI_Image(Object *obj) {
    object = obj;
}

CMUI_Image &CMUI_Image::operator=(Object *obj) {
    object = obj;
    return *this;
}

void CMUI_Image::setFontMatch(BOOL value) {
    setAttr(MUIA_Image_FontMatch, (IPTR) value);
}

void CMUI_Image::setFontMatchHeight(BOOL value) {
    setAttr(MUIA_Image_FontMatchHeight, (IPTR) value);
}

void CMUI_Image::setFontMatchWidth(BOOL value) {
    setAttr(MUIA_Image_FontMatchWidth, (IPTR) value);
}

void CMUI_Image::setFreeHoriz(BOOL value) {
    setAttr(MUIA_Image_FreeHoriz, (IPTR) value);
}

void CMUI_Image::setFreeVert(BOOL value) {
    setAttr(MUIA_Image_FreeVert, (IPTR) value);
}

void CMUI_Image::setSpec(std::string value) {
    setAttr(MUIA_Image_Spec, (IPTR) value.c_str());
}

void CMUI_Image::setState(LONG value) {
    setAttr(MUIA_Image_State, (IPTR) value);
}
