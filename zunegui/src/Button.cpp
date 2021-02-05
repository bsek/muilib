#include "include/Button.h"
#include <Object.h>

void Button::setText(const std::string &text) {
    this->text = text;
}
/*
void Button::render(Object *object) {
    button = new Button(this->text);
    object->addMember(*(*button));
}
*/