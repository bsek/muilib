#include "include/BarTitle.h"
#include "include/ZuneObject.h"
#include "include/Rectangle.h"

Zune::BarTitle::BarTitle()
        : Rectangle() {
}

Zune::BarTitle::BarTitle(Object *obj)
        : Rectangle() {
    object = obj;
}

Zune::BarTitle::BarTitle(LONG space)
        : Rectangle() {
    object = MUI_MakeObject(MUIO_BarTitle, (IPTR) space);
}

Zune::BarTitle &Zune::BarTitle::operator=(Object *obj) {
    object = obj;
    return *this;
}
