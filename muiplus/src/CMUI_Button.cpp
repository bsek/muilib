#include "include/CMUI_Button.h"

CMUI_Button::CMUI_Button(Object* obj)
: CMUI_Text() {
    object = obj;
}

CMUI_Button::CMUI_Button(const std::string label)
: CMUI_Text() {
    object = MUI_MakeObject(MUIO_Button, (IPTR) label.c_str());
}

CMUI_Button& CMUI_Button::operator=(Object* obj) {
    object = obj;
    return *this;
}


CMUI_Button::CMUI_Button() {}




