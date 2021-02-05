#include "include/Gadget.h"

struct Gadget * Gadget::Gadget(void) const {
    return nullptr; //(struct Gadget *) mGetAttr(MUIA_Gadget_Gadget);
}

Gadget::Gadget()
: Area() {
}
