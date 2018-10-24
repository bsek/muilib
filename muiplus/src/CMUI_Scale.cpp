#include "include/CMUI_Scale.h"

CMUI_Scale::CMUI_Scale()
: CMUI_Area() {
}

CMUI_Scale::CMUI_Scale(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Scale& CMUI_Scale::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Scale::Horiz() const {
    return (BOOL) mGetAttr(MUIA_Scale_Horiz);
}

void CMUI_Scale::SetHoriz(BOOL value) {
    setAttr(MUIA_Scale_Horiz, (IPTR) value);
}
