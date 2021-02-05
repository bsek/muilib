#include "include/Checkmark.h"

Checkmark::Checkmark(Object* obj)
: Image() {
    object = obj;
}

Checkmark::Checkmark(std::string label)
: Image() {
    object = MUI_MakeObject(MUIO_Checkmark, (IPTR) label.c_str());
}

Checkmark& Checkmark::operator=(Object* obj) {
    object = obj;
    return *this;
}

Checkmark::Checkmark() {}
