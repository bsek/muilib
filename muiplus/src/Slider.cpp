#include "include/Slider.h"
#include "include/RootClass.h"

Zune::Slider::Slider() = default;

Zune::Slider::Slider(Object *obj) {
    object = obj;
}

BOOL Zune::Slider::horiz() const {
    return static_cast<BOOL>(mGetAttr(MUIA_Slider_Horiz));
}

void Zune::Slider::setHoriz(BOOL value) {
    setOrStore(MUIA_Slider_Horiz, static_cast<IPTR>(value));
}

void Zune::Slider::setQuiet(BOOL value) {
    configmap[MUIA_Slider_Quiet] = static_cast<IPTR>(value);
}

void Zune::Slider::build() {
    RootClass::createObject(MUIC_Slider);
}

