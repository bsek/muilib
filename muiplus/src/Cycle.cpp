#include "include/Cycle.h"
#include "include/Group.h"

Zune::Cycle::Cycle() = default;

IPTR Zune::Cycle::active() const {
    return mGetAttr(MUIA_Cycle_Active);
}

void Zune::Cycle::setActive(IPTR value) {
    setOrStore(MUIA_Cycle_Active, static_cast<IPTR>(value));
}

void Zune::Cycle::setEntries(STRPTR *entries) {
    setOrStore(MUIA_Cycle_Entries, reinterpret_cast<IPTR>(entries));
}

void Zune::Cycle::build() {
    RootClass::createObject(MUIC_Cycle);
}

Zune::Cycle::Cycle(Object *obj) {
   object = obj;
}
