#include "include/Label.h"

Label::Label(Object* obj)
: Text() {
    object = obj;
}

Label::Label(std::string label, IPTR flags)
: Text() {
    object = MUI_MakeObject(MUIO_Label, (IPTR) label.c_str(), flags);
}

Label& Label::operator=(Object* obj) {
    object = obj;
    return *this;
}

Label::Label() {}
