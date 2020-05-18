#include "include/Button.h"
#include <CMUI_Object.h>

void Button::setText(const std::string &text) {
    this->text = text;
}
/*
void Button::render(CMUI_Object *object) {
    button = new CMUI_Button(this->text);
    object->addMember(*(*button));
}
*/