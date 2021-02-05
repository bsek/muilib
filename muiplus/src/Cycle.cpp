#include "include/Cycle.h"

Cycle::Cycle(Object* obj)
: Group() {
    object = obj;
}

Cycle::Cycle(std::string label, CONST_STRPTR entries[])
: Group() {
    object = MUI_MakeObject(MUIO_Cycle, (IPTR) label.c_str(), (IPTR) entries);
}

Cycle& Cycle::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG Cycle::active() const {
    return (LONG) mGetAttr(MUIA_Cycle_Active);
}

void Cycle::setActive(LONG value) {
    setAttr(MUIA_Cycle_Active, (IPTR) value);
}

Cycle::Cycle() {}
