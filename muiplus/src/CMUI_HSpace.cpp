#include "include/CMUI_HSpace.h"

CMUI_HSpace::CMUI_HSpace()
: CMUI_Rectangle() {
}

CMUI_HSpace::CMUI_HSpace(Object* obj)
: CMUI_Rectangle() {
    object = obj;
}

CMUI_HSpace::CMUI_HSpace(LONG space)
: CMUI_Rectangle() {
    object = MUI_MakeObject(MUIO_HSpace, (IPTR) space);
}

CMUI_HSpace& CMUI_HSpace::operator=(Object* obj) {
    object = obj;
    return *this;
}
