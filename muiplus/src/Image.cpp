#include "include/Image.h"
#include "include/RootClass.h"

Zune::Image::Image() = default;

Zune::Image::Image(Object *obj) {
    object = obj;
}

void Zune::Image::setFontMatch(BOOL value) {
    configmap[MUIA_Image_FontMatch] = static_cast<IPTR>(value);
}

void Zune::Image::setFontMatchHeight(BOOL value) {
    configmap[MUIA_Image_FontMatchHeight] = static_cast<IPTR>(value);
}

void Zune::Image::setFontMatchWidth(BOOL value) {
    configmap[MUIA_Image_FontMatchWidth] = static_cast<IPTR>(value);
}

void Zune::Image::setFreeHoriz(BOOL value) {
    configmap[MUIA_Image_FreeHoriz] = static_cast<IPTR>(value);
}

void Zune::Image::setFreeVert(BOOL value) {
    configmap[MUIA_Image_FreeVert] = static_cast<IPTR>(value);
}

void Zune::Image::setSpec(std::string value) {
    configmap[MUIA_Image_Spec] = reinterpret_cast<IPTR>(value.c_str());
}

void Zune::Image::setState(LONG value) {
    setOrStore(MUIA_Image_State, static_cast<IPTR>(value));
}

void Zune::Image::build() {
    RootClass::createObject(MUIC_Image);
}
