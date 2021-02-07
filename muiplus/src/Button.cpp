#include "include/Button.h"
#include "include/ZuneObject.h"
#include "include/Text.h"

Zune::Button::Button(Object* obj)
: Text() {
    object = obj;
}

Zune::Button::Button(const std::string label)
: Text() {
    object = MUI_MakeObject(MUIO_Button, (IPTR) label.c_str());
}

Zune::Button& Zune::Button::operator=(Object* obj) {
    object = obj;
    return *this;
}


Zune::Button::Button() {}




