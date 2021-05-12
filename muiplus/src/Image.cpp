#include "include/Image.h"
#include "include/RootClass.h"

Zune::Image::Image() = default;

Zune::Image::Image(Object *obj) {
    object = obj;
}

void Zune::Image::setFontMatch(BOOL value) {
    configmap[MUIA_Image_FontMatch] = (IPTR) value;
}

void Zune::Image::setFontMatchHeight(BOOL value) {
    configmap[MUIA_Image_FontMatchHeight] = (IPTR) value;
}

void Zune::Image::setFontMatchWidth(BOOL value) {
    configmap[MUIA_Image_FontMatchWidth] = (IPTR) value;
}

void Zune::Image::setFreeHoriz(BOOL value) {
    configmap[MUIA_Image_FreeHoriz] = (IPTR) value;
}

void Zune::Image::setFreeVert(BOOL value) {
    configmap[MUIA_Image_FreeVert] = (IPTR) value;
}

void Zune::Image::setSpec(std::string value) {
    configmap[MUIA_Image_Spec] = (IPTR) value.c_str();
}

void Zune::Image::setState(LONG value) {
    setOrStore(MUIA_Image_State, (IPTR) value);
}

void Zune::Image::build() {
    RootClass::createObject(MUIC_Image);
}
