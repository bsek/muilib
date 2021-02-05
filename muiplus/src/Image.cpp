#include "include/Image.h"

Image::Image()
: Area() {
}

Image::Image(LONG state, BOOL fontMatch, BOOL fontMatchHeight, BOOL fontMatchWidth, BOOL freeHoriz,
                       BOOL freeVert, std::string spec, struct Image *oldImage, BOOL copySpec) : Area() {
    object = MUI_NewObject(MUIC_Image, MUIA_Image_Spec, spec.c_str(), MUIA_Image_FontMatch, fontMatch,
            MUIA_Image_FontMatchHeight, fontMatchHeight, MUIA_Image_FontMatchWidth, fontMatchWidth,
            MUIA_Image_FreeHoriz, freeHoriz, MUIA_Image_FreeVert, freeVert, MUIA_Image_Spec, spec.c_str(),
            MUIA_Image_State, state);
}

Image::Image(Object *obj) {
    object = obj;
}

Image &Image::operator=(Object *obj) {
    object = obj;
    return *this;
}

void Image::setFontMatch(BOOL value) {
    setAttr(MUIA_Image_FontMatch, (IPTR) value);
}

void Image::setFontMatchHeight(BOOL value) {
    setAttr(MUIA_Image_FontMatchHeight, (IPTR) value);
}

void Image::setFontMatchWidth(BOOL value) {
    setAttr(MUIA_Image_FontMatchWidth, (IPTR) value);
}

void Image::setFreeHoriz(BOOL value) {
    setAttr(MUIA_Image_FreeHoriz, (IPTR) value);
}

void Image::setFreeVert(BOOL value) {
    setAttr(MUIA_Image_FreeVert, (IPTR) value);
}

void Image::setSpec(std::string value) {
    setAttr(MUIA_Image_Spec, (IPTR) value.c_str());
}

void Image::setState(LONG value) {
    setAttr(MUIA_Image_State, (IPTR) value);
}
