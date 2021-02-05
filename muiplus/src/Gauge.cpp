#include "include/Gauge.h"

Gauge::Gauge(LONG current, ULONG divide, BOOL horiz, std::string infoText, LONG max)
: Area() {
    object = MUI_NewObject(MUIC_Gauge, MUIA_Gauge_Current, current, MUIA_Gauge_Divide, divide, MUIA_Gauge_Horiz, horiz,
            MUIA_Gauge_InfoText, infoText.c_str(), MUIA_Gauge_Max, max);
}

Gauge::Gauge(Object* obj)
: Area() {
    object = obj;
}

Gauge& Gauge::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG Gauge::current() const {
    return (LONG) mGetAttr(MUIA_Gauge_Current);
}

void Gauge::setCurrent(LONG value) {
    setAttr(MUIA_Gauge_Current, (IPTR) value);
}

BOOL Gauge::divide() const {
    return (BOOL) mGetAttr(MUIA_Gauge_Divide);
}

void Gauge::setDivide(BOOL value) {
    setAttr(MUIA_Gauge_Divide, (IPTR) value);
}

STRPTR Gauge::infoText() const {
    return (STRPTR) mGetAttr(MUIA_Gauge_InfoText);
}

void Gauge::setInfoText(STRPTR value) {
    setAttr(MUIA_Gauge_InfoText, (IPTR) value);
}

LONG Gauge::max() const {
    return (LONG) mGetAttr(MUIA_Gauge_Max);
}

void Gauge::setMax(LONG value) {
    setAttr(MUIA_Gauge_Max, (IPTR) value);
}

Gauge::Gauge() {}
