#include "include/Gauge.h"
#include "include/ZuneObject.h"

Zune::Gauge::Gauge(LONG current, ULONG divide, BOOL horiz, std::string infoText, LONG max)
        : Area() {
    object = MUI_NewObject(MUIC_Gauge, MUIA_Gauge_Current, current, MUIA_Gauge_Divide, divide, MUIA_Gauge_Horiz, horiz,
                           MUIA_Gauge_InfoText, infoText.c_str(), MUIA_Gauge_Max, max);
}

Zune::Gauge::Gauge(Object *obj)
        : Area() {
    object = obj;
}

Zune::Gauge &Zune::Gauge::operator=(Object *obj) {
    object = obj;
    return *this;
}

LONG Zune::Gauge::current() const {
    return (LONG) mGetAttr(MUIA_Gauge_Current);
}

void Zune::Gauge::setCurrent(LONG value) {
    setAttr(MUIA_Gauge_Current, (IPTR) value);
}

BOOL Zune::Gauge::divide() const {
    return (BOOL) mGetAttr(MUIA_Gauge_Divide);
}

void Zune::Gauge::setDivide(BOOL value) {
    setAttr(MUIA_Gauge_Divide, (IPTR) value);
}

STRPTR Zune::Gauge::infoText() const {
    return (STRPTR) mGetAttr(MUIA_Gauge_InfoText);
}

void Zune::Gauge::setInfoText(STRPTR value) {
    setAttr(MUIA_Gauge_InfoText, (IPTR) value);
}

LONG Zune::Gauge::max() const {
    return (LONG) mGetAttr(MUIA_Gauge_Max);
}

void Zune::Gauge::setMax(LONG value) {
    setAttr(MUIA_Gauge_Max, (IPTR) value);
}

Zune::Gauge::Gauge() {}
