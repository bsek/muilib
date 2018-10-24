#include "include/CMUI_Gadget.h"

struct Gadget * CMUI_Gadget::Gadget(void) const {
    return nullptr; //(struct Gadget *) mGetAttr(MUIA_Gadget_Gadget);
}

CMUI_Gadget::CMUI_Gadget()
: CMUI_Area() {
}
