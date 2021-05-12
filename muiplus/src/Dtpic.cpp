#include "include/Dtpic.h"

Zune::Dtpic::Dtpic() = default;

Zune::Dtpic::Dtpic(Object *obj) {
    object = obj;
}

void Zune::Dtpic::setAlpha(LONG value) {
    setOrStore(MUIA_Dtpic_Alpha, static_cast<IPTR>(value));
}

LONG Zune::Dtpic::alpha() const {
    return static_cast<LONG>(mGetAttr(MUIA_Dtpic_Alpha));
}

void Zune::Dtpic::setDarkenSelState(BOOL darkenSelState) {
    configmap[MUIA_Dtpic_DarkenSelState] = static_cast<IPTR>(darkenSelState);
}

BOOL Zune::Dtpic::darkenSelState() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Dtpic_DarkenSelState));
}

void Zune::Dtpic::setFade(LONG value) {
    setOrStore(MUIA_Dtpic_Fade, static_cast<IPTR>(value));
}

LONG Zune::Dtpic::fade() const {
    return static_cast<LONG>(mGetAttr(MUIA_Dtpic_Fade));
}

void Zune::Dtpic::setLightenOnMouse(BOOL lightenOnMouse) {
    configmap[MUIA_Dtpic_LightenOnMouse] = static_cast<IPTR>(lightenOnMouse);
}

BOOL Zune::Dtpic::lightenOnMouse() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Dtpic_LightenOnMouse));
}

void Zune::Dtpic::setName(STRPTR name) {
    setOrStore(MUIA_Dtpic_Name, reinterpret_cast<IPTR>(name));
}

std::string Zune::Dtpic::name() const {
    STRPTR value = reinterpret_cast<STRPTR>(mGetAttr(MUIA_Dtpic_Name));
    return value;
}

void Zune::Dtpic::build() {
    RootClass::createObject(MUIC_Dtpic);
}
