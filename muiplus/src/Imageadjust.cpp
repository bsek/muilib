
#include "include/Imageadjust.h"

Zune::Imageadjust::Imageadjust() = default;

Zune::Imageadjust::Imageadjust(Object *obj) {
    object = obj;
}

void Zune::Imageadjust::setType(LONG value) {
    configmap[MUIA_Imageadjust_Type] = static_cast<IPTR>(value);
}

std::string Zune::Imageadjust::spec() {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Frameadjust_Spec));
}

void Zune::Imageadjust::setOriginator(Object *originator) {
    configmap[MUIA_Imageadjust_Originator] = reinterpret_cast<IPTR>(originator);
}

void Zune::Imageadjust::build() {
    RootClass::createObject(MUIC_Imageadjust);
}
