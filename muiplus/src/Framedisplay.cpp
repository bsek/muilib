#include "include/Framedisplay.h"

Zune::Framedisplay::Framedisplay() = default;

Zune::Framedisplay::Framedisplay(Object *obj) {
    object = obj;
}

void Zune::Framedisplay::setSpec(std::string &spec) {
    setOrStore(MUIA_Frameadjust_Spec, reinterpret_cast<IPTR>(spec.c_str()));
}

std::string Zune::Framedisplay::spec() {
    return reinterpret_cast<CONST_STRPTR>(mGetAttr(MUIA_Frameadjust_Spec));
}

void Zune::Framedisplay::build() {
    RootClass::createObject(MUIC_Framedisplay);
}
