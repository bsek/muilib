#include "include/Virtgroup.h"
#include "include/RootClass.h"

Zune::Virtgroup::Virtgroup() = default;

LONG Zune::Virtgroup::height() const {
    return static_cast<LONG>(mGetAttr(MUIA_Virtgroup_Height));
}

LONG Zune::Virtgroup::left() const {
    return static_cast<LONG>(mGetAttr(MUIA_Virtgroup_Left));
}

void Zune::Virtgroup::setLeft(LONG value) {
    setOrStore(MUIA_Virtgroup_Left, static_cast<IPTR>(value));
}

LONG Zune::Virtgroup::top() const {
    return static_cast<LONG>(mGetAttr(MUIA_Virtgroup_Top));
}

void Zune::Virtgroup::setTop(LONG value) {
    setOrStore(MUIA_Virtgroup_Top, static_cast<IPTR>(value));
}

LONG Zune::Virtgroup::width() const {
    return static_cast<LONG>(mGetAttr(MUIA_Virtgroup_Width));
}

void Zune::Virtgroup::setInput(BOOL value) {
    configmap[MUIA_Virtgroup_Input] = static_cast<IPTR>(value);
}

void Zune::Virtgroup::build() {
    RootClass::createObject(MUIC_Virtgroup);
}

