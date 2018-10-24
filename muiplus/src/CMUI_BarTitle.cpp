#include "include/CMUI_BarTitle.h"

CMUI_BarTitle::CMUI_BarTitle()
: CMUI_Rectangle() {
}

CMUI_BarTitle::CMUI_BarTitle(Object* obj)
: CMUI_Rectangle() {
    object = obj;
}

CMUI_BarTitle::CMUI_BarTitle(LONG space)
: CMUI_Rectangle() {
    object = MUI_MakeObject(MUIO_BarTitle, (IPTR) space);
}

CMUI_BarTitle & CMUI_BarTitle::operator=(Object * obj) {
    object = obj;
    return *this;
}
