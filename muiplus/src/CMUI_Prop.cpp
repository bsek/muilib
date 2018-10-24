#include "include/CMUI_Prop.h"

CMUI_Prop::CMUI_Prop()
: CMUI_Gadget() {
}

CMUI_Prop::CMUI_Prop(Object* obj)
: CMUI_Gadget() {
    object = obj;
}

CMUI_Prop& CMUI_Prop::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG CMUI_Prop::entries() const {
    return (LONG) mGetAttr(MUIA_Prop_Entries);
}

void CMUI_Prop::setEntries(LONG value) {
    setAttr(MUIA_Prop_Entries, (IPTR) value);
}

LONG CMUI_Prop::first() const {
    return (LONG) mGetAttr(MUIA_Prop_First);
}

void CMUI_Prop::setFirst(LONG value) {
    setAttr(MUIA_Prop_First, (IPTR) value);
}

BOOL CMUI_Prop::horiz() const {
    return (BOOL) mGetAttr(MUIA_Prop_Horiz);
}

BOOL CMUI_Prop::getSlider() const {
    return (BOOL) mGetAttr(MUIA_Prop_Slider);
}

void CMUI_Prop::setSlider(BOOL value) {
    setAttr(MUIA_Prop_Slider, (IPTR) value);
}

LONG CMUI_Prop::visible() const {
    return (LONG) mGetAttr(MUIA_Prop_Visible);
}

void CMUI_Prop::setVisible(LONG value) {
    setAttr(MUIA_Prop_Visible, (IPTR) value);
}

IPTR CMUI_Prop::decrease(LONG amount) {
    return DoMethod(object,MUIM_Prop_Decrease, amount);
}

IPTR CMUI_Prop::increase(LONG amount) {
    return DoMethod(object,MUIM_Prop_Increase, amount);
}
