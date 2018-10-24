#include "include/CMUI_Label.h"

CMUI_Label::CMUI_Label(Object* obj)
: CMUI_Text() {
    object = obj;
}

CMUI_Label::CMUI_Label(std::string label, IPTR flags)
: CMUI_Text() {
    object = MUI_MakeObject(MUIO_Label, (IPTR) label.c_str(), flags);
}

CMUI_Label& CMUI_Label::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Label::CMUI_Label() {}
