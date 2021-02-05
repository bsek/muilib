#include "include/Prop.h"

Prop::Prop()
: Gadget() {
}

Prop::Prop(Object* obj)
: Gadget() {
    object = obj;
}

Prop& Prop::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG Prop::entries() const {
    return (LONG) mGetAttr(MUIA_Prop_Entries);
}

void Prop::setEntries(LONG value) {
    setAttr(MUIA_Prop_Entries, (IPTR) value);
}

LONG Prop::first() const {
    return (LONG) mGetAttr(MUIA_Prop_First);
}

void Prop::setFirst(LONG value) {
    setAttr(MUIA_Prop_First, (IPTR) value);
}

BOOL Prop::horiz() const {
    return (BOOL) mGetAttr(MUIA_Prop_Horiz);
}

BOOL Prop::getSlider() const {
    return (BOOL) mGetAttr(MUIA_Prop_Slider);
}

void Prop::setSlider(BOOL value) {
    setAttr(MUIA_Prop_Slider, (IPTR) value);
}

LONG Prop::visible() const {
    return (LONG) mGetAttr(MUIA_Prop_Visible);
}

void Prop::setVisible(LONG value) {
    setAttr(MUIA_Prop_Visible, (IPTR) value);
}

IPTR Prop::decrease(LONG amount) {
    return DoMethod(object,MUIM_Prop_Decrease, amount);
}

IPTR Prop::increase(LONG amount) {
    return DoMethod(object,MUIM_Prop_Increase, amount);
}
