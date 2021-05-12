#include "include/Scale.h"
#include "include/RootClass.h"

Zune::Scale::Scale() = default;

Zune::Scale::Scale(Object *obj) {
    object = obj;
}

BOOL Zune::Scale::horiz() const {
    return (BOOL) mGetAttr(MUIA_Scale_Horiz);
}

void Zune::Scale::setHoriz(const BOOL value) {
    setOrStore(MUIA_Scale_Horiz, (IPTR) value);
}

void Zune::Scale::build() {
    RootClass::createObject(MUIC_Scale);
}
