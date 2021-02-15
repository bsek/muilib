#include "include/Cycle.h"
#include "include/Group.h"

Zune::Cycle::Cycle() : Group() { }

IPTR Zune::Cycle::active() const {
    return mGetAttr(MUIA_Cycle_Active);
}

void Zune::Cycle::setActive(IPTR value) {
    setOrStore(MUIA_Cycle_Active, (IPTR) value);
}

void Zune::Cycle::setEntries(STRPTR *entries) {
    setOrStore(MUIA_Cycle_Entries, (IPTR) entries);
}

void Zune::Cycle::build() {
    RootClass::createObject(MUIC_Cycle);
}
