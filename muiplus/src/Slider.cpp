#include "include/Slider.h"

Slider::Slider()
: Numeric() {
}

Slider::Slider(Object* obj)
: Numeric() {
    object = obj;
}

Slider::Slider(std::string label, LONG min, LONG max)
: Numeric() {
    object = MUI_MakeObject(MUIO_Slider, (IPTR) label.c_str(), (IPTR) min, (IPTR) max);
}

Slider& Slider::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Slider::horiz() const {
    return (BOOL) mGetAttr(MUIA_Slider_Horiz);
}

void Slider::setHoriz(BOOL value) {
    setAttr(MUIA_Slider_Horiz, (IPTR) value);
}
