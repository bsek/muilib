#include "include/Button.h"

Button::Button(Object* obj)
: Text() {
    object = obj;
}

Button::Button(const std::string label)
: Text() {
    object = MUI_MakeObject(MUIO_Button, (IPTR) label.c_str());
}

Button& Button::operator=(Object* obj) {
    object = obj;
    return *this;
}


Button::Button() {}




