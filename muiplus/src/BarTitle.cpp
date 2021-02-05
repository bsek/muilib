#include "include/BarTitle.h"

BarTitle::BarTitle()
: Rectangle() {
}

BarTitle::BarTitle(Object* obj)
: Rectangle() {
    object = obj;
}

BarTitle::BarTitle(LONG space)
: Rectangle() {
    object = MUI_MakeObject(MUIO_BarTitle, (IPTR) space);
}

BarTitle & BarTitle::operator=(Object * obj) {
    object = obj;
    return *this;
}
