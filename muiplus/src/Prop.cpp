#include "include/Prop.h"
#include "include/RootClass.h"

Zune::Prop::Prop() = default;

Zune::Prop::Prop(Object *obj) {
    object = obj;
}

LONG Zune::Prop::entries() const {
    return (LONG) mGetAttr(MUIA_Prop_Entries);
}

void Zune::Prop::setEntries(LONG value) {
    setOrStore(MUIA_Prop_Entries, (IPTR) value);
}

LONG Zune::Prop::first() const {
    return (LONG) mGetAttr(MUIA_Prop_First);
}

void Zune::Prop::setFirst(LONG value) {
    setOrStore(MUIA_Prop_First, (IPTR) value);
}

BOOL Zune::Prop::getSlider() const {
    return (BOOL) mGetAttr(MUIA_Prop_Slider);
}

void Zune::Prop::setSlider(BOOL value) {
    setOrStore(MUIA_Prop_Slider, (IPTR) value);
}

LONG Zune::Prop::visible() const {
    return (LONG) mGetAttr(MUIA_Prop_Visible);
}

void Zune::Prop::setVisible(LONG value) {
    setOrStore(MUIA_Prop_Visible, (IPTR) value);
}

IPTR Zune::Prop::decrease(LONG amount) {
    return DoMethod(object, MUIM_Prop_Decrease, amount);
}

IPTR Zune::Prop::increase(LONG amount) {
    return DoMethod(object, MUIM_Prop_Increase, amount);
}

void Zune::Prop::setHorizontal(BOOL horiz) {
    configmap[MUIA_Prop_Horiz] = (IPTR) horiz;
}

BOOL Zune::Prop::horizontal() const {
    return (BOOL) mGetAttr(MUIA_Prop_Horiz);
}

void Zune::Prop::setUseWinBorder(BOOL useBorder) {
    configmap[MUIA_Prop_UseWinBorder] = (IPTR) useBorder;
}

void Zune::Prop::build() {
    RootClass::createObject(MUIC_Prop);
}
