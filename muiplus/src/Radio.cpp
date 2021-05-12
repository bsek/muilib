#include "include/Radio.h"
#include "include/Group.h"
#include "include/RootClass.h"

Zune::Radio::Radio(Object *obj)
        : Group() {
    object = obj;
}

Zune::Radio &Zune::Radio::operator=(Object *obj) {
    object = obj;
    return *this;
}

LONG Zune::Radio::active(void) const {
    return (LONG) mGetAttr(MUIA_Radio_Active);
}

void Zune::Radio::setActive(LONG value) {
    setAttr(MUIA_Radio_Active, (IPTR) value);
}

Zune::Radio::Radio() = default;

void Zune::Radio::setEntries(STRPTR *entries) {
    configmap[MUIA_Radio_Entries] = (IPTR) entries;
}

void Zune::Radio::build() {
    RootClass::createObject(MUIC_Radio);
}
