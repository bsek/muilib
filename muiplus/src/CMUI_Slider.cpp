#include "include/CMUI_Slider.h"

CMUI_Slider::CMUI_Slider()
: CMUI_Numeric() {
}

CMUI_Slider::CMUI_Slider(Object* obj)
: CMUI_Numeric() {
    object = obj;
}

CMUI_Slider::CMUI_Slider(std::string label, LONG min, LONG max)
: CMUI_Numeric() {
    object = MUI_MakeObject(MUIO_Slider, (IPTR) label.c_str(), (IPTR) min, (IPTR) max);
}

CMUI_Slider& CMUI_Slider::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL CMUI_Slider::horiz() const {
    return (BOOL) mGetAttr(MUIA_Slider_Horiz);
}

void CMUI_Slider::setHoriz(BOOL value) {
    setAttr(MUIA_Slider_Horiz, (IPTR) value);
}
