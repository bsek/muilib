#include "include/CMUI_Balance.h"

CMUI_Balance::CMUI_Balance(Object * obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Balance & CMUI_Balance::operator=(Object * obj) {
    object = obj;
    return *this;
}

CMUI_Balance::CMUI_Balance()
: CMUI_Area() {
    object = MUI_NewObject(MUIC_Balance, TAG_END);
}

