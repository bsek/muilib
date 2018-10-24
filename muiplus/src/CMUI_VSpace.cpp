#include "include/CMUI_VSpace.h"

CMUI_VSpace::CMUI_VSpace()
: CMUI_Rectangle() {
}

CMUI_VSpace::CMUI_VSpace(Object *obj) : CMUI_Rectangle() {
    object = obj;
}

CMUI_VSpace &CMUI_VSpace::operator=(Object *obj) {
    object = obj;
    return *this;
}

CMUI_VSpace::CMUI_VSpace(LONG space) {
    object = MUI_MakeObject(MUIO_VSpace, (IPTR) space);
}
