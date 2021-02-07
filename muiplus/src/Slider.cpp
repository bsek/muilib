#include "include/Slider.h"
#include "include/ZuneObject.h"
#include "include/Numeric.h"

Zune::Slider::Slider()
: Numeric() {
}

Zune::Slider::Slider(Object* obj)
: Numeric() {
    object = obj;
}

Zune::Slider::Slider(std::string label, LONG min, LONG max)
: Numeric() {
    object = MUI_MakeObject(MUIO_Slider, (IPTR) label.c_str(), (IPTR) min, (IPTR) max);
}

Zune::Slider& Zune::Slider::operator=(Object* obj) {
    object = obj;
    return *this;
}

BOOL Zune::Slider::horiz() const {
    return (BOOL) mGetAttr(MUIA_Slider_Horiz);
}

void Zune::Slider::setHoriz(BOOL value) {
    setAttr(MUIA_Slider_Horiz, (IPTR) value);
}
