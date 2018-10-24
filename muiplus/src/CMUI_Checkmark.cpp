#include "include/CMUI_Checkmark.h"

CMUI_Checkmark::CMUI_Checkmark(Object* obj)
: CMUI_Image() {
    object = obj;
}

CMUI_Checkmark::CMUI_Checkmark(std::string label)
: CMUI_Image() {
    object = MUI_MakeObject(MUIO_Checkmark, (IPTR) label.c_str());
}

CMUI_Checkmark& CMUI_Checkmark::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Checkmark::CMUI_Checkmark() {}
