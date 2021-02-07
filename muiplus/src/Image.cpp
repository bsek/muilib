#include "include/Image.h"
#include "include/ZuneObject.h"

Zune::Image::Image()
        : Area() {
}

Zune::Image::Image(LONG state, BOOL fontMatch, BOOL fontMatchHeight, BOOL fontMatchWidth, BOOL freeHoriz,
                   BOOL freeVert, std::string spec, struct Zune::Image *oldImage, BOOL copySpec) : Area() {
    object = MUI_NewObject(MUIC_Image, MUIA_Image_Spec, spec.c_str(), MUIA_Image_FontMatch, fontMatch,
                           MUIA_Image_FontMatchHeight, fontMatchHeight, MUIA_Image_FontMatchWidth, fontMatchWidth,
                           MUIA_Image_FreeHoriz, freeHoriz, MUIA_Image_FreeVert, freeVert, MUIA_Image_Spec,
                           spec.c_str(),
                           MUIA_Image_State, state);
}

Zune::Image::Image(Object *obj) {
    object = obj;
}

Zune::Image &Zune::Image::operator=(Object *obj) {
    object = obj;
    return *this;
}

void Zune::Image::setFontMatch(BOOL value) {
    setAttr(MUIA_Image_FontMatch, (IPTR) value);
}

void Zune::Image::setFontMatchHeight(BOOL value) {
    setAttr(MUIA_Image_FontMatchHeight, (IPTR) value);
}

void Zune::Image::setFontMatchWidth(BOOL value) {
    setAttr(MUIA_Image_FontMatchWidth, (IPTR) value);
}

void Zune::Image::setFreeHoriz(BOOL value) {
    setAttr(MUIA_Image_FreeHoriz, (IPTR) value);
}

void Zune::Image::setFreeVert(BOOL value) {
    setAttr(MUIA_Image_FreeVert, (IPTR) value);
}

void Zune::Image::setSpec(std::string value) {
    setAttr(MUIA_Image_Spec, (IPTR) value.c_str());
}

void Zune::Image::setState(LONG value) {
    setAttr(MUIA_Image_State, (IPTR) value);
}
