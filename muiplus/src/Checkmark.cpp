#include "include/Checkmark.h"
#include "include/Image.h"
#include "include/ZuneObject.h"

Zune::Checkmark::Checkmark(Object *obj)
        : Image() {
    object = obj;
}

Zune::Checkmark::Checkmark(std::string label)
        : Image() {
    object = MUI_MakeObject(MUIO_Checkmark, (IPTR) label.c_str());
}

Zune::Checkmark &Zune::Checkmark::operator=(Object *obj) {
    object = obj;
    return *this;
}

Zune::Checkmark::Checkmark() {}
