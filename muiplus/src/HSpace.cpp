#include "include/HSpace.h"

HSpace::HSpace()
: Rectangle() {
}

HSpace::HSpace(Object* obj)
: Rectangle() {
    object = obj;
}

HSpace::HSpace(LONG space)
: Rectangle() {
    object = MUI_MakeObject(MUIO_HSpace, (IPTR) space);
}

HSpace& HSpace::operator=(Object* obj) {
    object = obj;
    return *this;
}
