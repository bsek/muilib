#include "include/Prop.h"
#include "include/ZuneObject.h"

Zune::Prop::Prop()
        : Zune::Area() {
}

Zune::Prop::Prop(Object *obj)
        : Zune::Area() {
    object = obj;
}

Zune::Prop &Zune::Prop::operator=(Object *obj) {
    object = obj;
    return *this;
}

LONG Zune::Prop::entries() const {
    return (LONG) mGetAttr(MUIA_Prop_Entries);
}

void Zune::Prop::setEntries(LONG value) {
    setAttr(MUIA_Prop_Entries, (IPTR) value);
}

LONG Zune::Prop::first() const {
    return (LONG) mGetAttr(MUIA_Prop_First);
}

void Zune::Prop::setFirst(LONG value) {
    setAttr(MUIA_Prop_First, (IPTR) value);
}

BOOL Zune::Prop::horiz() const {
    return (BOOL) mGetAttr(MUIA_Prop_Horiz);
}

BOOL Zune::Prop::getSlider() const {
    return (BOOL) mGetAttr(MUIA_Prop_Slider);
}

void Zune::Prop::setSlider(BOOL value) {
    setAttr(MUIA_Prop_Slider, (IPTR) value);
}

LONG Zune::Prop::visible() const {
    return (LONG) mGetAttr(MUIA_Prop_Visible);
}

void Zune::Prop::setVisible(LONG value) {
    setAttr(MUIA_Prop_Visible, (IPTR) value);
}

IPTR Zune::Prop::decrease(LONG amount) {
    return DoMethod(object, MUIM_Prop_Decrease, amount);
}

IPTR Zune::Prop::increase(LONG amount) {
    return DoMethod(object, MUIM_Prop_Increase, amount);
}
