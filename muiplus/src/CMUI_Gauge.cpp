#include "include/CMUI_Gauge.h"

CMUI_Gauge::CMUI_Gauge(LONG current, ULONG divide, BOOL horiz, std::string infoText, LONG max)
: CMUI_Area() {
    object = MUI_NewObject(MUIC_Gauge, MUIA_Gauge_Current, current, MUIA_Gauge_Divide, divide, MUIA_Gauge_Horiz, horiz,
            MUIA_Gauge_InfoText, infoText.c_str(), MUIA_Gauge_Max, max);
}

CMUI_Gauge::CMUI_Gauge(Object* obj)
: CMUI_Area() {
    object = obj;
}

CMUI_Gauge& CMUI_Gauge::operator=(Object* obj) {
    object = obj;
    return *this;
}

LONG CMUI_Gauge::current() const {
    return (LONG) mGetAttr(MUIA_Gauge_Current);
}

void CMUI_Gauge::setCurrent(LONG value) {
    setAttr(MUIA_Gauge_Current, (IPTR) value);
}

BOOL CMUI_Gauge::divide() const {
    return (BOOL) mGetAttr(MUIA_Gauge_Divide);
}

void CMUI_Gauge::setDivide(BOOL value) {
    setAttr(MUIA_Gauge_Divide, (IPTR) value);
}

STRPTR CMUI_Gauge::infoText() const {
    return (STRPTR) mGetAttr(MUIA_Gauge_InfoText);
}

void CMUI_Gauge::setInfoText(STRPTR value) {
    setAttr(MUIA_Gauge_InfoText, (IPTR) value);
}

LONG CMUI_Gauge::max() const {
    return (LONG) mGetAttr(MUIA_Gauge_Max);
}

void CMUI_Gauge::setMax(LONG value) {
    setAttr(MUIA_Gauge_Max, (IPTR) value);
}

CMUI_Gauge::CMUI_Gauge() {}
