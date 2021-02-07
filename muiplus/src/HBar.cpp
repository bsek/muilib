#include "include/HBar.h"
#include "include/ZuneObject.h"

Zune::HBar::HBar()
: Rectangle() {
}

Zune::HBar::HBar(Object* obj)
: Rectangle() {
    object = obj;
}

Zune::HBar::HBar(LONG space)
: Rectangle() {
    object = MUI_MakeObject(MUIO_HBar, (IPTR) space);
}

Zune::HBar& Zune::HBar::operator=(Object* obj) {
    object = obj;
    return *this;
}
