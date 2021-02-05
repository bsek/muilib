#include "include/Scale.h"

Scale::Scale()
: Area() {
}

Scale::Scale(Object* obj)
: Area() {
    object = obj;
}

Scale& Scale::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Scale::Horiz() const {
    return (BOOL) mGetAttr(MUIA_Scale_Horiz);
}

void Scale::SetHoriz(BOOL value) {
    setAttr(MUIA_Scale_Horiz, (IPTR) value);
}
