
#include "include/Imagedisplay.h"

Zune::Imagedisplay::Imagedisplay() = default;

Zune::Imagedisplay::Imagedisplay(Object *obj) {
    object = obj;
}

void Zune::Imagedisplay::setSpec(std::string &spec) {
    setOrStore(MUIA_Imageadjust_Spec, reinterpret_cast<IPTR>(spec.c_str()));
}

std::string Zune::Imagedisplay::spec() {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Imageadjust_Spec));
}

void Zune::Imagedisplay::setUseDefSize(BOOL defSize) {
    configmap[MUIA_Imagedisplay_UseDefSize] = static_cast<IPTR>(defSize);
}

void Zune::Imagedisplay::setFreeHoriz(BOOL value) {
    configmap[MUIA_Imagedisplay_FreeHoriz] = static_cast<IPTR>(value);
}

void Zune::Imagedisplay::setFreeVert(BOOL value) {
    configmap[MUIA_Imagedisplay_FreeVert] = static_cast<IPTR>(value);
}

void Zune::Imagedisplay::build() {
    RootClass::createObject(MUIC_Imagedisplay);
}
