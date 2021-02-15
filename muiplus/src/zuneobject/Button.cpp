#include "Button.h"

ZuneObject::Button::Button(std::string &l) : label(l) {}

void ZuneObject::Button::create() {
    Object *object = MUI_MakeObject(MUIO_Button, (IPTR) label.c_str());
    companion.setObject(object);
}

Object* ZuneObject::Button::getObject() {
    if (companion.isValid()) {
        return companion.getObject();
    } else {
        std::cerr << "Object has not been created yet!";
        return nullptr;
    }
}
