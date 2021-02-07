#include "include/HSpace.h"
#include "include/ZuneObject.h"

Zune::HSpace::HSpace()
: Rectangle() {
}

Zune::HSpace::HSpace(Object* obj)
: Rectangle() {
    object = obj;
}

Zune::HSpace::HSpace(LONG space)
: Rectangle() {
    object = MUI_MakeObject(MUIO_HSpace, (IPTR) space);
}

Zune::HSpace& Zune::HSpace::operator=(Object* obj) {
    object = obj;
    return *this;
}
