#include "include/CMUI_Numericbutton.h"

CMUI_Numericbutton::CMUI_Numericbutton(Object* obj)
: CMUI_Numeric() {
    object = obj;
}

CMUI_Numericbutton::CMUI_Numericbutton(LONG min, LONG max, std::string format)
: CMUI_Numeric() {
    object = MUI_MakeObject(MUIO_NumericButton, (IPTR) min, (IPTR) max, (IPTR) format.c_str());
}

CMUI_Numericbutton& CMUI_Numericbutton::operator=(Object* obj) {
    object = obj;
    return *this;
}

CMUI_Numericbutton::CMUI_Numericbutton() {}
