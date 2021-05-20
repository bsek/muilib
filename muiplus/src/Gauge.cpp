#include "include/Gauge.h"
#include "include/RootClass.h"

Zune::Gauge::Gauge(Object *obj) {
    object = obj;
}

LONG Zune::Gauge::current() const {
    return static_cast<LONG>(mGetAttr(MUIA_Gauge_Current));
}

void Zune::Gauge::setCurrent(LONG value) {
    setOrStore(MUIA_Gauge_Current, static_cast<IPTR>(value));
}

LONG Zune::Gauge::divide() const {
    return static_cast<LONG>(mGetAttr(MUIA_Gauge_Divide));
}

void Zune::Gauge::setDivide(LONG value) {
    setOrStore(MUIA_Gauge_Divide, static_cast<IPTR>(value));
}

STRPTR Zune::Gauge::infoText() const {
    return reinterpret_cast<STRPTR>(mGetAttr(MUIA_Gauge_InfoText));
}

void Zune::Gauge::setInfoText(std::string& value) {
    setAttr(MUIA_Gauge_InfoText, reinterpret_cast<IPTR>(value.c_str()));
}

LONG Zune::Gauge::max() const {
    return static_cast<LONG>(mGetAttr(MUIA_Gauge_Max));
}

void Zune::Gauge::setMax(LONG value) {
    setOrStore(MUIA_Gauge_Max, static_cast<IPTR>(value));
}

Zune::Gauge::Gauge() = default;

void Zune::Gauge::setHoriz(BOOL horiz) {
    configmap[MUIA_Gauge_Horiz] = static_cast<IPTR>(horiz);
}

void Zune::Gauge::build() {
    RootClass::createObject(MUIC_Gauge);
}

void Zune::Gauge::setDupInfoText(BOOL doDup) {
    configmap[MUIA_Gauge_DupInfoText] = static_cast<IPTR>(doDup);
}
