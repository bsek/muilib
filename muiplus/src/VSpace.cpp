#include "include/VSpace.h"

VSpace::VSpace()
: Rectangle() {
}

VSpace::VSpace(Object *obj) : Rectangle() {
    object = obj;
}

VSpace &VSpace::operator=(Object *obj) {
    object = obj;
    return *this;
}

VSpace::VSpace(LONG space) {
    object = MUI_MakeObject(MUIO_VSpace, (IPTR) space);
}
