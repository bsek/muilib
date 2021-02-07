#include "include/Cycle.h"
#include "include/Group.h"
#include "include/ZuneObject.h"

Zune::Cycle::Cycle(Object *obj)
        : Group() {
    object = obj;
}

Zune::Cycle::Cycle(std::string label, CONST_STRPTR entries[])
        : Group() {
    object = MUI_MakeObject(MUIO_Cycle, (IPTR) label.c_str(), (IPTR) entries);
}

Zune::Cycle &Zune::Cycle::operator=(Object *obj) {
    object = obj;
    return *this;
}

LONG Zune::Cycle::active() const {
    return (LONG) mGetAttr(MUIA_Cycle_Active);
}

void Zune::Cycle::setActive(LONG value) {
    setAttr(MUIA_Cycle_Active, (IPTR) value);
}

Zune::Cycle::Cycle() {}
