#include "include/HBar.h"

HBar::HBar()
: Rectangle() {
}

HBar::HBar(Object* obj)
: Rectangle() {
    object = obj;
}

HBar::HBar(LONG space)
: Rectangle() {
    object = MUI_MakeObject(MUIO_HBar, (IPTR) space);
}

HBar& HBar::operator=(Object* obj) {
    object = obj;
    return *this;
}
