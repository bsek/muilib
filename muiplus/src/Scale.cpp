#include "include/Scale.h"
#include "include/ZuneObject.h"

Zune::Scale::Scale()
        : Area() {
}

Zune::Scale::Scale(Object *obj)
        : Area() {
    object = obj;
}

Zune::Scale &Zune::Scale::operator=(Object *obj) {
    object = obj;
    return *this;
}

BOOL Zune::Scale::Horiz() const {
    return (BOOL) mGetAttr(MUIA_Scale_Horiz);
}

void Zune::Scale::SetHoriz(BOOL value) {
    setAttr(MUIA_Scale_Horiz, (IPTR) value);
}
