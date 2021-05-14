
#include "include/Frameadjust.h"

Zune::Frameadjust::Frameadjust() = default;

Zune::Frameadjust::Frameadjust(Object *obj) {
    object = obj;
}

std::string Zune::Frameadjust::spec() {
    return reinterpret_cast<CONST_STRPTR>(mGetAttr(MUIA_Frameadjust_Spec));
}

void Zune::Frameadjust::setSpec(std::string& spec) {
    configmap[MUIA_Frameadjust_Spec] = reinterpret_cast<IPTR>(spec.c_str());
}

void Zune::Frameadjust::build() {
    RootClass::createObject(MUIC_Frameadjust);
}
